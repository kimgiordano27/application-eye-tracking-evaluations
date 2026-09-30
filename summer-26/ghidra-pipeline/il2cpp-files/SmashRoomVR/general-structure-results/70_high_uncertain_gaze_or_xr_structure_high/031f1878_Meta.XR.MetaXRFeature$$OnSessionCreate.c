/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 031f1878
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MetaXRFeature__OnSessionCreate(void)

{
  long lVar1;
  long *unaff_x21;
  
  __cxa_end_catch();
  FUN_031f1a4c(&stack0x00000008,5);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038f2acc(*(undefined8 *)PTR_DAT_03d831a0,0);
  lVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d83180);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_03081994(lVar1,0);
  return lVar1;
}


