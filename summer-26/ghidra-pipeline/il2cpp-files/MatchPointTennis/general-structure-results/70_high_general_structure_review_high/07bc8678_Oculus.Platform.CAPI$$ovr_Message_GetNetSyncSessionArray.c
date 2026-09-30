/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 07bc8678
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(undefined4 param_1)

{
  bool in_ZR;
  long unaff_x19;
  float fVar1;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_x19 + 0x50) = param_1;
    *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x19 + 0x4c);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07bc86c4;
    FUN_07c1e668(*(long *)(unaff_x19 + 0x40),0);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar1 = (float)FUN_07c1e698(*(long *)(unaff_x19 + 0x40),0);
    *(float *)(unaff_x19 + 0x4c) =
         fVar1 * (*(float *)(unaff_x19 + 0x50) - *(float *)(unaff_x19 + 0x48));
    return;
  }
LAB_07bc86c4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


