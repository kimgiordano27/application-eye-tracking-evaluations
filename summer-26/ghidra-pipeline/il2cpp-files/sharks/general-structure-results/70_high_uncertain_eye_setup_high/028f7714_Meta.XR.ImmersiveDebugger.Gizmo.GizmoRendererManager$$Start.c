/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Start
ENTRY_POINT: 028f7714
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Start
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_037fb6b0;
  if ((DAT_03a24668 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb6b0);
    DAT_03a24668 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  in_stack_00000010 = param_2;
  in_stack_00000018 = param_3;
  uVar3 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000010);
  uVar4 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0));
  if (lVar2 != 0) {
    FUN_02b9f22c(lVar2,uVar3,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


