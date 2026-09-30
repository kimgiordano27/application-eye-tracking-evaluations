/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c__DisplayClass14_0$$<SendUserProgressEvent>b__2
ENTRY_POINT: 03f9d9c4
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_ColorACube_Analytics_AnalyticsTimer_<>c__DisplayClass14_0__<SendUserProgressEvent>b__2
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  ulong *unaff_x19;
  wchar_t *pwVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float unaff_s8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
  bStack0000000000000000;
  undefined7 uStack0000000000000001;
  ulong uStack0000000000000008;
  wchar_t *in_stack_00000010;
  
  uStack0000000000000008 = param_2._8_8_;
  _bStack0000000000000000 = param_2._0_8_;
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  *(undefined4 *)(param_3 + 10) = 0;
  param_3[1] = uVar7;
  *param_3 = uVar6;
  param_3[3] = uVar7;
  param_3[2] = uVar6;
  param_3[5] = uVar7;
  param_3[4] = uVar6;
  param_3[7] = uVar7;
  param_3[6] = uVar6;
  param_3[9] = uVar7;
  param_3[8] = uVar6;
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            (&stack0x00000000,3,L'\0');
  pwVar4 = (wchar_t *)((ulong)&stack0x00000000 | 4);
  uVar5 = (ulong)((byte)bStack0000000000000000 >> 1);
  if ((_bStack0000000000000000 & 1) != 0) {
    uVar5 = uStack0000000000000008;
  }
  do {
    pwVar3 = pwVar4;
    if (((byte)bStack0000000000000000 & 1) != 0) {
      pwVar3 = in_stack_00000010;
    }
    uVar1 = swprintf(pwVar3,uVar5 + 1,L"%f",(double)unaff_s8);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)bStack0000000000000000 >> 1);
        if ((_bStack0000000000000000 & 1) != 0) {
          uVar5 = uStack0000000000000008;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pwVar3 = in_stack_00000010;
          uVar5 = uVar2;
          if ((_bStack0000000000000000 & 1) == 0) {
            _bStack0000000000000000 = CONCAT71(uStack0000000000000001,(char)(uVar1 << 1));
            pwVar3 = pwVar4;
            uVar5 = uStack0000000000000008;
          }
          uStack0000000000000008 = uVar5;
          pwVar3[uVar2] = L'\0';
        }
        else {
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append(&stack0x00000000,uVar2 - uVar5,L'\0');
        }
        pwVar4 = in_stack_00000010;
        uVar5 = uStack0000000000000008;
        uStack0000000000000008 = 0;
        in_stack_00000010 = (wchar_t *)0x0;
        unaff_x19[1] = uVar5;
        *unaff_x19 = _bStack0000000000000000;
        unaff_x19[2] = (ulong)pwVar4;
        _bStack0000000000000000 = 0;
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        ~basic_string(&stack0x00000000);
        return;
      }
    }
    uVar5 = (ulong)((byte)bStack0000000000000000 >> 1);
    if ((_bStack0000000000000000 & 1) != 0) {
      uVar5 = uStack0000000000000008;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pwVar3 = in_stack_00000010;
      uVar5 = uVar2;
      if ((_bStack0000000000000000 & 1) == 0) {
        _bStack0000000000000000 = CONCAT71(uStack0000000000000001,(char)((int)uVar2 << 1));
        pwVar3 = pwVar4;
        uVar5 = uStack0000000000000008;
      }
      uStack0000000000000008 = uVar5;
      pwVar3[uVar2] = L'\0';
    }
    else {
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append(&stack0x00000000,uVar2 - uVar5,L'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


