/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 033901bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 unaff_w24;
  uint unaff_w26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  *(undefined8 *)(param_1 + -0x18) = uVar3;
  *(undefined8 *)(param_1 + -0x20) = uVar2;
  *(undefined8 *)(param_1 + -8) = uVar3;
  *(undefined8 *)(param_1 + -0x10) = uVar2;
  *(undefined8 *)(param_1 + -0x38) = uVar3;
  *(undefined8 *)(param_1 + -0x40) = uVar2;
  *(undefined8 *)(param_1 + -0x28) = uVar3;
  *(undefined8 *)(param_1 + -0x30) = uVar2;
  FUN_0329cecc(unaff_x29 + -0xd0,param_4,0x20,0);
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


