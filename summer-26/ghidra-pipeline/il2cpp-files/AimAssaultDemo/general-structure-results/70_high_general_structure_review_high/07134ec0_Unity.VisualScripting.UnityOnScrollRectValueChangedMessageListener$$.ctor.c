/*
FUNCTION_NAME: Unity.VisualScripting.UnityOnScrollRectValueChangedMessageListener$$.ctor
ENTRY_POINT: 07134ec0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x071354b4) */

void Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener___ctor(long param_1)

{
  undefined *puVar1;
  ushort extraout_var;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long in_x9;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000028;
  
                    /* try { // try from 07134ec4 to 07234ec7 has its CatchHandler @ 07134ee8 */
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((*(long **)(unaff_x21 + 0x1d8) == (long *)0x0) ||
     (**(long **)(unaff_x21 + 0x1d8) != *(long *)PTR_DAT_07dfc190))
  goto Unity_VisualScripting_UnityOnSliderValueChangedMessageListener___ctor;
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_070a4934(in_stack_00000008,0);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x20);
  }
  if (*(char *)(unaff_x28 + 0xf1e) == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    *(undefined1 *)(unaff_x28 + 0xf1e) = 1;
  }
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (*(char *)(unaff_x29 + 0xf1f) == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    *(undefined1 *)(unaff_x29 + 0xf1f) = 1;
  }
  if (extraout_var != 0) {
    lVar2 = *unaff_x27;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x27;
    }
    piVar5 = *(int **)(lVar2 + 0xb8);
    if ((uint)extraout_var << 0x10 != *piVar5) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar5 = *(int **)(*unaff_x27 + 0xb8);
      }
      if ((uint)extraout_var << 0x10 != piVar5[1]) goto LAB_07135020;
    }
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0713500c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_0713500c:
    (*(code *)*puVar3)();
  }
LAB_07135020:
  if (*(int *)(*(long *)System_Action<XRInputSubsystem>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_071091c0();
Unity_VisualScripting_UnityOnSliderValueChangedMessageListener___ctor:
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_07132fac();
  if (*(int *)(*(long *)PTR_DAT_07d88c08 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = FUN_070904a4();
  if (lVar2 == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_07135120;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_07135120:
    (*(code *)*puVar3)();
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_07135190;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_07135190:
    (*(code *)*puVar3)();
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
  lVar2 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_071351f0;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_071351f0:
  (*(code *)*puVar3)();
  lVar2 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
        goto LAB_07135250;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_07135250:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x21 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar6 = FUN_06f2c330(*(long *)(unaff_x21 + 0x1a0),0);
  if ((uVar6 & 1) != 0) {
    lVar2 = FUN_070a0e4c();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar2 + 0x737) == '\0') {
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
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_0713530c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_0713530c:
    (*(code *)*puVar3)();
  }
  puVar1 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  lVar2 = *(long *)DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_052032cc(uVar4,uVar7,*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar3 = uVar4;
    thunk_FUN_037aeb94(puVar3,uVar4);
  }
  lVar2 = *unaff_x19;
  lVar8 = *(long *)DG_Tweening_Core_DOGetter<Vector3>_TypeInfo;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_07135400;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar6 != 0);
  }
  lVar2 = FUN_0377596c();
LAB_07135400:
  lVar2 = thunk_FUN_0375ad08(*(undefined8 *)(lVar2 + 8),lVar8);
  (**(code **)(lVar2 + 8))();
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0713547c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_0713547c:
    (*(code *)*puVar3)();
  }
  return;
}


