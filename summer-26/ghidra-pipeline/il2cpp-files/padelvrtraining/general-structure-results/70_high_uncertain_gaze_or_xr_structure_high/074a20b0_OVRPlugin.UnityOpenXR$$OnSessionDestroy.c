/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 074a20b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x120));
  FUN_03d2d2b0(PTR_DAT_09223da8);
  FUN_03d2d2b0(PTR_DAT_091a0c40);
  FUN_03d2d2b0(PTR_DAT_09223db0);
  *(undefined1 *)(unaff_x21 + 3000) = 1;
  puVar1 = PTR_DAT_09223da8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_050a0a8c(*(undefined8 *)puVar1);
  uVar2 = FUN_08a508b0();
  puVar1 = PTR_DAT_09223db0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a10c14(*(undefined8 *)puVar1,0);
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    uVar3 = FUN_08a4d9c8();
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03db619c(*unaff_x20);
    }
    FUN_08a55f04(uVar3,0);
    return;
  }
  return;
}


