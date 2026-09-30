/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 03163178
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 unaff_x21;
  
  FUN_033b3224(param_1,param_2,0);
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_03162a70();
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    if (iVar1 - unaff_w20 != 0 && (int)unaff_w20 <= iVar1) {
      FUN_033b4f38(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                   unaff_w20 + 1,iVar1 - unaff_w20,0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 != 0) {
      if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + (long)(int)unaff_w20 * 8 + 0x20) = unaff_x21;
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


