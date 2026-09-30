/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$TrySerialize
ENTRY_POINT: 06450374
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsEnumConverter__TrySerialize
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar20;
  double dVar21;
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
  long lStack0000000000000130;
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
  
code_r0x06450374:
  uVar9 = FUN_03a13304(param_1,param_2,param_3);
  lStack0000000000000130 =
       FUN_03a2f0cc(uVar9,*(undefined8 *)
                           System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
  puVar18 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
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
    in_stack_000001b0 = lStack0000000000000130;
    FUN_0464acc4(in_stack_00000020,&stack0x00000180,*unaff_x28);
    uVar5 = FUN_04df6d30(&stack0x00000140,*unaff_x29);
    lVar16 = in_stack_00000150;
    if ((uVar5 & 1) == 0) {
      FUN_04df6d2c(&stack0x00000140,
                   *(undefined8 *)System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo);
      uVar9 = FUN_03a222a8(in_stack_00000020,
                           *(undefined8 *)
                            System_Func<EngineProfiler_InternalSimulationType,_ValueTuple<IntPtr,_IntPtr>>_TypeInfo
                          );
      uVar9 = FUN_03a2efbc(uVar9,*(undefined8 *)
                                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                          );
      *(undefined8 *)(in_stack_00000010 + 0x38) = uVar9;
      thunk_FUN_02f411dc();
      return;
    }
    uVar5 = FUN_03a07420(in_stack_00000020,*unaff_x20);
    if ((uVar5 & 1) == 0) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
LAB_0644fdf0:
      uVar19 = *(undefined8 *)(lVar16 + 0x10);
      lVar6 = FUN_02f07f14(*(undefined8 *)
                            System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo,0);
      thunk_FUN_02f411dc(in_stack_00000038);
      lVar11 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,0);
      thunk_FUN_02f411dc(in_stack_00000030);
      uStack00000000000000c0 = (ulong)*(uint *)(lVar16 + 0x24) << 0x20;
      uStack00000000000000c0 = CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(lVar16 + 0x20))
      ;
      uVar10 = *(uint *)(lVar16 + 0x34);
      fVar20 = *(float *)(lVar16 + 0x38);
      uVar9 = *(undefined8 *)(lVar16 + 0x34);
      uStack00000000000000e8 = 0;
      if (*(long *)(lVar16 + 0x40) != 0) {
        uStack00000000000000e8 = FUN_064506e0();
        uVar10 = *(uint *)(lVar16 + 0x34);
        fVar20 = *(float *)(lVar16 + 0x38);
      }
      uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      in_stack_00000180 = uStack00000000000000c0;
      in_stack_00000190 = 0.0;
      in_stack_000001a8 = uStack00000000000000e8;
      in_stack_00000188 = uVar19;
      in_stack_00000198 = uVar9;
      in_stack_000001a0 = (double)uVar10 * (double)fVar20;
      in_stack_000001b0 = lVar6;
      in_stack_000001b8 = lVar11;
      FUN_0464acc4(in_stack_00000020,&stack0x00000180,*unaff_x28);
    }
    else {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      dVar21 = *(double *)(lVar16 + 0x10);
      FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar18);
      if (((in_stack_00000190 < dVar21) ||
          (cVar4 = *(char *)(lVar16 + 0x20),
          FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar18),
          (cVar4 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
         ((*(char *)(lVar16 + 0x20) == '\0' &&
          ((*(char *)(lVar16 + 0x21) != '\0' ||
           (FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar18),
           (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_0644fdf0;
      iVar15 = *(int *)(lVar16 + 0x24);
      FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar18);
      if ((iVar15 != in_stack_00000180._4_4_) || (*(int *)(lVar16 + 0x34) != 0)) goto LAB_0644fdf0;
    }
    FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar18);
    lVar6 = in_stack_000001b8;
    param_1 = in_stack_000001b0;
    uVar5 = in_stack_00000180;
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    in_stack_00000128 = in_stack_000001a8;
    in_stack_00000120 = in_stack_000001a0;
    in_stack_00000138 = in_stack_000001b8;
    in_stack_00000110 = *(double *)(lVar16 + 0x18);
    uVar9 = FUN_0644f6a4(lVar16,unaff_x22);
    lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    if ((uVar5 & 1) == 0) break;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar11);
      lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if (lVar16 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar11);
        lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
      }
      uVar19 = **(undefined8 **)(lVar11 + 0xb8);
      lVar16 = thunk_FUN_02ef1808(*(undefined8 *)
                                   System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo
                                 );
      FUN_0516b740(lVar16,uVar19,*(undefined8 *)System_Func<byte,_int,_object>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 0x18)
      ;
      *plVar7 = lVar16;
      thunk_FUN_02f411dc(plVar7,lVar16);
      puVar18 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
    }
    uVar9 = FUN_03a21f4c(uVar9,lVar16,
                         *(undefined8 *)System_Func<EasyColliderQuickHull_Face,_bool>_TypeInfo);
    uVar9 = FUN_03a13304(param_1,uVar9,
                         *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo);
    lStack0000000000000130 =
         FUN_03a2f0cc(uVar9,*(undefined8 *)
                             System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    thunk_FUN_02f411dc(in_stack_000001c8);
  } while( true );
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar11);
    lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar17 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar11);
      lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    lVar17 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo
                               );
    FUN_05174b58(lVar17,uVar19,*(undefined8 *)System_Func<byte,_long,_object>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 8);
    *plVar7 = lVar17;
    thunk_FUN_02f411dc(plVar7,lVar17);
  }
  uVar9 = FUN_03a28fc0(uVar9,lVar17,
                       *(undefined8 *)
                        System_Func<EngineProfiler_InternalSimulationType,_EngineProfiler_InternalSimulationType>_TypeInfo
                      );
  lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar11);
    lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar17 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar11);
      lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    lVar17 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_0513bf60(lVar17,uVar19,*(undefined8 *)System_Func<byte,_sbyte,_object>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 0x10);
    *plVar7 = lVar17;
    thunk_FUN_02f411dc(plVar7,lVar17);
  }
  uVar9 = FUN_03a21c54(uVar9,lVar17,
                       *(undefined8 *)System_Func<EasyColliderQuickHull_Horizon,_bool>_TypeInfo);
  lVar11 = FUN_03a31888(uVar9,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
  lVar17 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,
                        *(undefined4 *)(lVar16 + 0x30));
  param_2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_0417df1c(param_2,*(undefined8 *)
                        System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
              );
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (0 < *(int *)(lVar11 + 0x18)) {
    iVar15 = 0;
    do {
      lVar8 = FUN_03fd09cc(lVar11,iVar15,*unaff_x21);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      dVar21 = *(double *)(lVar8 + 0x20);
      uVar19 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(ulong *)(lVar8 + 0x10);
      uVar12 = *(undefined4 *)(lVar8 + 0x28);
      uVar2 = *(undefined4 *)(lVar8 + 0x2c);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      lVar8 = FUN_03fd09cc(lVar11,iVar15,*unaff_x21);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar10 = *(uint *)(lVar8 + 0x30);
      if ((long)(int)uVar10 < (long)(ulong)(uint)(*(int *)(lVar16 + 0x30) << 1)) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = uVar10;
        if ((int)uVar10 < 0) {
          uVar1 = uVar10 + 1;
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        iVar3 = *(int *)(lVar6 + 0x18);
        uVar1 = (int)uVar1 >> 1;
        if ((uVar10 & 1) == 0) {
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          piVar13 = (int *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
          uVar12 = 1;
        }
        else {
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          piVar13 = (int *)(lVar17 + (long)(int)uVar1 * 8 + 0x24);
          uVar12 = 2;
        }
        *piVar13 = iVar15 + *(int *)(param_1 + 0x18);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *unaff_x23;
        lVar8 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar10 = *(uint *)(param_2 + 0x18);
        iVar3 = uVar1 + iVar3;
        if (uVar10 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar10 + 1;
          lVar8 = lVar8 + (long)(int)uVar10 * 0x20;
          *(int *)(lVar8 + 0x38) = iVar3;
          *(undefined4 *)(lVar8 + 0x3c) = uVar12;
          *(double *)(lVar8 + 0x30) = dVar21;
          *(undefined8 *)(lVar8 + 0x28) = uVar19;
          *(ulong *)(lVar8 + 0x20) = uVar5;
          thunk_FUN_02f411dc(lVar8 + 0x28,0);
        }
        else {
          in_stack_00000198 = CONCAT44(uVar12,iVar3);
          in_stack_00000180 = uVar5;
          in_stack_00000188 = uVar19;
          in_stack_00000190 = dVar21;
          Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
                    (param_2,&stack0x00000180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *unaff_x23;
        lVar8 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar10 = *(uint *)(param_2 + 0x18);
        if (uVar10 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar10 + 1;
          lVar8 = lVar8 + (long)(int)uVar10 * 0x20;
          *(undefined4 *)(lVar8 + 0x38) = uVar12;
          *(undefined4 *)(lVar8 + 0x3c) = uVar2;
          *(double *)(lVar8 + 0x30) = dVar21;
          *(undefined8 *)(lVar8 + 0x28) = uVar19;
          *(ulong *)(lVar8 + 0x20) = uVar5;
          thunk_FUN_02f411dc(lVar8 + 0x28,0);
        }
        else {
          in_stack_00000180 = uVar5;
          in_stack_00000188 = uVar19;
          in_stack_00000190 = dVar21;
          in_stack_00000198 = uVar9;
          Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
                    (param_2,&stack0x00000180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(lVar11 + 0x18));
  }
  uVar9 = FUN_03a13294(lVar6,lVar17,
                       *(undefined8 *)
                        System_Func<DiscriminatedUnionConverter_UnionCase,_bool>_TypeInfo);
  in_stack_00000138 =
       FUN_03a2f044(uVar9,*(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo)
  ;
  unaff_x28 = (undefined8 *)System_Func<byte,_double,_object>_TypeInfo;
  thunk_FUN_02f411dc(in_stack_00000018);
  param_3 = *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo;
  unaff_x22 = in_stack_00000028;
  goto code_r0x06450374;
}


