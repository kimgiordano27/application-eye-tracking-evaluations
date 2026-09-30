/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$CreateDictionary
ENTRY_POINT: 0644ff90
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsData__CreateDictionary(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  double dVar13;
  undefined4 uVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *unaff_x29;
  float fVar21;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong uStack00000000000000c0;
  ulong uStack00000000000000e8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  double in_stack_00000110;
  undefined8 in_stack_00000118;
  double in_stack_00000120;
  ulong in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000150;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  double in_stack_00000190;
  undefined8 in_stack_00000198;
  double in_stack_000001a0;
  ulong in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 in_stack_000001c8;
  
code_r0x0644ff90:
  plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 8);
  *plVar7 = unaff_x27;
  thunk_FUN_02f411dc(plVar7,unaff_x27);
LAB_0644ffac:
  uVar8 = FUN_03a28fc0(unaff_x19,unaff_x27,
                       *(undefined8 *)
                        System_Func<EngineProfiler_InternalSimulationType,_EngineProfiler_InternalSimulationType>_TypeInfo
                      );
  lVar12 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar12);
    lVar12 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (lVar18 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar12);
      lVar12 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    lVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_0513bf60(lVar18,uVar20,*(undefined8 *)System_Func<byte,_sbyte,_object>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 0x10);
    *plVar7 = lVar18;
    thunk_FUN_02f411dc(plVar7,lVar18);
  }
  uVar8 = FUN_03a21c54(uVar8,lVar18,
                       *(undefined8 *)System_Func<EasyColliderQuickHull_Horizon,_bool>_TypeInfo);
  lVar12 = FUN_03a31888(uVar8,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
  lVar18 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,
                        *(undefined4 *)(unaff_x26 + 0x30));
  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                              System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_0417df1c(lVar9,*(undefined8 *)
                      System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
              );
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (0 < *(int *)(lVar12 + 0x18)) {
    iVar17 = 0;
    do {
      lVar10 = FUN_03fd09cc(lVar12,iVar17,*unaff_x21);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      dVar13 = *(double *)(lVar10 + 0x20);
      uVar20 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(ulong *)(lVar10 + 0x10);
      uVar14 = *(undefined4 *)(lVar10 + 0x28);
      uVar2 = *(undefined4 *)(lVar10 + 0x2c);
      uVar8 = *(undefined8 *)(lVar10 + 0x28);
      lVar10 = FUN_03fd09cc(lVar12,iVar17,*unaff_x21);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar11 = *(uint *)(lVar10 + 0x30);
      if ((long)(int)uVar11 < (long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1)) {
        if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = uVar11;
        if ((int)uVar11 < 0) {
          uVar1 = uVar11 + 1;
        }
        if (in_stack_00000138 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        iVar3 = *(int *)(in_stack_00000138 + 0x18);
        uVar1 = (int)uVar1 >> 1;
        if ((uVar11 & 1) == 0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          piVar15 = (int *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
          uVar14 = 1;
        }
        else {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          piVar15 = (int *)(lVar18 + (long)(int)uVar1 * 8 + 0x24);
          uVar14 = 2;
        }
        *piVar15 = iVar17 + *(int *)(in_stack_00000130 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar16 = *unaff_x23;
        lVar10 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar11 = *(uint *)(lVar9 + 0x18);
        iVar3 = uVar1 + iVar3;
        if (uVar11 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar11 + 1;
          lVar10 = lVar10 + (long)(int)uVar11 * 0x20;
          *(int *)(lVar10 + 0x38) = iVar3;
          *(undefined4 *)(lVar10 + 0x3c) = uVar14;
          *(double *)(lVar10 + 0x30) = dVar13;
          *(undefined8 *)(lVar10 + 0x28) = uVar20;
          *(ulong *)(lVar10 + 0x20) = uVar6;
          thunk_FUN_02f411dc(lVar10 + 0x28,0);
        }
        else {
          in_stack_00000198 = CONCAT44(uVar14,iVar3);
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar20;
          in_stack_00000190 = dVar13;
          Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
                    (lVar9,&stack0x00000180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar16 = *unaff_x23;
        lVar10 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar11 = *(uint *)(lVar9 + 0x18);
        if (uVar11 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar11 + 1;
          lVar10 = lVar10 + (long)(int)uVar11 * 0x20;
          *(undefined4 *)(lVar10 + 0x38) = uVar14;
          *(undefined4 *)(lVar10 + 0x3c) = uVar2;
          *(double *)(lVar10 + 0x30) = dVar13;
          *(undefined8 *)(lVar10 + 0x28) = uVar20;
          *(ulong *)(lVar10 + 0x20) = uVar6;
          thunk_FUN_02f411dc(lVar10 + 0x28,0);
        }
        else {
          in_stack_00000180 = uVar6;
          in_stack_00000188 = uVar20;
          in_stack_00000190 = dVar13;
          in_stack_00000198 = uVar8;
          Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
                    (lVar9,&stack0x00000180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar12 + 0x18));
  }
  uVar8 = FUN_03a13294(in_stack_00000138,lVar18,
                       *(undefined8 *)
                        System_Func<DiscriminatedUnionConverter_UnionCase,_bool>_TypeInfo);
  in_stack_00000138 =
       FUN_03a2f044(uVar8,*(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo)
  ;
  puVar5 = System_Func<byte,_double,_object>_TypeInfo;
  thunk_FUN_02f411dc(in_stack_00000018);
  uVar8 = FUN_03a13304(in_stack_00000130,lVar9,
                       *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo);
  in_stack_00000130 =
       FUN_03a2f0cc(uVar8,*(undefined8 *)
                           System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
  puVar19 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
  thunk_FUN_02f411dc(in_stack_000001c8);
  do {
    FUN_0464ac24(&stack0x00000180,in_stack_00000020,
                 *(undefined8 *)System_Func<byte,_Decimal,_object>_TypeInfo);
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
    in_stack_00000198 = in_stack_00000118;
    in_stack_00000190 = in_stack_00000110;
    in_stack_000001a8 = in_stack_00000128;
    in_stack_000001a0 = in_stack_00000120;
    in_stack_000001b8 = in_stack_00000138;
    in_stack_000001b0 = in_stack_00000130;
    FUN_0464acc4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar5);
    uVar6 = FUN_04df6d30(&stack0x00000140,*unaff_x29);
    unaff_x26 = in_stack_00000150;
    if ((uVar6 & 1) == 0) {
      FUN_04df6d2c(&stack0x00000140,
                   *(undefined8 *)System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo);
      uVar8 = FUN_03a222a8(in_stack_00000020,
                           *(undefined8 *)
                            System_Func<EngineProfiler_InternalSimulationType,_ValueTuple<IntPtr,_IntPtr>>_TypeInfo
                          );
      uVar8 = FUN_03a2efbc(uVar8,*(undefined8 *)
                                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                          );
      *(undefined8 *)(in_stack_00000010 + 0x38) = uVar8;
      thunk_FUN_02f411dc();
      return;
    }
    uVar6 = FUN_03a07420(in_stack_00000020,*unaff_x25);
    if ((uVar6 & 1) == 0) {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
LAB_0644fdf0:
      uVar20 = *(undefined8 *)(unaff_x26 + 0x10);
      lVar12 = FUN_02f07f14(*(undefined8 *)
                             System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo,0);
      thunk_FUN_02f411dc(in_stack_00000038);
      lVar18 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,0);
      thunk_FUN_02f411dc(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
      uStack00000000000000c0 =
           CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
      uVar11 = *(uint *)(unaff_x26 + 0x34);
      fVar21 = *(float *)(unaff_x26 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(unaff_x26 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_064506e0();
        uVar11 = *(uint *)(unaff_x26 + 0x34);
        fVar21 = *(float *)(unaff_x26 + 0x38);
      }
      uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      in_stack_00000180 = uStack00000000000000c0;
      in_stack_00000190 = 0.0;
      in_stack_000001a8 = uStack00000000000000e8;
      in_stack_00000188 = uVar20;
      in_stack_00000198 = uVar8;
      in_stack_000001a0 = (double)uVar11 * (double)fVar21;
      in_stack_000001b0 = lVar12;
      in_stack_000001b8 = lVar18;
      FUN_0464acc4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar5);
    }
    else {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      dVar13 = *(double *)(unaff_x26 + 0x10);
      FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar19);
      if (((in_stack_00000190 < dVar13) ||
          (cVar4 = *(char *)(unaff_x26 + 0x20),
          FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar19),
          (cVar4 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
         ((*(char *)(unaff_x26 + 0x20) == '\0' &&
          ((*(char *)(unaff_x26 + 0x21) != '\0' ||
           (FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar19),
           (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_0644fdf0;
      iVar17 = *(int *)(unaff_x26 + 0x24);
      FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar19);
      if ((iVar17 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
      goto LAB_0644fdf0;
    }
    FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar19);
    lVar12 = in_stack_000001b0;
    uVar6 = in_stack_00000180;
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    in_stack_00000128 = in_stack_000001a8;
    in_stack_00000120 = in_stack_000001a0;
    in_stack_00000138 = in_stack_000001b8;
    in_stack_00000130 = in_stack_000001b0;
    in_stack_00000110 = *(double *)(unaff_x26 + 0x18);
    unaff_x19 = FUN_0644f6a4(unaff_x26,in_stack_00000028);
    lVar18 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    if ((uVar6 & 1) == 0) break;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar18);
      lVar18 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    lVar9 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
    if (lVar9 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar18);
        lVar18 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
      }
      uVar8 = **(undefined8 **)(lVar18 + 0xb8);
      lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo)
      ;
      FUN_0516b740(lVar9,uVar8,*(undefined8 *)System_Func<byte,_int,_object>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 0x18)
      ;
      *plVar7 = lVar9;
      thunk_FUN_02f411dc(plVar7,lVar9);
      puVar19 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
    }
    uVar8 = FUN_03a21f4c(unaff_x19,lVar9,
                         *(undefined8 *)System_Func<EasyColliderQuickHull_Face,_bool>_TypeInfo);
    uVar8 = FUN_03a13304(lVar12,uVar8,
                         *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo);
    in_stack_00000130 =
         FUN_03a2f0cc(uVar8,*(undefined8 *)
                             System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    thunk_FUN_02f411dc(in_stack_000001c8);
  } while( true );
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar18);
    lVar18 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  unaff_x27 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
  if (unaff_x27 == 0) goto code_r0x0644ff40;
  goto LAB_0644ffac;
code_r0x0644ff40:
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar18);
    lVar18 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  uVar8 = **(undefined8 **)(lVar18 + 0xb8);
  unaff_x27 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo
                                );
  FUN_05174b58(unaff_x27,uVar8,*(undefined8 *)System_Func<byte,_long,_object>_TypeInfo,0);
  goto code_r0x0644ff90;
}


