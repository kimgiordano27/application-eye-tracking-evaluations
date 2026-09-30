/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 03c78dfc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    uVar2 = 1;
  }
  else {
    plVar3 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x10);
    if (plVar3 == (long *)0x0) {
      uVar2 = 2;
    }
    else {
      lVar4 = *plVar3;
      uVar2 = 2;
      bVar1 = *(byte *)(*(long *)PTR_DAT_06769590 + 0x130);
      if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
         (uVar2 = 2,
         *(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06769590)) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}


