/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 05627428
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar3 = *in_x9;
  if (in_w10 == 0) {
    thunk_FUN_032cd7c0(param_1);
  }
  plVar1 = (long *)FUN_059324dc(uVar3,0);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
    uVar3 = FUN_0644d46c(uVar3,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


