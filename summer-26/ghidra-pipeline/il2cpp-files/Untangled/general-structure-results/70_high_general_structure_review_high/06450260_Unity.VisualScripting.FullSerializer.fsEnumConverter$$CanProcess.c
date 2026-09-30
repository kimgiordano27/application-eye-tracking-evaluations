/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$CanProcess
ENTRY_POINT: 06450260
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


void Unity_VisualScripting_FullSerializer_fsEnumConverter__CanProcess(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  int in_w8;
  long lVar11;
  uint in_w9;
  undefined4 in_w10;
  long in_x11;
  int *piVar12;
  long in_x12;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar13;
  long lVar14;
  long unaff_x27;
  undefined8 *puVar15;
  undefined8 uVar16;
  long unaff_x28;
  long unaff_x29;
  float fVar17;
  double dVar18;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  double in_stack_00000070;
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
  
code_r0x06450260:
  uVar10 = *(uint *)(unaff_x27 + 0x18);
  if (uVar10 < *(uint *)(in_x11 + 0x18)) {
    *(uint *)(unaff_x27 + 0x18) = uVar10 + 1;
    lVar14 = in_x11 + (long)(int)uVar10 * 0x20;
    *(uint *)(lVar14 + 0x38) = in_w9 + in_w8;
    *(undefined4 *)(lVar14 + 0x3c) = in_w10;
    *(double *)(lVar14 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar14 + 0x28) = in_stack_00000068;
    *(ulong *)(lVar14 + 0x20) = in_stack_00000060;
    thunk_FUN_02f411dc(lVar14 + 0x28,0);
  }
  else {
    in_stack_00000188 = in_stack_00000068;
    in_stack_00000180 = in_stack_00000060;
    in_stack_00000190 = in_stack_00000070;
    in_stack_00000198 = CONCAT44(in_w10,in_w9 + in_w8);
    Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
              (unaff_x27,&stack0x00000180,
               *(undefined8 *)(*(long *)(*(long *)(in_x12 + 0x20) + 0xc0) + 0x70));
  }
LAB_06450308:
  unaff_w19 = unaff_w19 + 1;
  if (*(int *)(unaff_x28 + 0x18) <= unaff_w19) {
LAB_06450318:
    uVar9 = FUN_03a13294(in_stack_00000138,unaff_x29,
                         *(undefined8 *)
                          System_Func<DiscriminatedUnionConverter_UnionCase,_bool>_TypeInfo);
    in_stack_00000138 =
         FUN_03a2f044(uVar9,*(undefined8 *)
                             System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
    puVar6 = System_Func<byte,_double,_object>_TypeInfo;
    thunk_FUN_02f411dc(in_stack_00000018);
    uVar9 = FUN_03a13304(in_stack_00000130,unaff_x27,
                         *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo);
    in_stack_00000130 =
         FUN_03a2f0cc(uVar9,*(undefined8 *)
                             System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    puVar15 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
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
      FUN_0464acc4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar6);
      uVar7 = FUN_04df6d30(&stack0x00000140,*unaff_x25);
      unaff_x26 = in_stack_00000150;
      if ((uVar7 & 1) == 0) {
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
      uVar7 = FUN_03a07420(in_stack_00000020,*unaff_x20);
      if ((uVar7 & 1) == 0) {
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
LAB_0644fdf0:
        uVar16 = *(undefined8 *)(unaff_x26 + 0x10);
        lVar14 = FUN_02f07f14(*(undefined8 *)
                               System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo,0)
        ;
        thunk_FUN_02f411dc(in_stack_00000038);
        lVar11 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,0);
        thunk_FUN_02f411dc(in_stack_00000030);
        uStack00000000000000c0 = (ulong)*(uint *)(unaff_x26 + 0x24) << 0x20;
        uStack00000000000000c0 =
             CONCAT53(uStack00000000000000c0._3_5_,*(undefined3 *)(unaff_x26 + 0x20));
        uVar10 = *(uint *)(unaff_x26 + 0x34);
        fVar17 = *(float *)(unaff_x26 + 0x38);
        uVar9 = *(undefined8 *)(unaff_x26 + 0x34);
        uStack00000000000000e8 = 0;
        if (*(long *)(unaff_x26 + 0x40) != 0) {
          uStack00000000000000e8 = FUN_064506e0();
          uVar10 = *(uint *)(unaff_x26 + 0x34);
          fVar17 = *(float *)(unaff_x26 + 0x38);
        }
        uStack00000000000000e8 = uStack00000000000000e8 & 0xffffffff;
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        in_stack_00000180 = uStack00000000000000c0;
        in_stack_00000190 = 0.0;
        in_stack_000001a8 = uStack00000000000000e8;
        in_stack_00000188 = uVar16;
        in_stack_00000198 = uVar9;
        in_stack_000001a0 = (double)uVar10 * (double)fVar17;
        in_stack_000001b0 = lVar14;
        in_stack_000001b8 = lVar11;
        FUN_0464acc4(in_stack_00000020,&stack0x00000180,*(undefined8 *)puVar6);
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
        dVar18 = *(double *)(unaff_x26 + 0x10);
        FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar15);
        if (((in_stack_00000190 < dVar18) ||
            (cVar5 = *(char *)(unaff_x26 + 0x20),
            FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar15),
            (cVar5 != '\0') == ((in_stack_00000180 & 1) == 0))) ||
           ((*(char *)(unaff_x26 + 0x20) == '\0' &&
            ((*(char *)(unaff_x26 + 0x21) != '\0' ||
             (FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar15),
             (in_stack_00000180 & 0x10000) != 0)))))) goto LAB_0644fdf0;
        iVar4 = *(int *)(unaff_x26 + 0x24);
        FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar15);
        if ((iVar4 != in_stack_00000180._4_4_) || (*(int *)(unaff_x26 + 0x34) != 0))
        goto LAB_0644fdf0;
      }
      FUN_0464abd0(&stack0x00000180,in_stack_00000020,*puVar15);
      lVar14 = in_stack_000001b0;
      uVar7 = in_stack_00000180;
      in_stack_00000108 = in_stack_00000188;
      in_stack_00000100 = in_stack_00000180;
      in_stack_00000118 = in_stack_00000198;
      in_stack_00000128 = in_stack_000001a8;
      in_stack_00000120 = in_stack_000001a0;
      in_stack_00000138 = in_stack_000001b8;
      in_stack_00000130 = in_stack_000001b0;
      in_stack_00000110 = *(double *)(unaff_x26 + 0x18);
      uVar9 = FUN_0644f6a4(unaff_x26,in_stack_00000028);
      lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
      if ((uVar7 & 1) == 0) goto code_r0x0644ff1c;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar11);
        lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
      }
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar11);
          lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
        }
        uVar16 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                     System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo
                                   );
        FUN_0516b740(lVar13,uVar16,*(undefined8 *)System_Func<byte,_int,_object>_TypeInfo,0);
        plVar8 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) +
                         0x18);
        *plVar8 = lVar13;
        thunk_FUN_02f411dc(plVar8,lVar13);
        puVar15 = (undefined8 *)System_Func<byte,_byte,_object>_TypeInfo;
      }
      uVar9 = FUN_03a21f4c(uVar9,lVar13,
                           *(undefined8 *)System_Func<EasyColliderQuickHull_Face,_bool>_TypeInfo);
      uVar9 = FUN_03a13304(lVar14,uVar9,
                           *(undefined8 *)System_Func<DynamicHeap_TypeData,_ushort>_TypeInfo);
      in_stack_00000130 =
           FUN_03a2f0cc(uVar9,*(undefined8 *)
                               System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
      thunk_FUN_02f411dc(in_stack_000001c8);
    } while( true );
  }
  goto LAB_064500ec;
