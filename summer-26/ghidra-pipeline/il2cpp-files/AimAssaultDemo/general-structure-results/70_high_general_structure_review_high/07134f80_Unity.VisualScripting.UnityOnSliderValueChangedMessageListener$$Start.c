/*
FUNCTION_NAME: Unity.VisualScripting.UnityOnSliderValueChangedMessageListener$$Start
ENTRY_POINT: 07134f80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x071354b4) */

void Unity_VisualScripting_UnityOnSliderValueChangedMessageListener__Start(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  long in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    param_1 = *unaff_x27;
  }
  piVar4 = *(int **)(param_1 + 0xb8);
  if (unaff_w20 != *piVar4) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      piVar4 = *(int **)(*unaff_x27 + 0xb8);
    }
    if (unaff_w20 != piVar4[1]) goto LAB_07135020;
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0713500c;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713500c:
  (*(code *)*puVar2)();
LAB_07135020:
  if (*(int *)(*(long *)System_Action<XRInputSubsystem>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_071091c0();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_07132fac();
  if (*(int *)(*(long *)PTR_DAT_07d88c08 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = FUN_070904a4();
  if (lVar5 == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_07135120;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_07135120:
    (*(code *)*puVar2)();
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_07135190;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_07135190:
    (*(code *)*puVar2)();
  }
  else {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(*(long *)(in_stack_00000028 + 0x10) + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0707e314();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_071351f0;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_071351f0:
  (*(code *)*puVar2)();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_07135250;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_07135250:
  (*(code *)*puVar2)();
  if (*(long *)(unaff_x21 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar6 = FUN_06f2c330(*(long *)(unaff_x21 + 0x1a0),0);
  if ((uVar6 & 1) != 0) {
    lVar5 = FUN_070a0e4c();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar5 + 0x737) == '\0') {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_070a44d8(in_stack_00000008,0);
    }
    if (*(long *)(unaff_x21 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_06f301d0(*(long *)(unaff_x21 + 0x1a0),0);
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_0713530c;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713530c:
    (*(code *)*puVar2)();
  }
  puVar1 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  lVar5 = *(long *)DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar5);
    lVar5 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_052032cc(uVar3,uVar7,*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar2 = uVar3;
    thunk_FUN_037aeb94(puVar2,uVar3);
  }
  lVar5 = *unaff_x19;
  lVar8 = *(long *)DG_Tweening_Core_DOGetter<Vector3>_TypeInfo;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_07135400;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_0377596c();
LAB_07135400:
  lVar5 = thunk_FUN_0375ad08(*(undefined8 *)(lVar5 + 8),lVar8);
  (**(code **)(lVar5 + 8))();
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0713547c;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713547c:
    (*(code *)*puVar2)();
  }
  return;
}


