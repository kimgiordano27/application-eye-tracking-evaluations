/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 0572fe30
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  FUN_056f1adc();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar1 = (**(code **)(*unaff_x20 + 0x228))();
  if (iVar1 != 4) {
    return;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d06338);
  FUN_02a55ad4();
  uVar2 = FUN_055b5920(0);
  FUN_02a551a0();
  uVar3 = thunk_FUN_02ebbee0();
  uVar4 = thunk_FUN_02ebbee0();
  uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d588f0);
  uVar2 = FUN_056f1750(uVar5,uVar2,uVar3,uVar4,0);
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar3 = thunk_FUN_02ef1808();
  FUN_0555e840(uVar3,uVar2,0);
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d588f8);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar3,uVar2);
}


