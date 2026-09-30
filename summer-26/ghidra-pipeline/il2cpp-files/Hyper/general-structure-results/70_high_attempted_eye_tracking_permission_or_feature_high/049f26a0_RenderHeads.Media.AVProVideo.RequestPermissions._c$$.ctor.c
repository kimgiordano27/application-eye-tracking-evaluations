/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.<>c$$.ctor
ENTRY_POINT: 049f26a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


long RenderHeads_Media_AVProVideo_RequestPermissions_<>c___ctor(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  long in_stack_00000008;
  
  while( true ) {
    lVar10 = *(long *)(unaff_x27 + 0xf38);
    bVar4 = unaff_x20 == *(ulong *)(unaff_x28 + 0xf30);
    unaff_x20 = *(ulong *)(unaff_x28 + 0xf30);
    if (bVar4) {
      if (lVar10 != 0) {
        memcpy(unaff_x23,*(void **)(unaff_x29 + 0xf28),lVar10 << 4);
      }
      *(ulong *)(unaff_x28 + 0xf30) = unaff_x19;
      *(void **)(unaff_x29 + 0xf28) = unaff_x23;
      unaff_x20 = unaff_x19;
    }
    lVar3 = DAT_0b558f28;
    if ((ulong)(lVar10 + unaff_x25) < unaff_x20) break;
    if (unaff_x20 == 0) {
      DAT_0b558dd0 = FUN_049f25ac;
      if (*(int *)(unaff_x24 + 0x728) != 0) {
        *unaff_x21 = 0;
      }
      unaff_x19 = 100;
    }
    else {
      if (*(int *)(unaff_x24 + 0x728) != 0) {
        *unaff_x21 = 0;
      }
      if ((unaff_x20 >> 0x37 & 0xff) != 0) {
        return -1;
      }
      unaff_x19 = unaff_x20 << 1;
    }
    unaff_x23 = (void *)FUN_049f0430(unaff_x19 << 4,0);
    if (unaff_x23 == (void *)0x0) {
      return -1;
    }
    if ((*(int *)(unaff_x24 + 0x728) != 0) && (iVar5 = FUN_04a68ec0(1), iVar5 != 0)) {
      FUN_049e90c4();
    }
  }
  lVar2 = unaff_x25 + -1;
  if (lVar2 != 0) {
    puVar6 = (undefined4 *)(DAT_0b558f28 + lVar10 * 0x10 + 8);
    puVar7 = in_stack_00000000;
    lVar9 = lVar2;
    do {
      lVar9 = lVar9 + -1;
      *(undefined8 *)(puVar6 + -2) = *puVar7;
      *puVar6 = 1;
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
  }
  uVar8 = in_stack_00000000[lVar2];
  puVar1 = (ulong *)(lVar3 + (lVar2 + lVar10) * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = uVar8 & 0xffffffffffffffffU >> (-in_stack_00000008 & 0x3fU);
  iVar5 = *(int *)(unaff_x24 + 0x728);
  *(long *)(unaff_x27 + 0xf38) = *(long *)(unaff_x27 + 0xf38) + unaff_x25;
  if (iVar5 != 0) {
    *unaff_x21 = 0;
    return lVar10;
  }
  return lVar10;
}


