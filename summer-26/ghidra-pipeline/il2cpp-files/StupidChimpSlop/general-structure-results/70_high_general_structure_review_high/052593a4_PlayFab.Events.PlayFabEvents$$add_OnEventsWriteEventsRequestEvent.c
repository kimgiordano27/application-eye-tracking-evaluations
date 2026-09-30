/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnEventsWriteEventsRequestEvent
ENTRY_POINT: 052593a4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x052597b4) */
/* WARNING: Removing unreachable block (ram,0x052597b8) */
/* WARNING: Removing unreachable block (ram,0x05259868) */
/* WARNING: Removing unreachable block (ram,0x05259878) */

void PlayFab_Events_PlayFabEvents__add_OnEventsWriteEventsRequestEvent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar14;
  long unaff_x21;
  undefined8 uVar15;
  long lVar16;
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
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x1d8));
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
  *(undefined1 *)(unaff_x21 + 0x3aa) = 1;
  lVar8 = *(long *)(unaff_x19 + 0x78);
  in_stack_000000c0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  unaff_x20[1] = 0;
  *unaff_x20 = 0;
  unaff_x20[3] = 0;
  unaff_x20[2] = 0;
  puVar7 = System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo;
  puVar6 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar5 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar4 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar3 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar2 = PTR_DAT_0664b728;
  puVar1 = PTR_DAT_06648110;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000078 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (lVar8 != 0) {
    FUN_0479a870(&stack0x00000018,lVar8,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
    in_stack_000000c0 = in_stack_00000038;
    unaff_x20[1] = in_stack_00000020;
    *unaff_x20 = in_stack_00000018;
    unaff_x20[3] = in_stack_00000030;
    unaff_x20[2] = in_stack_00000028;
    in_stack_00000018 = 0;
    in_stack_00000020 = (undefined8 *)&stack0x000000a0;
    while (uVar9 = FUN_04a08dd8(&stack0x000000a0,*(undefined8 *)puVar3), lVar8 = in_stack_000000b8,
          (uVar9 & 1) != 0) {
      if ((in_stack_000000b8 == 0) || (*(long *)(in_stack_000000b8 + 0xf8) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0524e454();
      if (*(long *)(lVar8 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar14 = *(long **)(unaff_x19 + 0x18);
      uVar15 = *(undefined8 *)(lVar8 + 0xd0);
      uVar10 = FUN_0524e5f0();
      uVar10 = FUN_04e80678(uVar15,*(undefined8 *)puVar7,uVar10,0);
      lVar16 = *(long *)puVar1;
      lVar8 = *(long *)(lVar16 + 0x38);
      if (lVar8 == 0) {
        FUN_02d87268(lVar16);
        lVar8 = *(long *)(lVar16 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar8 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar12 = *plVar14;
      lVar16 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar15 = **(undefined8 **)(lVar8 + 0xb8);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar16) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_052595cc;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar14,lVar16,1);
LAB_052595cc:
      (*(code *)*puVar11)(plVar14,3,uVar10,uVar15,puVar11[1]);
    }
    FUN_04a08efc(&stack0x000000a0,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_047cea60(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                   *(undefined8 *)
                    System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                  );
      in_stack_00000090 = in_stack_00000038;
      in_stack_00000078 = in_stack_00000020;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000088 = in_stack_00000030;
      in_stack_00000080 = in_stack_00000028;
      do {
        uVar9 = FUN_04a12944(&stack0x00000070,*(undefined8 *)puVar5);
        if ((uVar9 & 1) == 0) {
          FUN_04a12a68(&stack0x00000070,
                       *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
          return;
        }
        if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0479a870(&stack0x00000018,in_stack_00000088,
                     *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000018 = 0;
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000058 = in_stack_00000030;
        in_stack_00000050 = in_stack_00000028;
        in_stack_00000060 = in_stack_00000038;
        in_stack_00000020 = &stack0x00000040;
        while (uVar9 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar6),
              lVar8 = in_stack_00000058, (uVar9 & 1) != 0) {
          if ((in_stack_00000058 == 0) || (*(long *)(in_stack_00000058 + 200) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0524e454();
          if (*(long *)(lVar8 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          plVar14 = *(long **)(unaff_x19 + 0x18);
          uVar15 = *(undefined8 *)(lVar8 + 0xc0);
          uVar10 = FUN_0524e5f0();
          uVar10 = FUN_04e80678(uVar15,*(undefined8 *)puVar7,uVar10,0);
          lVar16 = *(long *)puVar1;
          lVar8 = *(long *)(lVar16 + 0x38);
          if (lVar8 == 0) {
            FUN_02d87268(lVar16);
            lVar8 = *(long *)(lVar16 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02d8720c();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar8 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02d8720c();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar12 = *plVar14;
          lVar16 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          uVar15 = **(undefined8 **)(lVar8 + 0xb8);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar16) {
                puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_05259778;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d87540(plVar14,lVar16,1);
LAB_05259778:
          (*(code *)*puVar11)(plVar14,3,uVar10,uVar15,puVar11[1]);
        }
        FUN_04a08efc(&stack0x00000040,*(undefined8 *)puVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


