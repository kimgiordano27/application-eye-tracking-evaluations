/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 051815f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0)
    {
      FUN_032934b8();
    }
    uVar2 = thunk_FUN_032a56a0();
    FUN_03fa3cd4(uVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0));
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_0333a630((long *)(unaff_x20 + 0x38),uVar2);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  return lVar1;
}


