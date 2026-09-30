/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 04c09d34
PROGRAM: hellodot-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(void)

{
  undefined *puVar1;
  ulong uVar2;
  int *unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_065c84d8;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* try { // try from 04c09d44 to 04d09d6b has its CatchHandler @ 04c09d80 */
  if (*unaff_x19 == 0) {
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _uStack0000000000000000 = FUN_04fa5130(*(long *)(unaff_x19 + 8),0,0);
                    /* try { // try from 04c09d6c to 04d09d77 has its CatchHandler @ 04c09678 */
    uVar2 = FUN_04e5bb90();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
                    /* try { // try from 04c09d78 to 04d09d7f has its CatchHandler @ 04c09d80 */
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _uStack0000000000000000;
                    /* catch() { ... } // from try @ 04c09c80 with catch @ 04c09d80
                       catch() { ... } // from try @ 04c09d44 with catch @ 04c09d80
                       catch() { ... } // from try @ 04c09d78 with catch @ 04c09d80 */
                    /* try { // try from 04c09d84 to 04d09e77 has its CatchHandler @ 04c09d84
                       catch() { ... } // from try @ 04c09d84 with catch @ 04c09d84
                       catch() { ... } // from try @ 04c09ed8 with catch @ 04c09d84
                       catch() { ... } // from try @ 04c0a0f4 with catch @ 04c09d84
                       catch() { ... } // from try @ 04c0a11c with catch @ 04c09d84
                       catch() { ... } // from try @ 04c0a1cc with catch @ 04c09d84
                       catch() { ... } // from try @ 04c0a250 with catch @ 04c09d84
                       catch() { ... } // from try @ 04c0a2b0 with catch @ 04c09d84 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_033634b0(unaff_x19 + 2);
      return;
    }
  }
  FUN_04e5bbac();
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


