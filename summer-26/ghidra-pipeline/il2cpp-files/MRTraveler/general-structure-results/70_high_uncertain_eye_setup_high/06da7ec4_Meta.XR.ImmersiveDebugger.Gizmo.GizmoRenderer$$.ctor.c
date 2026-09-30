/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$.ctor
ENTRY_POINT: 06da7ec4
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer___ctor(void)

{
  int iVar1;
  uint uVar2;
  uint in_w8;
  long lVar3;
  int in_w9;
  uint in_w10;
  int in_w11;
  uint *puVar4;
  ulong in_x12;
  uint uVar5;
  ulong in_x13;
  int iVar6;
  long unaff_x19;
  ulong uVar7;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar8;
  uint unaff_w26;
  long in_stack_00000008;
  
  while( true ) {
    uVar2 = in_w9 + ((int)in_x12 + (int)in_x13) * -3;
    if ((int)uVar2 < 0) break;
    if (in_w10 <= uVar2) goto LAB_06da8184;
    puVar4 = (uint *)(unaff_x23 + (ulong)uVar2 * 4 + 0x20);
    if (*puVar4 == 0xffffffff) {
      lVar3 = *(long *)(unaff_x19 + 0x158);
      if (lVar3 == 0) goto LAB_06da8024;
      if ((*(uint *)(lVar3 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar3 + 0x18) <= in_w8))
      goto LAB_06da8184;
      iVar1 = *(int *)(lVar3 + 0x20 + (long)(int)in_w8 * 4);
      iVar6 = *(int *)(lVar3 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar1;
      uVar5 = iVar1 * 3 + iVar6 * (uVar2 + 1);
      do {
        iVar6 = iVar6 + -1;
        uVar5 = uVar5 - 1;
        if (iVar6 < -1) goto LAB_06da7ea0;
        lVar3 = *(long *)(unaff_x19 + 0x188);
        if (lVar3 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06da8184;
        lVar3 = *(long *)(lVar3 + 0x28);
        if (lVar3 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_06da8184;
      } while (*(float *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) == 0.0);
      *puVar4 = in_w8;
LAB_06da7ea0:
      in_w8 = in_w8 - (uVar2 == 0);
    }
    else if (*(int *)(unaff_x23 + 0x20) != -1) {
      if (in_w10 < 2) goto LAB_06da8184;
      if (*(int *)(unaff_x23 + 0x24) != -1) {
        if (in_w10 < 3) goto LAB_06da8184;
        if (*(int *)(unaff_x23 + 0x28) != -1) break;
      }
    }
    if ((int)in_w8 < unaff_w24) break;
    in_w9 = uVar2 - 1;
    in_x13 = (ulong)((long)in_w9 * (long)in_w11) >> 0x3f;
    in_x12 = (ulong)((long)in_w9 * (long)in_w11) >> 0x20;
  }
  lVar3 = *(long *)(unaff_x19 + 0x158);
  if (lVar3 != 0) {
    uVar8 = (long)unaff_w24;
    while( true ) {
      if (uVar8 == 0xc) {
        if (*(uint *)(lVar3 + 0x18) < 0xe) goto LAB_06da8184;
        uVar8 = 0;
        goto LAB_06da8044;
      }
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar8 + 1) || (*(uint *)(lVar3 + 0x18) <= (uint)uVar8))
      goto LAB_06da8184;
      if (unaff_x23 == 0) break;
      uVar7 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_06da8184;
        if ((long)*(int *)(unaff_x23 + 0x20 + uVar7 * 4) < (long)uVar8) {
          lVar3 = *(long *)(unaff_x19 + 0x180);
          if (lVar3 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06da8184;
          lVar3 = *(long *)(lVar3 + 0x28);
          if (lVar3 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_06da8184;
          lVar3 = *(long *)(lVar3 + uVar7 * 8 + 0x20);
          if (lVar3 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar3 + 0x18) <= (uint)uVar8) goto LAB_06da8184;
          if (*(int *)(lVar3 + uVar8 * 4 + 0x20) == 7) goto LAB_06da7f88;
          if ((unaff_x22 & 1) == 0) {
            FUN_06da8f08();
          }
          else {
            lVar3 = *(long *)(unaff_x19 + 0xf8);
            if (lVar3 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_06da8184;
            lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_06da8024;
            if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06da8184;
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
        uVar7 = uVar7 + 1;
      } while (uVar7 != 3);
      lVar3 = *(long *)(unaff_x19 + 0x158);
      uVar8 = uVar8 + 1;
      if (lVar3 == 0) break;
    }
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar3 = *(long *)(unaff_x19 + 0x180);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_06da8184;
  lVar3 = *(long *)(lVar3 + uVar8 * 8 + 0x20);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar3 + 0x4c) == 7) {
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
    lVar3 = *(long *)(unaff_x19 + 0xf8);
    if (lVar3 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_06da8024;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar8 = uVar8 + 1;
  if (uVar8 == 3) {
    return;
  }
  goto LAB_06da8044;
}


