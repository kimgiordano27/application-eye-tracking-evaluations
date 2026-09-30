/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeArray
ENTRY_POINT: 050c7024
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 ExitGames_Client_Photon_Protocol16__SerializeArray(long param_1)

{
  int in_w8;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02dabd98();
    param_1 = *unaff_x20;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10);
}


