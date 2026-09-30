/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Item
ENTRY_POINT: 0677f678
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Item(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long unaff_x23;
  
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x23 + 0xe0);
  lVar11 = *(long *)(unaff_x23 + 0x10);
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 5) = param_1 != 1;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8(lVar10);
  }
  FUN_0768890c(lVar11 + 0x20,0);
  bVar5 = FUN_07691f40();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x23 + 0x90);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 9) = bVar5 & 1;
  FUN_0768890c(lVar10 + 0x20,0);
  bVar5 = FUN_07691f40();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 10) = bVar5 & 1;
  bVar5 = FUN_08a67ec8();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xb) = bVar5 & 1;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar5 = **(byte **)(lVar6 + 0xb8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc(lVar10);
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar5 ^ 1;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x30);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 10) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xd) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 2) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xe) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar5 = *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar6 + 0xb8) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc(lVar10);
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar2 | bVar5;
  uVar7 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar7 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar8 = (**(code **)(*unaff_x20 + 0x458))();
    uVar12 = *(undefined8 *)PTR_DAT_092bbab8;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x23 + 0xe0));
    }
    uVar12 = FUN_0768890c(uVar12,0);
    bVar5 = FUN_07691f40(uVar8,uVar12,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  puVar3 = PTR_DAT_092b7258;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x23 + 0xe0);
  uVar8 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0x10) = bVar5 & 1;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8(lVar10);
  }
  plVar9 = (long *)FUN_0768890c(uVar8,0);
  if (plVar9 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar9 + 0x2b8))();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    *(byte *)(*(long *)(lVar6 + 0xb8) + 0xf) = bVar5 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


