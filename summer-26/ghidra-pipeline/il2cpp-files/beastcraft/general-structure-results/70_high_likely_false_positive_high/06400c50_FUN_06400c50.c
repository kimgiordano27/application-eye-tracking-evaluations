/*
FUNCTION_NAME: FUN_06400c50
ENTRY_POINT: 06400c50
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


int FUN_06400c50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000006e9c162 & 1) == 0) {
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_<>c__DisplayClass80_0_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_<CheckInternetConnection>d__80_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_BypassCertificate_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Telemetry_LckTelemetryEvent_<>c_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Tablet_LckTopButtonsController_<ResetAfterApplicationFocus>d__16_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_LckVideoCapturer_<CaptureLoopCoroutine>d__24_TypeInfo);
    FUN_02e3ca1c(UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
    FUN_02e3ca1c(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem_TypeInfo);
    bRam0000000006e9c162 = 1;
  }
  puVar2 = Liv_Lck_Streaming_LckStreamingController_<CheckInternetConnection>d__80_TypeInfo;
  puVar1 = Liv_Lck_Streaming_LckStreamingController_<>c__DisplayClass80_0_TypeInfo;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  iVar5 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
  }
  iVar6 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  iVar6 = iVar6 + iVar5;
  if (lVar3 != 0) {
    iVar6 = *(int *)(lVar3 + 0x18) + iVar6;
    FUN_040ded30(&uStack_50,lVar3,*(undefined8 *)Liv_Lck_Telemetry_LckTelemetryEvent_<>c_TypeInfo);
    while (uVar4 = FUN_05029aa4(&uStack_50,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (lStack_38 != 0) {
        iVar6 = *(int *)(lStack_38 + 0x18) + iVar6;
      }
    }
    FUN_05029aa0(&uStack_50,*(undefined8 *)puVar1);
  }
  return iVar6;
}


