/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 05ee4e7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f08768(Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__);
  *(undefined1 *)(unaff_x21 + 0x66e) = 1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_04856718(*(long *)(unaff_x20 + 0x10),unaff_w19,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetRealObject__
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


