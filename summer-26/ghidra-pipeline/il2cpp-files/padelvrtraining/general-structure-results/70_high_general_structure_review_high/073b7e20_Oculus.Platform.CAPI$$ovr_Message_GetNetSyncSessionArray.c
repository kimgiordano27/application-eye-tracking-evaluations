/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 073b7e20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(undefined8 param_1)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_06daab38(&stack0x00000020,*unaff_x22);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d540();
}


