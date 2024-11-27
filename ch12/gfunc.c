void teststatic() {
    // 정적 전역변수는 선언 및 사용 불가능
    // extern svar;
    // svar = 5;
}

void testglobal() {
    // 전역변수는 선언 및 사용 가능
    extern gvar;
    gvar = 10;
}