/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_GetUseFoveatedRenderingLegacyMode
ENTRY_POINT: 07ae172c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_GetUseFoveatedRenderingLegacyMode
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x2ad) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08496250);
    FUN_03a8a718(Unity_Services_Wire_Protocol_Internal_ConnectRequest_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x2ad) = 1;
  }
  lVar3 = FUN_07a15990();
  if (lVar3 != 0) {
    uVar2 = FUN_07a1973c(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0xf0);
    *(undefined4 *)(unaff_x19 + 200) = uVar2;
    puVar1 = Unity_Services_Wire_Protocol_Internal_ConnectRequest_TypeInfo;
    if (lVar3 != 0) {
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496250);
      FUN_06f68700(uVar4,*(undefined8 *)puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x07ae17bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


