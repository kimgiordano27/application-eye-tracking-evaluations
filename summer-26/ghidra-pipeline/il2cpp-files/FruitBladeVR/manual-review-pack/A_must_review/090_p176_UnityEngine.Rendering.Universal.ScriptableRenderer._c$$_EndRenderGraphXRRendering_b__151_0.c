/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer.<>c$$<EndRenderGraphXRRendering>b__151_0
ENTRY_POINT: 034a3220
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 80
LABEL: eye_tracked_foveation_setup_review_high
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer_<>c__<EndRenderGraphXRRendering>b__151_0
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_03ef5e7b & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    DAT_03ef5e7b = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 != 0)) {
    uVar3 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_2 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x1a0), lVar2 == 0)) goto LAB_034a338c;
      UnityEngine_Experimental_Rendering_XRPass__StopSinglePass(lVar2,param_4,0);
    }
    puVar1 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
    if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500 + 0xe4)
        == 0) {
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
    if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x4c) == 0) {
      return;
    }
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
      if (param_4 != 0) {
LAB_034a3374:
        UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering(param_4,0,0);
        return;
      }
    }
    else if (param_4 != 0) {
                    /* try { // try from 034a3354 to 035a3417 has its CatchHandler @ 034a3354
                       catch() { ... } // from try @ 034a3354 with catch @ 034a3354
                       catch() { ... } // from try @ 034a346c with catch @ 034a3354
                       catch() { ... } // from try @ 034a34c8 with catch @ 034a3354
                       catch() { ... } // from try @ 034a34d4 with catch @ 034a3354
                       catch() { ... } // from try @ 034a3528 with catch @ 034a3354 */
      UnityEngine_Rendering_RasterCommandBuffer__SetKeyword
                (param_4,*(long *)(*(long *)
                                    PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780
                                  + 0xb8) + 0x3d0,0,0);
      goto LAB_034a3374;
    }
  }
LAB_034a338c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


