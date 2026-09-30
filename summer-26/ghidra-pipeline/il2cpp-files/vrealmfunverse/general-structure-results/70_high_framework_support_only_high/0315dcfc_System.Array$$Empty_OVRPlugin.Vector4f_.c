/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 0315dcfc
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

void System_Array__Empty<OVRPlugin_Vector4f>(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  long in_stack_00000018;
  undefined1 *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000110;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  
  FUN_02b3c81c(param_1 + 0x638);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_02b76274();
    puVar5 = *(undefined8 **)(unaff_x20 + 0x38);
  }
  in_stack_00000120 = 0;
  in_stack_00000110 = (long *)0x0;
  unaff_x22[9] = 0;
  unaff_x22[8] = 0;
  unaff_x22[0xb] = 0;
  unaff_x22[10] = 0;
  unaff_x22[0xd] = 0;
  unaff_x22[0xc] = 0;
  unaff_x22[0xf] = 0;
  unaff_x22[0xe] = 0;
  puVar1 = PTR_DAT_06312310;
  unaff_x22[1] = 0;
  *unaff_x22 = 0;
  unaff_x22[3] = 0;
  unaff_x22[2] = 0;
  unaff_x22[5] = 0;
  unaff_x22[4] = 0;
  unaff_x22[7] = 0;
  unaff_x22[6] = 0;
  in_stack_00000088 = 0;
  uVar8 = *puVar5;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(uVar8,0);
  uVar2 = FUN_05ea4780();
  if ((uVar2 & 1) == 0) {
    FUN_04aeb000(&stack0x00000120,*(undefined8 *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    in_stack_00000080 = &stack0x00000128;
    in_stack_00000070 = 0;
    in_stack_00000078 = &stack0x00000120;
    plVar3 = (long *)FUN_032be5e8(*(undefined8 *)(*(long *)(in_stack_00000128 + 0x38) + 0x18));
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(in_stack_00000128 + 0x38) + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0315de24;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_0315de24:
      (*(code *)*puVar5)(&stack0x00000018,plVar3,puVar5[1]);
      lVar4 = *(long *)(in_stack_00000128 + 0x38);
      unaff_x22[1] = (long)in_stack_00000020;
      *unaff_x22 = in_stack_00000018;
      unaff_x22[3] = in_stack_00000030;
      unaff_x22[2] = (long)in_stack_00000028;
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
      while (uVar2 = FUN_04742628(&stack0x000000c0,
                                  *(undefined8 *)(*(long *)(in_stack_00000128 + 0x38) + 0x68)),
            plVar3 = in_stack_00000110, (uVar2 & 1) != 0) {
        FUN_05ebf474(&stack0x00000088,*(undefined8 *)(unaff_x19 + 0x10),in_stack_00000110,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar4 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0315df3c;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,1);
LAB_0315df3c:
        (*(code *)*puVar5)(plVar3,puVar5[1]);
        FUN_05ea48a0();
        FUN_05ebf8b0(&stack0x00000088,0);
      }
      FUN_04742a7c(in_stack_00000020,*(undefined8 *)(*(long *)(*in_stack_00000028 + 0x38) + 0x70));
      lVar4 = in_stack_00000070;
      if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
    }
    FUN_04aeb0c4(in_stack_00000078,*(undefined8 *)(*(long *)(*in_stack_00000080 + 0x38) + 0x80));
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar4);
    }
  }
  return;
}


