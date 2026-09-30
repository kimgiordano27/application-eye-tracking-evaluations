/*
FUNCTION_NAME: Unity.Jobs.IJobForExtensions.ForJobStruct.ExecuteJobFunction<ReflectionProbeMinMaxZJob>$$.ctor
ENTRY_POINT: 016eccf0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ed3a8) */
/* WARNING: Removing unreachable block (ram,0x016ed3b0) */
/* WARNING: Removing unreachable block (ram,0x016ed288) */

void Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<ReflectionProbeMinMaxZJob>___ctor
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar18;
  long unaff_x25;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  thunk_FUN_01279b34();
  *(undefined1 *)(unaff_x20 + 0xe41) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar8 = FUN_01f7f404();
  if ((uVar8 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar8 = (**(code **)(*unaff_x21 + 0x568))();
    puVar4 = PTR_DAT_027b4fd0;
    puVar3 = PTR_DAT_027b4fc8;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027b4fd8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      _in_stack_00000028 = FUN_018df7c4(&stack0x00000038,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      _in_stack_00000010 = FUN_018df558(&stack0x00000020,*(undefined8 *)PTR_DAT_027b4fc0);
      uVar9 = (**(code **)(*unaff_x21 + 0x678))();
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0122e748();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0122e748();
        }
        uVar18 = **(undefined8 **)(lVar10 + 0xb8);
        lVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa0);
        FUN_01810820(lVar10,uVar18,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18),0);
        lVar16 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
        lVar11 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0122e748();
          lVar16 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
        }
        *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar10;
        lVar11 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0122e748();
        }
        thunk_FUN_01286abc(*(long *)(lVar11 + 0xb8) + 8,lVar10);
      }
      plVar12 = (long *)FUN_01407e14(uVar9,lVar10,*(undefined8 *)PTR_DAT_027b4f98);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb0) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_016ecf3c;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0122ea3c(plVar12,*(long *)PTR_DAT_027b4fb0,0);
LAB_016ecf3c:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar7 = PTR_DAT_027b4fe0;
      puVar6 = PTR_DAT_027b3ea8;
      puVar5 = PTR_DAT_027b3ab8;
      puVar4 = PTR_DAT_027b1f18;
      puVar3 = PTR_DAT_027b1ab0;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      do {
        lVar10 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_016ecfc8;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_0122ea3c(plVar12,*(long *)puVar4,0);
LAB_016ecfc8:
        uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_016ed27c;
          lVar10 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 == 0)
          goto Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<TilingJob>__Invoke;
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_016ed23c;
        }
        lVar10 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb8) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_016ed02c;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_0122ea3c(plVar12,*(long *)PTR_DAT_027b4fb8,0);
LAB_016ed02c:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        lVar10 = FUN_013eef0c(plVar14,*(undefined8 *)PTR_DAT_027b4f90);
        if (lVar10 == 0) {
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_0122e748();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_0122e748();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          lVar10 = **(long **)(lVar10 + 0xb8);
          uVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0(uVar9,uVar9);
          }
          uVar9 = FUN_02227934(lVar10,uVar9,*(undefined8 *)PTR_DAT_027b5008,0);
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x10);
        }
        uVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
        FUN_02460e00(uVar18,uVar9,0);
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar10 = *(long *)(in_stack_00000038 + 0x10);
        lVar11 = *(long *)puVar7;
        *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar2 = *(uint *)(in_stack_00000038 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
          puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar13 = uVar18;
          thunk_FUN_01286abc(puVar13,uVar18);
        }
        else {
          FUN_01953fdc(in_stack_00000038,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = in_stack_00000020;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar14 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60();
        }
        puVar15 = (undefined4 *)thunk_FUN_0124bcfc();
        uVar1 = *puVar15;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)puVar5;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_0193239c(lVar10,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar9 = thunk_FUN_0124bba8();
  uVar18 = thunk_FUN_01279b34(PTR_DAT_027b5010);
  FUN_01e7d290(uVar9,uVar18,0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar9);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_016ed23c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_016ed270;
    }
  }
Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<TilingJob>__Invoke:
  puVar13 = (undefined8 *)FUN_0122ea3c(plVar12,*(long *)PTR_DAT_027b1f00,0);
LAB_016ed270:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_016ed27c:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar9 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar9;
  thunk_FUN_01286abc();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar9 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x30))
            (in_stack_00000008,uVar9);
  FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
  FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
  return;
}


