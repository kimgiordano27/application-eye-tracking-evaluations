/*
FUNCTION_NAME: TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E
ENTRY_POINT: 0252cc2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_17;functionality_gaze_interaction_hits_17
*/


void TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E
               (Il2CppObject *param_1,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *param_2
               )

{
  undefined *puVar1;
  Il2CppObject *pIVar2;
  String_t *pSVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *pUVar8;
  
  puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if ((TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_System_Collections_IList_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float>__);
    TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E::s_Il2CppMethodInitialized =
         1;
  }
  NullCheck(param_2);
  if (*(int *)(param_2 + 0x58) == 1) {
    pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
    if (pIVar2 != (Il2CppObject *)0x0) {
      NullCheck(pIVar2);
      InterfaceFuncInvoker1<bool,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                (4,*(Il2CppClass **)puVar1,pIVar2,param_2);
    }
    pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
    if (pIVar2 != (Il2CppObject *)0x0) {
      NullCheck(param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      NullCheck(param_2);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      NullCheck(param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      NullCheck(param_2);
      pSVar3 = (String_t *)
               TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911
                         (param_1,uVar4,uVar6,uVar7,*(undefined8 *)(param_2 + 0x30),0);
      NullCheck(pIVar2);
      InterfaceFuncInvoker2<bool,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,String_t*>::
      Invoke(7,*(Il2CppClass **)puVar1,pIVar2,param_2,pSVar3);
    }
    pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
    if (pIVar2 != (Il2CppObject *)0x0) {
      NullCheck(pIVar2);
      InterfaceActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                (7,*(Il2CppClass **)
                    Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__,pIVar2,
                 param_2);
    }
  }
  NullCheck(param_2);
  TTSClipData_set_clipStream_m66BE01966E2A7F2A799F07B2364DA3B228A66AAC(param_2,0);
  VirtualActionInvoker2<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,int>::Invoke
            (0x16,param_1,param_2,0);
  uVar4 = VirtualFuncInvoker2<String_t*,String_t*,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>
          ::Invoke(0x10,param_1,
                   *(String_t **)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float>__,
                   param_2);
  VLog_I_m817C9E7450141E10A69BBAB35BEC70CBFA65DEEB(uVar4,0);
  pvVar5 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                             ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)param_1,
                              (MethodInfo *)0x0);
  if (pvVar5 != (void *)0x0) {
    NullCheck(pvVar5);
    pUVar8 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar5 + 0x18);
    if (pUVar8 != (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)0x0) {
      NullCheck(pUVar8);
      UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119
                (pUVar8,param_2,*(MethodInfo **)Method_System_Array_System_Collections_IList_Add__);
    }
  }
  return;
}


