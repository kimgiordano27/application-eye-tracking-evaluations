/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0315ddc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0315df78) */
/* WARNING: Removing unreachable block (ram,0x0315df7c) */
/* WARNING: Removing unreachable block (ram,0x0315dfbc) */

void System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long in_stack_00000018;
  undefined1 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  long *in_stack_00000110;
  long in_stack_00000128;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0315de24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_0315de24:
  (*(code *)*puVar3)(&stack0x00000018);
  lVar4 = *(long *)(in_stack_00000128 + 0x38);
  unaff_x22[1] = in_stack_00000020;
  *unaff_x22 = in_stack_00000018;
  unaff_x22[3] = in_stack_00000030;
  unaff_x22[2] = in_stack_00000028;
  unaff_x22[5] = in_stack_00000040;
  unaff_x22[4] = in_stack_00000038;
  lVar4 = *(long *)(lVar4 + 0x40);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03c28424(&stack0x00000018,&stack0x00000090,
               *(undefined8 *)(*(long *)(in_stack_00000128 + 0x38) + 0x38));
  memcpy(&stack0x000000c0,&stack0x00000018,0x58);
  puVar1 = PTR_DAT_0631ea98;
  in_stack_00000018 = 0;
  in_stack_00000028 = &stack0x00000128;
  in_stack_00000020 = &stack0x000000c0;
  do {
    uVar5 = FUN_04742628(&stack0x000000c0,
                         *(undefined8 *)(*(long *)(in_stack_00000128 + 0x38) + 0x68));
    plVar2 = in_stack_00000110;
    if ((uVar5 & 1) == 0) {
      FUN_04742a7c(in_stack_00000020,*(undefined8 *)(*(long *)(*in_stack_00000028 + 0x38) + 0x70));
      lVar4 = in_stack_00000070;
      if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
      FUN_04aeb0c4(in_stack_00000078,*(undefined8 *)(*(long *)(*in_stack_00000080 + 0x38) + 0x80));
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc(lVar4);
      }
      return;
    }
    FUN_05ebf474(&stack0x00000088,*(undefined8 *)(unaff_x19 + 0x10),in_stack_00000110,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0315df3c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)puVar1,1);
LAB_0315df3c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    FUN_05ea48a0();
    FUN_05ebf8b0(&stack0x00000088,0);
  } while( true );
}


