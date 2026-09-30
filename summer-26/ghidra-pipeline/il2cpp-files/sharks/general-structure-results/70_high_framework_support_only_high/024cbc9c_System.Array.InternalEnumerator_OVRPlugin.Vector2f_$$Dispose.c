/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 024cbc9c
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  iVar1 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)
        ) || (uVar3 = FUN_024cea64(), (uVar3 & 1) == 0)) {
      uVar3 = FUN_024ce364();
      uVar3 = (ulong)(uVar3 >> 0x20 == 0 && (int)uVar3 < *(int *)(unaff_x20 + 0x20));
    }
    else {
      if ((int)unaff_x21[4] < *(int *)(unaff_x20 + 0x20)) {
        uVar3 = FUN_024cce80();
        return uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


