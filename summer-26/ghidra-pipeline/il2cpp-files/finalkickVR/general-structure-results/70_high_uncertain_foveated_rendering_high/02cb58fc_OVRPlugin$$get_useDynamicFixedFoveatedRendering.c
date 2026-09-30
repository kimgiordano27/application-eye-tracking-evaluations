/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 02cb58fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering(long param_1)

{
  Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D *pDVar1;
  long lVar2;
  undefined8 *in_stack_00000010;
  
  pDVar1 = (Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D *)
           il2cpp_codegen_object_new((Il2CppClass *)**(undefined8 **)(param_1 + 0x448));
  Dictionary_2__ctor_mBEB7B0AB7F5D14C2663E964BAF53CCB789240A41
            (pDVar1,*(MethodInfo **)
                     Method_Newtonsoft_Json_Linq_JContainer_<ReadContentFromAsync>d__1_MoveNext__);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D **)(lVar2 + 8) = pDVar1;
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  Il2CppCodeGenWriteBarrier((void **)(lVar2 + 8),pDVar1);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return;
}


