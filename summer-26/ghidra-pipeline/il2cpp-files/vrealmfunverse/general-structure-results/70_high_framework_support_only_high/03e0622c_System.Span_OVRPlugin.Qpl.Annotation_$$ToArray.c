/*
FUNCTION_NAME: System.Span<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 03e0622c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Qpl_Annotation>__ToArray(long param_1)

{
  uint uVar1;
  int in_w9;
  long unaff_x19;
  long lVar2;
  
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (*(long *)(unaff_x19 + 0x368) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x378);
    uVar1 = FUN_05ded22c(*(long *)(unaff_x19 + 0x368),0);
    if (lVar2 != 0) {
      FUN_05df3238(lVar2,uVar1 & 1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


