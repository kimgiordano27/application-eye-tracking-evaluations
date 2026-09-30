/*
FUNCTION_NAME: Unity.VisualScripting.UnityOnScrollbarValueChangedMessageListener$$Start
ENTRY_POINT: 07134c78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x071354b4) */

void Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener__Start(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort extraout_var;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long in_stack_00000008;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  
  puVar4 = (undefined8 *)FUN_0377596c();
                    /* try { // try from 07134c80 to 07234c83 has its CatchHandler @ 07134cf8 */
                    /* try { // try from 07134ca8 to 07234caf has its CatchHandler @ 07134df8 */
  (*(code *)*puVar4)();
  puVar2 = PTR_DAT_07df4cf8;
  if (*(int *)(*(long *)PTR_DAT_07df4cf8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 07134ccc to 07234cd3 has its CatchHandler @ 07134de0 */
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
                    /* try { // try from 07134cdc to 07234ce3 has its CatchHandler @ 07134d18 */
    DAT_08266f1e = '\x01';
  }
  puVar1 = PTR_DAT_07d987b0;
                    /* try { // try from 07134ce8 to 07234ceb has its CatchHandler @ 07134d14 */
                    /* try { // try from 07134cf0 to 07234cf3 has its CatchHandler @ 07134d08 */
                    /* try { // try from 07134cf4 to 07234d37 has its CatchHandler @ 0713459c */
  if (*(int *)(*(long *)PTR_DAT_07d987b0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07134c80 with catch @ 07134cf8 */
    thunk_FUN_03798b70();
  }
                    /* catch() { ... } // from try @ 07134c24 with catch @ 07134d04 */
  if (DAT_08266f1f == '\0') {
                    /* catch() { ... } // from try @ 07134cf0 with catch @ 07134d08 */
                    /* catch() { ... } // from try @ 07134c00 with catch @ 07134d0c */
                    /* catch() { ... } // from try @ 07134b80 with catch @ 07134d10 */
    FUN_0373b518(PTR_DAT_07d987b0);
                    /* catch() { ... } // from try @ 07134ce8 with catch @ 07134d14 */
                    /* catch() { ... } // from try @ 07134cdc with catch @ 07134d18 */
    DAT_08266f1f = '\x01';
  }
                    /* catch() { ... } // from try @ 07134b64 with catch @ 07134d1c */
  puVar3 = PTR_DAT_07df7550;
  if (in_stack_00000040._2_2_ != 0) {
    lVar5 = *(long *)puVar1;
                    /* try { // try from 07134d38 to 07234d3b has its CatchHandler @ 07134de4 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 07134d3c to 07234d97 has its CatchHandler @ 0713459c */
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar1;
    }
    piVar7 = *(int **)(lVar5 + 0xb8);
    if ((uint)in_stack_00000040._2_2_ << 0x10 != *piVar7) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar7 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if ((uint)in_stack_00000040._2_2_ << 0x10 != piVar7[1]) goto LAB_07134dd4;
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07134dc0;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_07134dc0:
    (*(code *)*puVar4)();
  }
LAB_07134dd4:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1f == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1f = '\x01';
  }
  if (in_stack_00000030._2_2_ != 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar1;
    }
    piVar7 = *(int **)(lVar5 + 0xb8);
    if ((uint)in_stack_00000030._2_2_ << 0x10 != *piVar7) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar7 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if ((uint)in_stack_00000030._2_2_ << 0x10 != piVar7[1]) goto LAB_07134edc;
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0:
    (*(code *)*puVar4)();
  }
LAB_07134edc:
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
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar5);
  }
  if (DAT_08266f1e == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_08266f1f == '\0') {
    FUN_0373b518(PTR_DAT_07d987b0);
    DAT_08266f1f = '\x01';
  }
  if (extraout_var != 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar1;
    }
    piVar7 = *(int **)(lVar5 + 0xb8);
    if ((uint)extraout_var << 0x10 != *piVar7) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar7 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if ((uint)extraout_var << 0x10 != piVar7[1]) goto LAB_07135020;
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0713500c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_0713500c:
    (*(code *)*puVar4)();
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
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_07135120;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_07135120:
    (*(code *)*puVar4)();
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_07135190;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_07135190:
    (*(code *)*puVar4)();
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
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_071351f0;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_071351f0:
  (*(code *)*puVar4)();
  lVar5 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_07135250;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_07135250:
  (*(code *)*puVar4)();
  if (*(long *)(unaff_x21 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar8 = FUN_06f2c330(*(long *)(unaff_x21 + 0x1a0),0);
  if ((uVar8 & 1) != 0) {
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
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
          goto LAB_0713530c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_0713530c:
    (*(code *)*puVar4)();
  }
  puVar2 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  lVar5 = *(long *)DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar5);
    lVar5 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar2;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_052032cc(uVar6,uVar9,*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,0);
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar4 = uVar6;
    thunk_FUN_037aeb94(puVar4,uVar6);
  }
  lVar5 = *unaff_x19;
  lVar10 = *(long *)DG_Tweening_Core_DOGetter<Vector3>_TypeInfo;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_07135400;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  lVar5 = FUN_0377596c();
LAB_07135400:
  lVar5 = thunk_FUN_0375ad08(*(undefined8 *)(lVar5 + 8),lVar10);
  (**(code **)(lVar5 + 8))();
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0713547c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_0713547c:
    (*(code *)*puVar4)();
  }
  return;
}


