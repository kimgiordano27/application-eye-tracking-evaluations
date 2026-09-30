/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetTransform
ENTRY_POINT: 06da7c18
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetTransform(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar12;
  uint unaff_w21;
  ulong unaff_x22;
  int unaff_w24;
  ulong uVar13;
  uint unaff_w25;
  uint unaff_w26;
  long in_stack_00000008;
  
  FUN_0701f51c(param_1,*(undefined8 *)PTR_DAT_08e8fe10,0);
  if ((int)unaff_w25 < 0) {
    uVar5 = 0xc;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x168);
    if (lVar6 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w25) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar8 = *(long *)(unaff_x19 + 0x170);
    if (lVar8 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w25) goto LAB_06da8184;
    if (param_1 == 0) goto LAB_06da8024;
    bVar3 = *(byte *)(lVar8 + (ulong)unaff_w25 + 0x20);
    unaff_w20 = (uint)bVar3;
    if (*(uint *)(param_1 + 0x18) <= (uint)bVar3) goto LAB_06da8184;
    bVar4 = *(byte *)(lVar6 + (ulong)unaff_w25 + 0x20);
    uVar5 = (uint)bVar4;
    *(uint *)(param_1 + (ulong)(uint)bVar3 * 4 + 0x20) = (uint)bVar4;
  }
  if (((int)uVar5 < unaff_w24) ||
     (uVar7 = (uint)(short)((short)(unaff_w20 - 1) + (short)((int)(unaff_w20 - 1) / 3) * -3),
     (int)uVar7 < 0)) {
LAB_06da7ed4:
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 != 0) {
      uVar13 = (long)unaff_w24;
      while( true ) {
        if (uVar13 == 0xc) {
          if (*(uint *)(lVar6 + 0x18) < 0xe) goto LAB_06da8184;
          uVar13 = 0;
          goto LAB_06da8044;
        }
        if (((ulong)*(uint *)(lVar6 + 0x18) <= uVar13 + 1) ||
           (*(uint *)(lVar6 + 0x18) <= (uint)uVar13)) goto LAB_06da8184;
        if (param_1 == 0) break;
        uVar12 = 0;
        do {
          if (*(uint *)(param_1 + 0x18) <= uVar12) goto LAB_06da8184;
          if ((long)*(int *)(param_1 + 0x20 + uVar12 * 4) < (long)uVar13) {
            lVar6 = *(long *)(unaff_x19 + 0x180);
            if (lVar6 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da8184;
            lVar6 = *(long *)(lVar6 + 0x28);
            if (lVar6 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da8184;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar13) goto LAB_06da8184;
            if (*(int *)(lVar6 + uVar13 * 4 + 0x20) == 7) goto LAB_06da7f88;
            if ((unaff_x22 & 1) == 0) {
              FUN_06da8f08();
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0xf8);
              if (lVar6 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_06da8184;
              lVar6 = *(long *)(lVar6 + in_stack_00000008 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da8024;
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da8184;
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
          uVar12 = uVar12 + 1;
        } while (uVar12 != 3);
        lVar6 = *(long *)(unaff_x19 + 0x158);
        uVar13 = uVar13 + 1;
        if (lVar6 == 0) break;
      }
    }
  }
  else if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    do {
      if (uVar1 <= uVar7) goto LAB_06da8184;
      puVar9 = (uint *)(param_1 + (ulong)uVar7 * 4 + 0x20);
      if (*puVar9 == 0xffffffff) {
        lVar6 = *(long *)(unaff_x19 + 0x158);
        if (lVar6 == 0) break;
        if ((*(uint *)(lVar6 + 0x18) <= uVar5 + 1) || (*(uint *)(lVar6 + 0x18) <= uVar5))
        goto LAB_06da8184;
        iVar2 = *(int *)(lVar6 + 0x20 + (long)(int)uVar5 * 4);
        iVar11 = *(int *)(lVar6 + 0x20 + (long)(int)(uVar5 + 1) * 4) - iVar2;
        uVar10 = iVar2 * 3 + iVar11 * (uVar7 + 1);
        do {
          iVar11 = iVar11 + -1;
          uVar10 = uVar10 - 1;
          if (iVar11 < -1) goto LAB_06da7ea0;
          lVar6 = *(long *)(unaff_x19 + 0x188);
          if (lVar6 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da8184;
          lVar6 = *(long *)(lVar6 + 0x28);
          if (lVar6 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_06da8184;
        } while (*(float *)(lVar6 + (long)(int)uVar10 * 4 + 0x20) == 0.0);
        *puVar9 = uVar5;
LAB_06da7ea0:
        uVar5 = uVar5 - (uVar7 == 0);
      }
      else if (*(int *)(param_1 + 0x20) != -1) {
        if (uVar1 < 2) goto LAB_06da8184;
        if (*(int *)(param_1 + 0x24) != -1) {
          if (uVar1 < 3) goto LAB_06da8184;
          if (*(int *)(param_1 + 0x28) != -1) goto LAB_06da7ed4;
        }
      }
      if (((int)uVar5 < unaff_w24) || (uVar7 = (int)(uVar7 - 1) % 3, (int)uVar7 < 0))
      goto LAB_06da7ed4;
    } while( true );
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar6 = *(long *)(unaff_x19 + 0x180);
  if (lVar6 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da8184;
  lVar6 = *(long *)(lVar6 + 0x28);
  if (lVar6 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_06da8184;
  lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar6 + 0x4c) == 7) {
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
    lVar6 = *(long *)(unaff_x19 + 0xf8);
    if (lVar6 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar6 = *(long *)(lVar6 + in_stack_00000008 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da8024;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar13 = uVar13 + 1;
  if (uVar13 == 3) {
    return;
  }
  goto LAB_06da8044;
}


