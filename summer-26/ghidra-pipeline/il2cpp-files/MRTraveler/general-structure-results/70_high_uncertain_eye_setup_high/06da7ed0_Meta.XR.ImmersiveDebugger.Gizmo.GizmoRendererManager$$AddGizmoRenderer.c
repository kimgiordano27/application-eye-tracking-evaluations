/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$AddGizmoRenderer
ENTRY_POINT: 06da7ed0
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__AddGizmoRenderer(void)

{
  int iVar1;
  uint in_w8;
  long lVar2;
  uint in_w9;
  uint in_w10;
  int in_w11;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  long unaff_x19;
  ulong uVar6;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar7;
  uint unaff_w26;
  long in_stack_00000008;
  
  for (; -1 < (int)in_w9; in_w9 = (in_w9 - 1) + (iVar1 - (iVar1 >> 0x1f)) * -3) {
    if (in_w10 <= in_w9) goto LAB_06da8184;
    puVar3 = (uint *)(unaff_x23 + (ulong)in_w9 * 4 + 0x20);
    if (*puVar3 == 0xffffffff) {
      lVar2 = *(long *)(unaff_x19 + 0x158);
      if (lVar2 == 0) goto LAB_06da8024;
      if ((*(uint *)(lVar2 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar2 + 0x18) <= in_w8))
      goto LAB_06da8184;
      iVar1 = *(int *)(lVar2 + 0x20 + (long)(int)in_w8 * 4);
      iVar5 = *(int *)(lVar2 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar1;
      uVar4 = iVar1 * 3 + iVar5 * (in_w9 + 1);
      do {
        iVar5 = iVar5 + -1;
        uVar4 = uVar4 - 1;
        if (iVar5 < -1) goto LAB_06da7ea0;
        lVar2 = *(long *)(unaff_x19 + 0x188);
        if (lVar2 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_06da8184;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_06da8184;
      } while (*(float *)(lVar2 + (long)(int)uVar4 * 4 + 0x20) == 0.0);
      *puVar3 = in_w8;
LAB_06da7ea0:
      in_w8 = in_w8 - (in_w9 == 0);
    }
    else if (*(int *)(unaff_x23 + 0x20) != -1) {
      if (in_w10 < 2) goto LAB_06da8184;
      if (*(int *)(unaff_x23 + 0x24) != -1) {
        if (in_w10 < 3) goto LAB_06da8184;
        if (*(int *)(unaff_x23 + 0x28) != -1) break;
      }
    }
    if ((int)in_w8 < unaff_w24) break;
    iVar1 = (int)((ulong)((long)(int)(in_w9 - 1) * (long)in_w11) >> 0x20);
  }
  lVar2 = *(long *)(unaff_x19 + 0x158);
  if (lVar2 != 0) {
    uVar7 = (long)unaff_w24;
    while( true ) {
      if (uVar7 == 0xc) {
        if (*(uint *)(lVar2 + 0x18) < 0xe) goto LAB_06da8184;
        uVar7 = 0;
        goto LAB_06da8044;
      }
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar7 + 1) || (*(uint *)(lVar2 + 0x18) <= (uint)uVar7))
      goto LAB_06da8184;
      if (unaff_x23 == 0) break;
      uVar6 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_06da8184;
        if ((long)*(int *)(unaff_x23 + 0x20 + uVar6 * 4) < (long)uVar7) {
          lVar2 = *(long *)(unaff_x19 + 0x180);
          if (lVar2 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_06da8184;
          lVar2 = *(long *)(lVar2 + 0x28);
          if (lVar2 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_06da8184;
          lVar2 = *(long *)(lVar2 + uVar6 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar7) goto LAB_06da8184;
          if (*(int *)(lVar2 + uVar7 * 4 + 0x20) == 7) goto LAB_06da7f88;
          if ((unaff_x22 & 1) == 0) {
            FUN_06da8f08();
          }
          else {
            lVar2 = *(long *)(unaff_x19 + 0xf8);
            if (lVar2 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_06da8184;
            lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_06da8024;
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_06da8184;
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
        uVar6 = uVar6 + 1;
      } while (uVar6 != 3);
      lVar2 = *(long *)(unaff_x19 + 0x158);
      uVar7 = uVar7 + 1;
      if (lVar2 == 0) break;
    }
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar2 + 0x18) < 2) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_06da8184;
  lVar2 = *(long *)(lVar2 + uVar7 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar2 + 0x4c) == 7) {
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
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (lVar2 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_06da8024;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar7 = uVar7 + 1;
  if (uVar7 == 3) {
    return;
  }
  goto LAB_06da8044;
}


