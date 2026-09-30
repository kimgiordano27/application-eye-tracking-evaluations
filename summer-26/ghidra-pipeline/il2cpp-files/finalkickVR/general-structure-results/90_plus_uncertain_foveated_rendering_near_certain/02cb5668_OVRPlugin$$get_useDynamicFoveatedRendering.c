/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 02cb5668
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  do {
    uVar2 = Message_PopMessage_mB911CCF49C8087FE53C54707CF44C6EC2BEE3C24(param_1,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    if (*(long *)(unaff_x29 + -0x20) == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(unaff_x29 + -0x20);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A(uVar2,0);
    uVar1 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x14),1);
    *(undefined4 *)(unaff_x29 + -0x14) = uVar1;
    param_1 = (long)*(int *)(unaff_x29 + -0x14) - (ulong)*(uint *)(unaff_x29 + -4);
  } while ((long)*(int *)(unaff_x29 + -0x14) < (long)(ulong)*(uint *)(unaff_x29 + -4));
  return;
}


