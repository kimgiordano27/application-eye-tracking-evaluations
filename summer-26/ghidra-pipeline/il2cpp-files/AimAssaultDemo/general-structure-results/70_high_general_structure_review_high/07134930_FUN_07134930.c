/*
FUNCTION_NAME: FUN_07134930
ENTRY_POINT: 07134930
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x071354b4) */

void FUN_07134930(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 local_98 [16];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_11;
  uStack_68 = param_12;
  local_80 = param_13;
  uStack_78 = param_14;
  if ((DAT_08267eff & 1) == 0) {
    FUN_0373b518(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_0373b518(PTR_DAT_07dfbd48);
    FUN_0373b518(PTR_DAT_07dfc280);
    FUN_0373b518(PTR_DAT_07dfc108);
    FUN_0373b518(PTR_DAT_07dfc188);
    FUN_0373b518(PTR_DAT_07df7550);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_0373b518(PTR_DAT_07df82f8);
    FUN_0373b518(System_Action<XRInputSubsystem>_TypeInfo);
    FUN_0373b518(DG_Tweening_Core_DOGetter<Vector4>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d88c08);
    FUN_0373b518(PTR_DAT_07df4cf8);
    FUN_0373b518(DG_Tweening_Core_DOSetter<Color>_TypeInfo);
    FUN_0373b518(DG_Tweening_Core_DOSetter<Color2>_TypeInfo);
    FUN_0373b518(PTR_DAT_07dfc190);
    FUN_0373b518(
                System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    DAT_08267eff = 1;
  }
  local_98._8_8_ = 0;
  local_88 = 0;
  local_98._0_8_ = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = FUN_0708172c(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = (long *)FUN_041b4a9c(param_2,uVar17,&local_88,uVar7,
                                *(undefined8 *)
                                 System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                                ,0x19c,*(undefined8 *)DG_Tweening_Core_DOGetter<Vector4>_TypeInfo);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar9 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfc188);
  uVar7 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfc108);
  lVar10 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfbd48);
  uVar17 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfc280);
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_07132f44(param_1,lVar10,local_88 + 0x10,param_16,0);
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar13 = *(long *)(local_88 + 0x10);
  *(undefined4 *)(local_88 + 0x18) = param_15;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(lVar13 + 0x10) = param_4;
  *(undefined8 *)(lVar13 + 0x18) = param_5;
  puVar3 = PTR_DAT_07df82f8;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar13 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07df82f8) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_07134ba8;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07df82f8,0);
LAB_07134ba8:
  (*(code *)*puVar11)(plVar8,param_4,param_5,0,2,puVar11[1]);
  lVar14 = *plVar8;
  lVar13 = *(long *)puVar3;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar13) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_07134c10;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,lVar13,0);
LAB_07134c10:
  (*(code *)*puVar11)(plVar8,param_6,param_7,1,2,puVar11[1]);
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar13 = *(long *)(local_88 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(lVar13 + 0x20) = param_9;
  *(undefined8 *)(lVar13 + 0x28) = param_10;
  lVar14 = *plVar8;
  lVar13 = *(long *)puVar3;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar13) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
        goto LAB_07134c94;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,lVar13,4);
LAB_07134c94:
  (*(code *)*puVar11)(plVar8,param_9,param_10,2,puVar11[1]);
  puVar3 = PTR_DAT_07df4cf8;
  if (*(int *)(*(long *)PTR_DAT_07df4cf8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1e = '\x01';
  }
  puVar2 = PTR_DAT_07d987b0;
  if (*(int *)(*(long *)PTR_DAT_07d987b0 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1f == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1f = '\x01';
  }
  puVar4 = PTR_DAT_07df7550;
  uVar5 = (uint)local_70._2_2_;
  if (local_70._2_2_ != 0) {
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar13 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar13 + 0xb8);
    if (uVar5 << 0x10 != *piVar15) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar5 << 0x10 != piVar15[1]) goto LAB_07134dd4;
    }
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07134dc0;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0);
LAB_07134dc0:
    (*(code *)*puVar11)(plVar8,&local_70,1,puVar11[1]);
  }
