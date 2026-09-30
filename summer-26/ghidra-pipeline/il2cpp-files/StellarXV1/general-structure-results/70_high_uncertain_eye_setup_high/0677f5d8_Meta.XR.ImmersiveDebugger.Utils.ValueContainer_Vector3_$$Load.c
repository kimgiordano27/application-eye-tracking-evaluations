/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$Load
ENTRY_POINT: 0677f5d8
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__Load(ushort *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x23;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 4) == '\0') {
    bVar3 = false;
  }
  else {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x23 + 0xe0));
    }
    plVar8 = (long *)FUN_0768890c(uVar10,0);
    if (plVar8 == (long *)0x0) goto LAB_0677fdf8;
    iVar5 = (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
    lVar7 = *(long *)(unaff_x19 + 0x20);
    bVar3 = iVar5 != 1;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x23 + 0xe0);
  lVar11 = *(long *)(unaff_x23 + 0x10);
  iVar5 = *(int *)(lVar7 + 0xe4);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 5) = bVar3;
  if (iVar5 == 0) {
    thunk_FUN_040d65a8(lVar7);
  }
  FUN_0768890c(lVar11 + 0x20,0);
  bVar4 = FUN_07691f40();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x23 + 0x90);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 9) = bVar4 & 1;
  FUN_0768890c(lVar7 + 0x20,0);
  bVar4 = FUN_07691f40();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 10) = bVar4 & 1;
  bVar4 = FUN_08a67ec8();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xb) = bVar4 & 1;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  lVar6 = *(long *)(lVar7 + 0x20);
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
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  bVar4 = **(byte **)(lVar6 + 0xb8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar4 ^ 1;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  lVar6 = *(long *)(lVar7 + 0x20);
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
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    lVar6 = *(long *)(lVar7 + 0x20);
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
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    bVar3 = *(char *)(*(long *)(lVar6 + 0xb8) + 10) != '\0';
  }
  else {
    bVar3 = true;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xd) = bVar3;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
  lVar6 = *(long *)(lVar7 + 0x20);
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
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
    lVar6 = *(long *)(lVar7 + 0x20);
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
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    bVar3 = *(char *)(*(long *)(lVar6 + 0xb8) + 2) != '\0';
  }
  else {
    bVar3 = true;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xe) = bVar3;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
  lVar6 = *(long *)(lVar7 + 0x20);
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
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  bVar4 = *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x58);
  lVar6 = *(long *)(lVar7 + 0x20);
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
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  bVar1 = *(byte *)(*(long *)(lVar6 + 0xb8) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar1 | bVar4;
  uVar9 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar9 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar12 = *(undefined8 *)PTR_DAT_092bbab8;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x23 + 0xe0));
    }
    uVar12 = FUN_0768890c(uVar12,0);
    bVar4 = FUN_07691f40(uVar10,uVar12,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  puVar2 = PTR_DAT_092b7258;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x23 + 0xe0);
  uVar10 = *(undefined8 *)puVar2;
  iVar5 = *(int *)(lVar7 + 0xe4);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0x10) = bVar4 & 1;
  if (iVar5 == 0) {
    thunk_FUN_040d65a8(lVar7);
  }
  plVar8 = (long *)FUN_0768890c(uVar10,0);
  if (plVar8 != (long *)0x0) {
    bVar4 = (**(code **)(*plVar8 + 0x2b8))();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    *(byte *)(*(long *)(lVar6 + 0xb8) + 0xf) = bVar4 & 1;
    return;
  }
LAB_0677fdf8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


