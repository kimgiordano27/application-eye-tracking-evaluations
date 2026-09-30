/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 08efe0a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  
  puVar1 = PTR_DAT_0ac3be10;
  if ((*(byte *)(unaff_x21 + 0x317) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac3be10);
    *(undefined1 *)(unaff_x21 + 0x317) = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *(long *)puVar1;
  }
  **(undefined8 **)(lVar2 + 0xb8) = param_1;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),param_1);
  return;
}


