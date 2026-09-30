/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 030f6530
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Fusion_Photon_Realtime_CustomTypesUnity__SerializeQuaternion(void)

{
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  if (unaff_w22 != 0) {
    FUN_056265f0(0);
  }
  FUN_045d9e68(0,0,*unaff_x25);
  if (*(long *)(*unaff_x24 + 0x38) == 0) {
    FUN_02e756e8();
  }
  if (unaff_x21 == 0) {
    if (unaff_w20 != 0) {
      FUN_056265f0(0);
    }
  }
  else if (*(uint *)(unaff_x21 + 0x18) < unaff_w20) {
    FUN_056265f0(0);
  }
  FUN_030f66b8();
  return 0x10;
}


