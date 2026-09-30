/*
FUNCTION_NAME: BaseVerticalCollectionView_ExecuteDefaultAction_m468BB88A934A49E93F99BA8C7719E4E4553433A9
ENTRY_POINT: 04468dcc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_21;functionality_gaze_interaction_hits_21
*/


void BaseVerticalCollectionView_ExecuteDefaultAction_m468BB88A934A49E93F99BA8C7719E4E4553433A9
               (long param_1,Il2CppObject *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  FocusEventBase_1_t488824280225A29EEFE3596EDE88F3C1DBC90D94 *pFVar6;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar7;
  void *pvVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *local_98;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  if ((BaseVerticalCollectionView_ExecuteDefaultAction_m468BB88A934A49E93F99BA8C7719E4E4553433A9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BlurEvent_t449F3BC3C3E84C840C055BB57D809145B5701302_il2cpp_TypeInfo_var_048d8a58)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<IEnumerator<int>>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<int>_get_IsCreated__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<IEnumerator<int>>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<IEnumerator<int>>_Push__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<JobHandle>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<BindingRestrictions>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<BindingRestrictions>_Pop__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_FocusEventBase_1_get_relatedTarget_mEF884A0DC8D750986502E3CDC0C2E9B5379800D6_RuntimeMethod_var_048d8a60
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    BaseVerticalCollectionView_ExecuteDefaultAction_m468BB88A934A49E93F99BA8C7719E4E4553433A9::
    s_Il2CppMethodInitialized = 1;
  }
  VisualElement_ExecuteDefaultAction_m69DB43D84DE4D338F213E0C4B64AD2055E5A63A9(param_1,param_2,0);
  NullCheck(param_2);
  lVar2 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Unity_Collections_NativeArray<JobHandle>__ctor__);
  lVar3 = EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D
                    (*(MethodInfo **)Method_Unity_Collections_NativeArray<int>_get_IsCreated__);
  if (lVar2 == lVar3) {
    pvVar8 = *(void **)(param_1 + 0x488);
    if (pvVar8 != (void *)0x0) {
      NullCheck(pvVar8);
      uVar4 = CastclassSealed(param_2,*(Il2CppClass **)
                                       Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
      DragEventsProcessor_OnPointerUpEvent_mC5C2AAFDA12640033F5FD9CE855DD84F390C7A81(pvVar8,uVar4,0)
      ;
    }
  }
  else {
    NullCheck(param_2);
    lVar2 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Stack<BindingRestrictions>_Pop__);
    lVar3 = EventBase_1_TypeId_m6799DD291775EDAF702D8F2DB25B6D53CAA13745
                      (*(MethodInfo **)
                        Method_System_Collections_Generic_Stack<IEnumerator<int>>__ctor__);
    if (lVar2 == lVar3) {
      pIVar9 = *(Il2CppObject **)(param_1 + 0x450);
      if (pIVar9 != (Il2CppObject *)0x0) {
        NullCheck(param_2);
        pIVar5 = (Il2CppObject *)
                 EventBase_get_leafTarget_m04359C6A144D1D92913C96EA6410ED01955D438E_inline
                           ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_2,
                            (MethodInfo *)0x0);
        NullCheck(pIVar9);
        pVVar7 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                 IsInstClass(pIVar5,*(Il2CppClass **)puVar1);
        VirtualActionInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                  (0xe,pIVar9,pVVar7);
      }
    }
    else {
      NullCheck(param_2);
      lVar2 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Stack<BindingRestrictions>__ctor__);
      lVar3 = EventBase_1_TypeId_mDAB5B22217A3D6B539DBF6BD3DD61C8712EA5938
                        (*(MethodInfo **)
                          Method_System_Collections_Generic_Stack<IEnumerator<int>>_Push__);
      if (lVar2 == lVar3) {
        pFVar6 = (FocusEventBase_1_t488824280225A29EEFE3596EDE88F3C1DBC90D94 *)
                 IsInstClass(param_2,*(Il2CppClass **)
                                      PTR_BlurEvent_t449F3BC3C3E84C840C055BB57D809145B5701302_il2cpp_TypeInfo_var_048d8a58
                            );
        pIVar9 = *(Il2CppObject **)(param_1 + 0x450);
        if (pIVar9 != (Il2CppObject *)0x0) {
          if (pFVar6 == (FocusEventBase_1_t488824280225A29EEFE3596EDE88F3C1DBC90D94 *)0x0) {
            local_98 = (Il2CppObject *)0x0;
          }
          else {
            NullCheck(pFVar6);
            local_98 = (Il2CppObject *)
                       FocusEventBase_1_get_relatedTarget_mEF884A0DC8D750986502E3CDC0C2E9B5379800D6_inline
                                 (pFVar6,*(MethodInfo **)
                                          PTR_FocusEventBase_1_get_relatedTarget_mEF884A0DC8D750986502E3CDC0C2E9B5379800D6_RuntimeMethod_var_048d8a60
                                 );
          }
          NullCheck(pIVar9);
          pVVar7 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                   IsInstClass(local_98,*(Il2CppClass **)puVar1);
          VirtualActionInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                    (0xf,pIVar9,pVVar7);
        }
      }
      else {
        NullCheck(param_2);
        lVar2 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Stack<BindingRestrictions>_Push__);
        lVar3 = EventBase_1_TypeId_mB1256CEDFAF9A31F2C3B18538E6162E8B74DB0D4
                          (*(MethodInfo **)
                            Method_System_Collections_Generic_Stack<IEnumerator<int>>_Clear__);
        if (lVar2 == lVar3) {
          NullCheck(param_2);
          lVar2 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_2,0);
          if (lVar2 == param_1) {
            pIVar9 = *(Il2CppObject **)(param_1 + 0x440);
            NullCheck(pIVar9);
            pIVar9 = (Il2CppObject *)
                     VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::
                     Invoke(99,pIVar9);
            NullCheck(pIVar9);
            VirtualActionInvoker0::Invoke(0x11,pIVar9);
          }
        }
      }
    }
  }
  return;
}


