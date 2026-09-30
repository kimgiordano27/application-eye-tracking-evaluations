/*
FUNCTION_NAME: WebSocketSharp.PayloadData$$ToArray
ENTRY_POINT: 0879d4c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void WebSocketSharp_PayloadData__ToArray(long param_1)

{
  long unaff_x19;
  undefined4 unaff_s8;
  
  *(undefined4 *)(param_1 + 0x78) = unaff_s8;
  if (unaff_x19 != 0) {
    FUN_087c23f4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


