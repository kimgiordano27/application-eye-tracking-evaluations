/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPlane
ENTRY_POINT: 06da5674
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPlane(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int iVar12;
  ulong uVar13;
  uint unaff_w23;
  long lVar14;
  ulong uVar15;
  
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *unaff_x21;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar5 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar5 + 0x18) == 0) goto LAB_06da6578;
  lVar10 = *(long *)(unaff_x19 + 0xf8);
  if (lVar10 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w23) goto LAB_06da6578;
  lVar9 = (long)(int)unaff_w23;
  lVar10 = *(long *)(lVar10 + lVar9 * 8 + 0x20);
  if (lVar10 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_06da6578;
  lVar11 = *(long *)(lVar5 + 0x20);
  if (lVar11 == 0) goto LAB_06da6574;
  lVar14 = (long)(int)unaff_w20;
  uVar3 = *(uint *)(lVar10 + lVar14 * 4 + 0x20);
  if ((*(uint *)(lVar11 + 0x18) <= uVar3) || (*(uint *)(lVar5 + 0x18) < 2)) goto LAB_06da6578;
  lVar5 = *(long *)(lVar5 + 0x28);
  if (lVar5 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_06da6578;
  lVar10 = *(long *)(unaff_x19 + 0x100);
  if (lVar10 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w23) goto LAB_06da6578;
  lVar10 = *(long *)(lVar10 + lVar9 * 8 + 0x20);
  if (lVar10 == 0) goto LAB_06da6574;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_06da6578;
  iVar1 = *(int *)(lVar11 + (long)(int)uVar3 * 4 + 0x20);
  iVar2 = *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20);
  if (*(char *)(lVar10 + lVar14 + 0x20) != '\0') {
    lVar5 = *(long *)(unaff_x19 + 0x110);
    if (lVar5 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w23) goto LAB_06da6578;
    lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
    if (*(int *)(lVar5 + lVar14 * 4 + 0x20) == 2) {
      if (iVar1 < 1) {
        lVar5 = *(long *)(unaff_x19 + 0x180);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar5 + 0x38),0,8,0);
        lVar5 = *(long *)(unaff_x19 + 0x180);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar5 + 0x20),0,6,0);
        lVar5 = *(long *)(unaff_x19 + 0x180);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar5 + 0x28),0,6,0);
        lVar5 = *(long *)(unaff_x19 + 0x180);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar5 + 0x30),0,6,0);
        iVar12 = 0;
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x108);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w23) goto LAB_06da6578;
        lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
        if (*(char *)(lVar5 + lVar14 + 0x20) == '\0') {
          uVar13 = 0;
          iVar12 = iVar1 * 0x12;
        }
        else {
          uVar13 = 0;
          do {
            lVar5 = *(long *)(unaff_x19 + 0x180);
            if (lVar5 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
            lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
            if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
            lVar5 = *(long *)(lVar5 + 0x38);
            uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
            if (lVar5 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_06da6578;
            lVar10 = uVar13 * 4;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(lVar5 + lVar10 + 0x20) = uVar4;
          } while (uVar13 != 8);
          iVar12 = iVar1 * 0x11;
          uVar13 = 3;
        }
        uVar13 = uVar13 | 8;
        do {
          lVar5 = *(long *)(unaff_x19 + 0x180);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar5 = *(long *)(lVar5 + 0x20);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar5 == 0) goto LAB_06da6574;
          uVar15 = uVar13 - 8;
          if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_06da6578;
          *(undefined4 *)(lVar5 + uVar13 * 4) = uVar4;
          lVar5 = *(long *)(unaff_x19 + 0x180);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar5 = *(long *)(lVar5 + 0x28);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_06da6578;
          *(undefined4 *)(lVar5 + uVar13 * 4) = uVar4;
          lVar5 = *(long *)(unaff_x19 + 0x180);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar5 = *(long *)(lVar5 + 0x30);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar5 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_06da6578;
          *(undefined4 *)(lVar5 + uVar13 * 4) = uVar4;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0xe);
      }
      if (0 < iVar2) {
        lVar5 = 0xe;
        while (lVar10 = *(long *)(unaff_x19 + 0x180), lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x20);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          uVar13 = lVar5 - 8;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_06da6578;
          *(undefined4 *)(lVar10 + lVar5 * 4) = uVar4;
          lVar10 = *(long *)(unaff_x19 + 0x180);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x28);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_06da6578;
          *(undefined4 *)(lVar10 + lVar5 * 4) = uVar4;
          lVar10 = *(long *)(unaff_x19 + 0x180);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x30);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_06da6578;
          *(undefined4 *)(lVar10 + lVar5 * 4) = uVar4;
          lVar5 = lVar5 + 1;
          if (lVar5 == 0x14) {
            return iVar12 + iVar2 * 0x12;
          }
        }
        goto LAB_06da6574;
      }
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar5 + 0x20),6,6,0);
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar5 + 0x28),6,6,0);
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da6578;
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      uVar7 = 6;
      uVar8 = 6;
      goto LAB_06da6550;
    }
  }
  if (unaff_w23 == 0) {
LAB_06da587c:
    if (iVar1 < 1) {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar5 + 0x38),0,6,0);
      iVar12 = 0;
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x20) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x24) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x28) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x2c) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x30) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_06da6578;
      iVar12 = iVar1 * 6;
      *(undefined4 *)(lVar5 + 0x34) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
      if (lVar5 == 0) goto LAB_06da6574;
      goto LAB_06da5ad8;
    }
