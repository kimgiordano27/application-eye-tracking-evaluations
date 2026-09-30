/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnEventsWriteEventsRequestEvent
ENTRY_POINT: 05259458
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x052597b4) */
/* WARNING: Removing unreachable block (ram,0x052597b8) */
/* WARNING: Removing unreachable block (ram,0x05259868) */
/* WARNING: Removing unreachable block (ram,0x05259878) */

void PlayFab_Events_PlayFabEvents__remove_OnEventsWriteEventsRequestEvent
               (undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined8 uStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined8 in_stack_00000090;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  puStack0000000000000048 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
  unaff_x20[1] = puStack0000000000000048;
  *unaff_x20 = uStack0000000000000040;
  unaff_x20[3] = puStack0000000000000048;
  unaff_x20[2] = uStack0000000000000040;
  puVar7 = System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo;
  puVar6 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar5 = System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo;
  puVar4 = System_Func<JsonParser_JsonValue,_string>_TypeInfo;
  puVar3 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar2 = PTR_DAT_0664b728;
  puVar1 = PTR_DAT_06648110;
  uStack0000000000000050 = uStack0000000000000040;
  uStack0000000000000070 = uStack0000000000000040;
  uStack0000000000000080 = uStack0000000000000040;
  if (param_2 != 0) {
                    /* try { // try from 05259474 to 05359607 has its CatchHandler @ 05259474
                       catch() { ... } // from try @ 05259474 with catch @ 05259474
                       catch() { ... } // from try @ 05259738 with catch @ 05259474
                       catch() { ... } // from try @ 05259818 with catch @ 05259474
                       catch() { ... } // from try @ 05259870 with catch @ 05259474 */
    puStack0000000000000058 = puStack0000000000000048;
    FUN_0479a870(&stack0x00000018,param_2,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
    in_stack_000000c0 = in_stack_00000038;
    unaff_x20[1] = in_stack_00000020;
    *unaff_x20 = in_stack_00000018;
    unaff_x20[3] = in_stack_00000030;
    unaff_x20[2] = in_stack_00000028;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x000000a0;
    while (uVar9 = FUN_04a08dd8(&stack0x000000a0,*(undefined8 *)puVar3), lVar12 = in_stack_000000b8,
          (uVar9 & 1) != 0) {
      if ((in_stack_000000b8 == 0) || (*(long *)(in_stack_000000b8 + 0xf8) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0524e454();
      if (*(long *)(lVar12 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar15 = *(long **)(unaff_x19 + 0x18);
      uVar16 = *(undefined8 *)(lVar12 + 0xd0);
      uVar10 = FUN_0524e5f0();
      uVar10 = FUN_04e80678(uVar16,*(undefined8 *)puVar7,uVar10,0);
      lVar17 = *(long *)puVar1;
      lVar12 = *(long *)(lVar17 + 0x38);
      if (lVar12 == 0) {
        FUN_02d87268(lVar17);
        lVar12 = *(long *)(lVar17 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02d8720c();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02d8720c();
      }
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar13 = *plVar15;
      lVar17 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar16 = **(undefined8 **)(lVar12 + 0xb8);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar17) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_052595cc;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar15,lVar17,1);
LAB_052595cc:
      (*(code *)*puVar11)(plVar15,3,uVar10,uVar16,puVar11[1]);
    }
    FUN_04a08efc(&stack0x000000a0,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_047cea60(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                   *(undefined8 *)
                    System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                  );
      in_stack_00000090 = in_stack_00000038;
      puStack0000000000000078 = in_stack_00000020;
      uStack0000000000000070 = in_stack_00000018;
      puStack0000000000000088 = in_stack_00000030;
      uStack0000000000000080 = in_stack_00000028;
      do {
        uVar9 = FUN_04a12944(&stack0x00000070,*(undefined8 *)puVar5);
        if ((uVar9 & 1) == 0) {
          FUN_04a12a68(&stack0x00000070,
                       *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
          return;
        }
        if (puStack0000000000000088 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0479a870(&stack0x00000018,puStack0000000000000088,
                     *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
        uStack0000000000000040 = in_stack_00000018;
        in_stack_00000018 = 0;
        puStack0000000000000048 = in_stack_00000020;
        puStack0000000000000058 = in_stack_00000030;
        uStack0000000000000050 = in_stack_00000028;
        in_stack_00000060 = in_stack_00000038;
        in_stack_00000020 = (undefined1 *)&stack0x00000040;
        while (uVar9 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar6),
              puVar8 = puStack0000000000000058, (uVar9 & 1) != 0) {
          if ((puStack0000000000000058 == (undefined1 *)0x0) ||
             (*(long *)(puStack0000000000000058 + 200) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0524e454();
          if (*(long *)(puVar8 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          plVar15 = *(long **)(unaff_x19 + 0x18);
          uVar16 = *(undefined8 *)(puVar8 + 0xc0);
          uVar10 = FUN_0524e5f0();
          uVar10 = FUN_04e80678(uVar16,*(undefined8 *)puVar7,uVar10,0);
          lVar17 = *(long *)puVar1;
          lVar12 = *(long *)(lVar17 + 0x38);
          if (lVar12 == 0) {
            FUN_02d87268(lVar17);
            lVar12 = *(long *)(lVar17 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02d8720c();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02d8720c();
          }
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar13 = *plVar15;
          lVar17 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          uVar16 = **(undefined8 **)(lVar12 + 0xb8);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar17) {
                puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_05259778;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d87540(plVar15,lVar17,1);
LAB_05259778:
          (*(code *)*puVar11)(plVar15,3,uVar10,uVar16,puVar11[1]);
        }
        FUN_04a08efc(&stack0x00000040,*(undefined8 *)puVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


