/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 06da7adc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer(void)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  long unaff_x19;
  uint unaff_w20;
  uint uVar14;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  ulong uVar15;
  uint unaff_w25;
  uint unaff_w26;
  uint unaff_w27;
  long in_stack_00000008;
  
  if ((unaff_w21 >> 1 & 1) == 0) {
    FUN_06da8cc0();
  }
  else {
    FUN_06da8bb4();
  }
  if ((int)unaff_w27 < (int)unaff_w20) {
    uVar15 = (ulong)unaff_w27;
    do {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06da8024;
      uVar9 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18);
      if ((uVar9 <= uVar15) || (uVar1 = uVar15 + 1, uVar9 <= uVar1)) goto LAB_06da8184;
      lVar10 = *(long *)(unaff_x19 + 0x180);
      if (lVar10 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06da8184;
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_06da8184;
      lVar10 = *(long *)(lVar10 + 0x38);
      if (lVar10 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_06da8184;
      if (*(int *)(lVar10 + uVar15 * 4 + 0x20) == 7) {
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
        lVar10 = *(long *)(unaff_x19 + 0xf8);
        if (lVar10 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_06da8184;
        lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_06da8024;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_06da8184;
        FUN_06da8d60();
      }
      uVar15 = uVar1;
    } while (unaff_w20 != uVar1);
  }
  if ((unaff_x23 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x180);
    if (lVar10 != 0) {
      if (1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = *(long *)(lVar10 + 0x28);
        if (lVar10 == 0) goto LAB_06da8024;
        if (3 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == 0) goto LAB_06da8024;
          if (0x14 < *(uint *)(lVar10 + 0x18)) {
            if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06da8024;
            if (0x15 < *(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18)) {
              if (*(int *)(lVar10 + 0x70) == 7) {
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
              lVar10 = *(long *)(unaff_x19 + 0xf8);
              if (lVar10 == 0) goto LAB_06da8024;
              if (unaff_w26 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_06da8024;
                if (*(int *)(lVar10 + 0x18) != 0) {
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
  else {
    uVar14 = 3;
    lVar10 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,3);
    FUN_0701f51c(lVar10,*(undefined8 *)PTR_DAT_08e8fe10,0);
    if ((int)unaff_w25 < 0) {
      uVar6 = 0xc;
    }
    else {
      lVar7 = *(long *)(unaff_x19 + 0x168);
      if (lVar7 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w25) goto LAB_06da8184;
      lVar8 = *(long *)(unaff_x19 + 0x170);
      if (lVar8 == 0) goto LAB_06da8024;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w25) goto LAB_06da8184;
      if (lVar10 == 0) goto LAB_06da8024;
      bVar4 = *(byte *)(lVar8 + (ulong)unaff_w25 + 0x20);
      uVar14 = (uint)bVar4;
      if (*(uint *)(lVar10 + 0x18) <= (uint)bVar4) goto LAB_06da8184;
      bVar5 = *(byte *)(lVar7 + (ulong)unaff_w25 + 0x20);
      uVar6 = (uint)bVar5;
      *(uint *)(lVar10 + (ulong)(uint)bVar4 * 4 + 0x20) = (uint)bVar5;
    }
    if (((int)uVar6 < unaff_w24) ||
       (uVar14 = (uint)(short)((short)(uVar14 - 1) + (short)((int)(uVar14 - 1) / 3) * -3),
       (int)uVar14 < 0)) {
LAB_06da7ed4:
      lVar7 = *(long *)(unaff_x19 + 0x158);
      if (lVar7 != 0) {
        uVar15 = (long)unaff_w24;
        while( true ) {
          if (uVar15 == 0xc) {
            if (*(uint *)(lVar7 + 0x18) < 0xe) goto LAB_06da8184;
            uVar15 = 0;
            goto LAB_06da8044;
          }
          if (((ulong)*(uint *)(lVar7 + 0x18) <= uVar15 + 1) ||
             (*(uint *)(lVar7 + 0x18) <= (uint)uVar15)) goto LAB_06da8184;
          if (lVar10 == 0) break;
          uVar9 = 0;
          do {
            if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_06da8184;
            if ((long)*(int *)(lVar10 + 0x20 + uVar9 * 4) < (long)uVar15) {
              lVar7 = *(long *)(unaff_x19 + 0x180);
              if (lVar7 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da8184;
              lVar7 = *(long *)(lVar7 + 0x28);
              if (lVar7 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_06da8184;
              lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar15) goto LAB_06da8184;
              if (*(int *)(lVar7 + uVar15 * 4 + 0x20) == 7) goto LAB_06da7f88;
              if ((unaff_x22 & 1) == 0) {
                FUN_06da8f08();
              }
              else {
                lVar7 = *(long *)(unaff_x19 + 0xf8);
                if (lVar7 == 0) goto LAB_06da8024;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_06da8184;
                lVar7 = *(long *)(lVar7 + in_stack_00000008 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_06da8024;
                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da8184;
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
            uVar9 = uVar9 + 1;
          } while (uVar9 != 3);
          lVar7 = *(long *)(unaff_x19 + 0x158);
          uVar15 = uVar15 + 1;
          if (lVar7 == 0) break;
        }
      }
    }
    else if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar10 + 0x18);
      do {
        if (uVar2 <= uVar14) goto LAB_06da8184;
        puVar11 = (uint *)(lVar10 + (ulong)uVar14 * 4 + 0x20);
        if (*puVar11 == 0xffffffff) {
          lVar7 = *(long *)(unaff_x19 + 0x158);
          if (lVar7 == 0) break;
          if ((*(uint *)(lVar7 + 0x18) <= uVar6 + 1) || (*(uint *)(lVar7 + 0x18) <= uVar6))
          goto LAB_06da8184;
          iVar3 = *(int *)(lVar7 + 0x20 + (long)(int)uVar6 * 4);
          iVar13 = *(int *)(lVar7 + 0x20 + (long)(int)(uVar6 + 1) * 4) - iVar3;
          uVar12 = iVar3 * 3 + iVar13 * (uVar14 + 1);
          do {
            iVar13 = iVar13 + -1;
            uVar12 = uVar12 - 1;
            if (iVar13 < -1) goto LAB_06da7ea0;
            lVar7 = *(long *)(unaff_x19 + 0x188);
            if (lVar7 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da8184;
            lVar7 = *(long *)(lVar7 + 0x28);
            if (lVar7 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_06da8184;
          } while (*(float *)(lVar7 + (long)(int)uVar12 * 4 + 0x20) == 0.0);
          *puVar11 = uVar6;
LAB_06da7ea0:
          uVar6 = uVar6 - (uVar14 == 0);
        }
        else if (*(int *)(lVar10 + 0x20) != -1) {
          if (uVar2 < 2) goto LAB_06da8184;
          if (*(int *)(lVar10 + 0x24) != -1) {
            if (uVar2 < 3) goto LAB_06da8184;
            if (*(int *)(lVar10 + 0x28) != -1) goto LAB_06da7ed4;
          }
        }
        if (((int)uVar6 < unaff_w24) || (uVar14 = (int)(uVar14 - 1) % 3, (int)uVar14 < 0))
        goto LAB_06da7ed4;
      } while( true );
    }
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar10 = *(long *)(unaff_x19 + 0x180);
  if (lVar10 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06da8184;
  lVar10 = *(long *)(lVar10 + 0x28);
  if (lVar10 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_06da8184;
  lVar10 = *(long *)(lVar10 + uVar15 * 8 + 0x20);
  if (lVar10 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar10 + 0x4c) == 7) {
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
    lVar10 = *(long *)(unaff_x19 + 0xf8);
    if (lVar10 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_06da8024;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar15 = uVar15 + 1;
  if (uVar15 == 3) {
    return;
  }
  goto LAB_06da8044;
}


