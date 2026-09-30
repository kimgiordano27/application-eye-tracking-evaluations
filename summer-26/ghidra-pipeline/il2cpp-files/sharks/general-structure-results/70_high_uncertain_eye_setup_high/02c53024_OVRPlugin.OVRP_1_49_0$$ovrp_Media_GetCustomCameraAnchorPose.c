/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 02c53024
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  long *unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w23;
  undefined8 *unaff_x24;
  undefined4 uStack_14;
  
  if (*(char *)((long)unaff_x19 + 0x2a) != '\0') {
    iVar1 = *(int *)((long)unaff_x19 + 0x2c);
    *(int *)((long)unaff_x19 + 0x2c) = iVar1 + 1;
    if (0xfa < iVar1) {
      FUN_02c530c0(param_1,unaff_w20 & 0xffff);
      FUN_015d6960(*unaff_x24);
      uVar3 = FUN_02b4afd8(unaff_w20,unaff_w23,0);
      FUN_02c530c0(uVar3,uVar3 & 0xffffffff);
      uStack_14 = extraout_w1;
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
      uVar4 = thunk_FUN_018617ec(uVar4,&uStack_14);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_03800808);
      uVar4 = FUN_02a2e6b0(uVar5,uVar4,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar5 = thunk_FUN_01861bbc();
      uVar6 = thunk_FUN_01851c08(PTR_DAT_03800550);
      FUN_02b3cc64(uVar5,uVar4,uVar6,0);
      uVar4 = thunk_FUN_01851c08(PTR_DAT_0380cbc8);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar4);
    }
  }
  bVar2 = (**(code **)(*unaff_x19 + 0x178))();
  *(byte *)((long)unaff_x19 + 0x2a) = bVar2 & 1;
  return bVar2 & 1;
}


