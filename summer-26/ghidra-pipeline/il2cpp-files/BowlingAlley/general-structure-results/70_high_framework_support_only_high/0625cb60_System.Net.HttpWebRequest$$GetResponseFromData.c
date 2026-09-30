/*
FUNCTION_NAME: System.Net.HttpWebRequest$$GetResponseFromData
ENTRY_POINT: 0625cb60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Net_HttpWebRequest__GetResponseFromData(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  uVar2 = thunk_FUN_032e1da0(OVRPlugin_BodyJointLocation___TypeInfo);
                    /* catch() { ... } // from try @ 0625c8c0 with catch @ 0625cb84
                       try { // try from 0625cb84 to 0635cbb3 has its CatchHandler @ 0625bce4 */
                    /* catch() { ... } // from try @ 0625c8ac with catch @ 0625cb88 */
                    /* catch() { ... } // from try @ 0625c148 with catch @ 0625cb8c */
  uVar3 = thunk_FUN_032e1da0(OVRPlugin_Bone___TypeInfo);
                    /* catch() { ... } // from try @ 0625bf04 with catch @ 0625cb90 */
                    /* catch() { ... } // from try @ 0625c0ec with catch @ 0625cb94 */
                    /* catch() { ... } // from try @ 0625bea8 with catch @ 0625cb98 */
                    /* catch() { ... } // from try @ 0625c894 with catch @ 0625cb9c */
  uVar1 = FUN_057aaeec(uVar2,uVar1,uVar3,0);
  thunk_FUN_032e1da0(PTR_DAT_07279980);
                    /* try { // try from 0625cbb4 to 0635cbb7 has its CatchHandler @ 0625cbcc */
  uVar2 = thunk_FUN_032a56a0();
  FUN_0591ef6c(uVar2,uVar1,0);
                    /* catch() { ... } // from try @ 0625cbb4 with catch @ 0625cbcc */
  uVar1 = thunk_FUN_032e1da0(OVRPlugin_AppPerfFrameStats___TypeInfo);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0625cbdc to 0635cc57 has its CatchHandler @ 0625cd18 */
  FUN_032d5dbc(uVar2,uVar1);
}


