/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 06a13424
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(unaff_x21 + 0x919) & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<ScreenSpaceReflectionPreset>__ctor__
                      );
    *(undefined1 *)(unaff_x21 + 0x919) = 1;
  }
  puVar1 = 
  Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<ScreenSpaceReflectionPreset>__ctor__
  ;
  lVar5 = *(long *)(param_1 + 0x58);
  do {
    lVar3 = FUN_059692bc(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_032a55a4(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(lVar3,uVar6);
      }
    }
    lVar3 = FUN_032ef8c0((long *)(param_1 + 0x58),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


