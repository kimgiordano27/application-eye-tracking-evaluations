/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 0743e484
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRTelemetryConstants_OVRManager___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  char *pcVar6;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0941112c == '\0') {
    FUN_03c8f898(PTR_DAT_08e69e20);
    DAT_0941112c = '\x01';
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_DAT_08eb7258;
  puVar1 = PTR_DAT_08eb7250;
  pcVar6 = *(char **)(lVar3 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      pcVar6 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085a437c(uVar5,0);
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08eae158 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar4 = FUN_07413454();
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
    FUN_05a39844(uVar5,uVar4,*(undefined8 *)puVar1);
  }
  return uVar5;
}


