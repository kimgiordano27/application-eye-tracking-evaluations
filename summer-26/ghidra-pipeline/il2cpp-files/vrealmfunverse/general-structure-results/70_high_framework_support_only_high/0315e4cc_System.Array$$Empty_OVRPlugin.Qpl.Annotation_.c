/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0315e4cc
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


/* WARNING: Removing unreachable block (ram,0x0315e770) */
/* WARNING: Removing unreachable block (ram,0x0315e774) */
/* WARNING: Removing unreachable block (ram,0x0315e7b4) */

void System_Array__Empty<OVRPlugin_Qpl_Annotation>(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long *in_stack_00000120;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_02b3c81c(&DAT_06448638);
    puVar5 = *(undefined8 **)(param_2 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_02b76274(param_2);
      puVar5 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  in_stack_00000130 = 0;
  in_stack_00000120 = (long *)0x0;
  in_stack_000000c0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = (long *)0x0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000098 = (undefined8 *)0x0;
  in_stack_00000090 = 0;
  in_stack_00000088 = 0;
  uVar8 = *puVar5;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_04d8a7b0(uVar8,0);
  uVar2 = FUN_05ea4780(param_1,uVar8,0);
  if ((uVar2 & 1) == 0) {
    FUN_04aeb2d8(&stack0x00000130,*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
    in_stack_00000080 = &stack0x00000138;
    in_stack_00000070 = 0;
    in_stack_00000078 = &stack0x00000130;
    plVar3 = (long *)FUN_032be690(*(undefined8 *)(*(long *)(in_stack_00000138 + 0x38) + 0x18));
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x20);
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
            goto LAB_0315e614;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_0315e614:
      (*(code *)*puVar5)(&stack0x00000018,plVar3,puVar5[1]);
      in_stack_00000098 = in_stack_00000020;
      in_stack_00000090 = in_stack_00000018;
      in_stack_000000a8 = in_stack_00000030;
      in_stack_000000a0 = in_stack_00000028;
      in_stack_000000b8 = in_stack_00000040;
      in_stack_000000b0 = in_stack_00000038;
      in_stack_000000c0 = in_stack_00000048;
      lVar4 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x40);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_03c28fac(&stack0x00000018,&stack0x00000090,
                   *(undefined8 *)(*(long *)(in_stack_00000138 + 0x38) + 0x38));
      memcpy(&stack0x000000d0,&stack0x00000018,0x58);
      puVar1 = PTR_DAT_0631ea98;
      in_stack_00000018 = 0;
      in_stack_00000028 = &stack0x00000138;
      in_stack_00000020 = &stack0x000000d0;
      while (uVar2 = FUN_04743654(&stack0x000000d0,
                                  *(undefined8 *)(*(long *)(in_stack_00000138 + 0x38) + 0x68)),
            plVar3 = in_stack_00000120, (uVar2 & 1) != 0) {
        FUN_05ebf474(&stack0x00000088,*(undefined8 *)(param_1 + 0x10),in_stack_00000120,0);
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
              goto LAB_0315e734;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,1);
LAB_0315e734:
        uVar8 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        FUN_05ea48a0(param_1,uVar8,0);
        FUN_05ebf8b0(&stack0x00000088,0);
      }
      FUN_04743aa8(in_stack_00000020,*(undefined8 *)(*(long *)(*in_stack_00000028 + 0x38) + 0x70));
      lVar4 = in_stack_00000070;
      if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
    }
    FUN_04aeb39c(in_stack_00000078,*(undefined8 *)(*(long *)(*in_stack_00000080 + 0x38) + 0x80));
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar4);
    }
  }
  return;
}


