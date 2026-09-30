/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 03aaaa7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>(long param_1)

{
  long unaff_x21;
  
  if (param_1 == 0) {
    FUN_03293514();
    param_1 = *(long *)(unaff_x21 + 0x38);
  }
  FUN_03b80980(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(*(long *)PTR_DAT_0727fef8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)PTR_DAT_0727fef8);
  }
                    /* try { // try from 03aaaad4 to 03baaadb has its CatchHandler @ 03aaacd0 */
  FUN_03aa9988();
  return;
}


