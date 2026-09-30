/*
FUNCTION_NAME: GameAnalyticsSDK.Utilities.GA_MiniJSON.Serializer$$SerializeArray
ENTRY_POINT: 020485b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


void GameAnalyticsSDK_Utilities_GA_MiniJSON_Serializer__SerializeArray(float param_1,float param_2)

{
  long lVar1;
  
  if (param_1 <= param_2) {
    return;
  }
  lVar1 = FUN_03d468e8();
  if (lVar1 != 0) {
    FUN_03d499ec(lVar1,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


