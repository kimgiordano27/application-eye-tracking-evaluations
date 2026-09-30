/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 052e3630
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  long unaff_x20;
  
  if (((param_1 != 0) && (lVar1 = FUN_066c67b0(param_1,0), lVar1 != 0)) &&
     (FUN_066d48c0(lVar1,0), unaff_x19 != (long *)0x0)) {
    if (*(int *)(unaff_x20 + 0x34) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x638);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x648);
    }
                    /* WARNING: Could not recover jumptable at 0x052e367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


