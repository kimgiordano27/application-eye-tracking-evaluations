/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose
ENTRY_POINT: 05d320ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_rightEyePose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *plVar1;
  long unaff_x24;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  plVar1 = *(long **)(unaff_x23 + 0x820);
  if ((*(byte *)(unaff_x24 + 0xa55) & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767820);
    *(undefined1 *)(unaff_x24 + 0xa55) = 1;
  }
  if (*(int *)(*plVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  auVar2 = FUN_05065b10(unaff_w21,0);
  _in_stack_00000008 = FUN_0506600c(param_2,param_3,auVar2._0_8_,auVar2._8_8_,0);
  thunk_FUN_02d9d164(*plVar1,&stack0x00000008);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


