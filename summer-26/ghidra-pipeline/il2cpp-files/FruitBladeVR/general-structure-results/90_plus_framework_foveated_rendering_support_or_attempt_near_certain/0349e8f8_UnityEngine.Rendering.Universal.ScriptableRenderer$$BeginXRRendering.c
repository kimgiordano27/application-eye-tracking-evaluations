/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$BeginXRRendering
ENTRY_POINT: 0349e8f8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 103
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__BeginXRRendering
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = param_3;
  if ((DAT_03ef5e5e & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    DAT_03ef5e5e = 1;
  }
  lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xrUniversal(param_4,0);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x734) != '\0') {
        lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xrUniversal(param_4,0);
        if (lVar2 == 0) goto LAB_0349eab4;
        *(undefined1 *)(lVar2 + 0x735) = 1;
      }
      lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
      if (lVar2 != 0) {
        UnityEngine_Experimental_Rendering_XRPass__StartSinglePass(lVar2,param_2,0);
        lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
        if (lVar2 != 0) {
          uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering(lVar2,0);
          if ((uVar3 & 1) != 0) {
            lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
            if ((lVar2 == 0) || (param_2 == 0)) goto LAB_0349eab4;
            UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering
                      (param_2,*(undefined8 *)(lVar2 + 0x728),0);
            puVar1 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
            if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500
                        + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            if (DAT_03ef5445 == '\0') {
              FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
              DAT_03ef5445 = '\x01';
            }
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar2 = *(long *)puVar1;
            }
            if ((*(byte *)(*(long *)(lVar2 + 0xb8) + 0x4c) >> 1 & 1) != 0) {
              UnityEngine_Rendering_CommandBuffer__SetKeyword
                        (param_2,*(long *)(*(long *)
                                            PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780
                                          + 0xb8) + 0x3d0,1,0);
            }
          }
          if (*(int *)(*(long *)PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388
                      + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(&local_28,param_2,0);
          if (param_2 != 0) {
            UnityEngine_Rendering_CommandBuffer__Clear(param_2,0);
            return;
          }
        }
      }
    }
  }
LAB_0349eab4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


