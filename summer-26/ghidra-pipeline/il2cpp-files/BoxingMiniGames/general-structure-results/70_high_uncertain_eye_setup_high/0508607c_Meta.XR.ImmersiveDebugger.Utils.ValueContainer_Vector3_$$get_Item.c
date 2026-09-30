/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Item
ENTRY_POINT: 0508607c
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Item(long param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long unaff_x23;
  
  lVar11 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  cVar2 = *(char *)(*(long *)(lVar7 + 0xb8) + 10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar7 + 0xb8) + 0xd) = cVar2 != '\0';
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 3) == '\0') {
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x48);
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    lVar11 = *(long *)(unaff_x19 + 0x20);
    bVar5 = *(char *)(*(long *)(lVar7 + 0xb8) + 2) != '\0';
  }
  else {
    bVar5 = true;
  }
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  *(bool *)(*(long *)(lVar7 + 0xb8) + 0xe) = bVar5;
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x50);
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  bVar6 = *(byte *)(*(long *)(lVar7 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc(lVar11);
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar11 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  bVar3 = *(byte *)(*(long *)(lVar7 + 0xb8) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc(lVar11);
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0xc) = bVar3 | bVar6;
  uVar8 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar8 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    uVar9 = (**(code **)(*unaff_x20 + 0x438))();
    uVar12 = *(undefined8 *)PTR_DAT_07a01808;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x23 + 0xe0));
    }
    uVar12 = FUN_05e26f18(uVar12,0);
    bVar6 = FUN_05e30794(uVar9,uVar12,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  puVar4 = PTR_DAT_079fd4f8;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar11 = *(long *)(unaff_x23 + 0xe0);
  uVar9 = *(undefined8 *)puVar4;
  iVar1 = *(int *)(lVar11 + 0xe4);
  *(byte *)(*(long *)(lVar7 + 0xb8) + 0x10) = bVar6 & 1;
  if (iVar1 == 0) {
    thunk_FUN_036a1978(lVar11);
  }
  plVar10 = (long *)FUN_05e26f18(uVar9,0);
  if (plVar10 != (long *)0x0) {
    bVar6 = (**(code **)(*plVar10 + 0x298))();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    *(byte *)(*(long *)(lVar7 + 0xb8) + 0xf) = bVar6 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


