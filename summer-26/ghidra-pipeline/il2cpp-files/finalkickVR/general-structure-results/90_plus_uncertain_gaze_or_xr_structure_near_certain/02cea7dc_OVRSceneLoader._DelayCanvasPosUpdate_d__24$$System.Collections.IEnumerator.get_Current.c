/*
FUNCTION_NAME: OVRSceneLoader.<DelayCanvasPosUpdate>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02cea7dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRSceneLoader_<DelayCanvasPosUpdate>d__24__System_Collections_IEnumerator_get_Current
          (undefined8 param_1,uint param_2)

{
  ulong uVar1;
  Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *pRVar2;
  long unaff_x29;
  
  uVar1 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                    (param_1,param_2 & 0xffff | 0x5b7c0000,0);
  pRVar2 = (Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_46__);
  Request_1__ctor_m742479814847CC386A783A3C448108836651C211
            (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_45__);
  *(Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 **)(unaff_x29 + -8) = pRVar2;
  return *(undefined8 *)(unaff_x29 + -8);
}


