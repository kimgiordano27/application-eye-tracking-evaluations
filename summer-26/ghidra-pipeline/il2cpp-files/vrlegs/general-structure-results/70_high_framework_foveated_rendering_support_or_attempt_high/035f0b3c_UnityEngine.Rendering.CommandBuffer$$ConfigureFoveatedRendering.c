/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 035f0b3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  FUN_01ab69ac(Unity_Properties_TypeConversion_PrimitiveConverters_<>c_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x424) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x1f8);
  if (lVar4 != 0) {
    lVar3 = *(long *)Unity_Properties_TypeConversion_PrimitiveConverters_<>c_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x200) != 0) {
      FUN_021e4d64(*(long *)(unaff_x19 + 0x200),*(undefined8 *)PTR_DAT_03cd3de8);
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_03611768(*(long *)(unaff_x19 + 0x208),*(undefined8 *)(unaff_x19 + 0x200),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


