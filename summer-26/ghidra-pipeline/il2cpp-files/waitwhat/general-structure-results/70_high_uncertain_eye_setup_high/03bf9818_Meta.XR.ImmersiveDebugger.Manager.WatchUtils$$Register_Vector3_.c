/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 03bf9818
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  long *in_stack_00000028;
  
  lVar2 = FUN_031c09d4();
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar2 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 03bf9864 to 03cf988b has its CatchHandler @ 03bf9a64 */
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
                    /* try { // try from 03bf98ac to 03cf990b has its CatchHandler @ 03bf9a68 */
    uVar10 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0593e698(uVar10,0);
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000020 = *(undefined4 *)(unaff_x20 + 1);
    in_stack_00000008 = lVar2;
    uVar3 = thunk_FUN_03196ed8(&stack0x00000008,0);
                    /* try { // try from 03bf9920 to 03cf993f has its CatchHandler @ 03bf9a60 */
    uVar4 = FUN_0594875c(uVar10,uVar3,0);
    if ((uVar4 & 1) == 0) goto LAB_03bf9a58;
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = *(undefined4 *)(unaff_x20 + 1);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar2;
    uVar10 = thunk_FUN_03196ed8(&stack0x00000008,0);
    uVar4 = FUN_06a76c38(uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = 0;
      uVar7 = 2;
      goto LAB_03bf9aa4;
    }
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = *(undefined4 *)(unaff_x20 + 1);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar2;
    uVar10 = thunk_FUN_03196ed8(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070f29c8);
    }
    plVar5 = (long *)FUN_06a68cb0(uVar10,0);
    if (plVar5 != (long *)0x0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x20 + 1));
      in_stack_00000028 =
           (long *)thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38),
                                      &stack0x00000008);
      lVar2 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f2a30) {
            puVar6 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_03bf9acc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f2a30,1);
LAB_03bf9acc:
      (*(code *)*puVar6)(plVar5);
      plVar5 = in_stack_00000028;
      lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar5);
      }
      puVar6 = (undefined8 *)thunk_FUN_031c3ef0();
      uVar7 = 0;
      uVar10 = 1;
      uVar1 = *(undefined4 *)(puVar6 + 1);
      *unaff_x20 = *puVar6;
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      goto LAB_03bf9aa4;
    }
  }
  else {
LAB_03bf9a58:
    if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = FUN_03bc068c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar2 != 0) {
      FUN_03ba7a50();
      uVar7 = 0;
      uVar10 = 1;
      goto LAB_03bf9aa4;
    }
  }
  uVar10 = 0;
  uVar7 = 3;
LAB_03bf9aa4:
  *unaff_x19 = uVar7;
  return uVar10;
}


