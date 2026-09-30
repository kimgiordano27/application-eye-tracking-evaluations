/*
FUNCTION_NAME: OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62
ENTRY_POINT: 02d8e154
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    pIVar5 = *(Il2CppObject **)(lVar4 + 0x38);
    NullCheck(pIVar5);
    VirtualActionInvoker0::Invoke(6,pIVar5);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(undefined8 *)(lVar4 + 0x38) = 0;
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x38),(void *)0x0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_ShutdownMixedReality_mB656E8CCEFB6FCEC25B8597307566A0C1883D1FE(0);
  }
  return;
}


