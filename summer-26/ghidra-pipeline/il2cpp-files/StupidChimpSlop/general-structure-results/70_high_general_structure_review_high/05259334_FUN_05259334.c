/*
FUNCTION_NAME: FUN_05259334
ENTRY_POINT: 05259334
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x052597b4) */
/* WARNING: Removing unreachable block (ram,0x052597b8) */
/* WARNING: Removing unreachable block (ram,0x05259868) */
/* WARNING: Removing unreachable block (ram,0x05259878) */

void FUN_05259334(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  
  if ((DAT_06a523aa & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648110);
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
    FUN_02d4dc40(PTR_DAT_0664b728);
    FUN_02d4dc40(System_Func<VisualElement,_StyleValues>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo);
    DAT_06a523aa = 1;
  }
  puVar7 = System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo;
  puVar6 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar5 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar4 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar3 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar2 = PTR_DAT_0664b728;
  puVar1 = PTR_DAT_06648110;
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0479a870(&local_118,*(long *)(param_1 + 0x78),
                 *(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
    local_70 = local_f8;
    puStack_88 = puStack_110;
    local_90 = local_118;
    local_78 = lStack_100;
    uStack_80 = local_108;
    local_118 = 0;
    puStack_110 = &local_90;
    while (uVar8 = FUN_04a08dd8(&local_90,*(undefined8 *)puVar3), lVar11 = local_78,
          (uVar8 & 1) != 0) {
      if ((local_78 == 0) || (*(long *)(local_78 + 0xf8) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0524e454();
      if (*(long *)(lVar11 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar14 = *(long **)(param_1 + 0x18);
      uVar15 = *(undefined8 *)(lVar11 + 0xd0);
      uVar9 = FUN_0524e5f0();
      uVar9 = FUN_04e80678(uVar15,*(undefined8 *)puVar7,uVar9,0);
      lVar16 = *(long *)puVar1;
      lVar11 = *(long *)(lVar16 + 0x38);
      if (lVar11 == 0) {
        FUN_02d87268(lVar16);
        lVar11 = *(long *)(lVar16 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02d8720c();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02d8720c();
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar12 = *plVar14;
      lVar16 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar15 = **(undefined8 **)(lVar11 + 0xb8);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar16) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_052595cc;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar14,lVar16,1);
LAB_052595cc:
      (*(code *)*puVar10)(plVar14,3,uVar9,uVar15,puVar10[1]);
    }
    FUN_04a08efc(&local_90,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_047cea60(&local_118,*(long *)(param_1 + 0x88),
                   *(undefined8 *)
                    System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                  );
      local_a0 = local_f8;
      puStack_b8 = puStack_110;
      local_c0 = local_118;
      local_a8 = lStack_100;
      uStack_b0 = local_108;
      do {
        uVar8 = FUN_04a12944(&local_c0,*(undefined8 *)puVar5);
        if ((uVar8 & 1) == 0) {
          FUN_04a12a68(&local_c0,
                       *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
          return;
        }
        if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0479a870(&local_118,local_a8,
                     *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
        local_f0 = local_118;
        local_118 = 0;
        puStack_e8 = puStack_110;
        local_d8 = lStack_100;
        uStack_e0 = local_108;
        local_d0 = local_f8;
        puStack_110 = &local_f0;
        while (uVar8 = FUN_04a08dd8(&local_f0,*(undefined8 *)puVar6), lVar11 = local_d8,
              (uVar8 & 1) != 0) {
          if ((local_d8 == 0) || (*(long *)(local_d8 + 200) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0524e454();
          if (*(long *)(lVar11 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          plVar14 = *(long **)(param_1 + 0x18);
          uVar15 = *(undefined8 *)(lVar11 + 0xc0);
          uVar9 = FUN_0524e5f0();
          uVar9 = FUN_04e80678(uVar15,*(undefined8 *)puVar7,uVar9,0);
          lVar16 = *(long *)puVar1;
          lVar11 = *(long *)(lVar16 + 0x38);
          if (lVar11 == 0) {
            FUN_02d87268(lVar16);
            lVar11 = *(long *)(lVar16 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02d8720c();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02d8720c();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar12 = *plVar14;
          lVar16 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          uVar15 = **(undefined8 **)(lVar11 + 0xb8);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_05259778;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d87540(plVar14,lVar16,1);
LAB_05259778:
          (*(code *)*puVar10)(plVar14,3,uVar9,uVar15,puVar10[1]);
        }
        FUN_04a08efc(&local_f0,*(undefined8 *)puVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


