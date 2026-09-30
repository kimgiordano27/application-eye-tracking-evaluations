/*
FUNCTION_NAME: Unity.Jobs.IJobForExtensions.ForJobStruct.ExecuteJobFunction<NailFileVertexSelectJob>$$Invoke
ENTRY_POINT: 016ec37c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016ec724) */
/* WARNING: Removing unreachable block (ram,0x016ec614) */
/* WARNING: Removing unreachable block (ram,0x016ec72c) */

void Unity_Jobs_IJobForExtensions_ForJobStruct_ExecuteJobFunction<NailFileVertexSelectJob>__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong in_x9;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 uVar12;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  do {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_016ec3b8;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016ec3b8:
      plVar4 = (long *)(*(code *)*puVar3)();
      lVar5 = FUN_013eef0c(plVar4,*(undefined8 *)PTR_DAT_027b4f90);
      if (lVar5 == 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        uVar12 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0(uVar12,uVar12);
        }
        uVar12 = FUN_02227934(lVar5,uVar12,*(undefined8 *)PTR_DAT_027b5008,0);
      }
      else {
        uVar12 = *(undefined8 *)(lVar5 + 0x10);
      }
      uVar6 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b4fa8);
      FUN_02460e00(uVar6,uVar12,0);
      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar5 = *(long *)(in_stack_00000038 + 0x10);
      lVar9 = *unaff_x28;
      *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar2 = *(uint *)(in_stack_00000038 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = uVar6;
        thunk_FUN_01286abc(puVar3,uVar6);
      }
      else {
        FUN_01953fdc(in_stack_00000038,uVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = in_stack_00000020;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      plVar4 = (long *)OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60();
      }
      puVar7 = (undefined4 *)thunk_FUN_0124bcfc();
      uVar1 = *puVar7;
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar10 = *unaff_x27;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
      }
      else {
        FUN_0193239c(lVar5,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_016ec354;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016ec354:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_016ec608;
        lVar5 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_016ec5e0;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_016ec5c8;
      }
      param_1 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_027b4fb8;
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_016ec5c8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_027b1f00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
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
  uVar12 = FUN_01955a38(in_stack_00000038,*(undefined8 *)PTR_DAT_027b4ff0);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar12;
  thunk_FUN_01286abc();
  if (in_stack_00000020 != 0) {
    uVar12 = FUN_01933d58(in_stack_00000020,*(undefined8 *)PTR_DAT_027b4fe8);
    FUN_016ebda8(in_stack_00000008,uVar12);
    FUN_01b3b2bc(&stack0x00000010,*(undefined8 *)PTR_DAT_027b5000);
    FUN_01b3b2bc(&stack0x00000028,*(undefined8 *)PTR_DAT_027b4ff8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


