/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2>$$Deserialize
ENTRY_POINT: 058fba54
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector2>__Deserialize
               (long param_1,int param_2,int param_3,long param_4)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058fba48 with catch @ 058fba58
                        */
  if (param_2 < 0) {
    FUN_074d7c98(0);
  }
  if (param_3 < 0) {
    FUN_074d78dc(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_074d7430(0x17,0);
  }
  if (1 < param_3) {
    FUN_047bc95c(*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


