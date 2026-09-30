/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$Load
ENTRY_POINT: 05085fdc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__Load(ulong param_1,long param_2)

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
  long lVar10;
  undefined8 uVar11;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0xc0) + 0x30);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0367c9fc();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 10) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xd) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0367c9fc();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar4 = *(char *)(*(long *)(lVar6 + 0xb8) + 2) != '\0';
  }
  else {
    bVar4 = true;
  }
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar6 + 0xb8) + 0xe) = bVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar5 = *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar6 + 0xb8) + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0367c9fc(lVar10);
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0xc) = bVar2 | bVar5;
  uVar7 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar7 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar8 = (**(code **)(*unaff_x20 + 0x438))();
    uVar11 = *(undefined8 *)PTR_DAT_07a01808;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x23 + 0xe0));
    }
    uVar11 = FUN_05e26f18(uVar11,0);
    bVar5 = FUN_05e30794(uVar8,uVar11,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  puVar3 = PTR_DAT_079fd4f8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x23 + 0xe0);
  uVar8 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(byte *)(*(long *)(lVar6 + 0xb8) + 0x10) = bVar5 & 1;
  if (iVar1 == 0) {
    thunk_FUN_036a1978(lVar10);
  }
  plVar9 = (long *)FUN_05e26f18(uVar8,0);
  if (plVar9 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar9 + 0x298))();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    *(byte *)(*(long *)(lVar6 + 0xb8) + 0xf) = bVar5 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


