/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsRemoveGroupInvitationRequestEvent
ENTRY_POINT: 0525f6c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


undefined8 PlayFab_Events_PlayFabEvents__remove_OnGroupsRemoveGroupInvitationRequestEvent(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long in_stack_000000a8;
  
  FUN_02d4dc40(System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
  FUN_02d4dc40(
              Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
              );
  FUN_02d4dc40(System_Collections_Generic_HashSet<RTHandle>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_HashSet<ScheduledItem>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x3cb) = 1;
  puVar6 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar5 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar4 = System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo;
  in_stack_00000098 = &stack0x000000a8;
  in_stack_00000090 = 0;
  if (*(int *)(unaff_x19 + 0x10) == 1) goto LAB_0525f860;
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x88);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_047cea60(&stack0x00000068,lVar7,
                 *(undefined8 *)
                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo)
    ;
    *(undefined8 *)(in_stack_000000a8 + 0x38) = in_stack_00000070;
    *(undefined8 *)(in_stack_000000a8 + 0x30) = in_stack_00000068;
    *(undefined8 *)(in_stack_000000a8 + 0x48) = in_stack_00000080;
    *(undefined8 *)(in_stack_000000a8 + 0x40) = in_stack_00000078;
    *(undefined8 *)(in_stack_000000a8 + 0x50) = in_stack_00000088;
    thunk_FUN_02dc1ef0(in_stack_000000a8 + 0x30,0);
    *(undefined4 *)(in_stack_000000a8 + 0x10) = 0xfffffffd;
    while( true ) {
      uVar8 = FUN_04a12944(in_stack_000000a8 + 0x30,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) break;
      *(undefined8 *)(in_stack_000000a8 + 0x60) = *(undefined8 *)(in_stack_000000a8 + 0x48);
      *(undefined8 *)(in_stack_000000a8 + 0x58) = *(undefined8 *)(in_stack_000000a8 + 0x40);
      thunk_FUN_02dc1ef0(in_stack_000000a8 + 0x60,0);
      if (*(long *)(in_stack_000000a8 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a870(&stack0x00000068,*(long *)(in_stack_000000a8 + 0x60),*(undefined8 *)puVar4);
      *(undefined8 *)(in_stack_000000a8 + 0x70) = in_stack_00000070;
      *(undefined8 *)(in_stack_000000a8 + 0x68) = in_stack_00000068;
      *(undefined8 *)(in_stack_000000a8 + 0x80) = in_stack_00000080;
      *(undefined8 *)(in_stack_000000a8 + 0x78) = in_stack_00000078;
      *(undefined8 *)(in_stack_000000a8 + 0x88) = in_stack_00000088;
      thunk_FUN_02dc1ef0(in_stack_000000a8 + 0x68,0);
      unaff_x19 = in_stack_000000a8;
LAB_0525f860:
      uVar9 = *(undefined8 *)puVar6;
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
      uVar8 = FUN_04a08dd8(unaff_x19 + 0x68,uVar9);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(in_stack_000000a8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar3 = *(undefined1 *)(in_stack_000000a8 + 0x78);
        uVar1 = *(undefined4 *)(*(long *)(in_stack_000000a8 + 0x80) + 0x98);
        uVar2 = *(undefined4 *)(in_stack_000000a8 + 0x58);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Collections_Generic_HashSet<ScheduledItem>_TypeInfo);
        FUN_05261098(uVar9,uVar1,uVar2,uVar3);
        *(undefined8 *)(in_stack_000000a8 + 0x18) = uVar9;
        thunk_FUN_02dc1ef0((undefined8 *)(in_stack_000000a8 + 0x18),uVar9);
        uVar9 = 1;
        *(undefined4 *)(in_stack_000000a8 + 0x10) = 1;
        goto LAB_0525f93c;
      }
      FUN_0525f9d4();
      *(undefined8 *)(in_stack_000000a8 + 0x88) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x60) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x58) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x70) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x68) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x80) = 0;
      *(undefined8 *)(in_stack_000000a8 + 0x78) = 0;
    }
    FUN_0525fa24();
    uVar9 = 0;
    *(undefined8 *)(in_stack_000000a8 + 0x50) = 0;
    *(undefined8 *)(in_stack_000000a8 + 0x38) = 0;
    *(undefined8 *)(in_stack_000000a8 + 0x30) = 0;
    *(undefined8 *)(in_stack_000000a8 + 0x48) = 0;
    *(undefined8 *)(in_stack_000000a8 + 0x40) = 0;
  }
  else {
    uVar9 = 0;
  }
LAB_0525f93c:
  lVar7 = in_stack_00000090;
  if (in_stack_00000090 == 0) {
    return uVar9;
  }
  FUN_02cbbbc0(&stack0x00000098);
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(lVar7);
}


