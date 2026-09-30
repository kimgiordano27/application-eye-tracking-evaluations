/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 02c530a8
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined4 unaff_w20;
  undefined4 unaff_w23;
  undefined4 uStack_14;
  
  uVar1 = FUN_02b4afd8(unaff_w20,unaff_w23,0);
  FUN_02c530c0(uVar1,uVar1 & 0xffffffff);
  uStack_14 = extraout_w1;
  uVar2 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
  uVar2 = thunk_FUN_018617ec(uVar2,&uStack_14);
  uVar3 = thunk_FUN_01851c08(PTR_DAT_03800808);
  uVar2 = FUN_02a2e6b0(uVar3,uVar2,0);
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar3 = thunk_FUN_01861bbc();
  uVar4 = thunk_FUN_01851c08(PTR_DAT_03800550);
  FUN_02b3cc64(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cbc8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar2);
}


