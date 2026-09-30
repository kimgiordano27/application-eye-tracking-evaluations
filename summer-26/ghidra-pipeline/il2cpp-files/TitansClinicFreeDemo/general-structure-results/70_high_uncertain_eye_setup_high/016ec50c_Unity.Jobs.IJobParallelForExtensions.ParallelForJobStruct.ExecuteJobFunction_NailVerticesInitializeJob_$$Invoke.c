/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<NailVerticesInitializeJob>$$Invoke
ENTRY_POINT: 016ec50c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ec724) */
/* WARNING: Removing unreachable block (ram,0x016ec614) */
/* WARNING: Removing unreachable block (ram,0x016ec72c) */

void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<NailVerticesInitializeJob>__Invoke
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  undefined8 uVar11;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  do {
    thunk_FUN_01220628();
    do {
      plVar5 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60();
      }
      puVar6 = (undefined4 *)thunk_FUN_0124bcfc();
      uVar1 = *puVar6;
      lVar7 = *(long *)(unaff_x24 + 0x10);
      lVar9 = *unaff_x27;
      *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar2 = *(uint *)(unaff_x24 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
      }
      else {
        FUN_0193239c(unaff_x24,uVar1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_016ec354;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016ec354:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_016ec608;
        lVar7 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_016ec5e0;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_016ec5c8;
      }
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_027b4fb8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_016ec3b8;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016ec3b8:
      plVar5 = (long *)(*(code *)*puVar3)();
      lVar7 = FUN_013eef0c(plVar5,*(undefined8 *)PTR_DAT_027b4f90);
      if (lVar7 == 0) {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        uVar11 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0(uVar11,uVar11);
        }
        uVar11 = FUN_02227934(lVar7,uVar11,*(undefined8 *)PTR_DAT_027b5008,0);
      }
      else {
        uVar11 = *(undefined8 *)(lVar7 + 0x10);
      }
      uVar4 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
      FUN_02460e00(uVar4,uVar11,0);
      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar7 = *(long *)(in_stack_00000038 + 0x10);
      lVar9 = *unaff_x28;
      *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar2 = *(uint *)(in_stack_00000038 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = uVar4;
        thunk_FUN_01286abc(puVar3,uVar4);
      }
      else {
        FUN_01953fdc(in_stack_00000038,uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      unaff_x24 = in_stack_00000020;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    } while (*(int *)(*unaff_x20 + 0xe0) != 0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_016ec5c8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_016ec5fc;
    }
  }
LAB_016ec5e0:
  puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016ec5fc:
  (*(code *)*puVar3)();
LAB_016ec608:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar11 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar11;
  thunk_FUN_01286abc();
  if (in_stack_00000020 != 0) {
    uVar11 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
    FUN_016ebda8(in_stack_00000008,uVar11);
    FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
    FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


