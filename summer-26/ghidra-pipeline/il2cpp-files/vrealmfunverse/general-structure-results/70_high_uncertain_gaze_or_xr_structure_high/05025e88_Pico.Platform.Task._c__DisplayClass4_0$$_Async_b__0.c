/*
FUNCTION_NAME: Pico.Platform.Task.<>c__DisplayClass4_0$$<Async>b__0
ENTRY_POINT: 05025e88
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long Pico_Platform_Task_<>c__DisplayClass4_0__<Async>b__0(void)

{
  long lVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  int iStack000000000000000c;
  
  *(undefined1 *)(unaff_x20 + 0x179) = in_w8;
  iStack000000000000000c = 0;
  FUN_05026308();
  plVar3 = (long *)(unaff_x19 + 0x60);
  if (*plVar3 == 0) {
    iStack000000000000000c = 0;
    lVar1 = FUN_05024898(*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,
                         &stack0x0000000c);
    if ((lVar1 != 0) && (iStack000000000000000c == 0)) {
      lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                  OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
      FUN_05020684(lVar2,lVar1,0);
      *plVar3 = lVar2;
      thunk_FUN_02bb0e9c(plVar3,lVar2);
    }
  }
  return *plVar3;
}


