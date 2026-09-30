/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<NailDomainUpdateJob>$$.ctor
ENTRY_POINT: 016ec200
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ec724) */
/* WARNING: Removing unreachable block (ram,0x016ec614) */
/* WARNING: Removing unreachable block (ram,0x016ec72c) */

void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<NailDomainUpdateJob>___ctor
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined8 uVar18;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  FUN_01810820();
  lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  lVar8 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0122e748();
    lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = unaff_x23;
  lVar8 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0122e748();
  }
  thunk_FUN_01286abc(*(long *)(lVar8 + 0xb8) + 8);
  plVar9 = (long *)FUN_01407e14();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb0) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
        goto 
        Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<NailFileVertexSelectJob>___ctor
        ;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b4fb0,0);
Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<NailFileVertexSelectJob>___ctor:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
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
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016ec354;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)puVar4,0);
LAB_016ec354:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_016ec608;
      lVar8 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 == 0) goto LAB_016ec5e0;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb8) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016ec3b8;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b4fb8,0);
LAB_016ec3b8:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    lVar8 = FUN_013eef0c(plVar11,*(undefined8 *)PTR_DAT_027b4f90);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0122e748();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0122e748();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      uVar18 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0(uVar18,uVar18);
      }
      uVar18 = FUN_02227934(lVar8,uVar18,*(undefined8 *)PTR_DAT_027b5008,0);
    }
    else {
      uVar18 = *(undefined8 *)(lVar8 + 0x10);
    }
    uVar12 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
    FUN_02460e00(uVar12,uVar18,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar8 = *(long *)(in_stack_00000038 + 0x10);
    lVar14 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar12;
      thunk_FUN_01286abc(puVar10,uVar12);
    }
    else {
      FUN_01953fdc(in_stack_00000038,uVar12,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar8 = in_stack_00000020;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar11 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60();
    }
    puVar13 = (undefined4 *)thunk_FUN_0124bcfc();
    uVar1 = *puVar13;
    lVar14 = *(long *)(lVar8 + 0x10);
    lVar16 = *(long *)puVar5;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_0193239c(lVar8,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_016ec5fc;
    }
  }
LAB_016ec5e0:
  puVar10 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b1f00,0);
LAB_016ec5fc:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
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


