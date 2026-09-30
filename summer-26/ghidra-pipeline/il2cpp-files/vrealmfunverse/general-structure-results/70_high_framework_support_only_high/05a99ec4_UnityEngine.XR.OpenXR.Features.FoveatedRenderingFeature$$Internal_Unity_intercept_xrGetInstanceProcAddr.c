/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_intercept_xrGetInstanceProcAddr
ENTRY_POINT: 05a99ec4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_intercept_xrGetInstanceProcAddr
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_04bffdac(param_1,*unaff_x25,0);
  if (((unaff_x21 != 0) &&
      (thunk_FUN_05c9238c(), puVar1 = Method_System_Delegate_CombineImpl__, unaff_x23 != 0)) &&
     (lVar2 = *(long *)(unaff_x23 + 0x30), lVar2 != 0)) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        if (*unaff_x22 != 0) {
          FUN_05c8cb28(*unaff_x22,1,0);
          return;
        }
        break;
      }
      System_Collections_Generic_List<Vector2>__Remove(lVar2,iVar3,*(undefined8 *)puVar1);
      if (*unaff_x24 == 0) break;
      FUN_05c8c8e0(*unaff_x24,0);
      UnityEngine_XR_OpenXR_Features_OpenXRFeature__Internal_SetProcAddressPtrAndLoadStage1();
      lVar2 = *(long *)(unaff_x23 + 0x30);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


