/*
FUNCTION_NAME: MouseCaptureDispatchingStrategy_DispatchEvent_mC08ABDC6BCF4C2A70DB26C9AD0BA6F689459E3E4
ENTRY_POINT: 045acfcc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 220
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_14;functionality_data_collection_or_telemetry_hits_1
*/


void MouseCaptureDispatchingStrategy_DispatchEvent_mC08ABDC6BCF4C2A70DB26C9AD0BA6F689459E3E4
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,Il2CppObject *param_4,
               Il2CppObject *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *pLVar15;
  undefined4 uVar16;
  Il2CppObject *local_80;
  
  puVar7 = PTR_List_1_Add_m6DA75B130104121AA765F375B948065381AED1D4_RuntimeMethod_var_048dd860;
  puVar6 = Method_Oculus_Platform_Request<Challenge>__ctor__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_get_Count__;
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
  ;
  if ((MouseCaptureDispatchingStrategy_DispatchEvent_mC08ABDC6BCF4C2A70DB26C9AD0BA6F689459E3E4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<int4>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m0D0D492BF3E4484B89111ADF52C02D0B5643D2E6_RuntimeMethod_var_048ddc28
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B_RuntimeMethod_var_048dd908
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991_RuntimeMethod_var_048dd910
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_mED749E1E474001E2C04278A25601312E1BEA83DB_RuntimeMethod_var_048dd948
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_t1218DA3104C9EAD7C32A1D5B975FD26D77F76928_il2cpp_TypeInfo_var_048dd7f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_t4813BB5FE5327C33AA6E02463510E8D2AA3721BA_il2cpp_TypeInfo_var_048dd918
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9_il2cpp_TypeInfo_var_048dd958
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_tE1B3E6721ACE88C9A37AC57EDA370CC77ED38B6E_il2cpp_TypeInfo_var_048dd920
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    MouseCaptureDispatchingStrategy_DispatchEvent_mC08ABDC6BCF4C2A70DB26C9AD0BA6F689459E3E4::
    s_Il2CppMethodInitialized = 1;
  }
  bVar3 = false;
  bVar2 = false;
  if (param_5 == (Il2CppObject *)0x0) {
    local_80 = (Il2CppObject *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
    local_80 = (Il2CppObject *)
               PointerCaptureHelper_GetCapturingElement_m30DED02760CA5544CF35162656E2E3959DC8103E
                         (param_5,*(undefined4 *)(lVar10 + 8),0);
  }
  if (local_80 == (Il2CppObject *)0x0) {
    return;
  }
  pvVar11 = (void *)IsInstClass(local_80,*(Il2CppClass **)
                                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                               );
  NullCheck(param_4);
  lVar10 = VirtualFuncInvoker0<long>::Invoke(5,param_4);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_EventBase_1_t1218DA3104C9EAD7C32A1D5B975FD26D77F76928_il2cpp_TypeInfo_var_048dd7f8
            );
  lVar12 = EventBase_1_TypeId_m0D0D492BF3E4484B89111ADF52C02D0B5643D2E6
                     (*(MethodInfo **)
                       PTR_EventBase_1_TypeId_m0D0D492BF3E4484B89111ADF52C02D0B5643D2E6_RuntimeMethod_var_048ddc28
                     );
  if ((lVar10 == lVar12) || (pvVar11 == (void *)0x0)) {
    bVar8 = false;
  }
  else {
    NullCheck(pvVar11);
    lVar10 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar11,0);
    bVar8 = lVar10 == 0;
  }
  if (bVar8) {
    MouseCaptureController_ReleaseMouse_m1C7324C27A04E2BBA83A5C868E1816B3F3B0AC21(pvVar11,0);
    return;
  }
  if ((param_5 == (Il2CppObject *)0x0) || (pvVar11 == (void *)0x0)) {
    bVar8 = false;
  }
  else {
    NullCheck(pvVar11);
    pIVar13 = (Il2CppObject *)
              VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar11,0);
    bVar8 = pIVar13 != param_5;
  }
  if (bVar8) {
    return;
  }
  pIVar13 = (Il2CppObject *)IsInst(param_4,*(Il2CppClass **)puVar5);
  if (pIVar13 == (Il2CppObject *)0x0) {
    bVar8 = false;
  }
  else {
    NullCheck(param_4);
    lVar10 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_4,0);
    if (lVar10 == 0) {
      bVar8 = true;
    }
    else {
      NullCheck(param_4);
      pIVar14 = (Il2CppObject *)
                EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_4,0);
      bVar8 = pIVar14 == local_80;
    }
  }
  if (bVar8) {
    bVar3 = true;
    bVar2 = true;
  }
  else {
    NullCheck(param_4);
    lVar10 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(param_4,0);
    if (lVar10 == 0) {
      bVar8 = false;
    }
    else {
      NullCheck(param_4);
      lVar10 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_4,0);
      bVar8 = lVar10 == 0;
    }
    if (bVar8) {
      bVar3 = false;
      bVar2 = true;
    }
  }
  NullCheck(param_4);
  lVar10 = VirtualFuncInvoker0<long>::Invoke(5,param_4);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_EventBase_1_t4813BB5FE5327C33AA6E02463510E8D2AA3721BA_il2cpp_TypeInfo_var_048dd918
            );
  lVar12 = EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991
                     (*(MethodInfo **)
                       PTR_EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991_RuntimeMethod_var_048dd910
                     );
  if (lVar10 != lVar12) {
    NullCheck(param_4);
    lVar10 = VirtualFuncInvoker0<long>::Invoke(5,param_4);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_EventBase_1_tE1B3E6721ACE88C9A37AC57EDA370CC77ED38B6E_il2cpp_TypeInfo_var_048dd920
              );
    lVar12 = EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B
                       (*(MethodInfo **)
                         PTR_EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B_RuntimeMethod_var_048dd908
                       );
    if (lVar10 != lVar12) {
      NullCheck(param_4);
      lVar10 = VirtualFuncInvoker0<long>::Invoke(5,param_4);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  PTR_EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9_il2cpp_TypeInfo_var_048dd958
                );
      lVar12 = EventBase_1_TypeId_mED749E1E474001E2C04278A25601312E1BEA83DB
                         (*(MethodInfo **)
                           PTR_EventBase_1_TypeId_mED749E1E474001E2C04278A25601312E1BEA83DB_RuntimeMethod_var_048dd948
                         );
      bVar8 = lVar10 == lVar12;
      goto LAB_045ad690;
    }
  }
  bVar8 = true;
