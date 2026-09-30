/*
FUNCTION_NAME: U3CU3Ec__DisplayClass79_0_U3CDownloadToDiskCacheU3Eb__0_m2BCACBA30D35CFA4BBD6C9BF1DF9B38696429C71
ENTRY_POINT: 0252f3f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;functionality_gaze_interaction_hits_8
*/


void U3CU3Ec__DisplayClass79_0_U3CDownloadToDiskCacheU3Eb__0_m2BCACBA30D35CFA4BBD6C9BF1DF9B38696429C71
               (Il2CppObject *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  String_t *pSVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  Il2CppObject *pIVar8;
  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *pTVar9;
  String_t *pSVar10;
  Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *pAVar11;
  void *pvVar12;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *local_a8;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__;
  puVar1 = Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__;
  if ((U3CU3Ec__DisplayClass79_0_U3CDownloadToDiskCacheU3Eb__0_m2BCACBA30D35CFA4BBD6C9BF1DF9B38696429C71
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_SetLength__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
              );
    U3CU3Ec__DisplayClass79_0_U3CDownloadToDiskCacheU3Eb__0_m2BCACBA30D35CFA4BBD6C9BF1DF9B38696429C71
    ::s_Il2CppMethodInitialized = 1;
  }
  pIVar8 = *(Il2CppObject **)(param_1 + 0x10);
  if ((param_3 & 1) == 0) {
    local_78 = *(undefined8 *)puVar2;
    local_70 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
    ;
  }
  else {
    local_78 = *(undefined8 *)puVar2;
                    /* try { // try from 0252f57c to 0262f703 has its CatchHandler @ 0252f57c
                       catch() { ... } // from try @ 0252f57c with catch @ 0252f57c
                       catch() { ... } // from try @ 0252f7bc with catch @ 0252f57c
                       catch() { ... } // from try @ 0252f848 with catch @ 0252f57c
                       catch() { ... } // from try @ 0252f98c with catch @ 0252f57c */
    local_70 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_SetLength__
    ;
  }
  pSVar4 = (String_t *)
           String_Concat_m093934F71A9B351911EE46311674ED463B180006
                     (local_78,local_70,
                      *(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__
                      ,*(undefined8 *)(param_1 + 0x18));
  pTVar9 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x20);
  NullCheck(pIVar8);
  uVar5 = VirtualFuncInvoker2<String_t*,String_t*,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>
          ::Invoke(0x10,pIVar8,pSVar4,pTVar9);
  VLog_I_m817C9E7450141E10A69BBAB35BEC70CBFA65DEEB(uVar5,0);
  if ((param_3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    bVar3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(0);
    if ((bVar3 & 1) != 0) {
      pvVar12 = *(void **)(param_1 + 0x20);
      NullCheck(pvVar12);
      pvVar12 = *(void **)((long)pvVar12 + 0x30);
      NullCheck(pvVar12);
                    /* try { // try from 0252f704 to 0262f7bb has its CatchHandler @ 0252f804 */
      if (*(int *)((long)pvVar12 + 0x10) == 1) {
        pAVar11 = *(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D **)(param_1 + 0x28);
        if (pAVar11 == (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *)0x0) {
          return;
        }
        pTVar9 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x20);
        pSVar4 = *(String_t **)(param_1 + 0x18);
        NullCheck(pAVar11);
        Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline
                  (pAVar11,pTVar9,pSVar4,
                   *(String_t **)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                   ,(MethodInfo *)0x0);
        return;
      }
    }
    pvVar12 = *(void **)(param_1 + 0x20);
    NullCheck(pvVar12);
    uVar5 = *(undefined8 *)((long)pvVar12 + 0x70);
    local_a8 = *(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A **)(param_1 + 0x30);
                    /* try { // try from 0252f7bc to 0262f837 has its CatchHandler @ 0252f57c */
    if (local_a8 == (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)0x0) {
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 0252f704 with catch @ 0252f804
                       catch(type#1 @ 0474a728) { ... } // from try @ 0252f8c4 with catch @ 0252f804
                        */
      local_a8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
                 il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
      Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                (local_a8,param_1,
                 *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
                 ,(MethodInfo *)0x0);
                    /* try { // try from 0252f838 to 0262f83f has its CatchHandler @ 0252f954 */
                    /* try { // try from 0252f844 to 0262f847 has its CatchHandler @ 0252f970 */
      *(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A **)(param_1 + 0x30) = local_a8;
                    /* try { // try from 0252f848 to 0262f8c3 has its CatchHandler @ 0252f57c */
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x30),local_a8);
    }
    pIVar8 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar5,local_a8,0);
    NullCheck(pvVar12);
    uVar5 = Castclass(pIVar8,*(Il2CppClass **)puVar1);
    *(undefined8 *)((long)pvVar12 + 0x70) = uVar5;
    pvVar7 = (void *)Castclass(pIVar8,*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)((long)pvVar12 + 0x70),pvVar7);
    pIVar8 = *(Il2CppObject **)(param_1 + 0x10);
    NullCheck(pIVar8);
    pIVar8 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,pIVar8);
    pTVar9 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x20);
    pSVar4 = *(String_t **)(param_1 + 0x18);
    NullCheck(pIVar8);
    InterfaceActionInvoker2<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,String_t*>::
    Invoke(6,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__,pIVar8,
           pTVar9,pSVar4);
  }
  else {
    pAVar11 = *(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D **)(param_1 + 0x28);
    if (pAVar11 != (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *)0x0) {
      pTVar9 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x20);
      pSVar4 = *(String_t **)(param_1 + 0x18);
      puVar6 = (undefined8 *)
               il2cpp_codegen_static_fields_for
                         (*(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                         );
      pSVar10 = (String_t *)*puVar6;
      NullCheck(pAVar11);
      Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline
                (pAVar11,pTVar9,pSVar4,pSVar10,(MethodInfo *)0x0);
    }
  }
  return;
}


