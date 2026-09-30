/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 02800304
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  undefined4 *puVar1;
  long *unaff_x19;
  
  thunk_FUN_01a58e78();
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40)) {
    puVar1 = (undefined4 *)thunk_FUN_01a89fbc();
    FUN_027ff0a4(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0();
}


