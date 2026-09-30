/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 03b9d224
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int in_w8;
  float *pfVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  
  unaff_x19[5] = 0;
  *(undefined8 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = unaff_s11;
  unaff_x19[1] = unaff_s12;
  unaff_x19[2] = unaff_s13;
  if (in_w8 == 0) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x20 + 0xdbc) = 1;
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar4 = SQRT(param_3 * param_3 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar4 <= DAT_00bafc24) {
    if (DAT_044a2dbb == '\0') {
      FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
      DAT_044a2dbb = '\x01';
    }
    pfVar1 = *(float **)(*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s8 / fVar4;
    fVar3 = unaff_s9 / fVar4;
    param_3 = param_3 / fVar4;
  }
  unaff_x19[3] = fVar2;
  unaff_x19[4] = fVar3;
  unaff_x19[5] = param_3;
  return;
}


