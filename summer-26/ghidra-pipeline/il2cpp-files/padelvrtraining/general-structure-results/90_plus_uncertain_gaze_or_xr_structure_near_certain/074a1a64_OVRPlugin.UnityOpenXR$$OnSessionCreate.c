/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 074a1a64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03d2d2b0(PTR_DAT_091a1240);
  *(undefined1 *)(unaff_x20 + 0xba0) = 1;
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar1 = *unaff_x19;
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09223d10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled();
    uVar3 = FUN_074c19ec();
    FUN_074a3e2c(uVar2);
  }
  return uVar3;
}


