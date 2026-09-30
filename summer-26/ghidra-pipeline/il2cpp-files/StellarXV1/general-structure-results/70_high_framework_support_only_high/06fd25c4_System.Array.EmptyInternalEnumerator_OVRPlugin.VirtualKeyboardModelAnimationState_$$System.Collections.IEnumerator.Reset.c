/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06fd25c4
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

void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
               (void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  
  uVar4 = FUN_07691f40();
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
      uVar4 = 0;
      lVar7 = lVar6 + 0x38;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (-1 < *(int *)(lVar7 + -0x18)) {
          FUN_06fd37a0();
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06fd26f4;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_06fd26f4:
  in_stack_00000038 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_092860c8;
  in_stack_00000028 = &stack0x00000038;
  in_stack_00000020 = 0;
  do {
    plVar3 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06fd2768;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)puVar2,0);
LAB_06fd2768:
    uVar4 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    plVar3 = in_stack_00000038;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar6 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_06fd2874;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar7 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06fd27ec;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,0);
LAB_06fd27ec:
    (*(code *)*puVar5)(&stack0x00000008,plVar3,puVar5[1]);
    FUN_06fd37a0();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06fd2890;
    }
  }
LAB_06fd2874:
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)PTR_DAT_092860c0,0);
LAB_06fd2890:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  return;
}


