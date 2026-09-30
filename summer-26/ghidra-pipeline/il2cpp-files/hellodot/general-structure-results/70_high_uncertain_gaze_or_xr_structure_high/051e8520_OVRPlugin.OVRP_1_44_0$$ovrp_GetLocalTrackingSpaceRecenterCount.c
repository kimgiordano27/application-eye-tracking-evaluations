/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 051e8520
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xc48));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609438);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609440);
  *(undefined1 *)(unaff_x20 + 0x653) = 1;
  puVar1 = PTR_DAT_065dca98;
  if (unaff_x19 != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb30e4(*(undefined8 *)PTR_DAT_06609440,0);
      return;
    }
    lVar2 = *(long *)PTR_DAT_065dca98;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_047154b8(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


