/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 03f3fd04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = unaff_x20;
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a38378();
  return;
}


