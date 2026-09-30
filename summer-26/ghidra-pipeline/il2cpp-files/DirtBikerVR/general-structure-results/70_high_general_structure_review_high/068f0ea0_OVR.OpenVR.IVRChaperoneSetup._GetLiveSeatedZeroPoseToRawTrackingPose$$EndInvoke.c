/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 068f0ea0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(PTR_DAT_084b3a88);
  FUN_03a8a718(PTR_DAT_084b3a90);
  *(undefined1 *)(unaff_x20 + 0xaa3) = 1;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uVar3 = FUN_06788920();
  puVar2 = PTR_DAT_084b3a80;
  puVar1 = PTR_DAT_084b3a78;
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    FUN_04f52be0(&stack0x00000010,*(long *)(unaff_x19 + 0x98),*(undefined8 *)PTR_DAT_084b3a90);
    while (uVar4 = FUN_06205e80(&stack0x00000010,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      uVar3 = FUN_06902d10(uVar3,in_stack_00000020,in_stack_00000028,0);
    }
    FUN_06205e7c(&stack0x00000010,*(undefined8 *)puVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


