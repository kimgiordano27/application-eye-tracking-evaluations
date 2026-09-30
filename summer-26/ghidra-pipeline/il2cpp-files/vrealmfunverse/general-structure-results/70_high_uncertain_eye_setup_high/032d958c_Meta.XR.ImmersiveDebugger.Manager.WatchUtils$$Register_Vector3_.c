/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 032d958c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long lVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  if (lVar4 == 0) {
    FUN_02b76274();
    lVar4 = *(long *)(unaff_x20 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = **(long **)(unaff_x20 + 0x38);
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xb) == '\0') {
    *unaff_x19 = 0;
    thunk_FUN_02bb0e9c();
    return false;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xc) == '\0') {
LAB_032d9700:
    lVar4 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x58);
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (**(char **)(lVar4 + 0xb8) == '\0') {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      in_stack_00000018 = *unaff_x21;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar4;
      uVar3 = thunk_FUN_02b4c898(&stack0x00000008,0);
      if (*(int *)(*(long *)PTR_DAT_0631fe88 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631fe88);
      }
      lVar4 = FUN_05d22c28(uVar3,0);
      goto LAB_032d9838;
    }
  }
  else {
    plVar1 = (long *)FUN_0314f49c(*(undefined8 *)(lVar5 + 0x18));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*unaff_x21,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x38);
      goto LAB_032d9700;
    }
  }
  if (*(int *)(DAT_0644b1e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar4 = FUN_032d3fe4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x48));
LAB_032d9838:
  *unaff_x19 = lVar4;
  thunk_FUN_02bb0e9c();
  return *unaff_x19 != 0;
}


