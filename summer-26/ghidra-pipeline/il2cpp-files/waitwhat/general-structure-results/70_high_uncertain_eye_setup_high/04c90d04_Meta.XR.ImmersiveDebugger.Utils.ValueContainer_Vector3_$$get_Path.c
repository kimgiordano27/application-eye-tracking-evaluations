/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Path
ENTRY_POINT: 04c90d04
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Path(ushort *param_1,long param_2)

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
  long unaff_x19;
  long *unaff_x20;
  byte unaff_w21;
  long lVar10;
  undefined8 uVar11;
  long unaff_x23;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(byte *)(*(long *)(param_2 + 0xb8) + 0xc) = unaff_w21 ^ 1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 10) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xd) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 2) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xe) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar5 = *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar6 + 0xb8) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4(lVar10);
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar2 | bVar5;
  uVar7 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar7 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar8 = (**(code **)(*unaff_x20 + 0x448))();
    uVar11 = *(undefined8 *)PTR_DAT_070f5480;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x23 + 0xe0));
    }
    uVar11 = FUN_0593e698(uVar11,0);
    bVar5 = FUN_05947b18(uVar8,uVar11,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  puVar3 = PTR_DAT_070f1600;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar10 = *(long *)(unaff_x23 + 0xe0);
  uVar8 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0x10) = bVar5 & 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338(lVar10);
  }
  plVar9 = (long *)FUN_0593e698(uVar8,0);
  if (plVar9 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar9 + 0x2a8))();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    *(byte *)(*(long *)(lVar6 + 0xb8) + 0xf) = bVar5 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


