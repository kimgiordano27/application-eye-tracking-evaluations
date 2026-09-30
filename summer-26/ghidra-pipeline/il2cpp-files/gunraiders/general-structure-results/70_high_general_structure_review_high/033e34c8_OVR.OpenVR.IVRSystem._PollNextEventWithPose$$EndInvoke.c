/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 033e34c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  ulong uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  undefined8 uVar6;
  
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = thunk_FUN_01c49c44(param_2);
    puVar4 = (undefined8 *)(unaff_x20 + unaff_x25);
    *puVar4 = uVar2;
    *(undefined4 *)(puVar4 + 1) = unaff_w27;
    uVar2 = thunk_FUN_01c49c44(uVar5);
    unaff_x25 = unaff_x25 + 0x28;
    puVar4[2] = uVar2;
    *(undefined4 *)(puVar4 + 3) = uVar1;
    puVar4[4] = uVar6;
    if (unaff_x26 == unaff_x25) break;
    param_1 = unaff_x19 + unaff_x25;
    param_2 = *(undefined8 *)(param_1 + 0x20);
    unaff_w27 = *(undefined4 *)(param_1 + 0x28);
  }
  uVar2 = (**(code **)(unaff_x24 + 0xa70))();
  if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    puVar4 = (undefined8 *)(unaff_x20 + 0x10);
    do {
      thunk_FUN_01c49c38(puVar4[-2]);
      puVar4[-2] = 0;
      thunk_FUN_01c49c38(*puVar4);
      *puVar4 = 0;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 5;
    } while (uVar3 != 0);
  }
  thunk_FUN_01c49c38();
  return uVar2;
}


