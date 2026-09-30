/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Quatf>
ENTRY_POINT: 03495894
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Quatf>(void)

{
  long unaff_x19;
  long lVar1;
  
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    FUN_06bf4868(*(long *)(unaff_x19 + 0x80),0);
    if (lVar1 != 0) {
      FUN_06b9ea98(lVar1,2,0);
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        FUN_06bf2fbc(*(long *)(unaff_x19 + 0x80),0);
        if (lVar1 != 0) {
          FUN_06b9eb98(lVar1,2,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_06b9eca0(*(undefined4 *)(unaff_x19 + 0x88),*(long *)(unaff_x19 + 0x20),2,0);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              UnityEngine_Yoga_Native__YGNodeStyleSetMaxWidthPercent
                        (*(undefined4 *)(unaff_x19 + 0x8c),*(long *)(unaff_x19 + 0x20),2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


