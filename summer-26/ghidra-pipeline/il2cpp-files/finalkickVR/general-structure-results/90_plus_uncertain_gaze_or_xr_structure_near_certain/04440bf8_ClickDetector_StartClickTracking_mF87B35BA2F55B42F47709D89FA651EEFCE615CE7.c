/*
FUNCTION_NAME: ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7
ENTRY_POINT: 04440bf8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               Il2CppObject *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6 *pLVar11;
  
  puVar1 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  if ((ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar4 = (Il2CppObject *)IsInst(param_5,*(Il2CppClass **)puVar1);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pLVar11 = *(List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6 **)(param_4 + 0x10);
    NullCheck(pIVar4);
    iVar2 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar1,pIVar4);
    NullCheck(pLVar11);
    pvVar5 = (void *)List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB
                               (pLVar11,iVar2,
                                *(MethodInfo **)
                                 PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
                               );
    NullCheck(param_5);
    pIVar6 = (Il2CppObject *)
             EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_5,0);
    pvVar7 = (void *)IsInstClass(pIVar6,*(Il2CppClass **)
                                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                );
    NullCheck(pvVar5);
    if (pvVar7 != *(void **)((long)pvVar5 + 0x10)) {
      NullCheck(pvVar5);
      ButtonClickStatus_Reset_mFCBC412DDC97A15CD335422EE69C932766EB4067(pvVar5,0);
    }
    NullCheck(pvVar5);
    *(void **)((long)pvVar5 + 0x10) = pvVar7;
    Il2CppCodeGenWriteBarrier((void **)((long)pvVar5 + 0x10),pvVar7);
    NullCheck(param_5);
    lVar8 = EventBase_get_timestamp_mC9B2EEBB3D65DD2032AAF19FEB0032AEA8D303A0_inline
                      ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_5,
                       (MethodInfo *)0x0);
    NullCheck(pvVar5);
    lVar10 = *(long *)((long)pvVar5 + 0x28);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
              );
    iVar2 = ClickDetector_get_s_DoubleClickTime_mC3981303DF2BC78A33219109765E2EBB183DD1B2_inline
                      ((MethodInfo *)0x0);
    lVar8 = il2cpp_codegen_subtract<long,long>(lVar8,lVar10);
    if (iVar2 < lVar8) {
      NullCheck(pvVar5);
      *(undefined4 *)((long)pvVar5 + 0x30) = 1;
    }
    else {
      NullCheck(pvVar5);
      iVar2 = *(int *)((long)pvVar5 + 0x30);
      NullCheck(pvVar5);
      uVar3 = il2cpp_codegen_add<int,int>(iVar2,1);
      *(undefined4 *)((long)pvVar5 + 0x30) = uVar3;
    }
    NullCheck(param_5);
    uVar9 = EventBase_get_timestamp_mC9B2EEBB3D65DD2032AAF19FEB0032AEA8D303A0_inline
                      ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_5,
                       (MethodInfo *)0x0);
    NullCheck(pvVar5);
    *(undefined8 *)((long)pvVar5 + 0x28) = uVar9;
    NullCheck(pIVar4);
    uVar3 = InterfaceFuncInvoker0<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>::Invoke
                      (5,*(Il2CppClass **)puVar1,pIVar4);
    NullCheck(pvVar5);
    *(ulong *)((long)pvVar5 + 0x18) = CONCAT44(param_2,uVar3);
    *(undefined4 *)((long)pvVar5 + 0x20) = param_3;
  }
  return;
}


