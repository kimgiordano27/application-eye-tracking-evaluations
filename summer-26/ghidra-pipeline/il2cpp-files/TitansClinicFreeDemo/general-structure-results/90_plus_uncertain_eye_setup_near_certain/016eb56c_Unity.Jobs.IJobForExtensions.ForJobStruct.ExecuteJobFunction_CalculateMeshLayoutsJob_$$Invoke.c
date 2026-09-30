/*
FUNCTION_NAME: Unity.Jobs.IJobForExtensions.ForJobStruct.ExecuteJobFunction<CalculateMeshLayoutsJob>$$Invoke
ENTRY_POINT: 016eb56c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ebaac) */
/* WARNING: Removing unreachable block (ram,0x016eb99c) */
/* WARNING: Removing unreachable block (ram,0x016ebab4) */

void Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<CalculateMeshLayoutsJob>__Invoke
               (undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *in_x9;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long unaff_x25;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  uVar18 = *param_1;
  uVar8 = thunk_FUN_0124bba8(*in_x9);
  FUN_01810820(uVar8,uVar18,*(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18),0)
  ;
  lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  lVar9 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0122e748();
    lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8) = uVar8;
  lVar9 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0122e748();
  }
  thunk_FUN_01286abc(*(long *)(lVar9 + 0xb8) + 8,uVar8);
  plVar10 = (long *)FUN_01407e14();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  lVar9 = *plVar10;
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb0) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_016eb650;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)PTR_DAT_027b4fb0,0);
LAB_016eb650:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar7 = PTR_DAT_027b4fe0;
  puVar6 = PTR_DAT_027b3ea8;
  puVar5 = PTR_DAT_027b3ab8;
  puVar4 = PTR_DAT_027b1f18;
  puVar3 = PTR_DAT_027b1ab0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  do {
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016eb6dc;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)puVar4,0);
LAB_016eb6dc:
    uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_016eb990;
      lVar9 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 == 0)
      goto Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<CountFilledVoxels>___ctor;
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b4fb8) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016eb740;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)PTR_DAT_027b4fb8,0);
LAB_016eb740:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar9 = FUN_013eef0c(plVar12,*(undefined8 *)PTR_DAT_027b4f90);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0(uVar8,uVar8);
      }
      uVar8 = FUN_02227934(lVar9,uVar8,*(undefined8 *)PTR_DAT_027b5008,0);
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + 0x10);
    }
    uVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
    FUN_02460e00(uVar18,uVar8,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar9 = *(long *)(in_stack_00000038 + 0x10);
    lVar14 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar11 = uVar18;
      thunk_FUN_01286abc(puVar11,uVar18);
    }
    else {
      FUN_01953fdc(in_stack_00000038,uVar18,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = in_stack_00000020;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar12 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60();
    }
    puVar13 = (undefined4 *)thunk_FUN_0124bcfc();
    uVar1 = *puVar13;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar16 = *(long *)puVar5;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_0193239c(lVar9,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_016eb984;
    }
  }
Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<CountFilledVoxels>___ctor:
  puVar11 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)PTR_DAT_027b1f00,0);
LAB_016eb984:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_016eb990:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar8 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar8;
  thunk_FUN_01286abc();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar8 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
  FUN_016eb130(in_stack_00000008,uVar8);
  FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
  FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
  return;
}


