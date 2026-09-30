/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 01dafa5c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_0235a378;
  puVar1 = PTR_DAT_0235a350;
  puVar6 = *(undefined8 **)(unaff_x26 + 0x398);
  uVar3 = thunk_FUN_010400dc();
  FUN_01dafb14(uVar3,0,*unaff_x22);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar3 = FUN_011ae338(uVar3,*puVar6);
  uVar4 = thunk_FUN_010400dc(*(undefined8 *)puVar2);
  FUN_01dafbb4();
  uVar4 = FUN_01cbace0(uVar4,0);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar4 = FUN_01cbaeec(uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)puVar1);
  }
  FUN_00fc7c18(uVar5,uVar3,uVar4);
  return;
}


