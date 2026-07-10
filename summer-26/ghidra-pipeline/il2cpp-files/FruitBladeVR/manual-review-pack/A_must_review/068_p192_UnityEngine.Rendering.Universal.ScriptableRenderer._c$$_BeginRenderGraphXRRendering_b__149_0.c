/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer.<>c$$<BeginRenderGraphXRRendering>b__149_0
ENTRY_POINT: 034a3028
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer_<>c__<BeginRenderGraphXRRendering>b__149_0
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_03ef5e7a & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    DAT_03ef5e7a = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 != 0)) {
    uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (lVar2 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(), lVar2 != 0))
    {
      if (*(char *)(lVar2 + 0x734) != '\0') {
        if ((*(long *)(param_2 + 0x10) == 0) ||
           (lVar2 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(),
           lVar2 == 0)) goto LAB_034a31a0;
        *(undefined1 *)(lVar2 + 0x735) = 1;
      }
      if ((*(long *)(param_2 + 0x10) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 != 0)) {
        UnityEngine_Experimental_Rendering_XRPass__StartSinglePass(lVar2,param_4,0);
        if ((*(long *)(param_2 + 0x10) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 != 0)) {
          uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering(lVar2,0);
          if ((uVar3 & 1) != 0) {
            if (((*(long *)(param_2 + 0x10) == 0) ||
                (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 == 0)) ||
               (param_4 == 0)) goto LAB_034a31a0;
            UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering
                      (param_4,*(undefined8 *)(lVar2 + 0x728),0);
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
              UnityEngine_Rendering_RasterCommandBuffer__SetKeyword
                        (param_4,*(long *)(*(long *)
                                            PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780
                                          + 0xb8) + 0x3d0,1,0);
              return;
            }
          }
          return;
        }
      }
    }
  }
LAB_034a31a0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


