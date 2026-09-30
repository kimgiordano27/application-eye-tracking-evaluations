/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose
ENTRY_POINT: 05d32098
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


void UnityEngine_XR_ARSubsystems_XRFace__get_leftEyePose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long unaff_x22;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  puVar1 = PTR_DAT_06767820;
  lStack0000000000000018 = *(long *)(unaff_x22 + 0x28);
  if ((DAT_06b82a55 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767820);
    DAT_06b82a55 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  auVar2 = FUN_05065b10(param_4,0);
  _in_stack_00000008 = FUN_0506600c(param_2,param_3,auVar2._0_8_,auVar2._8_8_,0);
  thunk_FUN_02d9d164(*(undefined8 *)puVar1,&stack0x00000008);
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


