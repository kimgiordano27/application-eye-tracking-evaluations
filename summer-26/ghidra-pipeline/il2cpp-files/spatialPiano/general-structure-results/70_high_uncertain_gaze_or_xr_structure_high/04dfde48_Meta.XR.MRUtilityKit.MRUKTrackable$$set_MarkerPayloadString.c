/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$set_MarkerPayloadString
ENTRY_POINT: 04dfde48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKTrackable__set_MarkerPayloadString(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x20 == 0) {
      uVar1 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar1,0);
    }
  }
  else if (unaff_w21 == 1) {
    *(code **)(unaff_x19 + 0x18) = FUN_02b9630c;
    goto FUN_04dfde78;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
FUN_04dfde78:
  *(code **)(unaff_x19 + 0x38) = FUN_02b962ac;
  return;
}


