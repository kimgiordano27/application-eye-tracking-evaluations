/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 057b5d84
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  uVar1 = FUN_05aec914();
  uVar2 = FUN_05aec914();
  uVar1 = FUN_059721e8(*unaff_x20,uVar1,*unaff_x22,uVar2,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x23);
  }
  FUN_068bd958(uVar1,0);
  return;
}


