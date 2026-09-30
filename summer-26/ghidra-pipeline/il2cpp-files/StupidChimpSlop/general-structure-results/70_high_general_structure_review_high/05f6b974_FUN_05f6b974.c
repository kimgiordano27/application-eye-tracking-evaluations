/*
FUNCTION_NAME: FUN_05f6b974
ENTRY_POINT: 05f6b974
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05f6b974(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_0664a240;
  if ((DAT_06a5da69 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664b9a8);
    FUN_02d4dc40(PTR_DAT_0664a240);
    FUN_02d4dc40(Method_System_Collections_ArrayList_IListWrapper_set_Capacity__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_Add__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_AddRange__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_Clear__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_Insert__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_InsertRange__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_Remove__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveRange__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_Sort__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Capacity__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Item__);
    FUN_02d4dc40(
                Method_Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(
                Method_Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12_MoveNext__
                );
    FUN_02d4dc40(
                Method_Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_Triggers_AsyncDestroyTrigger_<>c_<OnDestroyAsync>b__7_0__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AsyncInstantiateOperationExtensions_AsyncInstantiateOperationConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c_<ThrowAsync>b__7_0__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c_<ThrowAsync>b__7_1__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c__DisplayClass5_0_<OutputAsyncCausalityEvents>b__0__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_ContinuationWrapper_Invoke__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
                );
    FUN_02d4dc40(Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_Run__)
    ;
    FUN_02d4dc40(Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__);
    FUN_02d4dc40(Method_System_Collections_ArrayList_IListWrapper_ToArray__);
    DAT_06a5da69 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar4 = Method_System_Collections_ArrayList_IListWrapper_ToArray__;
  puVar1 = PTR_DAT_066462a0;
  lVar9 = *(long *)(PTR_DAT_066462a0 + 0x30);
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_0664b9a8;
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[2];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_Clear__);
    FUN_03e7b134(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[3];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Item__);
    FUN_03e7afac(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Cysharp_Threading_Tasks_Triggers_AsyncDestroyTrigger_<>c_<OnDestroyAsync>b__7_0__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[4];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__);
    FUN_03e7b2bc(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Cysharp_Threading_Tasks_AsyncInstantiateOperationExtensions_AsyncInstantiateOperationConfiguredSource_Continuation__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[5];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_IListWrapper_set_Capacity__);
    FUN_03e7b380(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c_<ThrowAsync>b__7_0__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[6];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_Add__);
    FUN_03e7b444(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c_<ThrowAsync>b__7_1__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[7];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_Sort__);
    FUN_03e7b070(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c__DisplayClass5_0_<OutputAsyncCausalityEvents>b__0__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[8];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveRange__
                               );
    FUN_03e7b690(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_ContinuationWrapper_Invoke__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[9];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_AddRange__);
    FUN_03e7b754(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[10];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_InsertRange__
                               );
    FUN_03e7b818(lVar11,uVar12,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_Run__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0xb];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Capacity__
                               );
    FUN_03e7b5cc(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0xc];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_Insert__);
    FUN_03e7b1f8(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12_MoveNext__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_050121a8(lVar9 + 0x20,0);
  uVar6 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0xd];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_ArrayList_ReadOnlyArrayList_Remove__);
    FUN_03e7b508(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
    *plVar7 = lVar11;
    thunk_FUN_02dc1ef0(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05f6b298(uVar10,uVar5,uVar6,lVar11);
  return;
}


