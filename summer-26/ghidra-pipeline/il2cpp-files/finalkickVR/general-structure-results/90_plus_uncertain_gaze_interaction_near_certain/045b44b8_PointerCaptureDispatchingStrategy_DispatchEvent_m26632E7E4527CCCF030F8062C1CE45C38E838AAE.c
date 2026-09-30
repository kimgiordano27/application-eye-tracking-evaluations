/*
FUNCTION_NAME: PointerCaptureDispatchingStrategy_DispatchEvent_m26632E7E4527CCCF030F8062C1CE45C38E838AAE
ENTRY_POINT: 045b44b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_20;functionality_data_collection_or_telemetry_hits_2
*/


void PointerCaptureDispatchingStrategy_DispatchEvent_m26632E7E4527CCCF030F8062C1CE45C38E838AAE
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               Il2CppObject *param_5,Il2CppObject *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  Il2CppObject *pIVar13;
  undefined4 uVar14;
  
  puVar4 = 
  PTR_EventBase_1_TypeId_m7AE234E99435C4E00BF686FA957F859C1E6FFDB1_RuntimeMethod_var_048de070;
  puVar3 = PTR_EventBase_1_tBD3A3272CA5474A0EF4F4EFF8E1751F89428D493_il2cpp_TypeInfo_var_048dd788;
  puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  puVar1 = Method_Oculus_Platform_Request<ChallengeList>__ctor__;
  if ((PointerCaptureDispatchingStrategy_DispatchEvent_m26632E7E4527CCCF030F8062C1CE45C38E838AAE::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<int4>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_mECB64534E7784E4F149108516B906000134DA10E_RuntimeMethod_var_048de078
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_t49C5D050F7E36AA2230E042A0ACB06DE32E81034_il2cpp_TypeInfo_var_048dd7c0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    PointerCaptureDispatchingStrategy_DispatchEvent_m26632E7E4527CCCF030F8062C1CE45C38E838AAE::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar8 = (Il2CppObject *)IsInst(param_5,*(Il2CppClass **)puVar2);
  if (pIVar8 != (Il2CppObject *)0x0) {
    NullCheck(pIVar8);
    uVar7 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar2,pIVar8);
    pIVar9 = (Il2CppObject *)
             PointerCaptureHelper_GetCapturingElement_m30DED02760CA5544CF35162656E2E3959DC8103E
                       (param_6,uVar7,0);
    if (pIVar9 != (Il2CppObject *)0x0) {
      pvVar10 = (void *)IsInstClass(pIVar9,*(Il2CppClass **)
                                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                   );
      NullCheck(param_5);
      lVar11 = VirtualFuncInvoker0<long>::Invoke(5,param_5);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar12 = EventBase_1_TypeId_m7AE234E99435C4E00BF686FA957F859C1E6FFDB1(*(MethodInfo **)puVar4);
      if ((lVar11 == lVar12) || (pvVar10 == (void *)0x0)) {
        bVar5 = false;
      }
      else {
        NullCheck(pvVar10);
        lVar11 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar10,0);
        bVar5 = lVar11 == 0;
      }
      if (bVar5) {
        NullCheck(pIVar8);
        uVar7 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar2,pIVar8);
        PointerCaptureHelper_ReleasePointer_mE9ABEA39360504C8B5A9CF1C067A63F7535CDECB
                  (param_6,uVar7,0);
      }
      else {
        NullCheck(param_5);
        lVar11 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_5,0);
        if (lVar11 == 0) {
          bVar5 = false;
        }
        else {
          NullCheck(param_5);
          pIVar13 = (Il2CppObject *)
                    EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_5,0);
          bVar5 = pIVar13 != pIVar9;
        }
        if (!bVar5) {
          if ((param_6 == (Il2CppObject *)0x0) || (pvVar10 == (void *)0x0)) {
            bVar5 = false;
          }
          else {
            NullCheck(pvVar10);
            pIVar13 = (Il2CppObject *)
                      VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar10,0);
            bVar5 = pIVar13 != param_6;
          }
          if (!bVar5) {
            NullCheck(param_5);
            lVar11 = VirtualFuncInvoker0<long>::Invoke(5,param_5);
            il2cpp_codegen_runtime_class_init_inline
                      (*(Il2CppClass **)
                        PTR_EventBase_1_t49C5D050F7E36AA2230E042A0ACB06DE32E81034_il2cpp_TypeInfo_var_048dd7c0
                      );
            lVar12 = EventBase_1_TypeId_mECB64534E7784E4F149108516B906000134DA10E
                               (*(MethodInfo **)
                                 PTR_EventBase_1_TypeId_mECB64534E7784E4F149108516B906000134DA10E_RuntimeMethod_var_048de078
                               );
            if (lVar11 == lVar12) {
              bVar5 = false;
            }
            else {
              NullCheck(param_5);
              lVar11 = VirtualFuncInvoker0<long>::Invoke(5,param_5);
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
              lVar12 = EventBase_1_TypeId_m7AE234E99435C4E00BF686FA957F859C1E6FFDB1
                                 (*(MethodInfo **)puVar4);
              bVar5 = lVar11 != lVar12;
            }
            if (bVar5) {
              NullCheck(pIVar8);
              uVar7 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar2,pIVar8);
              PointerCaptureHelper_ProcessPointerCapture_mD1AE918F21A8FA12782FDDB44BC51B4449F0B160
                        (param_6,uVar7,0);
            }
            pvVar10 = (void *)IsInstClass(param_6,*(Il2CppClass **)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__
                                         );
            if (pvVar10 != (void *)0x0) {
              pIVar13 = (Il2CppObject *)IsInst(pIVar8,*(Il2CppClass **)puVar1);
              if (pIVar13 == (Il2CppObject *)0x0) {
                bVar6 = 1;
              }
              else {
                NullCheck(pIVar13);
                bVar6 = InterfaceFuncInvoker0<bool>::Invoke(2,*(Il2CppClass **)puVar1,pIVar13);
                bVar6 = bVar6 & 1;
              }
              if (bVar6 != 0) {
                NullCheck(pIVar8);
                uVar7 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar2,pIVar8);
                NullCheck(pIVar8);
                uVar14 = InterfaceFuncInvoker0<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>::
                         Invoke(5,*(Il2CppClass **)puVar2,pIVar8);
                uVar14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                                   (uVar14,param_2,param_3);
                NullCheck(pvVar10);
                BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF
                          (uVar14,param_2,pvVar10,uVar7,param_5,0);
              }
            }
            NullCheck(param_5);
            EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_5,1);
            NullCheck(param_5);
            EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(param_5,pIVar9,0);
            NullCheck(param_5);
            EventBase_set_skipDisabledElements_mCD199A8D744CA42DC9A331A2795DAEB2CCA9243D
                      (param_5,0,0);
            pvVar10 = (void *)IsInstClass(pIVar9,*(Il2CppClass **)
                                                  Method_Unity_Collections_NativeArray<int4>_Dispose__
                                         );
            if (pvVar10 != (void *)0x0) {
              NullCheck(pvVar10);
              CallbackEventHandler_HandleEventAtTargetPhase_m681B23C2CCCF3064FEC2DFF49645043E7F909B18
                        (pvVar10,param_5,0);
            }
            NullCheck(param_5);
            VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,param_5,(Il2CppObject *)0x0);
            NullCheck(param_5);
            EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
                      ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_5,0,
                       (MethodInfo *)0x0);
            NullCheck(param_5);
            EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_5,0,0);
            NullCheck(param_5);
            EventBase_set_stopDispatch_m4B24B3101AADAEAAEAB2617E3AF8ED4257681870(param_5,1,0);
            NullCheck(param_5);
            EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(param_5,0,0);
          }
        }
      }
    }
  }
  return;
}