LAB_045ad690:
  if (bVar8) {
    bVar3 = false;
    bVar2 = false;
  }
  if (bVar2) {
    pvVar11 = (void *)IsInstClass(param_5,*(Il2CppClass **)
                                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__
                                 );
    if (pIVar13 != (Il2CppObject *)0x0 && pvVar11 != (void *)0x0) {
      pIVar14 = (Il2CppObject *)IsInst(pIVar13,*(Il2CppClass **)puVar6);
      if (pIVar14 == (Il2CppObject *)0x0) {
        bVar9 = 1;
      }
      else {
        NullCheck(pIVar14);
        bVar9 = InterfaceFuncInvoker0<bool>::Invoke(2,*(Il2CppClass **)puVar6,pIVar14);
        bVar9 = bVar9 & 1;
      }
      if (bVar9 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        uVar1 = *(undefined4 *)(lVar10 + 8);
        NullCheck(pIVar13);
        uVar16 = InterfaceFuncInvoker0<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>::Invoke
                           (1,*(Il2CppClass **)puVar5,pIVar13);
        NullCheck(pvVar11);
        BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF
                  (uVar16,param_2,pvVar11,uVar1,param_4,0);
      }
    }
    NullCheck(param_4);
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_4,1);
    NullCheck(param_4);
    EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(param_4,local_80,0);
    NullCheck(param_4);
    bVar9 = EventBase_get_skipDisabledElements_m92D25C10EE0BE65D488B27481A746791E7C36814(param_4,0);
    NullCheck(param_4);
    EventBase_set_skipDisabledElements_mCD199A8D744CA42DC9A331A2795DAEB2CCA9243D(param_4,0,0);
    pvVar11 = (void *)IsInstClass(local_80,*(Il2CppClass **)
                                            Method_Unity_Collections_NativeArray<int4>_Dispose__);
    if (pvVar11 != (void *)0x0) {
      NullCheck(pvVar11);
      CallbackEventHandler_HandleEventAtTargetPhase_m681B23C2CCCF3064FEC2DFF49645043E7F909B18
                (pvVar11,param_4,0);
    }
    if (!bVar3) {
      NullCheck(param_4);
      EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(param_4,0);
      NullCheck(param_4);
      EventBase_set_skipDisabledElements_mCD199A8D744CA42DC9A331A2795DAEB2CCA9243D
                (param_4,bVar9 & 1,0);
    }
    NullCheck(param_4);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,param_4,(Il2CppObject *)0x0);
    NullCheck(param_4);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_4,0,(MethodInfo *)0x0);
    NullCheck(param_4);
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_4,0,0);
    NullCheck(param_4);
    pLVar15 = (List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *)
              EventBase_get_skipElements_mAF08DF55E115F65F6256966A2A5307194DD49DDE_inline
                        ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_4,
                         (MethodInfo *)0x0);
    NullCheck(pLVar15);
    List_1_Add_m6DA75B130104121AA765F375B948065381AED1D4_inline
              (pLVar15,local_80,*(MethodInfo **)puVar7);
    NullCheck(param_4);
    EventBase_set_stopDispatch_m4B24B3101AADAEAAEAB2617E3AF8ED4257681870(param_4,bVar3,0);
    NullCheck(param_4);
    pIVar13 = (Il2CppObject *)
              EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_4,0);
    lVar10 = IsInstClass(pIVar13,*(Il2CppClass **)
                                  PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
                        );
    if (lVar10 == 0) {
      NullCheck(param_4);
      EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(param_4,0,0);
    }
    else {
      NullCheck(param_4);
      EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(param_4,1);
      NullCheck(param_4);
      pLVar15 = (List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *)
                EventBase_get_skipElements_mAF08DF55E115F65F6256966A2A5307194DD49DDE_inline
                          ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_4,
                           (MethodInfo *)0x0);
      NullCheck(param_4);
      pIVar13 = (Il2CppObject *)
                EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_4,0);
      NullCheck(pLVar15);
      List_1_Add_m6DA75B130104121AA765F375B948065381AED1D4_inline
                (pLVar15,pIVar13,*(MethodInfo **)puVar7);
    }
  }
  return;
}


