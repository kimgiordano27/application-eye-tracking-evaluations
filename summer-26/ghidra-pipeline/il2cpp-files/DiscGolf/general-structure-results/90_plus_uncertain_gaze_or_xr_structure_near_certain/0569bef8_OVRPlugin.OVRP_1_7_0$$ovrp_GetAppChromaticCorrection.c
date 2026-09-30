/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_GetAppChromaticCorrection
ENTRY_POINT: 0569bef8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_7_0__ovrp_GetAppChromaticCorrection(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x25;
  long unaff_x27;
  int iVar3;
  int iStack0000000000000008;
  
  iVar3 = 0;
  do {
    iStack0000000000000008 = iVar3 + 2;
    uVar1 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x27 + 0x48),&stack0x00000008);
    FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar1,0);
    uVar1 = FUN_05362cb4();
    thunk_FUN_02dd3144(*unaff_x25);
    FUN_048a20e0();
    uVar2 = FUN_03c2311c();
    if (iVar3 == 0x7ffffffd) {
      return uVar1;
    }
    iVar3 = iVar3 + 1;
  } while ((uVar2 & 1) != 0);
  return uVar1;
}


