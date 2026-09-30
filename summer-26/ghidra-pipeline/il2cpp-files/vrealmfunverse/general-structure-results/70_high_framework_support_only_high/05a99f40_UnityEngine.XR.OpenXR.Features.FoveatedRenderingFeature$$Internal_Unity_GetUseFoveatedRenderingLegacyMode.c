/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_GetUseFoveatedRenderingLegacyMode
ENTRY_POINT: 05a99f40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_4;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_GetUseFoveatedRenderingLegacyMode
               (void)

{
  long lVar1;
  int unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
  do {
    UnityEngine_XR_OpenXR_Features_OpenXRFeature__Internal_SetProcAddressPtrAndLoadStage1();
    lVar1 = *(long *)(unaff_x23 + 0x30);
    unaff_w20 = unaff_w20 + 1;
    if (lVar1 == 0) {
LAB_05a99f50:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
      if (*unaff_x22 != 0) {
        FUN_05c8cb28(*unaff_x22,1,0);
        return;
      }
      goto LAB_05a99f50;
    }
    System_Collections_Generic_List<Vector2>__Remove(lVar1,unaff_w20,*unaff_x26);
    if (*unaff_x24 == 0) goto LAB_05a99f50;
    FUN_05c8c8e0(*unaff_x24,0);
  } while( true );
}


