/*
FUNCTION_NAME: BaseBoolField__ctor_m03425F09EE8336FD178562D05EB43ABDFBBAF0BB
ENTRY_POINT: 044565bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void BaseBoolField__ctor_m03425F09EE8336FD178562D05EB43ABDFBBAF0BB
               (BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 *param_1,String_t *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43 *pAVar3;
  EventCallback_1_tDFA2360CDCE536A2DE7FA625C0295865A67D40B4 *pEVar4;
  undefined8 uVar5;
  
  puVar1 = 
  PTR_BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286_RuntimeMethod_var_048d85a0
  ;
  if ((BaseBoolField__ctor_m03425F09EE8336FD178562D05EB43ABDFBBAF0BB::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43_il2cpp_TypeInfo_var_048d8250);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseBoolField_OnClickEvent_m8CAE14D9EE0A26F490FDFB55F9920897C9701E92_RuntimeMethod_var_048d8670
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseBoolField_OnNavigationSubmit_m6D6494D09510A072D2156DC9F7E71698D14C6C7B_RuntimeMethod_var_048d8678
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1__ctor_m1FD855229311BD63CECAAE3605D9742910D614B4_RuntimeMethod_var_048d8680
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26_il2cpp_TypeInfo_var_048d8688
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834_il2cpp_TypeInfo_var_048d8690)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralE74D0D5F55779C51D221B063E84DEC1ECD4E18E8_048d8698);
    BaseBoolField__ctor_m03425F09EE8336FD178562D05EB43ABDFBBAF0BB::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26_il2cpp_TypeInfo_var_048d8688
            );
  BaseField_1__ctor_m1FD855229311BD63CECAAE3605D9742910D614B4
            (param_1,param_2,(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0,
             *(MethodInfo **)
              PTR_BaseField_1__ctor_m1FD855229311BD63CECAAE3605D9742910D614B4_RuntimeMethod_var_048d8680
            );
  pvVar2 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar2,0);
  NullCheck(pvVar2);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pvVar2,*(undefined8 *)
                     PTR__stringLiteralE74D0D5F55779C51D221B063E84DEC1ECD4E18E8_048d8698,0);
  NullCheck(pvVar2);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar2,1,0);
  *(void **)(param_1 + 0x448) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x448),pvVar2);
  pvVar2 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                             (param_1,*(MethodInfo **)puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x448);
  NullCheck(pvVar2);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar2,uVar5,0);
  pvVar2 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                             (param_1,*(MethodInfo **)puVar1);
  NullCheck(pvVar2);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar2,0,0);
  BaseBoolField_set_text_mEE1205D6F5A9E94D75B77A385580C0867420A52D(param_1,0);
  pAVar3 = (Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43_il2cpp_TypeInfo_var_048d8250
                     );
  Action_1__ctor_m1A92C58D7FD083E3BE392CF3C0116F93B8E59FBB
            (pAVar3,(Il2CppObject *)param_1,
             *(long *)
              PTR_BaseBoolField_OnClickEvent_m8CAE14D9EE0A26F490FDFB55F9920897C9701E92_RuntimeMethod_var_048d8670
             ,(MethodInfo *)0x0);
  pvVar2 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               PTR_Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834_il2cpp_TypeInfo_var_048d8690
                             );
  Clickable__ctor_m98DC43EA0FE6BFAAF1AB55AEEF38F15DD1F2FB99(pvVar2,pAVar3,0);
  *(void **)(param_1 + 0x450) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x450),pvVar2);
  VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D(param_1,pvVar2,0)
  ;
  pEVar4 = (EventCallback_1_tDFA2360CDCE536A2DE7FA625C0295865A67D40B4 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                     );
  EventCallback_1__ctor_m4E7961405589FC27108EC6DF77536A6F71787A8A
            (pEVar4,(Il2CppObject *)param_1,
             *(long *)
              PTR_BaseBoolField_OnNavigationSubmit_m6D6494D09510A072D2156DC9F7E71698D14C6C7B_RuntimeMethod_var_048d8678
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisNavigationSubmitEvent_t193DCBDB6CBC8FF9F0A545B48962188505665BB1_mE3AEBEE052ADD6289D44E50FBAB102AF11F8F443
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar4,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  return;
}


