/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 06fd25d0
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

void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
               (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar8;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((param_1 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar5 = unaff_x21[3];
    if (lVar5 != 0) {
      uVar8 = 0;
      lVar6 = lVar5 + 0x38;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (-1 < *(int *)(lVar6 + -0x18)) {
          FUN_06fd37a0();
        }
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *(long *)(lVar5 + 0x88);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar6 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06fd26f4;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_06fd26f4:
  in_stack_00000038 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_092860c8;
  in_stack_00000028 = &stack0x00000038;
  in_stack_00000020 = 0;
  do {
    plVar3 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000038;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06fd2768;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)puVar2,0);
LAB_06fd2768:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    plVar3 = in_stack_00000038;
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar5 = *in_stack_00000038;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_06fd2874;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06fd27ec;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar5,0);
LAB_06fd27ec:
    (*(code *)*puVar4)(&stack0x00000008,plVar3,puVar4[1]);
    FUN_06fd37a0();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar7 = piVar7 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06fd2890;
    }
  }
LAB_06fd2874:
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*(long *)PTR_DAT_092860c0,0);
LAB_06fd2890:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


