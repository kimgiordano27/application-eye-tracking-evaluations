/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 06da79c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  long unaff_x19;
  uint unaff_w21;
  ulong unaff_x22;
  int iVar17;
  uint unaff_w25;
  uint unaff_w26;
  ulong uVar18;
  
  if (param_1 == 0) goto LAB_06da8024;
  if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_06da8184;
  lVar11 = (long)(int)unaff_w26;
  lVar8 = *(long *)(param_1 + lVar11 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_06da8024;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da8184;
  if (*(char *)(lVar8 + 0x20) == '\0') {
LAB_06da7a8c:
    bVar6 = false;
    uVar10 = 0x15;
    iVar17 = -1;
    if ((int)unaff_w25 < 0) goto LAB_06da7b08;
LAB_06da7a9c:
    lVar8 = *(long *)(unaff_x19 + 0x160);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w25) goto LAB_06da8184;
    uVar18 = (ulong)*(byte *)(lVar8 + (ulong)unaff_w25 + 0x20) + 1;
    if (!bVar6) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06da8024;
      if (*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18) <= (uint)uVar18) goto LAB_06da8184;
      if ((unaff_w21 >> 1 & 1) == 0) {
        FUN_06da8cc0();
      }
      else {
        FUN_06da8bb4();
      }
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x110);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da8184;
    if (*(int *)(lVar8 + 0x20) != 2) goto LAB_06da7a8c;
    lVar8 = *(long *)(unaff_x19 + 0x108);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da8184;
    if (*(char *)(lVar8 + 0x20) == '\0') {
      iVar17 = 0;
      uVar10 = 0xffffffff;
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x150);
      if (lVar8 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_06da8184;
      iVar17 = 3;
      uVar10 = 8;
      if (*(int *)(lVar8 + 0x40) <= (int)unaff_w25) {
        uVar10 = 0xffffffff;
      }
    }
    bVar6 = true;
    if (-1 < (int)unaff_w25) goto LAB_06da7a9c;
