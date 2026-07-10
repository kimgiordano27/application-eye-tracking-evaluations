/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$EndXRRendering
ENTRY_POINT: 0349eab8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__EndXRRendering
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = param_3;
  if ((DAT_03ef5e5f & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    DAT_03ef5e5f = 1;
  }
  lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_4,0);
    if (lVar2 != 0) {
      UnityEngine_Experimental_Rendering_XRPass__StopSinglePass(lVar2,param_2,0);
      puVar1 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
      if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500 + 0xe4
                  ) == 0) {
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
      if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x4c) != 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
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
        if ((*(byte *)(*(long *)(lVar2 + 0xb8) + 0x4c) >> 1 & 1) == 0) {
          if (param_2 == 0) goto LAB_0349ec68;
        }
        else {
          if (param_2 == 0) goto LAB_0349ec68;
          UnityEngine_Rendering_CommandBuffer__SetKeyword
                    (param_2,*(long *)(*(long *)
                                        PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780
                                      + 0xb8) + 0x3d0,0,0);
        }
        UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(param_2,0,0);
      }
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 +
                  0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(&local_28,param_2,0);
      if (param_2 != 0) {
        UnityEngine_Rendering_CommandBuffer__Clear(param_2,0);
        return;
      }
    }
  }
LAB_0349ec68:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


