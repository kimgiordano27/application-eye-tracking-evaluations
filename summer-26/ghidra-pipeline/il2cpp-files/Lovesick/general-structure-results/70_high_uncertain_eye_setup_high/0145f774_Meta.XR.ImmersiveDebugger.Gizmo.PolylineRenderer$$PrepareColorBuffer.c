/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 0145f774
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  int iVar2;
  long unaff_x21;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11854);
    thunk_FUN_00d48444(StringLiteral_11624);
    *(undefined1 *)(unaff_x21 + 0xaa0) = 1;
  }
  if (unaff_x20 == 0) {
LAB_0145f834:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < *(int *)(unaff_x20 + 0x18)) {
    iVar2 = 0;
    do {
      FUN_0132138c();
      if (in_stack_00000008 == 0) goto LAB_0145f834;
      uVar1 = thunk_FUN_015fe514(*(undefined8 *)(in_stack_00000008 + 0x10));
      if ((uVar1 & 1) != 0) {
        FUN_0132138c();
        if (in_stack_00000008 == 0) goto LAB_0145f834;
        if (*(char *)(in_stack_00000008 + 0x18) != '\0') {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_x20 + 0x18));
  }
  return 0;
}


