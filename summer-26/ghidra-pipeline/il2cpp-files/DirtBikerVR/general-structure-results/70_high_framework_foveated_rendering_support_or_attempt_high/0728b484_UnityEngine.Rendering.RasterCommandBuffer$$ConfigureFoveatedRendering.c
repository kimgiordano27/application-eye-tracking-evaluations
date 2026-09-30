/*
FUNCTION_NAME: UnityEngine.Rendering.RasterCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 0728b484
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)PTR_DAT_08489298;
  thunk_FUN_03afed3c();
  uVar1 = FUN_065ce45c();
  FUN_0729b154(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  if ((unaff_x20 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0728c6b4(*(long *)(unaff_x19 + 0x40),1);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_072892d4(*(long *)(unaff_x19 + 0x50),0,0,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0728c744();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


