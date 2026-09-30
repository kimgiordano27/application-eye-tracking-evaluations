/*
FUNCTION_NAME: FUN_05958af4
ENTRY_POINT: 05958af4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05959538) */

void FUN_05958af4(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 local_c0 [16];
  long local_b0;
  long *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_066d3753 & 1) == 0) {
    FUN_02b3c81c(Method_System_Numerics_Vector<ulong>_get_Count__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_System_Numerics_Vector<ulong>_get_Item__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action<TimerState>>__ctor__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeParameter<APVLeakReductionMode>__ctor__);
    DAT_066d3753 = 1;
  }
  puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  auVar16 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (param_3 == 0) {
LAB_05959530:
    local_a0 = auVar16;
    local_90 = auVar3;
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar7 = FUN_0590661c(param_3,*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                      );
  local_48 = uVar7;
  lVar8 = FUN_0590661c(param_3,*(undefined8 *)puVar6);
  FUN_05959628(param_1,param_2,lVar8,uVar7,&local_60,&local_70,&local_80);
  auVar3._8_8_ = local_90._8_8_;
  auVar3._0_8_ = local_90._0_8_;
  auVar16._8_8_ = local_a0._8_8_;
  auVar16._0_8_ = local_a0._0_8_;
  if (lVar8 == 0) goto LAB_05959530;
  local_90 = FUN_059291f0(lVar8,0);
  local_a0 = FUN_05929224(lVar8,0);
  FUN_05958018(param_1,param_1 + 0x158,&local_48);
  auVar16 = local_a0;
  auVar3 = local_90;
  if (param_2 == 0) goto LAB_05959530;
  plVar9 = (long *)FUN_032fab48(param_2,*(undefined8 *)
                                         Method_UnityEngine_Rendering_VolumeParameter<APVLeakReductionMode>__ctor__
                                ,&local_b0,*(undefined8 *)(param_1 + 0x110),
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                                ,0x14f,*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action<TimerState>>__ctor__
                               );
  puVar6 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
  local_a8 = plVar9;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar12 = *plVar9;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
        goto UnityEngine_Timeline_AnimationPlayableAsset__get_clipCaps;
      }
      uVar14 = uVar14 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02b7654c(plVar9,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                         0xc);
UnityEngine_Timeline_AnimationPlayableAsset__get_clipCaps:
  (*(code *)*puVar10)(plVar9,1,puVar10[1]);
  FUN_05958a94(param_1,&local_b0);
  lVar12 = local_b0;
  auVar16 = FUN_05928ec8(lVar8,0);
  plVar9 = local_a8;
  lVar15 = local_b0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined1 (*) [16])(lVar12 + 0x24) = auVar16;
  if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_b0 + 0x4c) = uStack_78;
  *(undefined8 *)(local_b0 + 0x44) = local_80;
  *(undefined8 *)(local_b0 + 0x3c) = uStack_58;
  *(undefined8 *)(local_b0 + 0x34) = local_60;
  *(undefined8 *)(local_b0 + 0x5c) = uStack_68;
  *(undefined8 *)(local_b0 + 0x54) = local_70;
  if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar12 = *local_a8;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05958dc4;
      }
      uVar14 = uVar14 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)puVar6,0);
LAB_05958dc4:
  (*(code *)*puVar10)(plVar9,lVar15 + 0x34,3,puVar10[1]);
  local_c0 = FUN_05928ec8(lVar8,0);
  puVar5 = Method_System_Collections_Generic_List<XmlNode>_Add__;
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__);
  }
  if (DAT_066d2bb0 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb0 = '\x01';
  }
  puVar4 = PTR_DAT_06322b80;
  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb1 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb1 = '\x01';
  }
  uVar2 = (uint)(ushort)local_c0._2_2_;
  if (local_c0._2_2_ != 0) {
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar12 = *(long *)puVar4;
    }
    piVar13 = *(int **)(lVar12 + 0xb8);
    if (uVar2 << 0x10 != *piVar13) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
      }
      if (uVar2 << 0x10 != piVar13[1]) goto LAB_05958f24;
    }
    plVar9 = local_a8;
    auVar16 = FUN_05928ec8(lVar8,0);
    local_c0 = auVar16;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05958f10;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar6,0);
    auVar16 = local_c0;
