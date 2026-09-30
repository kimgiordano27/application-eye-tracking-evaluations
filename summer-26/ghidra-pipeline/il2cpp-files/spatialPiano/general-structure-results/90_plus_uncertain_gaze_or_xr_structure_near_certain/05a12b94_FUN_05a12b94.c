/*
FUNCTION_NAME: FUN_05a12b94
ENTRY_POINT: 05a12b94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_05a12b94(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  long local_40;
  long local_38;
  undefined8 local_28;
  undefined *puVar4;
  
                    /* try { // try from 05a12ba0 to 05b12ba3 has its CatchHandler @ 05a12c4c */
  if ((DAT_06bc2023 & 1) == 0) {
                    /* try { // try from 05a12bc0 to 05b12bd3 has its CatchHandler @ 05a12c48 */
    FUN_02f08768(PTR_DAT_067c9aa0);
    FUN_02f08768(PTR_DAT_067c9c00);
                    /* try { // try from 05a12bd4 to 05b12c33 has its CatchHandler @ 05a12864 */
    DAT_06bc2023 = 1;
  }
  local_28 = 0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_3;
  if (param_2 == 0) {
                    /* catch() { ... } // from try @ 05a12c6c with catch @ 05a12c78 */
                    /* try { // try from 05a12c7c to 05b12c83 has its CatchHandler @ 05a12d6c */
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
                    /* try { // try from 05a12c84 to 05b12ca3 has its CatchHandler @ 05a12864 */
    uVar1 = thunk_FUN_02f45270();
    puVar4 = Method_OVRResult<OVRColocationSession_Result>_From__;
                    /* catch() { ... } // from try @ 05a12af4 with catch @ 05a12c88 */
                    /* catch() { ... } // from try @ 05a12c34 with catch @ 05a12c8c */
  }
  else {
    if (param_3 != 0) {
      if (param_1 != 0) {
        return param_1;
      }
      if (*(int *)(*(long *)PTR_DAT_067c9aa0 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 05a12c34 to 05b12c37 has its CatchHandler @ 05a12c8c */
      FUN_05a12ce0(&local_28,&local_48,&local_40);
      uVar1 = local_28;
                    /* try { // try from 05a12c38 to 05b12c43 has its CatchHandler @ 05a12864 */
                    /* try { // try from 05a12c44 to 05b12c47 has its CatchHandler @ 05a12c4c */
                    /* catch() { ... } // from try @ 05a12bc0 with catch @ 05a12c48
                       try { // try from 05a12c48 to 05b12c6b has its CatchHandler @ 05a12864 */
                    /* catch() { ... } // from try @ 05a12ba0 with catch @ 05a12c4c
                       catch() { ... } // from try @ 05a12c44 with catch @ 05a12c4c */
      if (*(int *)(*(long *)PTR_DAT_067c9c00 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05a12b38 with catch @ 05a12c50 */
        thunk_FUN_02f6670c();
      }
      uVar1 = FUN_05005640(uVar1,0);
                    /* try { // try from 05a12c6c to 05b12c6f has its CatchHandler @ 05a12c78 */
      lVar2 = FUN_0511fb5c(uVar1,0);
      return lVar2;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
                    /* try { // try from 05a12ca4 to 05b12cbb has its CatchHandler @ 05a12d5c */
    uVar1 = thunk_FUN_02f45270();
    puVar4 = Method_OVRResult<OVRColocationSession_Result>_get_Status__;
  }
  uVar3 = thunk_FUN_02f6ef30(puVar4);
                    /* try { // try from 05a12cbc to 05b12d0f has its CatchHandler @ 05a12864 */
  FUN_0504ee1c(uVar1,uVar3,0);
  uVar3 = thunk_FUN_02f6ef30(Method_OVRResult<OVRPlugin_Result>_From__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar1,uVar3);
}


