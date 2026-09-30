/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 074a1e64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_091f94d8;
  if ((DAT_09845ba7 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f94d8);
    DAT_09845ba7 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x10) = 1;
  if (lVar4 != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    }
    FUN_074a1ae0(lVar4);
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *puVar3 = 0;
  thunk_FUN_03d1023c(puVar3,0);
  return;
}


