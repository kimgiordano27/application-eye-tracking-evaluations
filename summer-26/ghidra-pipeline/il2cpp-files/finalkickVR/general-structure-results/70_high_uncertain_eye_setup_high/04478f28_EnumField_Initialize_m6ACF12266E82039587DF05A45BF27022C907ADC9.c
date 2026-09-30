/*
FUNCTION_NAME: EnumField_Initialize_m6ACF12266E82039587DF05A45BF27022C907ADC9
ENTRY_POINT: 04478f28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void EnumField_Initialize_m6ACF12266E82039587DF05A45BF27022C907ADC9
               (BaseField_1_tF13C07E8FC892946C19A35F07A2F9684FCEF2DF5 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_EnumField_tD28659BB6904EBCCDE6179E867F81ED4A5EDB96F_il2cpp_TypeInfo_var_048d92b0;
  puVar1 = 
  PTR_BaseField_1_get_visualInput_m7D0A1F2B3C62E3F20CCD6D89F545E719B2EF6CA4_RuntimeMethod_var_048d92a8
  ;
  if ((EnumField_Initialize_m6ACF12266E82039587DF05A45BF27022C907ADC9::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_get_visualInput_m7D0A1F2B3C62E3F20CCD6D89F545E719B2EF6CA4_RuntimeMethod_var_048d92a8
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    EnumField_Initialize_m6ACF12266E82039587DF05A45BF27022C907ADC9::s_Il2CppMethodInitialized = 1;
  }
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
                             );
  TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5(pvVar3);
  *(void **)(param_1 + 0x450) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x450),pvVar3);
  pvVar3 = *(void **)(param_1 + 0x450);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar5 = *(undefined8 *)(lVar4 + 8);
  NullCheck(pvVar3);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar3,uVar5,0);
  pvVar3 = *(void **)(param_1 + 0x450);
  NullCheck(pvVar3);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar3,1,0);
  pvVar3 = (void *)BaseField_1_get_visualInput_m7D0A1F2B3C62E3F20CCD6D89F545E719B2EF6CA4
                             (param_1,*(MethodInfo **)puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x450);
  NullCheck(pvVar3);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar3,uVar5,0);
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar3,0);
  *(void **)(param_1 + 0x458) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x458),pvVar3);
  pvVar3 = *(void **)(param_1 + 0x458);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  NullCheck(pvVar3);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar3,uVar5,0);
  pvVar3 = *(void **)(param_1 + 0x458);
  NullCheck(pvVar3);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar3,1,0);
  pvVar3 = (void *)BaseField_1_get_visualInput_m7D0A1F2B3C62E3F20CCD6D89F545E719B2EF6CA4
                             (param_1,*(MethodInfo **)puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x458);
  NullCheck(pvVar3);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar3,uVar5,0);
  if (param_2 != 0) {
    EnumField_Init_m1724CED0E3DCB30C655E61FED361955FD4B52DF8(param_1,param_2,0);
  }
  return;
}


