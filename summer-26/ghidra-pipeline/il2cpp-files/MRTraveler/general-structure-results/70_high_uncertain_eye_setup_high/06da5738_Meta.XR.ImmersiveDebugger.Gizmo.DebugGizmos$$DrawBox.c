/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawBox
ENTRY_POINT: 06da5738
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


int Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawBox(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  uint unaff_w20;
  int iVar9;
  ulong uVar10;
  uint unaff_w23;
  long unaff_x25;
  ulong uVar11;
  
  iVar1 = *(int *)(in_x10 + 0x20);
  iVar2 = *(int *)(in_x9 + in_x11 * 4 + 0x20);
  if (*(char *)(in_x12 + unaff_x25 + 0x20) != '\0') {
    lVar8 = *(long *)(unaff_x19 + 0x110);
    if (lVar8 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w23) goto LAB_06da6578;
    lVar8 = *(long *)(lVar8 + param_1 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
    if (*(int *)(lVar8 + unaff_x25 * 4 + 0x20) == 2) {
      if (iVar1 < 1) {
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar8 + 0x38),0,8,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar8 + 0x20),0,6,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar8 + 0x28),0,6,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
        lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da6578;
        FUN_071245a8(*(undefined8 *)(lVar8 + 0x30),0,6,0);
        iVar9 = 0;
      }
      else {
        lVar8 = *(long *)(unaff_x19 + 0x108);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w23) goto LAB_06da6578;
        lVar8 = *(long *)(lVar8 + param_1 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
        if (*(char *)(lVar8 + unaff_x25 + 0x20) == '\0') {
          uVar10 = 0;
          iVar9 = iVar1 * 0x12;
        }
        else {
          uVar10 = 0;
          do {
            lVar8 = *(long *)(unaff_x19 + 0x180);
            if (lVar8 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
            lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
            if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
            lVar8 = *(long *)(lVar8 + 0x38);
            uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
            if (lVar8 == 0) goto LAB_06da6574;
            if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_06da6578;
            lVar7 = uVar10 * 4;
            uVar10 = uVar10 + 1;
            *(undefined4 *)(lVar8 + lVar7 + 0x20) = uVar3;
          } while (uVar10 != 8);
          iVar9 = iVar1 * 0x11;
          uVar10 = 3;
        }
        uVar10 = uVar10 | 8;
        do {
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_06da6574;
          uVar11 = uVar10 - 8;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da6578;
          *(undefined4 *)(lVar8 + uVar10 * 4) = uVar3;
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar8 = *(long *)(lVar8 + 0x28);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da6578;
          *(undefined4 *)(lVar8 + uVar10 * 4) = uVar3;
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
          lVar8 = *(long *)(lVar8 + 0x30);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_06da6574;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da6578;
          *(undefined4 *)(lVar8 + uVar10 * 4) = uVar3;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0xe);
      }
      if (0 < iVar2) {
        lVar8 = 0xe;
        while (lVar7 = *(long *)(unaff_x19 + 0x180), lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
          if (lVar7 == 0) break;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar7 = *(long *)(lVar7 + 0x20);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar7 == 0) break;
          uVar10 = lVar8 - 8;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_06da6578;
          *(undefined4 *)(lVar7 + lVar8 * 4) = uVar3;
          lVar7 = *(long *)(unaff_x19 + 0x180);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar7 = *(long *)(lVar7 + 0x28);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_06da6578;
          *(undefined4 *)(lVar7 + lVar8 * 4) = uVar3;
          lVar7 = *(long *)(unaff_x19 + 0x180);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06da6578;
          lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da6578;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar7 = *(long *)(lVar7 + 0x30);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_06da6578;
          *(undefined4 *)(lVar7 + lVar8 * 4) = uVar3;
          lVar8 = lVar8 + 1;
          if (lVar8 == 0x14) {
            return iVar9 + iVar2 * 0x12;
          }
        }
        goto LAB_06da6574;
      }
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x20),6,6,0);
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x28),6,6,0);
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da6578;
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
      uVar5 = 6;
      uVar6 = 6;
      goto LAB_06da6550;
    }
  }
  if (unaff_w23 == 0) {
LAB_06da587c:
    if (iVar1 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x38),0,6,0);
      iVar9 = 0;
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x20) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x24) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x28) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x2c) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x30) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_06da6578;
      iVar9 = iVar1 * 6;
      *(undefined4 *)(lVar8 + 0x34) = uVar3;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_06da6574;
      goto LAB_06da5ad8;
    }
