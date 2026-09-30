/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02cb50f4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  while( true ) {
    uVar1 = Message_PopMessage_mB911CCF49C8087FE53C54707CF44C6EC2BEE3C24(param_1);
    *(undefined8 *)(unaff_x29 + -0x10) = uVar1;
    if (*(long *)(unaff_x29 + -0x10) == 0) break;
    uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A(uVar1,0);
    param_1 = 0;
  }
  return;
}


