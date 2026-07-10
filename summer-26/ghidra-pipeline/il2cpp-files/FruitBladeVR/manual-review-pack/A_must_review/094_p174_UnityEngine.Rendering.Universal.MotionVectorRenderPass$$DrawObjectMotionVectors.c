/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.MotionVectorRenderPass$$DrawObjectMotionVectors
ENTRY_POINT: 034b7cb8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 78
LABEL: eye_tracked_foveation_setup_review_high
MODULES: validity_gate;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_foveation_hits_3;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_Rendering_Universal_MotionVectorRenderPass__DrawObjectMotionVectors
               (long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    uVar1 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering(param_2,0);
    if ((uVar1 & 1) == 0) {
      if (param_1 == 0) goto LAB_034b7d5c;
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
      UnityEngine_Rendering_RasterCommandBuffer__DrawRendererList(param_1,&local_40,0);
    }
    else {
      if (param_1 == 0) goto LAB_034b7d5c;
      UnityEngine_Rendering_RasterCommandBuffer__SetFoveatedRenderingMode(param_1,1,0);
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
      UnityEngine_Rendering_RasterCommandBuffer__DrawRendererList(param_1,&local_40,0);
      UnityEngine_Rendering_RasterCommandBuffer__SetFoveatedRenderingMode(param_1,0,0);
    }
    return;
  }
LAB_034b7d5c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


