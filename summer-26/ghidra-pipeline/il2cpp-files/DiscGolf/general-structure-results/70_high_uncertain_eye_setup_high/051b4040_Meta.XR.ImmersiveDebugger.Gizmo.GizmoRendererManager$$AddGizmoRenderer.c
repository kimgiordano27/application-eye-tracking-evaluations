/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$AddGizmoRenderer
ENTRY_POINT: 051b4040
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__AddGizmoRenderer(long param_1)

{
  long lVar1;
  undefined1 in_CY;
  uint in_w9;
  ulong in_x10;
  uint in_w11;
  uint in_w12;
  long in_x13;
  long unaff_x19;
  undefined8 uVar2;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (-1 < *(int *)(in_x13 + 0x20 +
                     (-(in_x10 >> 0x1f & 1) & 0xffffffe000000000 | (in_x10 & 0xffffffff) << 5)))
    break;
    in_x10 = (ulong)in_w12;
    if (in_w11 == in_w12) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      goto LAB_051b4074;
    }
    in_x13 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w12 + 1;
    if (in_x13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_CY = *(uint *)(in_x13 + 0x18) <= in_w12;
    in_w12 = in_w12 + 1;
  }
  lVar1 = in_x13 + 0x20 + (long)(int)(uint)in_x10 * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  in_w12 = (uint)in_x10;
LAB_051b4074:
  return in_w12 < in_w9;
}


