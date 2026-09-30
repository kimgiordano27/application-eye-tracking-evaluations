/*
FUNCTION_NAME: RCGInputModule$$GetGazeButtonState
ENTRY_POINT: 00dbc5b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void RCGInputModule__GetGazeButtonState(void)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
  if (unaff_x19 < (ulong)unaff_x20[3]) {
    if (unaff_x19 % 0x30 != 0) {
      lVar2 = unaff_x20[1] + -0x10;
      FUN_00dbc708(lVar2,lVar2,unaff_x19 % 0x30,lVar2,0x30);
    }
    lVar2 = *unaff_x20;
    unaff_x20[4] = 0;
    if (lVar2 != unaff_x20[1]) {
      lVar3 = 0;
      do {
        puVar1 = (ushort *)(lVar2 + 8);
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + (ulong)*puVar1;
      } while (unaff_x20[1] != lVar2);
      unaff_x20[4] = lVar3;
    }
  }
  unaff_x20[3] = unaff_x19;
  return;
}


