/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 0677f2ec
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x23;
  
  *(undefined1 *)(param_1 + 1) = unaff_w21;
  bVar4 = FUN_07693164();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 2) = bVar4 & 1;
  bVar4 = FUN_07693dbc();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 3) = bVar4 & 1;
  bVar4 = FUN_07693970();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 4) = bVar4 & 1;
  bVar4 = (**(code **)(*unaff_x20 + 0x5c8))();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 6) = bVar4 & 1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 6) == '\0') {
    bVar3 = false;
  }
  else {
    lVar9 = FUN_04f54134();
    bVar3 = lVar9 != 0;
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar9 + 0xb8) + 7) = bVar3;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x23 + 0xe0));
  }
  uVar10 = FUN_0768890c(uVar10,0);
  uVar10 = FUN_0767be1c(uVar10,0);
  bVar4 = FUN_07692be0(uVar10,0,0);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 8) = bVar4 & 1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 4) == '\0') {
    bVar3 = false;
  }
  else {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x23 + 0xe0));
    }
    plVar7 = (long *)FUN_0768890c(uVar10,0);
    if (plVar7 == (long *)0x0) goto LAB_0677fdf8;
    iVar5 = (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
    lVar6 = *(long *)(unaff_x19 + 0x20);
    bVar3 = iVar5 != 1;
  }
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x23 + 0xe0);
  lVar11 = *(long *)(unaff_x23 + 0x10);
  iVar5 = *(int *)(lVar6 + 0xe4);
  *(bool *)(*(long *)(lVar9 + 0xb8) + 5) = bVar3;
  if (iVar5 == 0) {
    thunk_FUN_040d65a8(lVar6);
  }
  FUN_0768890c(lVar11 + 0x20,0);
  bVar4 = FUN_07691f40();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x23 + 0x90);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 9) = bVar4 & 1;
  FUN_0768890c(lVar6 + 0x20,0);
  bVar4 = FUN_07691f40();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 10) = bVar4 & 1;
  bVar4 = FUN_08a67ec8();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0xb) = bVar4 & 1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  bVar4 = **(byte **)(lVar9 + 0xb8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc) = bVar4 ^ 1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    lVar9 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar9 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    bVar3 = *(char *)(*(long *)(lVar9 + 0xb8) + 10) != '\0';
  }
  else {
    bVar3 = true;
  }
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar9 + 0xb8) + 0xd) = bVar3;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
    lVar9 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar9 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    bVar3 = *(char *)(*(long *)(lVar9 + 0xb8) + 2) != '\0';
  }
  else {
    bVar3 = true;
  }
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar9 + 0xb8) + 0xe) = bVar3;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  bVar4 = *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  bVar1 = *(byte *)(*(long *)(lVar9 + 0xb8) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc) = bVar1 | bVar4;
  uVar8 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar8 & 1) == 0) {
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
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  puVar2 = PTR_DAT_092b7258;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_040b1acc();
  }
  lVar6 = *(long *)(unaff_x23 + 0xe0);
  uVar10 = *(undefined8 *)puVar2;
  iVar5 = *(int *)(lVar6 + 0xe4);
  *(byte *)(*(long *)(lVar9 + 0xb8) + 0x10) = bVar4 & 1;
  if (iVar5 == 0) {
    thunk_FUN_040d65a8(lVar6);
  }
  plVar7 = (long *)FUN_0768890c(uVar10,0);
  if (plVar7 != (long *)0x0) {
    bVar4 = (**(code **)(*plVar7 + 0x2b8))();
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_040b1acc();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 0xf) = bVar4 & 1;
    return;
  }
LAB_0677fdf8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


