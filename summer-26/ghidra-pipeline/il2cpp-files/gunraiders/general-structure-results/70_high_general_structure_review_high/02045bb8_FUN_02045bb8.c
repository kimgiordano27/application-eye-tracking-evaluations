/*
FUNCTION_NAME: FUN_02045bb8
ENTRY_POINT: 02045bb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;telemetry_or_network_hits_5
*/


uint FUN_02045bb8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_0452f141 & 1) == 0) {
    FUN_01c5d288(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_01c5d288(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerable<DebugUI_Table_Row>_TypeInfo);
    FUN_01c5d288(
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerator<IGrouping<string,_MemberInfo>>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_IEnumerable<float3>_TypeInfo);
    FUN_01c5d288(
                System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_0422f9e8);
    DAT_0452f141 = 1;
  }
  puVar7 = System_Collections_Generic_IEnumerator<IGrouping<string,_MemberInfo>>_TypeInfo;
  puVar6 = 
  System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo;
  puVar5 = 
  System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo;
  puVar4 = PTR_DAT_0422f9e8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar1 = *(int *)(param_2 + 0x18);
  puVar2 = (undefined8 *)
           System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar3 = (undefined8 *)
           System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  while (iVar1 = iVar1 + -1,
        System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo =
             (undefined *)puVar2,
        System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
             = (undefined *)puVar3, -1 < iVar1) {
    uVar9 = FUN_02d4fd88(param_2,iVar1,*(undefined8 *)puVar5);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar4);
    }
    uVar10 = FUN_03d4dc54(uVar9,0,0);
    puVar2 = (undefined8 *)
             System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
    puVar3 = (undefined8 *)
             System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
    ;
    if ((uVar10 & 1) != 0) {
      FUN_02d51704(param_2,iVar1,*(undefined8 *)puVar7);
      puVar2 = (undefined8 *)
               System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
      puVar3 = (undefined8 *)
               System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
      ;
    }
  }
  FUN_02d50a3c(&local_58,param_2,*(undefined8 *)puVar6);
  uVar12 = 1;
  while( true ) {
    uVar10 = FUN_029fd614(&local_58,*puVar3);
    if ((uVar10 & 1) == 0) {
      FUN_029fd610(&local_58,*puVar2);
      return uVar12;
    }
    if (local_48 == 0) break;
    lVar11 = FUN_03d468e8(local_48,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar8 = FUN_03d49a30(lVar11,0);
    uVar12 = uVar12 & uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


