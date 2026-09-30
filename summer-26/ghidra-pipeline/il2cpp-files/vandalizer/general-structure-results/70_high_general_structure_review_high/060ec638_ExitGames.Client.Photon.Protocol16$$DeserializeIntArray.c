/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 060ec638
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x060ec6a4) */

void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long in_stack_00000008;
  
  uVar3 = FUN_05d26bf4();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_075d7940 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_0610b404(uVar2,(ulong)uVar1 | unaff_x22 << 0x20,uVar3,0);
  if (in_stack_00000008 != 0) {
    FUN_05d26cdc(&stack0x00000008,0);
  }
  return;
}


