/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 04c09d10
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5140);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c84d8);
    *(undefined1 *)(unaff_x20 + 0x58b) = 1;
  }
  puVar1 = PTR_DAT_065c84d8;
  if (*unaff_x19 == 0) {
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
    auVar3 = FUN_04fa5130(*(long *)(unaff_x19 + 8),0,0);
    uVar2 = FUN_04e5bb90();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar3;
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


