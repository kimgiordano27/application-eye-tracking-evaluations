/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetBoundsFaceCenters
ENTRY_POINT: 01487d8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUKAnchor__GetBoundsFaceCenters(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  long in_x10;
  long lVar9;
  long lVar10;
  uint in_w12;
  long lVar11;
  long unaff_x19;
  uint unaff_w20;
  int iVar12;
  ulong uVar13;
  uint unaff_w23;
  long lVar14;
  ulong uVar15;
  
  lVar8 = (long)(int)unaff_w23;
  lVar10 = *(long *)(in_x10 + lVar8 * 8 + 0x20);
  if (lVar10 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_01488c54;
  lVar9 = *(long *)(in_x9 + 0x20);
  if (lVar9 == 0) goto LAB_01488c50;
  lVar14 = (long)(int)unaff_w20;
  uVar3 = *(uint *)(lVar10 + lVar14 * 4 + 0x20);
  if ((*(uint *)(lVar9 + 0x18) <= uVar3) || (in_w12 < 2)) goto LAB_01488c54;
  lVar10 = *(long *)(in_x9 + 0x28);
  if (lVar10 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_01488c54;
  lVar11 = *(long *)(unaff_x19 + 0x100);
  if (lVar11 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar11 + 0x18) <= unaff_w23) goto LAB_01488c54;
  lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar11 + 0x18) <= unaff_w20) goto LAB_01488c54;
  iVar1 = *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20);
  iVar2 = *(int *)(lVar10 + (long)(int)uVar3 * 4 + 0x20);
  if (*(char *)(lVar11 + lVar14 + 0x20) != '\0') {
    lVar10 = *(long *)(unaff_x19 + 0x110);
    if (lVar10 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w23) goto LAB_01488c54;
    lVar10 = *(long *)(lVar10 + lVar8 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_01488c54;
    if (*(int *)(lVar10 + lVar14 * 4 + 0x20) == 2) {
      if (iVar1 < 1) {
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
        lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x38),0,8,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
        lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01488c54;
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x20),0,6,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
        lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_01488c54;
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x28),0,6,0);
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
        lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01488c54;
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x30),0,6,0);
        iVar12 = 0;
      }
      else {
        lVar10 = *(long *)(unaff_x19 + 0x108);
        if (lVar10 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w23) goto LAB_01488c54;
        lVar8 = *(long *)(lVar10 + lVar8 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
        if (*(char *)(lVar8 + lVar14 + 0x20) == '\0') {
          uVar13 = 0;
          iVar12 = iVar1 * 0x12;
        }
        else {
          uVar13 = 0;
          do {
            lVar8 = *(long *)(unaff_x19 + 0x180);
            if (lVar8 == 0) goto LAB_01488c50;
            if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
            lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_01488c50;
            if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
            if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
            lVar8 = *(long *)(lVar8 + 0x38);
            uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
            if (lVar8 == 0) goto LAB_01488c50;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_01488c54;
            lVar10 = uVar13 * 4;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(lVar8 + lVar10 + 0x20) = uVar4;
          } while (uVar13 != 8);
          iVar12 = iVar1 * 0x11;
          uVar13 = 3;
        }
        uVar13 = uVar13 | 8;
        do {
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_01488c50;
          uVar15 = uVar13 - 8;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_01488c54;
          *(undefined4 *)(lVar8 + uVar13 * 4) = uVar4;
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
          lVar8 = *(long *)(lVar8 + 0x28);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_01488c54;
          *(undefined4 *)(lVar8 + uVar13 * 4) = uVar4;
          lVar8 = *(long *)(unaff_x19 + 0x180);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
          lVar8 = *(long *)(lVar8 + 0x30);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
          if (lVar8 == 0) goto LAB_01488c50;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_01488c54;
          *(undefined4 *)(lVar8 + uVar13 * 4) = uVar4;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0xe);
      }
      if (0 < iVar2) {
        lVar8 = 0xe;
        while (lVar10 = *(long *)(unaff_x19 + 0x180), lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x20);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          uVar13 = lVar8 - 8;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01488c54;
          *(undefined4 *)(lVar10 + lVar8 * 4) = uVar4;
          lVar10 = *(long *)(unaff_x19 + 0x180);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x28);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01488c54;
          *(undefined4 *)(lVar10 + lVar8 * 4) = uVar4;
          lVar10 = *(long *)(unaff_x19 + 0x180);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_01488c54;
          lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_01488c54;
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          lVar10 = *(long *)(lVar10 + 0x30);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01488c54;
          *(undefined4 *)(lVar10 + lVar8 * 4) = uVar4;
          lVar8 = lVar8 + 1;
          if (lVar8 == 0x14) {
            return iVar12 + iVar2 * 0x12;
          }
        }
        goto LAB_01488c50;
      }
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01488c54;
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x20),6,6,0);
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_01488c54;
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x28),6,6,0);
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01488c54;
      uVar5 = *(undefined8 *)(lVar8 + 0x30);
      uVar6 = 6;
      uVar7 = 6;
      goto LAB_01488c2c;
    }
  }
  if (unaff_w23 == 0) {
LAB_01487f58:
    if (iVar1 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x38),0,6,0);
      iVar12 = 0;
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x20) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x24) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x28) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x2c) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x30) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_01488c54;
      iVar12 = iVar1 * 6;
      *(undefined4 *)(lVar8 + 0x34) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_01488c50;
      goto LAB_014881b4;
    }
