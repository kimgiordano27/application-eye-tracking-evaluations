/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 0691027c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 0691028c to 06a1029b has its CatchHandler @ 0691029c */
  FUN_07c45688();
                    /* catch() { ... } // from try @ 0691020c with catch @ 0691029c
                       catch() { ... } // from try @ 0691028c with catch @ 0691029c */
  thunk_FUN_03af1434(PTR_DAT_08492628);
                    /* try { // try from 069102a0 to 06a102a3 has its CatchHandler @ 069102ac */
  uVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 069102a4 to 06a102af has its CatchHandler @ 0690ffe4 */
                    /* catch() { ... } // from try @ 069102a0 with catch @ 069102ac */
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084b4dc8);
  FUN_068fda5c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084b4da8);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


