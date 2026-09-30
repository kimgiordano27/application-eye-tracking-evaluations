/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 076f7c98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long in_x9;
  int *piVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
        goto LAB_076f7ce4;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_076f7ce4:
  (*(code *)*puVar2)();
  if (*(int *)(unaff_x20 + 0xb0) == 2) {
    if (*(char *)(unaff_x20 + 0x38) != '\0') {
      *(undefined1 *)(unaff_x20 + 0x38) = 0;
      *(undefined4 *)(unaff_x20 + 0xb0) = 3;
      FUN_076f68d0();
    }
  }
  else if ((*(int *)(unaff_x20 + 0xb0) == 0) && (*(char *)(unaff_x20 + 0x31) != '\0')) {
    *(undefined1 *)(unaff_x20 + 0x31) = 0;
    *(undefined4 *)(unaff_x20 + 0xb0) = 1;
    FUN_076f5e58();
  }
  iVar1 = *(int *)(unaff_x20 + 0xbc) + -1;
  if ((0 < *(int *)(unaff_x20 + 0xbc)) && (*(int *)(unaff_x20 + 0xbc) = iVar1, iVar1 == 0)) {
    FUN_076f6264();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),0);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}


