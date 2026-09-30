/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$.cctor
ENTRY_POINT: 02cd9d0c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_29_0___cctor(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000010 = *(undefined8 *)(unaff_x29 + -0x20);
  CAPI_ovr_GroupPresenceOptions_SetMatchSessionId_Native_mB6F8758F4F751D47FDE55C95477125E01C0C68F3
            (in_stack_00000018,uStack0000000000000010);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar1,in_stack_00000000);
  return;
}


