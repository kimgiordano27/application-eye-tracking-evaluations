/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 0208f42c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>
          (long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    FUN_01dde854(param_2);
    param_1 = *(long *)(param_2 + 0x38);
  }
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


