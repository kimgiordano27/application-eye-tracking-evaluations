/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 06da7fc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar2;
  uint unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  
code_r0x06da7fc8:
  if ((bool)in_CY && !(bool)in_ZR) {
    lVar1 = *(long *)(param_1 + in_stack_00000008 * 8 + 0x20);
    if (lVar1 == 0) goto LAB_06da8024;
    if (*(int *)(lVar1 + 0x18) != 0) {
      FUN_06da8d60();
      uVar2 = unaff_x29;
      do {
        while( true ) {
          unaff_x20 = unaff_x20 + 1;
          unaff_x29 = uVar2;
          if (unaff_x20 == 3) {
            lVar1 = *(long *)(unaff_x19 + 0x158);
            if (lVar1 == 0) goto LAB_06da8024;
            if (uVar2 == 0xc) {
              if (*(uint *)(lVar1 + 0x18) < 0xe) goto LAB_06da8184;
              uVar2 = 0;
              goto LAB_06da8044;
            }
            unaff_x29 = uVar2 + 1;
            if ((*(uint *)(lVar1 + 0x18) <= unaff_x29) || (*(uint *)(lVar1 + 0x18) <= (uint)uVar2))
            goto LAB_06da8184;
            if (unaff_x23 == 0) goto LAB_06da8024;
            unaff_x20 = 0;
            unaff_x28 = uVar2;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) goto LAB_06da8184;
          uVar2 = unaff_x29;
          if ((long)*(int *)(unaff_x27 + unaff_x20 * 4) < (long)unaff_x28) break;
LAB_06da7f88:
          if ((unaff_w21 >> 1 & 1) == 0) {
            FUN_06da8cc0();
          }
          else {
            FUN_06da8bb4();
          }
        }
        lVar1 = *(long *)(unaff_x19 + 0x180);
        if (lVar1 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar1 + 0x18) < 2) break;
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x20) break;
        lVar1 = *(long *)(lVar1 + unaff_x20 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_06da8024;
        if (*(uint *)(lVar1 + 0x18) <= (uint)unaff_x28) break;
        if (*(int *)(lVar1 + unaff_x28 * 4 + 0x20) == 7) goto LAB_06da7f88;
        if ((unaff_x22 & 1) != 0) goto code_r0x06da7fb8;
        FUN_06da8f08();
      } while( true );
    }
  }
  goto LAB_06da8184;
LAB_06da8044:
  lVar1 = *(long *)(unaff_x19 + 0x180);
  if (lVar1 == 0) {
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(uint *)(lVar1 + 0x18) < 2) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar1 + 0x18) <= uVar2) goto LAB_06da8184;
  lVar1 = *(long *)(lVar1 + uVar2 * 8 + 0x20);
  if (lVar1 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar1 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar1 + 0x4c) == 7) {
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
    lVar1 = *(long *)(unaff_x19 + 0xf8);
    if (lVar1 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar1 = *(long *)(lVar1 + in_stack_00000008 * 8 + 0x20);
    if (lVar1 == 0) goto LAB_06da8024;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar2 = uVar2 + 1;
  if (uVar2 == 3) {
    return;
  }
  goto LAB_06da8044;
code_r0x06da7fb8:
  param_1 = *(long *)(unaff_x19 + 0xf8);
  if (param_1 == 0) goto LAB_06da8024;
  in_CY = unaff_w26 <= *(uint *)(param_1 + 0x18);
  in_ZR = *(uint *)(param_1 + 0x18) == unaff_w26;
  goto code_r0x06da7fc8;
}


