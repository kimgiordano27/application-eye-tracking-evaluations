/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 05c04f48
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (*(long *)(*unaff_x21 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  thunk_FUN_03778a20();
  uVar1 = FUN_05c033bc();
  if ((int)uVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar2 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78)
                              );
  }
  return uVar2;
}


