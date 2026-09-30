/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_SetAppChromaticCorrection
ENTRY_POINT: 0569bf5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_7_0__ovrp_SetAppChromaticCorrection(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x22;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x27;
  int unaff_w29;
  int in_stack_00000008;
  
  while( true ) {
    FUN_048a20e0();
    uVar2 = FUN_03c2311c();
    if ((unaff_w29 == unaff_w24) || ((uVar2 & 1) == 0)) break;
    in_stack_00000008 = unaff_w29 + 3;
    uVar1 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x27 + 0x48),&stack0x00000008);
    FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar1,0);
    unaff_x22 = FUN_05362cb4();
    thunk_FUN_02dd3144(*unaff_x25);
    unaff_w29 = unaff_w29 + 1;
  }
  return unaff_x22;
}


