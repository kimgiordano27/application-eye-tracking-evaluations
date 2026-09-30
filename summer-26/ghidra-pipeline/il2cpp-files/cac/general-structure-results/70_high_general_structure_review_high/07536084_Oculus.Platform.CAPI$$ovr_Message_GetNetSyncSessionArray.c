/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 07536084
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(void)

{
  uint uVar1;
  
                    /* try { // try from 07536084 to 07636087 has its CatchHandler @ 07536090 */
  uVar1 = FUN_03f4afb8();
                    /* try { // try from 07536088 to 07636093 has its CatchHandler @ 07535ed4 */
  if ((uVar1 >> 0x16 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07536084 with catch @ 07536090
                        */
    FUN_07532e30();
  }
  return 1;
}


