/*
FUNCTION_NAME: TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98
ENTRY_POINT: 0252bd28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_21
*/


void TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98
               (Il2CppObject *param_1,void *param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *pUVar8;
  Il2CppObject *pIVar9;
  AudioClipStreamDelegate_t17C9C794935280B82A71B40A2CCA32894B952E24 *pAVar10;
  String_t *pSVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *pTVar14;
  void *pvVar15;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar16;
  UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *pUVar17;
  undefined8 local_60;
  
  puVar4 = Method_System_Array_System_Collections_IList_Remove__;
  puVar3 = Method_System_Array_Resize<OVRPlugin_Vector3f>__;
  puVar2 = Method_System_Array_Resize<OVRPlugin_Quatf>__;
  puVar1 = Method_System_Text_ASCIIEncoding_GetCharCount__;
  if ((TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_System_Collections_IList_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalEntity>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalProjector>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalScaleMode>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Reverse<int>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_System_Collections_IList_Add__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Copy__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalSubDrawCall>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<GUIContent>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_ArrayBuilderExtensions_ToReadOnly<ParameterExpression>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_ComponentModel_ArrayConverter_ConvertTo__);
    TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98::s_Il2CppMethodInitialized =
         1;
  }
  pvVar6 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalScaleMode>__
                             );
  U3CU3Ec__DisplayClass62_0__ctor_m90AC035A6B8315672A369B91C3513DC899613B23(pvVar6,0);
  NullCheck(pvVar6);
  *(Il2CppObject **)((long)pvVar6 + 0x10) = param_1;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar6 + 0x10),param_1);
  NullCheck(pvVar6);
  *(void **)((long)pvVar6 + 0x18) = param_2;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar6 + 0x18),param_2);
  NullCheck(pvVar6);
  *(byte *)((long)pvVar6 + 0x20) = param_3 & 1;
  lVar7 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
  if (lVar7 != 0) {
    pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
    NullCheck(pIVar9);
    pUVar17 = (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)
              InterfaceFuncInvoker0<TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*>::Invoke
                        (2,*(Il2CppClass **)puVar2,pIVar9);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    lVar7 = GetVirtualMethodInfo(param_1,0x1a);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,param_1,lVar7,(MethodInfo *)0x0);
    NullCheck(pUVar17);
    UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
              (pUVar17,pUVar8,*(MethodInfo **)Method_System_Array_Copy__);
    pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
    NullCheck(pvVar6);
    pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
    NullCheck(pIVar9);
    bVar5 = InterfaceFuncInvoker1<bool,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::
            Invoke(6,*(Il2CppClass **)puVar2,pIVar9,pTVar14);
    pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
    NullCheck(pIVar9);
    pUVar17 = (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)
              InterfaceFuncInvoker0<TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*>::Invoke
                        (2,*(Il2CppClass **)puVar2,pIVar9);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    lVar7 = GetVirtualMethodInfo(param_1,0x1a);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,param_1,lVar7,(MethodInfo *)0x0);
    NullCheck(pUVar17);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar17,pUVar8,*(MethodInfo **)Method_System_Array_Reverse<int>__);
    if ((bVar5 & 1) == 0) {
      NullCheck(pvVar6);
      uVar12 = *(undefined8 *)((long)pvVar6 + 0x18);
      NullCheck(pvVar6);
      TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC
                (param_1,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<GUIContent>__,
                 *(byte *)((long)pvVar6 + 0x20) & 1,0);
      NullCheck(pvVar6);
      VirtualActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                (0x1a,param_1,
                 *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18));
      return;
    }
  }
  NullCheck(pvVar6);
  pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
  NullCheck(pTVar14);
  lVar7 = TTSClipData_get_clipStream_mF682387D2C09A202DFEBC85F0BF87F10E5939AAF_inline
                    (pTVar14,(MethodInfo *)0x0);
  if (lVar7 != 0) {
    NullCheck(pvVar6);
    pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
    NullCheck(pTVar14);
    pIVar9 = (Il2CppObject *)
             TTSClipData_get_clipStream_mF682387D2C09A202DFEBC85F0BF87F10E5939AAF_inline
                       (pTVar14,(MethodInfo *)0x0);
    pAVar10 = (AudioClipStreamDelegate_t17C9C794935280B82A71B40A2CCA32894B952E24 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
    AudioClipStreamDelegate__ctor_m623E8CC4A52808BB61C3B0E5057863399D4B19FF
              (pAVar10,pvVar6,
               *(undefined8 *)
                Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalEntity>__,0);
    NullCheck(pIVar9);
    InterfaceActionInvoker1<AudioClipStreamDelegate_t17C9C794935280B82A71B40A2CCA32894B952E24*>::
    Invoke(9,*(Il2CppClass **)puVar1,pIVar9,pAVar10);
    NullCheck(pvVar6);
    pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
    NullCheck(pTVar14);
    pIVar9 = (Il2CppObject *)
             TTSClipData_get_clipStream_mF682387D2C09A202DFEBC85F0BF87F10E5939AAF_inline
                       (pTVar14,(MethodInfo *)0x0);
    pAVar10 = (AudioClipStreamDelegate_t17C9C794935280B82A71B40A2CCA32894B952E24 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
    AudioClipStreamDelegate__ctor_m623E8CC4A52808BB61C3B0E5057863399D4B19FF
              (pAVar10,pvVar6,
               *(undefined8 *)
                Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalProjector>__,0);
    NullCheck(pIVar9);
    InterfaceActionInvoker1<AudioClipStreamDelegate_t17C9C794935280B82A71B40A2CCA32894B952E24*>::
    Invoke(10,*(Il2CppClass **)puVar1,pIVar9,pAVar10);
  }
  NullCheck(pvVar6);
  VirtualActionInvoker2<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,int>::Invoke
            (0x16,param_1,
             *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18),2);
  NullCheck(pvVar6);
  if ((*(byte *)((long)pvVar6 + 0x20) & 1) == 0) {
    local_60 = *(undefined8 *)
                Method_System_Linq_Expressions_ArrayBuilderExtensions_ToReadOnly<ParameterExpression>__
    ;
  }
  else {
    local_60 = *(undefined8 *)Method_System_ComponentModel_ArrayConverter_ConvertTo__;
  }
  pSVar11 = (String_t *)
            String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (local_60,*(undefined8 *)
                                 Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalSubDrawCall>__
                      );
  NullCheck(pvVar6);
  pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
  NullCheck(param_1);
  uVar12 = VirtualFuncInvoker2<String_t*,String_t*,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>
           ::Invoke(0x10,param_1,pSVar11,pTVar14);
  VLog_I_m817C9E7450141E10A69BBAB35BEC70CBFA65DEEB(uVar12,0);
  NullCheck(pvVar6);
  pvVar15 = *(void **)((long)pvVar6 + 0x18);
  NullCheck(pvVar15);
  pAVar16 = *(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A **)((long)pvVar15 + 0x68);
  if (pAVar16 != (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)0x0) {
    puVar13 = (undefined8 *)
              il2cpp_codegen_static_fields_for
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                        );
    pSVar11 = (String_t *)*puVar13;
    NullCheck(pAVar16);
    Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline
              (pAVar16,pSVar11,(MethodInfo *)0x0);
  }
  NullCheck(pvVar6);
  pvVar15 = *(void **)((long)pvVar6 + 0x18);
  NullCheck(pvVar15);
  *(undefined8 *)((long)pvVar15 + 0x68) = 0;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar15 + 0x68),(void *)0x0);
  pvVar15 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                              ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)param_1,
                               (MethodInfo *)0x0);
  if (pvVar15 != (void *)0x0) {
    NullCheck(pvVar15);
    pvVar15 = *(void **)((long)pvVar15 + 0x28);
    if (pvVar15 != (void *)0x0) {
      NullCheck(pvVar15);
      pUVar17 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar15 + 0x18);
      if (pUVar17 != (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)0x0) {
        NullCheck(pvVar6);
        pTVar14 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)((long)pvVar6 + 0x18);
        NullCheck(pUVar17);
        UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119
                  (pUVar17,pTVar14,
                   *(MethodInfo **)Method_System_Array_System_Collections_IList_Add__);
      }
    }
  }
  return;
}


