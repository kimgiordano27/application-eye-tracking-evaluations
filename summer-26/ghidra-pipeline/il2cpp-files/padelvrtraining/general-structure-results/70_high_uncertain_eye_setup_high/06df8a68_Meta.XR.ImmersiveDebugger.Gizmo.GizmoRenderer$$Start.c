/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 06df8a68
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start(long param_1,long param_2)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  undefined8 uVar3;
  
  if (in_x9 == 0) {
LAB_06df8af4:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)(param_1 + 0xc) == *(int *)(in_x9 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
          uVar3 = *(undefined8 *)(lVar2 + 0x20);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
          *(undefined8 *)(param_1 + 0x10) = uVar3;
          thunk_FUN_03d1023c(param_1 + 0x18,0);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      goto LAB_06df8af4;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06df8afc(param_1);
  return 0;
}


