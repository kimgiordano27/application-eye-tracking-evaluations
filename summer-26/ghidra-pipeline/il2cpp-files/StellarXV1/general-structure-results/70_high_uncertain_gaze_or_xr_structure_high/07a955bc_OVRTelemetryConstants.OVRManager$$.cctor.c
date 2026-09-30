/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 07a955bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRTelemetryConstants_OVRManager___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xd70));
  FUN_04077588(PTR_DAT_092f1a78);
  *(undefined1 *)(unaff_x21 + 0x453) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_09885867 == '\0') {
    FUN_04077588(PTR_DAT_09288e00);
    DAT_09885867 = '\x01';
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x20;
  }
  puVar1 = PTR_DAT_092f1a78;
  pcVar4 = *(char **)(lVar2 + 0xb8);
  if (*pcVar4 == '\0') {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      pcVar4 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar3 = *(undefined8 *)(pcVar4 + 8);
    if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0897e8f4(uVar3,0);
    lVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_092f0ea0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_07a71124();
    lVar2 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_076bca34(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
  }
  return lVar2;
}