LAB_06da5b04:
    if (iVar1 < 1) {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar5 + 0x38),6,5,0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x38) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x3c) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x40) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x44) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_06da6578;
      iVar12 = iVar12 + iVar1 * 5;
      *(undefined4 *)(lVar5 + 0x48) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
      if (lVar5 == 0) goto LAB_06da6574;
      goto LAB_06da5d0c;
    }
LAB_06da5d38:
    if (iVar2 < 1) {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar5 + 0x38),0xb,5,0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0xc) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x4c) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0xd) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x50) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0xe) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x54) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0xf) goto LAB_06da6578;
      *(undefined4 *)(lVar5 + 0x58) = uVar4;
      lVar5 = *(long *)(unaff_x19 + 0x180);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar5 = *(long *)(lVar5 + 0x38);
      uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar5 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar5 + 0x18) < 0x10) goto LAB_06da6578;
      iVar12 = iVar12 + iVar2 * 5;
      *(undefined4 *)(lVar5 + 0x5c) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
      if (lVar5 == 0) goto LAB_06da6574;
      goto LAB_06da5f40;
    }
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0xd8);
    if (lVar5 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar10 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_06da6574;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_06da6578;
    if (*(int *)(lVar10 + 0x20) == 0) goto LAB_06da587c;
    iVar12 = 0;
LAB_06da5ad8:
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar10 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06da6578;
    if (*(int *)(lVar10 + 0x24) == 0) goto LAB_06da5b04;
LAB_06da5d0c:
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar10 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06da6578;
    if (*(int *)(lVar10 + 0x28) == 0) goto LAB_06da5d38;
LAB_06da5f40:
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
    if (*(int *)(lVar5 + 0x2c) != 0) {
      return iVar12;
    }
  }
  if (iVar2 < 1) {
    lVar5 = *(long *)(unaff_x19 + 0x180);
    if (lVar5 != 0) {
      if (unaff_w20 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_06da6574;
        if (3 < *(uint *)(lVar5 + 0x18)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x38);
          uVar7 = 0x10;
          uVar8 = 5;
LAB_06da6550:
          FUN_071245a8(uVar6,uVar7,uVar8,0);
          return iVar12;
        }
      }
LAB_06da6578:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x180);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          lVar5 = *(long *)(lVar5 + 0x38);
          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) < 0x11) goto LAB_06da6578;
            *(undefined4 *)(lVar5 + 0x60) = uVar4;
            lVar5 = *(long *)(unaff_x19 + 0x180);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
              lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
              if (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                  lVar5 = *(long *)(lVar5 + 0x38);
                  uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                  if (lVar5 != 0) {
                    if (*(uint *)(lVar5 + 0x18) < 0x12) goto LAB_06da6578;
                    *(undefined4 *)(lVar5 + 100) = uVar4;
                    lVar5 = *(long *)(unaff_x19 + 0x180);
                    if (lVar5 != 0) {
                      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
                      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
                      if (lVar5 != 0) {
                        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                          lVar5 = *(long *)(lVar5 + 0x38);
                          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                          if (lVar5 != 0) {
                            if (*(uint *)(lVar5 + 0x18) < 0x13) goto LAB_06da6578;
                            *(undefined4 *)(lVar5 + 0x68) = uVar4;
                            lVar5 = *(long *)(unaff_x19 + 0x180);
                            if (lVar5 != 0) {
                              if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
                              lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
                              if (lVar5 != 0) {
                                if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
                                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                  lVar5 = *(long *)(lVar5 + 0x38);
                                  uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                                  if (lVar5 != 0) {
                                    if (*(uint *)(lVar5 + 0x18) < 0x14) goto LAB_06da6578;
                                    *(undefined4 *)(lVar5 + 0x6c) = uVar4;
                                    lVar5 = *(long *)(unaff_x19 + 0x180);
                                    if (lVar5 != 0) {
                                      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_06da6578;
                                      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
                                      if (lVar5 != 0) {
                                        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_06da6578;
                                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                          lVar5 = *(long *)(lVar5 + 0x38);
                                          uVar4 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                                          if (lVar5 != 0) {
                                            if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                              *(undefined4 *)(lVar5 + 0x70) = uVar4;
                                              return iVar12 + iVar2 * 5;
                                            }
                                            goto LAB_06da6578;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06da6574:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