LAB_07134dd4:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1e = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1f == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1f = '\x01';
  }
  uVar5 = (uint)local_80._2_2_;
  if (local_80._2_2_ != 0) {
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar13 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar13 + 0xb8);
    if (uVar5 << 0x10 != *piVar15) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar5 << 0x10 != piVar15[1]) goto LAB_07134edc;
    }
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0);
Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0:
    (*(code *)*puVar11)(plVar8,&local_80,1,puVar11[1]);
  }
LAB_07134edc:
  auVar1._8_8_ = local_98._8_8_;
  auVar1._0_8_ = local_98._0_8_;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((*(long **)(lVar10 + 0x1d8) == (long *)0x0) ||
     (local_98 = auVar1, **(long **)(lVar10 + 0x1d8) != *(long *)PTR_DAT_07dfc190))
  goto Unity_VisualScripting_UnityOnSliderValueChangedMessageListener___ctor;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  local_98 = FUN_070a4934(lVar9,0);
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar13);
  }
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1e = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1f == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1f = '\x01';
  }
  uVar5 = (uint)(ushort)local_98._2_2_;
  if (local_98._2_2_ != 0) {
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar13 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar13 + 0xb8);
    if (uVar5 << 0x10 != *piVar15) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar5 << 0x10 != piVar15[1]) goto LAB_07135020;
    }
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0713500c;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0);
LAB_0713500c:
    (*(code *)*puVar11)(plVar8,local_98,1,puVar11[1]);
  }
LAB_07135020:
  if (*(int *)(*(long *)System_Action<XRInputSubsystem>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_071091c0(plVar8,lVar9,0);
Unity_VisualScripting_UnityOnSliderValueChangedMessageListener___ctor:
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_07132fac(param_1,uVar7,lVar10,uVar17,local_88 + 0x10,0,param_2,1);
  if (*(int *)(*(long *)PTR_DAT_07d88c08 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar13 = FUN_070904a4(lVar10,0);
  if (lVar13 == 0) {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar13 = *(long *)(local_88 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_07135120;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,9);
LAB_07135120:
    (*(code *)*puVar11)(plVar8,lVar13 + 0x44,puVar11[1]);
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar13 = *(long *)(local_88 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_07135190;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,9);
LAB_07135190:
    (*(code *)*puVar11)(plVar8,lVar13 + 0x50,puVar11[1]);
  }
  else {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(local_88 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar13 = *(long *)(*(long *)(local_88 + 0x10) + 0x60);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0707e314(lVar13,plVar8,0);
  }
  lVar13 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
        goto LAB_071351f0;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0xb);
LAB_071351f0:
  (*(code *)*puVar11)(plVar8,0,puVar11[1]);
  lVar13 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
        goto LAB_07135250;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0xc);
LAB_07135250:
  (*(code *)*puVar11)(plVar8,1,puVar11[1]);
  if (*(long *)(lVar10 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar16 = FUN_06f2c330(*(long *)(lVar10 + 0x1a0),0);
  if ((uVar16 & 1) != 0) {
    lVar13 = FUN_070a0e4c(lVar10,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar13 + 0x737) == '\0') {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar5 = FUN_070a44d8(lVar9,0);
      uVar5 = uVar5 & 1;
    }
    else {
      uVar5 = 1;
    }
    if (*(long *)(lVar10 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar6 = FUN_06f301d0(*(long *)(lVar10 + 0x1a0),0);
    lVar9 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_0713530c;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,0xd);
LAB_0713530c:
    (*(code *)*puVar11)(plVar8,uVar6 & uVar5,puVar11[1]);
  }
  puVar3 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  lVar9 = *(long *)DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar9);
    lVar9 = *(long *)puVar3;
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar9);
      lVar9 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_052032cc(lVar10,uVar7,*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar12 = lVar10;
    thunk_FUN_037aeb94(plVar12,lVar10);
  }
  lVar9 = *plVar8;
  lVar13 = *(long *)DG_Tweening_Core_DOGetter<Vector3>_TypeInfo;
  uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar16 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_07135400;
      }
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar16 != 0);
  }
  lVar9 = FUN_0377596c(plVar8);
LAB_07135400:
  lVar9 = thunk_FUN_0375ad08(*(undefined8 *)(lVar9 + 8),lVar13);
  (**(code **)(lVar9 + 8))(plVar8,lVar10,lVar9);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0713547c;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d896f8,0);
LAB_0713547c:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return;
}


