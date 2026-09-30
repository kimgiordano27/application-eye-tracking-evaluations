/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 021699e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x4d8));
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_01dde854();
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),0,iVar1,0);
    }
    puVar2 = StringLiteral_1735;
    lVar3 = *(long *)StringLiteral_1735;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *(long *)puVar2;
    }
    FUN_021693c8(**(undefined8 **)(lVar3 + 0xb8));
    FUN_021693c8(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8));
    FUN_021693c8(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


