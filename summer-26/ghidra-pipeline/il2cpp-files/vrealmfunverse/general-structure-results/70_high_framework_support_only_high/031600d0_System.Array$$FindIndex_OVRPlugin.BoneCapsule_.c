/*
FUNCTION_NAME: System.Array$$FindIndex<OVRPlugin.BoneCapsule>
ENTRY_POINT: 031600d0
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


/* WARNING: Removing unreachable block (ram,0x03160340) */
/* WARNING: Removing unreachable block (ram,0x03160344) */
/* WARNING: Removing unreachable block (ram,0x03160384) */

void System_Array__FindIndex<OVRPlugin_BoneCapsule>(void)

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
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_02b76274();
    puVar5 = *(undefined8 **)(unaff_x20 + 0x38);
  }
  in_stack_00000108 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = (long *)0x0;
  in_stack_000000f0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = (long *)0x0;
  in_stack_00000078 = 0;
  uVar8 = *puVar5;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(uVar8,0);
  uVar2 = FUN_05ea4780();
  if ((uVar2 & 1) == 0) {
    FUN_04aebccc(&stack0x00000108,*(undefined8 *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    in_stack_00000070 = &stack0x00000118;
    in_stack_00000060 = 0;
    in_stack_00000068 = &stack0x00000108;
    plVar3 = (long *)FUN_032be8dc(*(undefined8 *)(*(long *)(in_stack_00000118 + 0x38) + 0x18));
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(in_stack_00000118 + 0x38) + 0x20);
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
            goto LAB_031601f0;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_031601f0:
      (*(code *)*puVar5)(&stack0x00000010,plVar3,puVar5[1]);
      in_stack_00000088 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000010;
      in_stack_00000098 = in_stack_00000028;
      in_stack_00000090 = in_stack_00000020;
      in_stack_000000a0 = in_stack_00000030;
      lVar4 = *(long *)(*(long *)(in_stack_00000118 + 0x38) + 0x40);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_03c2b800(&stack0x00000010,&stack0x00000080,
                   *(undefined8 *)(*(long *)(in_stack_00000118 + 0x38) + 0x38));
      memcpy(&stack0x000000b0,&stack0x00000010,0x50);
      puVar1 = PTR_DAT_0631ea98;
      in_stack_00000010 = 0;
      in_stack_00000020 = &stack0x00000118;
      in_stack_00000018 = &stack0x000000b0;
      while (uVar2 = FUN_0474839c(&stack0x000000b0,
                                  *(undefined8 *)(*(long *)(in_stack_00000118 + 0x38) + 0x68)),
            plVar3 = in_stack_000000f8, (uVar2 & 1) != 0) {
        FUN_05ebf474(&stack0x00000078,*(undefined8 *)(unaff_x19 + 0x10),in_stack_000000f8,0);
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
              goto LAB_03160304;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,1);
LAB_03160304:
        (*(code *)*puVar5)(plVar3,puVar5[1]);
        FUN_05ea48a0();
        FUN_05ebf8b0(&stack0x00000078,0);
      }
      FUN_047487f0(in_stack_00000018,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0x38) + 0x70));
      lVar4 = in_stack_00000060;
      if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
    }
    FUN_04aebd90(in_stack_00000068,*(undefined8 *)(*(long *)(*in_stack_00000070 + 0x38) + 0x80));
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar4);
    }
  }
  return;
}


