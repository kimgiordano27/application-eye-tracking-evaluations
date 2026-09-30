/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 0570cbf4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


uint OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  long in_x9;
  undefined8 *puVar2;
  float *unaff_x19;
  uint unaff_w20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    *unaff_x19 = -*unaff_x19;
    unaff_x19 = unaff_x19 + 3;
    in_ZR = in_x9 == 0;
  }
  auVar4 = FUN_03365888();
  if (0 < auVar4._8_4_) {
    uVar1 = auVar4._8_8_ & 0xffffffff;
    puVar2 = (undefined8 *)(auVar4._0_8_ + 4);
    do {
      uVar1 = uVar1 - 1;
      uVar3 = NEON_rev64(*puVar2,4);
      *puVar2 = uVar3;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    } while (uVar1 != 0);
  }
  return unaff_w20 & 1;
}


