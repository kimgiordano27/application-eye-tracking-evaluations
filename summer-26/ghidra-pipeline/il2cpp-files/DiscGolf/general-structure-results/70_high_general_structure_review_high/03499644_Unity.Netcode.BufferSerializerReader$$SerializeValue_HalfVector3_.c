/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerReader$$SerializeValue<HalfVector3>
ENTRY_POINT: 03499644
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerReader__SerializeValue<HalfVector3>(void)

{
  uint in_w8;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x23;
  
  if (unaff_w19 < in_w8) {
    *(undefined8 *)(unaff_x23 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x20;
    LeanTween__value();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


