/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsAcceptGroupInvitationRequestEvent
ENTRY_POINT: 0525c158
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0525c2c4) */
/* WARNING: Removing unreachable block (ram,0x0525c320) */
/* WARNING: Removing unreachable block (ram,0x0525c44c) */

void PlayFab_Events_PlayFabEvents__remove_OnGroupsAcceptGroupInvitationRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
                    /* try { // try from 0525c170 to 0535c197 has its CatchHandler @ 0525c3f4 */
  FUN_02d4dc40(PTR_DAT_0664b728);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
  FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IAsyncAffordanceStateReceiver>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x3b6) = 1;
  puVar8 = Unity_XR_CoreUtils_Collections_HashSetList<IAsyncAffordanceStateReceiver>_TypeInfo;
  puVar7 = RenderGraphCompilationCache_HashEntry<object>_TypeInfo;
  puVar6 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar5 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar4 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar3 = System_Func<InputControlLayout_ControlItem,_string>_TypeInfo;
  puVar2 = System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo;
  puVar1 = PTR_DAT_06648110;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000078 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*(long *)(unaff_x19 + 0x88) != 0) {
                    /* try { // try from 0525c1d4 to 0535c1fb has its CatchHandler @ 0525c3f0 */
                    /* try { // try from 0525c208 to 0535c287 has its CatchHandler @ 0525c3fc */
    FUN_047cea60(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                 *(undefined8 *)
                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo)
    ;
    in_stack_00000090 = in_stack_00000038;
    in_stack_00000078 = in_stack_00000020;
    in_stack_00000070 = in_stack_00000018;
    in_stack_00000088 = in_stack_00000030;
    in_stack_00000080 = in_stack_00000028;
    while (uVar9 = FUN_04a12944(&stack0x00000070,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a870(&stack0x00000018,in_stack_00000088,*(undefined8 *)puVar2);
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000018 = 0;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000058 = in_stack_00000030;
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000038;
      in_stack_00000020 = &stack0x00000040;
      while (uVar9 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar6),
            lVar12 = in_stack_00000058, (uVar9 & 1) != 0) {
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar11 = *(long *)(in_stack_00000058 + 0x48);
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
        }
        FUN_05254740(lVar12);
      }
      FUN_04a08efc(&stack0x00000040,*(undefined8 *)puVar4);
    }
    FUN_04a12a68(&stack0x00000070,*(undefined8 *)puVar3);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_047ce7ac(*(long *)(unaff_x19 + 0x88),*(undefined8 *)puVar7);
      lVar11 = *(long *)puVar1;
      plVar14 = *(long **)(unaff_x19 + 0x18);
      lVar12 = *(long *)(lVar11 + 0x38);
      if (lVar12 == 0) {
        FUN_02d87268(lVar11);
        lVar12 = *(long *)(lVar11 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02d8720c();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02d8720c();
      }
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar15 = **(undefined8 **)(lVar12 + 0xb8);
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        uVar16 = *(undefined8 *)puVar8;
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0525c3f0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar14,*(long *)PTR_DAT_0664b728,1);
LAB_0525c3f0:
        (*(code *)*puVar10)(plVar14,3,uVar16,uVar15,puVar10[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


