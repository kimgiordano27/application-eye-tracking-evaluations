/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsListGroupMembersResultEvent
ENTRY_POINT: 0525ec3c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0525ee6c) */
/* WARNING: Removing unreachable block (ram,0x0525ee70) */
/* WARNING: Removing unreachable block (ram,0x0525eeec) */
/* WARNING: Removing unreachable block (ram,0x0525eefc) */

void PlayFab_Events_PlayFabEvents__add_OnGroupsListGroupMembersResultEvent(long param_1)

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
  ulong uVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
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
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x160));
  FUN_02d4dc40(System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<Vector3,_float>_TypeInfo);
  FUN_02d4dc40(System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
  FUN_02d4dc40(System_Func<JsonParser_JsonValue,_string>_TypeInfo);
  FUN_02d4dc40(System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<Vector3Int,_int>_TypeInfo);
  FUN_02d4dc40(System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<Vector4,_float>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<VisualElement,_StyleValues>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x3c3) = 1;
  lVar9 = *(long *)(unaff_x19 + 0x78);
  in_stack_000000c0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  unaff_x20[1] = 0;
  *unaff_x20 = 0;
  unaff_x20[3] = 0;
  unaff_x20[2] = 0;
  puVar8 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar7 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar6 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar5 = System_Func<InputControlLayout_ControlItem,_string>_TypeInfo;
  puVar4 = System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo;
  puVar3 = System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo;
  puVar2 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar1 = System_Func<Vector3,_float>_TypeInfo;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000078 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (lVar9 != 0) {
    FUN_0479a870(&stack0x00000018,lVar9,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
    in_stack_000000c0 = in_stack_00000038;
    unaff_x20[1] = in_stack_00000020;
    *unaff_x20 = in_stack_00000018;
    unaff_x20[3] = in_stack_00000030;
    unaff_x20[2] = in_stack_00000028;
    in_stack_00000018 = 0;
    in_stack_00000020 = (undefined8 *)&stack0x000000a0;
    while (uVar10 = FUN_04a08dd8(&stack0x000000a0,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
      if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      (**(code **)(*in_stack_000000b8 + 0x198))
                (in_stack_000000b8,*(undefined8 *)(*in_stack_000000b8 + 0x1a0));
    }
    FUN_04a08efc(&stack0x000000a0,*(undefined8 *)puVar1);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_047cea60(&stack0x00000018,*(long *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
      in_stack_00000090 = in_stack_00000038;
      in_stack_00000078 = in_stack_00000020;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000088 = in_stack_00000030;
      in_stack_00000080 = in_stack_00000028;
      while( true ) {
        uVar10 = FUN_04a12944(&stack0x00000070,*(undefined8 *)puVar7);
        if ((uVar10 & 1) == 0) {
          FUN_04a12a68(&stack0x00000070,*(undefined8 *)puVar5);
          return;
        }
        if (in_stack_00000088 == 0) break;
        FUN_0479a870(&stack0x00000018,in_stack_00000088,*(undefined8 *)puVar4);
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000018 = 0;
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000058 = in_stack_00000030;
        in_stack_00000050 = in_stack_00000028;
        in_stack_00000060 = in_stack_00000038;
        in_stack_00000020 = &stack0x00000040;
        while (uVar10 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar8), (uVar10 & 1) != 0) {
          if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_05254740();
        }
        FUN_04a08efc(&stack0x00000040,*(undefined8 *)puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