code_r0x0644ff1c:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar11);
    lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar11);
      lVar11 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    uVar16 = **(undefined8 **)(lVar11 + 0xb8);
    lVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo
                               );
    FUN_05174b58(lVar14,uVar16,*(undefined8 *)System_Func<byte,_long,_object>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 8);
    *plVar8 = lVar14;
    thunk_FUN_02f411dc(plVar8,lVar14);
  }
  uVar9 = FUN_03a28fc0(uVar9,lVar14,
                       *(undefined8 *)
                        System_Func<EngineProfiler_InternalSimulationType,_EngineProfiler_InternalSimulationType>_TypeInfo
                      );
  lVar14 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar14);
    lVar14 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
  }
  lVar11 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar14);
      lVar14 = *(long *)System_Func<byte,_float,_object>_TypeInfo;
    }
    uVar16 = **(undefined8 **)(lVar14 + 0xb8);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_0513bf60(lVar11,uVar16,*(undefined8 *)System_Func<byte,_sbyte,_object>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)System_Func<byte,_float,_object>_TypeInfo + 0xb8) + 0x10);
    *plVar8 = lVar11;
    thunk_FUN_02f411dc(plVar8,lVar11);
  }
  uVar9 = FUN_03a21c54(uVar9,lVar11,
                       *(undefined8 *)System_Func<EasyColliderQuickHull_Horizon,_bool>_TypeInfo);
  unaff_x28 = FUN_03a31888(uVar9,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
  unaff_x29 = FUN_02f07f14(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,
                           *(undefined4 *)(unaff_x26 + 0x30));
  unaff_x27 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_0417df1c(unaff_x27,
               *(undefined8 *)
                System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo);
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (0 < *(int *)(unaff_x28 + 0x18)) goto code_r0x064500e8;
  goto LAB_06450318;
code_r0x064500e8:
  unaff_w19 = 0;
LAB_064500ec:
  lVar14 = FUN_03fd09cc(unaff_x28,unaff_w19,*unaff_x21);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  in_stack_00000070 = *(double *)(lVar14 + 0x20);
  in_stack_00000068 = *(undefined8 *)(lVar14 + 0x18);
  in_stack_00000060 = *(ulong *)(lVar14 + 0x10);
  uVar2 = *(undefined4 *)(lVar14 + 0x28);
  uVar3 = *(undefined4 *)(lVar14 + 0x2c);
  uVar9 = *(undefined8 *)(lVar14 + 0x28);
  lVar14 = FUN_03fd09cc(unaff_x28,unaff_w19,*unaff_x21);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar10 = *(uint *)(lVar14 + 0x30);
  if ((long)(ulong)(uint)(*(int *)(unaff_x26 + 0x30) << 1) <= (long)(int)uVar10) {
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = *unaff_x23;
    lVar14 = *(long *)(unaff_x27 + 0x10);
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar10 = *(uint *)(unaff_x27 + 0x18);
    if (uVar10 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x27 + 0x18) = uVar10 + 1;
      lVar14 = lVar14 + (long)(int)uVar10 * 0x20;
      *(undefined4 *)(lVar14 + 0x38) = uVar2;
      *(undefined4 *)(lVar14 + 0x3c) = uVar3;
      *(double *)(lVar14 + 0x30) = in_stack_00000070;
      *(undefined8 *)(lVar14 + 0x28) = in_stack_00000068;
      *(ulong *)(lVar14 + 0x20) = in_stack_00000060;
      thunk_FUN_02f411dc(lVar14 + 0x28,0);
    }
    else {
      in_stack_00000180 = in_stack_00000060;
      in_stack_00000188 = in_stack_00000068;
      in_stack_00000190 = in_stack_00000070;
      in_stack_00000198 = uVar9;
      Unity_Collections_NativeArray<RenderManager_RenderDataWork>__get_IsCreated
                (unaff_x27,&stack0x00000180,
                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    goto LAB_06450308;
  }
  if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = uVar10;
  if ((int)uVar10 < 0) {
    uVar1 = uVar10 + 1;
  }
  if (in_stack_00000138 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  in_w8 = *(int *)(in_stack_00000138 + 0x18);
  in_w9 = (int)uVar1 >> 1;
  if ((uVar10 & 1) == 0) {
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    piVar12 = (int *)(unaff_x29 + (long)(int)in_w9 * 8 + 0x20);
    in_w10 = 1;
  }
  else {
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    piVar12 = (int *)(unaff_x29 + (long)(int)in_w9 * 8 + 0x24);
    in_w10 = 2;
  }
  *piVar12 = unaff_w19 + *(int *)(in_stack_00000130 + 0x18);
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  in_x12 = *unaff_x23;
  in_x11 = *(long *)(unaff_x27 + 0x10);
  *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
  if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  goto code_r0x06450260;
}


