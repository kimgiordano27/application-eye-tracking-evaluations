/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 0508628c
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor(ulong param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0xc0) + 0x50);
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  bVar4 = *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0367c9fc(lVar9);
  }
  lVar5 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc) = bVar2 | bVar4;
  uVar6 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar6 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    uVar7 = (**(code **)(*unaff_x20 + 0x438))();
    uVar10 = *(undefined8 *)PTR_DAT_07a01808;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x23 + 0xe0));
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    bVar4 = FUN_05e30794(uVar7,uVar10,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  puVar3 = PTR_DAT_079fd4f8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  lVar9 = *(long *)(unaff_x23 + 0xe0);
  uVar7 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0x10) = bVar4 & 1;
  if (iVar1 == 0) {
    thunk_FUN_036a1978(lVar9);
  }
  plVar8 = (long *)FUN_05e26f18(uVar7,0);
  if (plVar8 != (long *)0x0) {
    bVar4 = (**(code **)(*plVar8 + 0x298))();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    *(byte *)(*(long *)(lVar5 + 0xb8) + 0xf) = bVar4 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