LAB_06da5b04:
    if (iVar1 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x38),6,5,0);
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x38) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x3c) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x40) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 10) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x44) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0xb) goto LAB_06da6578;
      iVar9 = iVar9 + iVar1 * 5;
      *(undefined4 *)(lVar8 + 0x48) = uVar3;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_06da6574;
      goto LAB_06da5d0c;
    }
LAB_06da5d38:
    if (iVar2 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x38),0xb,5,0);
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x4c) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0xd) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x50) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0xe) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x54) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0xf) goto LAB_06da6578;
      *(undefined4 *)(lVar8 + 0x58) = uVar3;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_06da6574;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_06da6574;
      if (*(uint *)(lVar8 + 0x18) < 0x10) goto LAB_06da6578;
      iVar9 = iVar9 + iVar2 * 5;
      *(undefined4 *)(lVar8 + 0x5c) = uVar3;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_06da6574;
      goto LAB_06da5f40;
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar7 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_06da6574;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da6578;
    if (*(int *)(lVar7 + 0x20) == 0) goto LAB_06da587c;
    iVar9 = 0;
LAB_06da5ad8:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar7 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da6578;
    if (*(int *)(lVar7 + 0x24) == 0) goto LAB_06da5b04;
LAB_06da5d0c:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar7 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da6578;
    if (*(int *)(lVar7 + 0x28) == 0) goto LAB_06da5d38;
LAB_06da5f40:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
    lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06da6574;
    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
    if (*(int *)(lVar8 + 0x2c) != 0) {
      return iVar9;
    }
  }
  if (iVar2 < 1) {
    lVar8 = *(long *)(unaff_x19 + 0x180);
    if (lVar8 != 0) {
      if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da6574;
        if (3 < *(uint *)(lVar8 + 0x18)) {
          uVar4 = *(undefined8 *)(lVar8 + 0x38);
          uVar5 = 0x10;
          uVar6 = 5;
LAB_06da6550:
          FUN_071245a8(uVar4,uVar5,uVar6,0);
          return iVar9;
        }
      }
LAB_06da6578:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x180);
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          lVar8 = *(long *)(lVar8 + 0x38);
          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) < 0x11) goto LAB_06da6578;
            *(undefined4 *)(lVar8 + 0x60) = uVar3;
            lVar8 = *(long *)(unaff_x19 + 0x180);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
              lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
              if (lVar8 != 0) {
                if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                  lVar8 = *(long *)(lVar8 + 0x38);
                  uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                  if (lVar8 != 0) {
                    if (*(uint *)(lVar8 + 0x18) < 0x12) goto LAB_06da6578;
                    *(undefined4 *)(lVar8 + 100) = uVar3;
                    lVar8 = *(long *)(unaff_x19 + 0x180);
                    if (lVar8 != 0) {
                      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
                      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
                      if (lVar8 != 0) {
                        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                          lVar8 = *(long *)(lVar8 + 0x38);
                          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 0x13) goto LAB_06da6578;
                            *(undefined4 *)(lVar8 + 0x68) = uVar3;
                            lVar8 = *(long *)(unaff_x19 + 0x180);
                            if (lVar8 != 0) {
                              if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
                              lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
                              if (lVar8 != 0) {
                                if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
                                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                  lVar8 = *(long *)(lVar8 + 0x38);
                                  uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                                  if (lVar8 != 0) {
                                    if (*(uint *)(lVar8 + 0x18) < 0x14) goto LAB_06da6578;
                                    *(undefined4 *)(lVar8 + 0x6c) = uVar3;
                                    lVar8 = *(long *)(unaff_x19 + 0x180);
                                    if (lVar8 != 0) {
                                      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06da6578;
                                      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
                                      if (lVar8 != 0) {
                                        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da6578;
                                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                          lVar8 = *(long *)(lVar8 + 0x38);
                                          uVar3 = FUN_06d9be70(*(long *)(unaff_x19 + 0xc0),iVar2);
                                          if (lVar8 != 0) {
                                            if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                              *(undefined4 *)(lVar8 + 0x70) = uVar3;
                                              return iVar9 + iVar2 * 5;
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


