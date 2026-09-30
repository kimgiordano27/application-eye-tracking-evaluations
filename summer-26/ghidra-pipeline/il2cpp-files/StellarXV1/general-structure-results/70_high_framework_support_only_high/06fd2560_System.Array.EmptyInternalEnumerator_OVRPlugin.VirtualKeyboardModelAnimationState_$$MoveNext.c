/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 06fd2560
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06fd28dc) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
               (void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar10;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  
  FUN_06fd23cc();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0768bcbc(1,0);
  }
  uVar4 = thunk_FUN_0408781c();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar10 = FUN_0768890c(uVar10,0);
  uVar5 = FUN_07691f40(uVar4,uVar10,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc(lVar7);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar5 = 0;
      lVar8 = lVar7 + 0x38;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (-1 < *(int *)(lVar8 + -0x18)) {
          FUN_06fd37a0();
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar1 != uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06fd26f4;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_06fd26f4:
  in_stack_00000038 = (long *)(*(code *)*puVar6)();
  puVar2 = PTR_DAT_092860c8;
  in_stack_00000028 = &stack0x00000038;
  in_stack_00000020 = 0;
  do {
    plVar3 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *in_stack_00000038;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06fd2768;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)puVar2,0);
LAB_06fd2768:
    uVar5 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    plVar3 = in_stack_00000038;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar7 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 == 0) goto LAB_06fd2874;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc(lVar7);
    }
    lVar8 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06fd27ec;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,0);
LAB_06fd27ec:
    (*(code *)*puVar6)(&stack0x00000008,plVar3,puVar6[1]);
    FUN_06fd37a0();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06fd2890;
    }
  }
LAB_06fd2874:
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)PTR_DAT_092860c0,0);
LAB_06fd2890:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}


