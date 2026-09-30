/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 055ff710
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


int Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d0b35 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727cae8);
    thunk_FUN_032e1da0(PTR_DAT_07283a48);
    thunk_FUN_032e1da0(PTR_DAT_07280bd8);
    DAT_076d0b35 = '\x01';
  }
  uStack000000000000000c = 0;
  if (*(int *)(*(long *)PTR_DAT_07280bd8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar1 = FUN_03e6996c(&stack0x00000018,*(undefined8 *)PTR_DAT_07283a48);
  if (*(int *)(*(long *)PTR_DAT_0727cae8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)PTR_DAT_0727cae8);
  }
  iVar2 = FUN_058a16cc(&stack0x0000000c,0);
  return iVar1 * 7 + iVar2 + 0x27d;
}


