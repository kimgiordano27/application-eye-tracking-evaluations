/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$GetMetadataJson
ENTRY_POINT: 060a20d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__GetMetadataJson(void)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  
  *(undefined1 *)(unaff_x19 + 0x88) = 0;
  cVar1 = *(char *)(unaff_x20 + 0x6b5);
  *(undefined1 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe4) = 0;
  *(undefined8 *)(unaff_x19 + 0xdc) = 0;
  if (cVar1 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    *(undefined1 *)(unaff_x20 + 0x6b5) = 1;
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0xcc) = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0xd4) = uVar2;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0609e7a0(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


