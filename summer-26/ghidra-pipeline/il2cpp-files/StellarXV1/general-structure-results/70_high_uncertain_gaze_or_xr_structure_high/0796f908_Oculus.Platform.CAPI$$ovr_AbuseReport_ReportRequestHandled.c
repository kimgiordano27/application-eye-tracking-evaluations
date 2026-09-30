/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_AbuseReport_ReportRequestHandled
ENTRY_POINT: 0796f908
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Oculus_Platform_CAPI__ovr_AbuseReport_ReportRequestHandled(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  pcVar2 = *(code **)(unaff_x20 + 0x928);
  if (pcVar2 == (code *)0x0) {
    pcStack0000000000000010 = "ovrplugintracking";
    uStack0000000000000018 = 0x11;
    in_stack_00000020 = "ovrpTracking_CreateFaceTrackingContext";
    in_stack_00000028 = 0x26;
    in_stack_00000030 = DAT_01aee0b8;
    uStack0000000000000038 = 8;
    uStack000000000000003c = 0;
    pcVar2 = (code *)thunk_FUN_040b519c(&stack0x00000010);
    *(code **)(unaff_x20 + 0x928) = pcVar2;
  }
  pcStack0000000000000010 = (char *)0x0;
  uStack0000000000000018 = 0;
  cVar1 = (*pcVar2)(&stack0x00000010);
  FUN_03fbc45c(&stack0x00000010);
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  thunk_FUN_040ec700(unaff_x19 + 1,0);
  FUN_03fbc4d4(&stack0x00000010);
  return cVar1 != '\0';
}


