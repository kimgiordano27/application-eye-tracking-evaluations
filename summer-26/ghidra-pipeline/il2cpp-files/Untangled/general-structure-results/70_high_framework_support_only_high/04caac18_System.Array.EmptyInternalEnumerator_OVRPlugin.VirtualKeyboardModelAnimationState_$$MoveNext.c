/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 04caac18
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
                    (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1f0));
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_02ef170c(param_2,lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(param_2,lVar4);
      }
    }
    uVar1 = FUN_04ca89d0(param_1,lVar3,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0)
                                                        + 0x220) + 0x20) + 0xc0) + 0x108));
    uVar1 = ~uVar1 >> 0x1f;
  }
  return uVar1;
}


