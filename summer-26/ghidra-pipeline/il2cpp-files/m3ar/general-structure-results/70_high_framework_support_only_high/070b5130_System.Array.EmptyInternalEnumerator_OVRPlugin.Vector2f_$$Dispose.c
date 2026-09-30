/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 070b5130
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x25;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x170);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074f3c94(uVar4,0);
  FUN_073ed56c();
  FUN_073eeb24();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    iVar2 = *(int *)(unaff_x21 + 0x28);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x178);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    FUN_040316d0(lVar3,iVar1 - iVar2);
    System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
              ();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_074f3c94(uVar4,0);
    FUN_073ed56c();
    return;
  }
  return;
}


