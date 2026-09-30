/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<CollisionMeshesBuffersSetupJob>$$.ctor
ENTRY_POINT: 016eb7d8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ebaac) */
/* WARNING: Removing unreachable block (ram,0x016eb99c) */
/* WARNING: Removing unreachable block (ram,0x016ebab4) */

void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<CollisionMeshesBuffersSetupJob>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
code_r0x016eb7d8:
                    /* catch() { ... } // from try @ 016eb78c with catch @ 016eb7d8 */
                    /* catch() { ... } // from try @ 016eb748 with catch @ 016eb7e0
                       catch() { ... } // from try @ 016eb7bc with catch @ 016eb7e0 */
  uVar3 = FUN_02227934(unaff_x24,param_2,param_3,0);
  do {
                    /* try { // try from 016eb7e8 to 017eb7eb has its CatchHandler @ 016eb8a8 */
                    /* try { // try from 016eb7ec to 017eb803 has its CatchHandler @ 016eb5dc */
    uVar4 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
                    /* try { // try from 016eb804 to 017eb81b has its CatchHandler @ 016eb898 */
    FUN_02460e00(uVar4,uVar3,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar7 = *(long *)(in_stack_00000038 + 0x10);
    lVar10 = *unaff_x28;
                    /* try { // try from 016eb81c to 017eb887 has its CatchHandler @ 016eb5dc */
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
      *puVar8 = uVar4;
      thunk_FUN_01286abc(puVar8,uVar4);
    }
    else {
      FUN_01953fdc(in_stack_00000038,uVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = in_stack_00000020;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
                    /* try { // try from 016eb888 to 017eb897 has its CatchHandler @ 016eb898 */
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar5 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
    if (lVar7 == 0) {
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
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *unaff_x27;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_0193239c(lVar7,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_016eb6dc;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_0122ea3c();
LAB_016eb6dc:
    uVar9 = (*(code *)*puVar8)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_016eb990;
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0)
      goto Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<CountFilledVoxels>___ctor;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_016eb950;
    }
    lVar7 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_027b4fb8) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_016eb740;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_0122ea3c();
LAB_016eb740:
    unaff_x23 = (long *)(*(code *)*puVar8)();
    lVar7 = FUN_013eef0c(unaff_x23,*(undefined8 *)PTR_DAT_027b4f90);
    if (lVar7 == 0) break;
    uVar3 = *(undefined8 *)(lVar7 + 0x10);
  } while( true );
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
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  unaff_x24 = **(long **)(lVar7 + 0xb8);
  param_2 = (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  param_3 = *(undefined8 *)PTR_DAT_027b5008;
  goto code_r0x016eb7d8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_016eb950:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_016eb984;
    }
  }
Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<CountFilledVoxels>___ctor:
  puVar8 = (undefined8 *)FUN_0122ea3c();
LAB_016eb984:
  (*(code *)*puVar8)();
LAB_016eb990:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar3 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar3;
  thunk_FUN_01286abc();
  if (in_stack_00000020 != 0) {
    uVar3 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
    FUN_016eb130(in_stack_00000008,uVar3);
    FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
    FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


