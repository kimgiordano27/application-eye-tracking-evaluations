/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 04c09b44
PROGRAM: hellodot-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  
                    /* try { // try from 04c09b44 to 04d09bef has its CatchHandler @ 04c09678 */
  puVar1 = PTR_DAT_065c98d0;
  puVar4 = *(undefined8 **)(unaff_x21 + 0x130);
  if ((*(byte *)(unaff_x20 + 0x589) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5130);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c98d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3f50);
    *(undefined1 *)(unaff_x20 + 0x589) = 1;
  }
  lVar2 = FUN_02ce7ad4(*puVar4,3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  uVar3 = FUN_04f47ebc(0x4028000000000000,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      uVar3 = FUN_04f47dac(0x3ff0000000000000,0);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar3;
        uVar3 = FUN_04f47dac(0x4014000000000000,0);
        puVar1 = PTR_DAT_065e3f50;
                    /* try { // try from 04c09bf0 to 04d09bf3 has its CatchHandler @ 04c09cc8 */
                    /* try { // try from 04c09bf4 to 04d09bf7 has its CatchHandler @ 04c09cb8 */
        if (2 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 04c09bf8 to 04d09c03 has its CatchHandler @ 04c09678 */
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
                    /* try { // try from 04c09c04 to 04d09c07 has its CatchHandler @ 04c09c0c */
                    /* try { // try from 04c09c08 to 04d09c2f has its CatchHandler @ 04c09678 */
                    /* catch() { ... } // from try @ 04c09c04 with catch @ 04c09c0c */
          **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                    /* catch() { ... } // from try @ 04c09874 with catch @ 04c09c10
                       catch() { ... } // from try @ 04c09b3c with catch @ 04c09c10 */
                    /* catch() { ... } // from try @ 04c09a9c with catch @ 04c09c14 */
                    /* catch() { ... } // from try @ 04c09834 with catch @ 04c09c18 */
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


