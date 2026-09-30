/*
FUNCTION_NAME: FUN_058facc8
ENTRY_POINT: 058facc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_058facc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = Method_System_Threading_Tasks_TaskFactory<WebResponse>_FromAsync__;
  if ((DAT_066d34cd & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631a140);
    FUN_02b3c81c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRNodeState>_get_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRTargetEvaluator>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRTargetEvaluator>_Add__);
    FUN_02b3c81c(System_Xml_UniqueId_TypeInfo);
    FUN_02b3c81c(Method_TMPro_TMP_TextProcessingStack<int>_CurrentItem__);
    FUN_02b3c81c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
    FUN_02b3c81c(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__);
    FUN_02b3c81c(
                Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                );
    FUN_02b3c81c(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__);
    FUN_02b3c81c(Method_System_Threading_Tasks_TaskFactory<WebResponse>_FromAsync__);
    DAT_066d34cd = 1;
  }
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04dbdb8c(lVar9,0);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<int>_CurrentItem__;
  puVar1 = Method_System_Collections_Generic_List<XRNodeState>_get_Item__;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = param_1;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x10),param_1);
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_05803f74(lVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar8 = Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__;
    puVar7 = 
    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__;
    puVar6 = Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__;
    puVar5 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__;
    puVar4 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
    puVar2 = System_Xml_UniqueId_TypeInfo;
    puVar1 = PTR_DAT_0631a140;
    if (lVar10 != 0) {
      lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
      FUN_05805f94(lVar10,*(undefined8 *)(lVar11 + 0xf0),*(undefined8 *)(lVar11 + 0xf8),0);
      uVar12 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_04d8a7b0(uVar12,0);
      FUN_05811de4(lVar10,uVar12,0);
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_049b796c(uVar12,lVar9,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar10 + 0x50) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x50),uVar12);
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_03fbd788(uVar12,lVar9,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar10 + 0x58) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x58),uVar12);
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_049b796c(uVar12,lVar9,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar10 + 0x88) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x88),uVar12);
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_03fbd788(uVar12,lVar9,*(undefined8 *)puVar8,0);
      *(undefined8 *)(lVar10 + 0x90) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x90),uVar12);
      return lVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


