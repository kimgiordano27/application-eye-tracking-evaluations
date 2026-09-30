/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$GetValue
ENTRY_POINT: 04c90de8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__GetValue(long param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long unaff_x23;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4();
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  cVar2 = *(char *)(*(long *)(lVar7 + 0xb8) + 10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar7 + 0xb8) + 0xd) = cVar2 != '\0';
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    bVar5 = *(char *)(*(long *)(lVar7 + 0xb8) + 2) != '\0';
  }
  else {
    bVar5 = true;
  }
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar7 + 0xb8) + 0xe) = bVar5;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  bVar6 = *(byte *)(*(long *)(lVar7 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x58);
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  bVar3 = *(byte *)(*(long *)(lVar7 + 0xb8) + 8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4(lVar8);
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0xc) = bVar3 | bVar6;
  uVar9 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar9 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    uVar10 = (**(code **)(*unaff_x20 + 0x448))();
    uVar12 = *(undefined8 *)PTR_DAT_070f5480;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x23 + 0xe0));
    }
    uVar12 = FUN_0593e698(uVar12,0);
    bVar6 = FUN_05947b18(uVar10,uVar12,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  puVar4 = PTR_DAT_070f1600;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  lVar8 = *(long *)(unaff_x23 + 0xe0);
  uVar10 = *(undefined8 *)puVar4;
  iVar1 = *(int *)(lVar8 + 0xe4);
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0x10) = bVar6 & 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338(lVar8);
  }
  plVar11 = (long *)FUN_0593e698(uVar10,0);
  if (plVar11 != (long *)0x0) {
    bVar6 = (**(code **)(*plVar11 + 0x2a8))();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    *(byte *)(*(long *)(lVar7 + 0xb8) + 0xf) = bVar6 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


