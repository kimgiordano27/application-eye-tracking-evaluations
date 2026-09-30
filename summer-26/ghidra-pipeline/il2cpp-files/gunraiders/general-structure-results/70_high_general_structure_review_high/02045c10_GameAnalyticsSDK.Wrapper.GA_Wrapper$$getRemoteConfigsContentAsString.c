/*
FUNCTION_NAME: GameAnalyticsSDK.Wrapper.GA_Wrapper$$getRemoteConfigsContentAsString
ENTRY_POINT: 02045c10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_6
*/


uint GameAnalyticsSDK_Wrapper_GA_Wrapper__getRemoteConfigsContentAsString(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xe38));
  FUN_01c5d288(System_Collections_Generic_IEnumerable<float3>_TypeInfo);
  FUN_01c5d288(
              System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
              );
  FUN_01c5d288(PTR_DAT_0422f9e8);
  *(undefined1 *)(unaff_x20 + 0x141) = 1;
  puVar4 = PTR_DAT_0422f9e8;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar1 = *(int *)(unaff_x19 + 0x18);
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
    uVar6 = FUN_02d4fd88();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar4);
    }
    uVar7 = FUN_03d4dc54(uVar6,0,0);
    puVar2 = (undefined8 *)
             System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
    puVar3 = (undefined8 *)
             System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
    ;
    if ((uVar7 & 1) != 0) {
      FUN_02d51704();
      puVar2 = (undefined8 *)
               System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
      puVar3 = (undefined8 *)
               System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
      ;
    }
  }
  FUN_02d50a3c(&stack0x00000008);
  uVar9 = 1;
  while( true ) {
    uVar7 = FUN_029fd614(&stack0x00000008,*puVar3);
    if ((uVar7 & 1) == 0) {
      FUN_029fd610(&stack0x00000008,*puVar2);
      return uVar9;
    }
    if (in_stack_00000018 == 0) break;
    lVar8 = FUN_03d468e8(in_stack_00000018,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar5 = FUN_03d49a30(lVar8,0);
    uVar9 = uVar9 & uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


