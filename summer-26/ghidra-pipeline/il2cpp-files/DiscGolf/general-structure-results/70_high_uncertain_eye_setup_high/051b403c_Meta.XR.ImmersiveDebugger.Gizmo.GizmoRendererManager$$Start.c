/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Start
ENTRY_POINT: 051b403c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Start(long param_1)

{
  long lVar1;
  uint in_w9;
  uint uVar2;
  ulong in_x10;
  uint in_w11;
  uint in_w12;
  long in_x13;
  uint in_w14;
  long unaff_x19;
  undefined8 uVar3;
  
  while( true ) {
    uVar2 = (uint)in_x10;
    if (in_w14 <= uVar2) {
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
    in_w12 = in_w12 + 1;
    *(uint *)(unaff_x19 + 8) = in_w12;
    if (in_x13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_w14 = *(uint *)(in_x13 + 0x18);
  }
  lVar1 = in_x13 + 0x20 + (long)(int)uVar2 * 0x20;
  uVar3 = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  in_w12 = uVar2;
LAB_051b4074:
  return in_w12 < in_w9;
}


