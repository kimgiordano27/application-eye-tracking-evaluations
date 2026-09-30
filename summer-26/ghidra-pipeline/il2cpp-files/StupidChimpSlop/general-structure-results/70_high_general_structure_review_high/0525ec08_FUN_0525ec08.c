/*
FUNCTION_NAME: FUN_0525ec08
ENTRY_POINT: 0525ec08
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0525ee6c) */
/* WARNING: Removing unreachable block (ram,0x0525ee70) */
/* WARNING: Removing unreachable block (ram,0x0525eeec) */
/* WARNING: Removing unreachable block (ram,0x0525eefc) */

void FUN_0525ec08(long param_1)

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
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  
  if ((DAT_06a523c3 & 1) == 0) {
    FUN_02d4dc40(System_Func<Vector2Int,_int>_TypeInfo);
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
    DAT_06a523c3 = 1;
  }
  puVar8 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar7 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar6 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar5 = System_Func<InputControlLayout_ControlItem,_string>_TypeInfo;
  puVar4 = System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo;
  puVar3 = System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo;
  puVar2 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar1 = System_Func<Vector3,_float>_TypeInfo;
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = (long *)0x0;
  uStack_80 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_d8 = (long *)0x0;
  uStack_e0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_a8 = (long *)0x0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0479a870(&local_118,*(long *)(param_1 + 0x78),
                 *(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
    local_70 = local_f8;
    puStack_88 = puStack_110;
    local_90 = local_118;
    local_78 = plStack_100;
    uStack_80 = local_108;
    local_118 = 0;
    puStack_110 = &local_90;
    while (uVar9 = FUN_04a08dd8(&local_90,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      (**(code **)(*local_78 + 0x198))(local_78,*(undefined8 *)(*local_78 + 0x1a0));
    }
    FUN_04a08efc(&local_90,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_047cea60(&local_118,*(long *)(param_1 + 0x88),*(undefined8 *)puVar3);
      local_a0 = local_f8;
      puStack_b8 = puStack_110;
      local_c0 = local_118;
      local_a8 = plStack_100;
      uStack_b0 = local_108;
      while( true ) {
        uVar9 = FUN_04a12944(&local_c0,*(undefined8 *)puVar7);
        if ((uVar9 & 1) == 0) {
          FUN_04a12a68(&local_c0,*(undefined8 *)puVar5);
          return;
        }
        if (local_a8 == (long *)0x0) break;
        FUN_0479a870(&local_118,local_a8,*(undefined8 *)puVar4);
        local_f0 = local_118;
        local_118 = 0;
        puStack_e8 = puStack_110;
        local_d8 = plStack_100;
        uStack_e0 = local_108;
        local_d0 = local_f8;
        puStack_110 = &local_f0;
        while (uVar9 = FUN_04a08dd8(&local_f0,*(undefined8 *)puVar8), (uVar9 & 1) != 0) {
          if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_05254740();
        }
        FUN_04a08efc(&local_f0,*(undefined8 *)puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