LAB_014881e0:
    if (iVar1 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x38),6,5,0);
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x38) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x3c) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x40) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 10) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x44) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar1);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0xb) goto LAB_01488c54;
      iVar12 = iVar12 + iVar1 * 5;
      *(undefined4 *)(lVar8 + 0x48) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_01488c50;
      goto LAB_014883e8;
    }
LAB_01488414:
    if (iVar2 < 1) {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x38),0xb,5,0);
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x4c) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0xd) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x50) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0xe) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x54) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0xf) goto LAB_01488c54;
      *(undefined4 *)(lVar8 + 0x58) = uVar4;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
      if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
      lVar8 = *(long *)(lVar8 + 0x38);
      uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
      if (lVar8 == 0) goto LAB_01488c50;
      if (*(uint *)(lVar8 + 0x18) < 0x10) goto LAB_01488c54;
      iVar12 = iVar12 + iVar2 * 5;
      *(undefined4 *)(lVar8 + 0x5c) = uVar4;
    }
    if (unaff_w23 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_01488c50;
      goto LAB_0148861c;
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar10 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_01488c50;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01488c54;
    if (*(int *)(lVar10 + 0x20) == 0) goto LAB_01487f58;
    iVar12 = 0;
LAB_014881b4:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar10 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_01488c54;
    if (*(int *)(lVar10 + 0x24) == 0) goto LAB_014881e0;
LAB_014883e8:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar10 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_01488c54;
    if (*(int *)(lVar10 + 0x28) == 0) goto LAB_01488414;
LAB_0148861c:
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
    if (*(int *)(lVar8 + 0x2c) != 0) {
      return iVar12;
    }
  }
  if (iVar2 < 1) {
    lVar8 = *(long *)(unaff_x19 + 0x180);
    if (lVar8 != 0) {
      if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_01488c50;
        if (3 < *(uint *)(lVar8 + 0x18)) {
          uVar5 = *(undefined8 *)(lVar8 + 0x38);
          uVar6 = 0x10;
          uVar7 = 5;
LAB_01488c2c:
          FUN_0179519c(uVar5,uVar6,uVar7,0);
          return iVar12;
        }
      }
LAB_01488c54:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x180);
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          lVar8 = *(long *)(lVar8 + 0x38);
          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) < 0x11) goto LAB_01488c54;
            *(undefined4 *)(lVar8 + 0x60) = uVar4;
            lVar8 = *(long *)(unaff_x19 + 0x180);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
              lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
              if (lVar8 != 0) {
                if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                  lVar8 = *(long *)(lVar8 + 0x38);
                  uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
                  if (lVar8 != 0) {
                    if (*(uint *)(lVar8 + 0x18) < 0x12) goto LAB_01488c54;
                    *(undefined4 *)(lVar8 + 100) = uVar4;
                    lVar8 = *(long *)(unaff_x19 + 0x180);
                    if (lVar8 != 0) {
                      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
                      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
                      if (lVar8 != 0) {
                        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                          lVar8 = *(long *)(lVar8 + 0x38);
                          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 0x13) goto LAB_01488c54;
                            *(undefined4 *)(lVar8 + 0x68) = uVar4;
                            lVar8 = *(long *)(unaff_x19 + 0x180);
                            if (lVar8 != 0) {
                              if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
                              lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
                              if (lVar8 != 0) {
                                if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
                                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                  lVar8 = *(long *)(lVar8 + 0x38);
                                  uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
                                  if (lVar8 != 0) {
                                    if (*(uint *)(lVar8 + 0x18) < 0x14) goto LAB_01488c54;
                                    *(undefined4 *)(lVar8 + 0x6c) = uVar4;
                                    lVar8 = *(long *)(unaff_x19 + 0x180);
                                    if (lVar8 != 0) {
                                      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_01488c54;
                                      lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
                                      if (lVar8 != 0) {
                                        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01488c54;
                                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                          lVar8 = *(long *)(lVar8 + 0x38);
                                          uVar4 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),iVar2);
                                          if (lVar8 != 0) {
                                            if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                              *(undefined4 *)(lVar8 + 0x70) = uVar4;
                                              return iVar12 + iVar2 * 5;
                                            }
                                            goto LAB_01488c54;
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
LAB_01488c50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


