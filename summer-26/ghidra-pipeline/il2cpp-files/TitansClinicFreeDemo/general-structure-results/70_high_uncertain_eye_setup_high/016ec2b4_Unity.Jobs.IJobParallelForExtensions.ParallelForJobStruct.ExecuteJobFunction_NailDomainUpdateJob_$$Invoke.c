/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<NailDomainUpdateJob>$$Invoke
ENTRY_POINT: 016ec2b4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ec724) */
/* WARNING: Removing unreachable block (ram,0x016ec614) */
/* WARNING: Removing unreachable block (ram,0x016ec72c) */

void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<NailDomainUpdateJob>__Invoke
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x25;
  undefined8 uVar18;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  puVar8 = (undefined8 *)FUN_0122ea3c();
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar7 = PTR_DAT_027b4fe0;
  puVar6 = PTR_DAT_027b3ea8;
  puVar5 = PTR_DAT_027b3ab8;
  puVar4 = PTR_DAT_027b1f18;
  puVar3 = PTR_DAT_027b1ab0;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  do {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016ec354;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)puVar4,0);
LAB_016ec354:
    uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_016ec608;
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_016ec5e0;
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb8) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016ec3b8;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b4fb8,0);
LAB_016ec3b8:
    plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    lVar13 = FUN_013eef0c(plVar10,*(undefined8 *)PTR_DAT_027b4f90);
    if (lVar13 == 0) {
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0122e748();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0122e748();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      uVar18 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0(uVar18,uVar18);
      }
      uVar18 = FUN_02227934(lVar13,uVar18,*(undefined8 *)PTR_DAT_027b5008,0);
    }
    else {
      uVar18 = *(undefined8 *)(lVar13 + 0x10);
    }
    uVar11 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
    FUN_02460e00(uVar11,uVar18,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar13 = *(long *)(in_stack_00000038 + 0x10);
    lVar15 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
      *puVar8 = uVar11;
      thunk_FUN_01286abc(puVar8,uVar11);
    }
    else {
      FUN_01953fdc(in_stack_00000038,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = in_stack_00000020;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar10 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60();
    }
    puVar12 = (undefined4 *)thunk_FUN_0124bcfc();
    uVar1 = *puVar12;
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar5;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_0193239c(lVar13,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar17 = piVar17 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_016ec5fc;
    }
  }
LAB_016ec5e0:
  puVar8 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b1f00,0);
LAB_016ec5fc:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_016ec608:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar18 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar18;
  thunk_FUN_01286abc();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar18 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
  FUN_016ebda8(in_stack_00000008,uVar18);
  FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
  FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
  return;
}


