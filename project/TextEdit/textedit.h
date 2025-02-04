#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QMainWindow>
#include <QtPrintSupport/QPrinter>
#include <QComboBox>
#include <QFileInfo>
#include <QProcess>

#define N_MAX_SIZE 100

class MdiChild;
class QLabel;
class QComboBox;
class QActionGroup;
class QSignalMapper;
class Find_Replace;

namespace Ui {
    class TextEdit;
}

struct NodeInfo{
    QString nText;
    QString nPicPath;
    QString nTime;
};

class TextEdit : public QMainWindow {
    Q_OBJECT
public:
    TextEdit(QWidget *parent = 0);
    ~TextEdit();

protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *);
  //  bool eventFilter(QObject *, QEvent *);//事件过滤器
    void dragEnterEvent(QDragEnterEvent *e);
    void dropEvent(QDropEvent *e);
    void contextMenuEvent(QContextMenuEvent *event);

private:
    Ui::TextEdit *ui;
    Find_Replace *findReplace;
    MdiChild *activeMdiChild();
    void init_statusBar(); //初始化状态栏

    void videoViewInit();//自定义播放器
    QProcess *pVideoProcess;//播放视频的进程
    int videoIsPlaying;//0end/noPlaying 1playing 2pause
    bool voiceMute;//静音
    int tmpVoiceVolume;//音量调节
    QString video_full, video_name, video_path,player_full, player_name, player_path;
    QString videoCurrentTime;//保存笔记时的视频时刻
    QFileInfo videoInfo,playerInfo;
    QTimer *playerTimer;//视频播放定时器 获取进度信息等
    int currentTimeNum;//视频总时长 秒
    int playedSecond;//视频已播时长
    QString cutScreenPath;
    QString pdfTmpName;
    NodeInfo pdfInfo[N_MAX_SIZE];
    bool clickAfterVideoStart;//控制视频播放后的截屏按钮开关
    int iN;//按钮点击数-生成笔记条数

    QLabel* first_statusLabel; //声明3个标签对象，用于显示状态信息
    QLabel* second_statusLabel;
    QLabel* third_statusLabel;  //用于显示时间

    QToolBar *toolBar;
    QAction *left; //对齐方式
    QAction *center;
    QAction *right;
    QAction *justify;
    QActionGroup *actGrp;

    QLabel *listAlign;//排序标签
    QComboBox *listBox;//排序下拉框

    QAction *tabbedView;//视图模式
    QAction *windowView;
    QActionGroup *actViewMode;

    QSignalMapper *windowMapper;//信号翻译转发器

    void iniConnect();

    enum{MaxRecentFiles = 9};
    QAction *recentFileActs[MaxRecentFiles];
    void updateRecentFiles();//更新最近打开文件列表

    void readSettings();//读取保存窗口大小和位置的设置
    void writeSettings();//记录窗口的大小和位置

    bool senceF;//是否区分大小写，1区分 0不区分
    bool upFindF;//向前还是向后查找，1向前 0向后
    void doFind(QString findText);//查找的实现函数
    bool doReplaceAllFind(QString findText);//全部替换的查找实现函数

signals:
    void readyReadStandardOutput();

private slots:
    void playerTime();
    void back_message_slots();

    void on_action_zoomOut_triggered();
    void on_action_zoomIn_triggered();
    void on_action_Replace_triggered();
    void on_action_Find_triggered();
    void on_action_AboutQt_triggered();
    void on_action_About_triggered();
    void on_action_AllClose_triggered();
    void on_action_Close_triggered();
    void on_action_PreviousW_triggered();
    void on_action_NextW_triggered();
    void on_action_Cascade_triggered();
    void on_action_Tile_triggered();
    void on_action_FontColor_triggered();
    void on_action_Font_triggered();
    void on_action_HighLightShow_triggered(bool checked);
    void on_action_StatusBarShow_triggered(bool checked);
    void on_action_ToobarShow_triggered(bool checked);
    void on_action_Switch_triggered(bool checked);
    void on_action_Clear_triggered();
    void on_action_AllSelect_triggered();
    void on_action_Del_triggered();
    void on_action_Paste_triggered();
    void on_action_Copy_triggered();
    void on_action_Cut_triggered();
    void on_action_Redo_triggered();
    void on_action_Undo_triggered();
    void on_action_PDF_triggered();
    void on_action_PrintPreview_triggered();
    void on_action_Print_triggered();
    void on_action_Quit_triggered();
    void on_action_Asave_triggered();
    void on_action_Save_triggered();
    void on_action_Open_triggered();
    void on_action_New_triggered();

    void on_actionOpen_triggered();
    void on_actionPlayer_triggered();
    void on_actionPlay_triggered();
    void on_actionPause_triggered();
    void on_actionStop_triggered();
    void on_actionQuickFast_triggered();
    void on_actionQuickBack_triggered();
    void on_actionMute_triggered();
    void on_action_2_triggered();
    void on_action_triggered();
    void on_actionFullScreen_triggered();
    void on_actionWordOutput_triggered();


    void updateMenus();
    QString generatePicWord();
    void timerUpDate();  //定时器
    void do_cursorChanged(); //获取光标位置信息
    void printPreview(QPrinter *printer);
    void highlightCurrentLine();//高亮显示当前编辑的行
    void documentWasModified();//文档正在被修改
    void slotAlignment(QAction*); //更改对齐方式
    void slotList(int);     //排序
    void slotViewMode(QAction*); //视图模式
    void setActiveSubWindow(QWidget *window);//激活窗口
    void updateMenu_SelectW();//更新“选择窗口”菜单
    void openRecentFile();//打开最近文件列表指定文件
    void findNextF();//“查找”的“查找下一个”
    void findNextR();//“替换”的“查找下一个”
    void replace();//替换
    void replaceAll();//全部替换


    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // TEXTEDIT_H
