/*
FUNCTION_NAME: FUN_0360fc04
ENTRY_POINT: 0360fc04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0360fc04(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0412e55b & 1) == 0) {
                    /* try { // try from 0360fc3c to 0370fd17 has its CatchHandler @ 0360fc3c
                       catch() { ... } // from try @ 0360fc3c with catch @ 0360fc3c
                       catch() { ... } // from try @ 0360fd54 with catch @ 0360fc3c
                       catch() { ... } // from try @ 0360fd90 with catch @ 0360fc3c
                       catch() { ... } // from try @ 0360fde0 with catch @ 0360fc3c */
    FUN_01ab69ac(
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ContentCatalogData>_op_Implicit__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_SetResult__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_SetStateMachine__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_get_Task__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Create__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetException__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetResult__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetStateMachine__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RoomCodeData>>,_RoomCodeDataService_<GetLocalPlayerSortedRoomCodeDatas>d__10>__
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RoomCodeData>>,_RoomCodeDataService_<GetSortedRoomCodeDatas>d__9>__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_Start<RoomCodeDataService_<GetLocalPlayerSortedRoomCodeDatas>d__10>__
                );
    FUN_01ab69ac(System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo);
    DAT_0412e55b = 1;
  }
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetStateMachine__;
  puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Create__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_get_Task__;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar8 = thunk_FUN_01a89e68();
    uVar10 = thunk_FUN_01a6ca08(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_Start<RoomCodeDataService_<GetSortedRoomCodeDatas>d__9>__
                               );
    FUN_026a44fc(uVar8,uVar10,0);
    uVar10 = thunk_FUN_01a6ca08(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar10);
  }
  plVar11 = (long *)(param_1 + 0x18);
  if (*plVar11 != 0) {
                    /* try { // try from 0360fd18 to 0370fd23 has its CatchHandler @ 0360fd5c */
                    /* try { // try from 0360fd34 to 0370fd53 has its CatchHandler @ 0360fd60 */
    FUN_0219c9c0(*plVar11,&local_c8,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_SetResult__
                );
                    /* try { // try from 0360fd54 to 0370fd77 has its CatchHandler @ 0360fc3c */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0360fd18 with catch @ 0360fd5c
                        */
    iVar12 = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0360fd34 with catch @ 0360fd60
                        */
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    uStack_78 = uStack_b0;
    uStack_80 = local_b8;
    local_70 = local_a8;
    while (uVar7 = FUN_021bc4c4(&local_90,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
                    /* try { // try from 0360fd78 to 0370fd8f has its CatchHandler @ 0360fdd8 */
      FUN_01b5f1d8(&local_90,&local_c8,*(undefined8 *)puVar2);
                    /* try { // try from 0360fd90 to 0370fdc7 has its CatchHandler @ 0360fc3c */
      local_a0 = local_c8;
      uStack_98 = uStack_c0;
      FUN_01b5f2c8(&local_a0,&local_c8,*(undefined8 *)puVar3);
      lVar9 = local_c8;
      FUN_01b5f3b4(&local_a0,&local_c8,*(undefined8 *)puVar4);
      lVar6 = local_c8;
      if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* try { // try from 0360fdc8 to 0370fdd7 has its CatchHandler @ 0360fdd8 */
      uVar7 = FUN_02218bd8(local_c8,param_2,*(undefined8 *)puVar5);
      if (((uVar7 & 1) != 0) && (*(int *)(lVar6 + 0x18) == 0)) {
                    /* catch() { ... } // from try @ 0360fd78 with catch @ 0360fdd8
                       catch() { ... } // from try @ 0360fdc8 with catch @ 0360fdd8 */
                    /* try { // try from 0360fddc to 0370fddf has its CatchHandler @ 0360fde8 */
                    /* try { // try from 0360fde0 to 0370fdeb has its CatchHandler @ 0360fc3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360fddc with catch @ 0360fde8
                        */
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(lVar9,0,0);
        if ((uVar7 & 1) != 0) {
          uVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ContentCatalogData>_op_Implicit__
                                    );
          FUN_02060754(uVar8,param_1,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RoomCodeData>>,_RoomCodeDataService_<GetSortedRoomCodeDatas>d__9>__
                       ,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_03605d10(lVar9,uVar8);
          uVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<ContentCatalogData>_op_Implicit__
                                    );
          FUN_02060754(uVar8,param_1,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_Start<RoomCodeDataService_<GetLocalPlayerSortedRoomCodeDatas>d__10>__
                       ,0);
          FUN_03605e70(lVar9,uVar8);
        }
      }
      iVar12 = *(int *)(lVar6 + 0x18) + iVar12;
    }
    FUN_021bca9c(&local_90,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RoomCodeData>>_SetStateMachine__
                );
    puVar1 = System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo;
    if (iVar12 != 0) {
      return;
    }
    if (*plVar11 != 0) {
      lVar9 = *(long *)System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar1;
      }
      if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_0360ffb8;
      FUN_02212e50(**(long **)(lVar9 + 0xb8),*plVar11,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetResult__
                  );
      *plVar11 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,0);
    }
  }
  puVar1 = System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo;
  plVar11 = (long *)(param_1 + 0x20);
  if (*plVar11 != 0) {
    lVar9 = *(long *)System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) {
LAB_0360ffb8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02212e50(lVar9,*plVar11,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetException__
                );
    *plVar11 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,0);
  }
  return;
}


