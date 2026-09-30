/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$UpdateDataSource
ENTRY_POINT: 05f4bafc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__UpdateDataSource
               (long *param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  int unaff_w24;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  while( true ) {
    if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar2 = param_2 + (long)(int)param_5 * 0xc;
    uVar1 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x28),param_3,
                       param_4,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_5 = param_5 - 1;
    if ((int)param_5 < unaff_w24) {
      return 0xffffffff;
    }
  }
  return param_5;
}


