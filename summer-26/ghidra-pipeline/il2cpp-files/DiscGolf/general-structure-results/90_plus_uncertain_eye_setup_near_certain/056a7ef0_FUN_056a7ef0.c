/*
FUNCTION_NAME: FUN_056a7ef0
ENTRY_POINT: 056a7ef0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_056a7ef0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_06a0d468;
  if ((DAT_06dbca58 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    DAT_06dbca58 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_056a9f68(&local_48,*(undefined8 *)(param_1 + 0x10),4,0);
  *(undefined8 *)(param_1 + 0x20) = uStack_40;
  *(undefined8 *)(param_1 + 0x18) = local_48;
  *(undefined8 *)(param_1 + 0x28) = local_38;
  auVar7 = OVRPlugin_<>c__<_cctor>b__807_26(param_1 + 0x18,0);
  uVar6 = auVar7._0_8_;
  uVar3 = FUN_055339f0(uVar6,0);
  uVar4 = FUN_056a841c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar1);
  }
  iVar2 = FUN_056a44c4(uVar6,auVar7._8_8_,uVar4,uVar6);
  puVar1 = System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo;
  if (iVar2 == 0) {
    lVar5 = **(long **)(*(long *)
                         System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                       + 0xb8);
    if (lVar5 == 0) {
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo
                                );
      FUN_04e39494(uVar6,*(undefined8 *)
                          System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
      LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    FUN_04e3a230(lVar5,uVar3,param_1,
                 *(undefined8 *)
                  System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
  }
  else {
    FUN_056a9b78(param_1 + 0x18,0);
  }
  return;
}


