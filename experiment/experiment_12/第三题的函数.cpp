// 加法按键
void CtestDlg::OnBnClickedButton1() {
    UpdateData(true);
    res = fri + sec;
    UpdateData(false);
}

// 减法按键
void CtestDlg::OnBnClickedButton2() {
    UpdateData(true);
    res = fri - sec;
    UpdateData(false);
}

// 乘法按键
void CtestDlg::OnBnClickedButton3() {
    UpdateData(true);
    res = fri * sec;
    UpdateData(false);
}

// 除法按键
void CtestDlg::OnBnClickedButton4() {
    UpdateData(true);
    if (sec == 0)
        res = -1;
    else
        res = fri / sec;
    UpdateData(false);
}

// 退出按键
void CtestDlg::OnBnClickedButton5() {
    CDialog::OnCancel();
}
