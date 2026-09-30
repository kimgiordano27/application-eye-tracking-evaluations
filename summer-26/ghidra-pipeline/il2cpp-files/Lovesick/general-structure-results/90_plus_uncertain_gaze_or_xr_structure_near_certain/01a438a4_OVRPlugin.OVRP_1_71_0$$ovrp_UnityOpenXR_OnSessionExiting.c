/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 01a438a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xc68) = in_w8;
  puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0112e800(*(undefined8 *)puVar1);
  uVar2 = FUN_02681b9c();
  puVar1 = StringLiteral_13388;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar1,0);
  }
  if (*(char *)(unaff_x19 + 0x18) != '\0') {
    uVar3 = FUN_0268fd4c();
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x20);
    }
    FUN_0268c3e0(uVar3,0);
    return;
  }
  return;
}


