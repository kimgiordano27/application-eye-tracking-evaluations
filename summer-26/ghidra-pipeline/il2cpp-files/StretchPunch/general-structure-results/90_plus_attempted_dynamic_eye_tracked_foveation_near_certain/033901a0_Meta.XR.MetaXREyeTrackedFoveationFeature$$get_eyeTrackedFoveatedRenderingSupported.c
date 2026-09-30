/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 033901a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (undefined2 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar1;
  int in_w9;
  undefined2 in_w10;
  undefined4 unaff_w24;
  uint unaff_w26;
  undefined2 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  while( true ) {
    *unaff_x27 = in_w10;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_w10 = *param_1;
    in_w9 = in_w9 + -1;
    in_NG = in_w9 < 0;
    in_ZR = in_w9 == 0;
    in_OV = '\0';
    param_1 = param_1 + 1;
    unaff_x27 = unaff_x27 + 1;
  }
  unaff_x27[1] = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_0329cecc(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if ((unaff_w26 & 0xffff) == 0) {
    if (*(int *)(*(long *)StringLiteral_4737 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03396838(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_4737 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033962d8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w24,
                 *(undefined8 *)(unaff_x29 + -0xd8),0);
  }
  uVar1 = FUN_0329cfd4(unaff_x29 + -0xd0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


