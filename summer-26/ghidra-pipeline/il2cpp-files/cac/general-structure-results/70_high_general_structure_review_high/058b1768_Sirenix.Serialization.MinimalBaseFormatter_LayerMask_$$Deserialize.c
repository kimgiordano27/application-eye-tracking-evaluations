/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Deserialize
ENTRY_POINT: 058b1768
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Deserialize(long param_1,int param_2)

{
  int unaff_w21;
  
  if (param_2 < 0) {
    FUN_074d7c98(0);
  }
  if (unaff_w21 < 0) {
    FUN_074d78dc(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w21) {
    FUN_074d7430(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_047e596c(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w21);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


