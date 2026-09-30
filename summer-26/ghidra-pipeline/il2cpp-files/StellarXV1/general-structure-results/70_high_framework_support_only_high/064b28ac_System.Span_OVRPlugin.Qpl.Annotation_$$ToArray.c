/*
FUNCTION_NAME: System.Span<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 064b28ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Qpl_Annotation>__ToArray(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  long lVar2;
  
  while( true ) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    if ((param_1 != 0) && (lVar1 = thunk_FUN_040b4e00(param_1,lVar2), lVar1 == 0)) break;
    lVar2 = FUN_040b1498();
    if (lVar2 == unaff_x22) {
      return;
    }
    param_1 = FUN_076c0530(lVar2);
    unaff_x22 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(param_1,lVar2);
}


