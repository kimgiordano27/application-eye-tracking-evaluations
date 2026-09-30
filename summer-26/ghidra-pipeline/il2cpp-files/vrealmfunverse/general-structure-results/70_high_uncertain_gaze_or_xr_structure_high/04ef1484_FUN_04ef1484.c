/*
FUNCTION_NAME: FUN_04ef1484
ENTRY_POINT: 04ef1484
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


long FUN_04ef1484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((DAT_066c96a3 & 1) == 0) {
                    /* try { // try from 04ef14ac to 04ff14bb has its CatchHandler @ 04ef14cc */
    FUN_02b3c81c(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
                    /* try { // try from 04ef14bc to 04ff14cf has its CatchHandler @ 04ef11dc */
    DAT_066c96a3 = 1;
  }
  lVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 04ef1448 with catch @ 04ef14cc
                       catch() { ... } // from try @ 04ef14ac with catch @ 04ef14cc */
                    /* try { // try from 04ef14d0 to 04ff14d3 has its CatchHandler @ 04ef14dc */
  FUN_04dbdb8c(lVar2,0);
                    /* try { // try from 04ef14d4 to 04ff14df has its CatchHandler @ 04ef11dc */
                    /* catch() { ... } // from try @ 04ef14d0 with catch @ 04ef14dc */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28),param_2);
  return lVar2;
}


