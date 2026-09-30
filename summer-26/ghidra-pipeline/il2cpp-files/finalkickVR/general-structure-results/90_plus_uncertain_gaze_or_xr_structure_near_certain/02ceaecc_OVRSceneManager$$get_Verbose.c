/*
FUNCTION_NAME: OVRSceneManager$$get_Verbose
ENTRY_POINT: 02ceaecc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneManager__get_Verbose(long param_1)

{
  ulong uVar1;
  Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *pRVar2;
  long unaff_x29;
  undefined8 in_stack_00000028;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x158));
  uVar1 = CAPI_ovr_Challenges_Get_mD39F99854874E923FEA91606F4030E203363D987(in_stack_00000028,0);
  pRVar2 = (Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_49__);
  Request_1__ctor_mBD455FADB3745E94C2E0F04A5A713F3BD8D7A76C
            (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
  *(Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 **)(unaff_x29 + -8) = pRVar2;
  return *(undefined8 *)(unaff_x29 + -8);
}