LAB_05958f10:
    local_c0 = auVar16;
    (*(code *)*puVar10)(plVar9,local_c0,1,puVar10[1]);
  }
LAB_05958f24:
  plVar9 = local_a8;
  lVar8 = local_b0;
  if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(local_b0 + 0x14) != 2) {
    if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar12 = *local_a8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05958f8c;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)puVar6,0);
LAB_05958f8c:
    (*(code *)*puVar10)(plVar9,lVar8 + 0x54,3,puVar10[1]);
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb0 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb0 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d2bb1 == '\0') {
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d2bb1 = '\x01';
  }
  uVar2 = (uint)(ushort)local_90._2_2_;
  if (local_90._2_2_ != 0) {
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = *(long *)puVar4;
    }
    piVar13 = *(int **)(lVar8 + 0xb8);
    if (uVar2 << 0x10 != *piVar13) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
      }
      if (uVar2 << 0x10 != piVar13[1]) goto LAB_059590b0;
    }
    plVar9 = local_a8;
    if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = *local_a8;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0595909c;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)puVar6,0);
LAB_0595909c:
    (*(code *)*puVar10)(plVar9,local_90,1,puVar10[1]);
  }
LAB_059590b0:
  if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(*(long *)(param_1 + 0x158) + 0x18) == 1) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    uVar2 = (uint)(ushort)local_a0._2_2_;
    if (local_a0._2_2_ != 0) {
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar4;
      }
      piVar13 = *(int **)(lVar8 + 0xb8);
      if (uVar2 << 0x10 != *piVar13) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        if (uVar2 << 0x10 != piVar13[1]) goto LAB_059591e4;
      }
      plVar9 = local_a8;
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *local_a8;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_059591c0;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)puVar6,0);
LAB_059591c0:
      (*(code *)*puVar10)(plVar9,local_a0,1,puVar10[1]);
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(local_b0 + 100) = local_a0;
    }
  }
LAB_059591e4:
  if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(char *)(local_b0 + 0x10) == '\0') {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    uVar2 = (uint)local_80._2_2_;
    if (local_80._2_2_ != 0) {
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar4;
      }
      piVar13 = *(int **)(lVar8 + 0xb8);
      if (uVar2 << 0x10 != *piVar13) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        if (uVar2 << 0x10 != piVar13[1]) goto LAB_0595939c;
      }
      plVar9 = local_a8;
      lVar8 = local_b0;
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *local_a8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_059592f8;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)puVar6,0);
LAB_059592f8:
      (*(code *)*puVar10)(plVar9,lVar8 + 0x44,3,puVar10[1]);
      plVar9 = local_a8;
      puVar5 = Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__;
      lVar8 = *(long *)Method_UnityEngine_Events_UnityEvent<GravityOverride>__ctor__;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar5;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto 
            UnityEngine_Timeline_AnimationPlayableAsset_<get_outputs>d__45__System_Collections_IEnumerable_GetEnumerator
            ;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar6,3);

      UnityEngine_Timeline_AnimationPlayableAsset_<get_outputs>d__45__System_Collections_IEnumerable_GetEnumerator
      :
      (*(code *)*puVar10)(plVar9,&local_80,uVar1,puVar10[1]);
    }
  }
LAB_0595939c:
  plVar9 = local_a8;
  puVar6 = Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__;
  lVar8 = *(long *)
           Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar8 = *(long *)puVar6;
  }
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  lVar12 = puVar10[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar10 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar7 = *puVar10;
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Numerics_Vector<ulong>_get_Count__);
    FUN_03e026bc(lVar12,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                 ,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar11 = lVar12;
    thunk_FUN_02bb0e9c(plVar11,lVar12);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar8 = *plVar9;
  lVar15 = *(long *)Method_System_Numerics_Vector<ulong>_get_Item__;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar15 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
        goto LAB_05959480;
      }
      uVar14 = uVar14 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar14 != 0);
  }
  lVar8 = FUN_02b7654c(plVar9);
LAB_05959480:
  lVar8 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar8 + 8),lVar15);
  (**(code **)(lVar8 + 8))(plVar9,lVar12,lVar8);
  plVar9 = local_a8;
  if (local_a8 != (long *)0x0) {
    lVar8 = *local_a8;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05959504;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(local_a8,*(long *)PTR_DAT_06312f78,0);
LAB_05959504:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  return;
}