LAB_06da7b08:
    uVar18 = 0;
  }
  if ((int)uVar18 < (int)uVar10) {
    do {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06da8024;
      uVar13 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18);
      if ((uVar13 <= uVar18) || (uVar1 = uVar18 + 1, uVar13 <= uVar1)) goto LAB_06da8184;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da8184;
      lVar8 = *(long *)(lVar8 + 0x28);
      if (lVar8 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da8184;
      lVar8 = *(long *)(lVar8 + 0x38);
      if (lVar8 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_06da8184;
      if (*(int *)(lVar8 + uVar18 * 4 + 0x20) == 7) {
        if ((unaff_w21 >> 1 & 1) == 0) {
          FUN_06da8cc0();
        }
        else {
          FUN_06da8bb4();
        }
      }
      else if ((unaff_x22 & 1) == 0) {
        FUN_06da8f08();
      }
      else {
        lVar8 = *(long *)(unaff_x19 + 0xf8);
        if (lVar8 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_06da8184;
        lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da8024;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da8184;
        FUN_06da8d60();
      }
      uVar18 = uVar1;
    } while (uVar10 != uVar1);
  }
  if (bVar6) {
    uVar10 = 3;
    lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,3);
    FUN_0701f51c(lVar8,*(undefined8 *)PTR_DAT_08e8fe10,0);
    if ((int)unaff_w25 < 0) {
      uVar7 = 0xc;
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x168);
      if (lVar9 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar9 + 0x18) <= unaff_w25) goto LAB_06da8184;
      lVar12 = *(long *)(unaff_x19 + 0x170);
      if (lVar12 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_06da8184;
      if (lVar8 == 0) goto LAB_06da8024;
      bVar4 = *(byte *)(lVar12 + (ulong)unaff_w25 + 0x20);
      uVar10 = (uint)bVar4;
      if (*(uint *)(lVar8 + 0x18) <= (uint)bVar4) goto LAB_06da8184;
      bVar5 = *(byte *)(lVar9 + (ulong)unaff_w25 + 0x20);
      uVar7 = (uint)bVar5;
      *(uint *)(lVar8 + (ulong)(uint)bVar4 * 4 + 0x20) = (uint)bVar5;
    }
    if (((int)uVar7 < iVar17) ||
       (uVar10 = (uint)(short)((short)(uVar10 - 1) + (short)((int)(uVar10 - 1) / 3) * -3),
       (int)uVar10 < 0)) {
LAB_06da7ed4:
      lVar9 = *(long *)(unaff_x19 + 0x158);
      if (lVar9 != 0) {
        uVar18 = (long)iVar17;
        while( true ) {
          if (uVar18 == 0xc) {
            if (*(uint *)(lVar9 + 0x18) < 0xe) goto LAB_06da8184;
            uVar18 = 0;
            goto LAB_06da8044;
          }
          if (((ulong)*(uint *)(lVar9 + 0x18) <= uVar18 + 1) ||
             (*(uint *)(lVar9 + 0x18) <= (uint)uVar18)) goto LAB_06da8184;
          if (lVar8 == 0) break;
          uVar13 = 0;
          do {
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da8184;
            if ((long)*(int *)(lVar8 + 0x20 + uVar13 * 4) < (long)uVar18) {
              lVar9 = *(long *)(unaff_x19 + 0x180);
              if (lVar9 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da8184;
              lVar9 = *(long *)(lVar9 + 0x28);
              if (lVar9 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_06da8184;
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar18) goto LAB_06da8184;
              if (*(int *)(lVar9 + uVar18 * 4 + 0x20) == 7) goto LAB_06da7f88;
              if ((unaff_x22 & 1) == 0) {
                FUN_06da8f08();
              }
              else {
                lVar9 = *(long *)(unaff_x19 + 0xf8);
                if (lVar9 == 0) goto LAB_06da8024;
                if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_06da8184;
                lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_06da8024;
                if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da8184;
                FUN_06da8d60();
              }
            }
            else {
LAB_06da7f88:
              if ((unaff_w21 >> 1 & 1) == 0) {
                FUN_06da8cc0();
              }
              else {
                FUN_06da8bb4();
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != 3);
          lVar9 = *(long *)(unaff_x19 + 0x158);
          uVar18 = uVar18 + 1;
          if (lVar9 == 0) break;
        }
      }
    }
    else if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x18);
      do {
        if (uVar2 <= uVar10) goto LAB_06da8184;
        puVar14 = (uint *)(lVar8 + (ulong)uVar10 * 4 + 0x20);
        if (*puVar14 == 0xffffffff) {
          lVar9 = *(long *)(unaff_x19 + 0x158);
          if (lVar9 == 0) break;
          if ((*(uint *)(lVar9 + 0x18) <= uVar7 + 1) || (*(uint *)(lVar9 + 0x18) <= uVar7))
          goto LAB_06da8184;
          iVar3 = *(int *)(lVar9 + 0x20 + (long)(int)uVar7 * 4);
          iVar16 = *(int *)(lVar9 + 0x20 + (long)(int)(uVar7 + 1) * 4) - iVar3;
          uVar15 = iVar3 * 3 + iVar16 * (uVar10 + 1);
          do {
            iVar16 = iVar16 + -1;
            uVar15 = uVar15 - 1;
            if (iVar16 < -1) goto LAB_06da7ea0;
            lVar9 = *(long *)(unaff_x19 + 0x188);
            if (lVar9 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da8184;
            lVar9 = *(long *)(lVar9 + 0x28);
            if (lVar9 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da8184;
          } while (*(float *)(lVar9 + (long)(int)uVar15 * 4 + 0x20) == 0.0);
          *puVar14 = uVar7;
LAB_06da7ea0:
          uVar7 = uVar7 - (uVar10 == 0);
        }
        else if (*(int *)(lVar8 + 0x20) != -1) {
          if (uVar2 < 2) goto LAB_06da8184;
          if (*(int *)(lVar8 + 0x24) != -1) {
            if (uVar2 < 3) goto LAB_06da8184;
            if (*(int *)(lVar8 + 0x28) != -1) goto LAB_06da7ed4;
          }
        }
        if (((int)uVar7 < iVar17) || (uVar10 = (int)(uVar10 - 1) % 3, (int)uVar10 < 0))
        goto LAB_06da7ed4;
      } while( true );
    }
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x180);
    if (lVar8 != 0) {
      if (1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(lVar8 + 0x28);
        if (lVar8 == 0) goto LAB_06da8024;
        if (3 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 == 0) goto LAB_06da8024;
          if (0x14 < *(uint *)(lVar8 + 0x18)) {
            if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06da8024;
            if (0x15 < *(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18)) {
              if (*(int *)(lVar8 + 0x70) == 7) {
                if ((unaff_w21 >> 1 & 1) != 0) {
                  FUN_06da8bb4();
                  return;
                }
                FUN_06da8cc0();
                return;
              }
              if ((unaff_x22 & 1) == 0) {
                FUN_06da8f08();
                return;
              }
              lVar8 = *(long *)(unaff_x19 + 0xf8);
              if (lVar8 == 0) goto LAB_06da8024;
              if (unaff_w26 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da8024;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  FUN_06da8d60();
                  return;
                }
              }
            }
          }
        }
      }
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar8 = *(long *)(unaff_x19 + 0x180);
  if (lVar8 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da8184;
  lVar8 = *(long *)(lVar8 + 0x28);
  if (lVar8 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_06da8184;
  lVar8 = *(long *)(lVar8 + uVar18 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar8 + 0x4c) == 7) {
    if ((unaff_w21 >> 1 & 1) == 0) {
      FUN_06da8cc0();
    }
    else {
      FUN_06da8bb4();
    }
  }
  else if ((unaff_x22 & 1) == 0) {
    FUN_06da8f08();
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xf8);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar18 = uVar18 + 1;
  if (uVar18 == 3) {
    return;
  }
  goto LAB_06da8044;
}


