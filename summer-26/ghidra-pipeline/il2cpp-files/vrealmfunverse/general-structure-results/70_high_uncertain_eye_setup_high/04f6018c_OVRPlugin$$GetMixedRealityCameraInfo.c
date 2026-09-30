/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 04f6018c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetMixedRealityCameraInfo(float param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float in_w8;
  float fVar4;
  float fVar5;
  float unaff_s8;
  
  if (unaff_s8 != in_w8) {
    if (param_1 <= unaff_s8) {
      param_1 = unaff_s8;
    }
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    fVar4 = (float)FUN_04f66294(param_1);
    fVar5 = (float)FUN_04f66294(param_1,&stack0x00000004);
    if ((0.0 <= fVar4) || ((fVar5 <= 0.0 && ((0.0 <= fVar5 || (fVar4 <= fVar5)))))) {
      if (0.0 < fVar4) {
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (fVar4 < fVar5) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar5)) {
            bVar1 = fVar5 < 0.0;
            bVar2 = fVar5 == 0.0;
            bVar3 = false;
          }
        }
        return !bVar2 && bVar1 == bVar3;
      }
      return false;
    }
  }
  return true;
}


