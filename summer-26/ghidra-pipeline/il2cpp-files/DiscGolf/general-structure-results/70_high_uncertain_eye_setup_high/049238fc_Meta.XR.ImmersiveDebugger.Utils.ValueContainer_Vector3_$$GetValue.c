/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$GetValue
ENTRY_POINT: 049238fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__GetValue(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long lVar10;
  undefined8 uVar11;
  long unaff_x23;
  
  lVar10 = *(long *)(unaff_x23 + 0x10);
  iVar1 = *(int *)(param_1 + 0xe4);
  *(undefined1 *)(*(long *)(param_2 + 0xb8) + 5) = unaff_w21;
  if (iVar1 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  FUN_054f73b4(lVar10 + 0x20,0);
  bVar5 = FUN_055006dc();
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x23 + 0x90);
  *(byte *)(*(long *)(lVar10 + 0xb8) + 9) = bVar5 & 1;
  FUN_054f73b4(lVar9 + 0x20,0);
  bVar5 = FUN_055006dc();
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  *(byte *)(*(long *)(lVar10 + 0xb8) + 10) = bVar5 & 1;
  bVar5 = FUN_063ddb38();
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar10 + 0xb8) + 0xb) = bVar5 & 1;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  bVar5 = **(byte **)(lVar10 + 0xb8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18(lVar9);
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar10 + 0xb8) + 0xc) = bVar5 ^ 1;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar10 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar10 + 0xb8) + 10) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar10 + 0xb8) + 0xd) = bVar4;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar10 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar10 + 0xb8) + 2) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar10 + 0xb8) + 0xe) = bVar4;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  bVar5 = *(byte *)(*(long *)(lVar10 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar10 + 0xb8) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02dcfd18(lVar9);
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  *(byte *)(*(long *)(lVar10 + 0xb8) + 0xc) = bVar2 | bVar5;
  uVar6 = (**(code **)(*unaff_x20 + 0x448))();
  if ((uVar6 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar7 = (**(code **)(*unaff_x20 + 0x4c8))();
    uVar11 = *(undefined8 *)PTR_DAT_06a10d90;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(unaff_x23 + 0xe0));
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    bVar5 = FUN_055006dc(uVar7,uVar11,0);
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  puVar3 = PTR_DAT_06a0d3c8;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02dcfd18();
  }
  lVar9 = *(long *)(unaff_x23 + 0xe0);
  uVar7 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *(byte *)(*(long *)(lVar10 + 0xb8) + 0x10) = bVar5 & 1;
  if (iVar1 == 0) {
    thunk_FUN_02df485c(lVar9);
  }
  plVar8 = (long *)FUN_054f73b4(uVar7,0);
  if (plVar8 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar8 + 0x328))();
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18(lVar10);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    *(byte *)(*(long *)(lVar10 + 0xb8) + 0xf) = bVar5 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


