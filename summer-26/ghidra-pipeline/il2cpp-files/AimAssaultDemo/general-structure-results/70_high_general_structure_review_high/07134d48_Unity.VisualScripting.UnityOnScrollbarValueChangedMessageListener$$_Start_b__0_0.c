/*
FUNCTION_NAME: Unity.VisualScripting.UnityOnScrollbarValueChangedMessageListener$$<Start>b__0_0
ENTRY_POINT: 07134d48
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

void Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener__<Start>b__0_0
               (int *param_1,long param_2)

{
  undefined *puVar1;
  ushort extraout_var;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  int unaff_w24;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (unaff_w24 == *param_1) {
LAB_07134d74:
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
                    /* try { // try from 07134db4 to 07234db7 has its CatchHandler @ 07134e80 */
                    /* try { // try from 07134db8 to 07234dbb has its CatchHandler @ 07134e08 */
                    /* try { // try from 07134dbc to 07234dc3 has its CatchHandler @ 07134e78 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07134dc0;
        }
                    /* try { // try from 07134d98 to 07234dab has its CatchHandler @ 07134f0c */
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 07134dac to 07234daf has its CatchHandler @ 07134e88 */
    puVar2 = (undefined8 *)FUN_0377596c();
                    /* try { // try from 07134db0 to 07234db3 has its CatchHandler @ 07134e84 */
LAB_07134dc0:
                    /* try { // try from 07134dc4 to 07234dcb has its CatchHandler @ 07134df4 */
                    /* try { // try from 07134dcc to 07234dd3 has its CatchHandler @ 07134e04 */
    (*(code *)*puVar2)();
  }
  else {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      param_1 = *(int **)(*unaff_x27 + 0xb8);
    }
    if (unaff_w24 == param_1[1]) goto LAB_07134d74;
  }
                    /* try { // try from 07134dd4 to 07234dd7 has its CatchHandler @ 0713459c */
                    /* try { // try from 07134dd8 to 07234ddf has its CatchHandler @ 07134f0c */
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07134ccc with catch @ 07134de0
                       try { // try from 07134de0 to 07234e27 has its CatchHandler @ 0713459c */
    thunk_FUN_03798b70();
  }
                    /* catch() { ... } // from try @ 07134d38 with catch @ 07134de4 */
  if (*(char *)(unaff_x28 + 0xf1e) == '\0') {
                    /* catch() { ... } // from try @ 071349a0 with catch @ 07134df0
                       catch() { ... } // from try @ 071349d4 with catch @ 07134df0 */
                    /* catch() { ... } // from try @ 07134dc4 with catch @ 07134df4 */
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
  if (in_stack_00000030._2_2_ != 0) {
    lVar4 = *unaff_x27;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *unaff_x27;
    }
    piVar5 = *(int **)(lVar4 + 0xb8);
    if ((uint)in_stack_00000030._2_2_ << 0x10 != *piVar5) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar5 = *(int **)(*unaff_x27 + 0xb8);
      }
      if ((uint)in_stack_00000030._2_2_ << 0x10 != piVar5[1]) goto LAB_07134edc;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
Unity_VisualScripting_UnityOnScrollRectValueChangedMessageListener__<Start>b__0_0:
    (*(code *)*puVar2)();
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
    lVar4 = *unaff_x27;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *unaff_x27;
    }
    piVar5 = *(int **)(lVar4 + 0xb8);
    if ((uint)extraout_var << 0x10 != *piVar5) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        piVar5 = *(int **)(*unaff_x27 + 0xb8);
      }
      if ((uint)extraout_var << 0x10 != piVar5[1]) goto LAB_07135020;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0713500c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713500c:
    (*(code *)*puVar2)();
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
  lVar4 = FUN_070904a4();
  if (lVar4 == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_07135120;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
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
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_07135190;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
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
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_071351f0;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_071351f0:
  (*(code *)*puVar2)();
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
        goto LAB_07135250;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
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
    lVar4 = FUN_070a0e4c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar4 + 0x737) == '\0') {
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
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_0713530c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713530c:
    (*(code *)*puVar2)();
  }
  puVar1 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  lVar4 = *(long *)DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar4);
    lVar4 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar4);
      lVar4 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_052032cc(uVar3,uVar7,*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar2 = uVar3;
    thunk_FUN_037aeb94(puVar2,uVar3);
  }
  lVar4 = *unaff_x19;
  lVar8 = *(long *)DG_Tweening_Core_DOGetter<Vector3>_TypeInfo;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_07135400;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = FUN_0377596c();
LAB_07135400:
  lVar4 = thunk_FUN_0375ad08(*(undefined8 *)(lVar4 + 8),lVar8);
  (**(code **)(lVar4 + 8))();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0713547c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0713547c:
    (*(code *)*puVar2)();
  }
  return;
}


