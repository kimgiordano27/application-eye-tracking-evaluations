/*
FUNCTION_NAME: TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468
ENTRY_POINT: 0252a34c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468
          (Il2CppObject *param_1,String_t *param_2,String_t *param_3,
          TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326 *param_4,
          TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80 *param_5,void *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  long lVar7;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar8;
  Il2CppObject *pIVar9;
  Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36 *pAVar10;
  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *pTVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 local_28;
  
  puVar3 = Method_System_Array_SetValue__;
  puVar2 = Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_SetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_SetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_SetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468::s_Il2CppMethodInitialized = 1;
  }
  pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)Method_System_Array_Sort__);
  U3CU3Ec__DisplayClass48_0__ctor_mE6332DBCDCF8618B4998F9A84F33FC44F8E5634A(pIVar5,0);
  NullCheck(pIVar5);
  *(void **)(pIVar5 + 0x10) = param_6;
  Il2CppCodeGenWriteBarrier((void **)(pIVar5 + 0x10),param_6);
  NullCheck(pIVar5);
  *(Il2CppObject **)(pIVar5 + 0x20) = param_1;
  Il2CppCodeGenWriteBarrier((void **)(pIVar5 + 0x20),param_1);
  VirtualActionInvoker0::Invoke(0xd,param_1);
  pvVar6 = (void *)VirtualFuncInvoker4<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,String_t*,String_t*,TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*,TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*>
                   ::Invoke(0x13,param_1,param_2,param_3,param_4,param_5);
  NullCheck(pIVar5);
  *(void **)(pIVar5 + 0x18) = pvVar6;
  Il2CppCodeGenWriteBarrier((void **)(pIVar5 + 0x18),pvVar6);
  NullCheck(pIVar5);
  if (*(long *)(pIVar5 + 0x18) == 0) {
    VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(*(undefined8 *)puVar3,0);
    NullCheck(pIVar5);
    pAVar10 = *(Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36 **)(pIVar5 + 0x10);
    if (pAVar10 != (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36 *)0x0) {
      NullCheck(pIVar5);
      pTVar11 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(pIVar5 + 0x18);
      NullCheck(pAVar10);
      Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline
                (pAVar10,pTVar11,*(String_t **)puVar3,(MethodInfo *)0x0);
    }
    local_28 = 0;
  }
  else {
    NullCheck(pIVar5);
    pvVar6 = *(void **)(pIVar5 + 0x18);
    NullCheck(pvVar6);
    bVar4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                      (*(undefined8 *)((long)pvVar6 + 0x10),0);
    if ((bVar4 & 1) != 0) {
      NullCheck(pIVar5);
      pvVar6 = *(void **)(pIVar5 + 0x18);
      NullCheck(pvVar6);
      *(undefined4 *)((long)pvVar6 + 0x58) = 2;
    }
    NullCheck(pIVar5);
    pvVar6 = *(void **)(pIVar5 + 0x18);
    NullCheck(pvVar6);
    if (*(int *)((long)pvVar6 + 0x58) == 0) {
      lVar7 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
      if (lVar7 == 0) {
        NullCheck(pIVar5);
        TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF
                  (param_1,*(undefined8 *)(pIVar5 + 0x18),0);
      }
      else {
        pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
        NullCheck(pIVar5);
        pTVar11 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(pIVar5 + 0x18);
        NullCheck(pIVar9);
        bVar4 = InterfaceFuncInvoker1<bool,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::
                Invoke(6,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_Quatf>__,pIVar9,
                       pTVar11);
        if ((bVar4 & 1) == 0) {
          NullCheck(pIVar5);
          if (*(long *)(pIVar5 + 0x10) != 0) {
            NullCheck(pIVar5);
            pvVar6 = *(void **)(pIVar5 + 0x18);
            NullCheck(pvVar6);
            if (*(int *)((long)pvVar6 + 0x58) == 1) {
              NullCheck(pIVar5);
              pvVar12 = *(void **)(pIVar5 + 0x18);
              NullCheck(pvVar12);
              uVar13 = *(undefined8 *)((long)pvVar12 + 0x68);
              pAVar8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
                       il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
              Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                        (pAVar8,pIVar5,*(long *)Method_System_Array_Sort__,(MethodInfo *)0x0);
              pIVar9 = (Il2CppObject *)
                       Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar13,pAVar8,0);
              NullCheck(pvVar12);
              uVar13 = Castclass(pIVar9,*(Il2CppClass **)puVar2);
              *(undefined8 *)((long)pvVar12 + 0x68) = uVar13;
              pvVar6 = (void *)Castclass(pIVar9,*(Il2CppClass **)puVar2);
              Il2CppCodeGenWriteBarrier((void **)((long)pvVar12 + 0x68),pvVar6);
            }
            else {
              uVar13 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
              Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
                        (uVar13,pIVar5,*(undefined8 *)Method_System_Array_SetValue__);
              uVar13 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4
                                 (param_1,uVar13,0);
              CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(uVar13,0,0);
            }
          }
          NullCheck(pIVar5);
          return *(undefined8 *)(pIVar5 + 0x18);
        }
      }
      NullCheck(pIVar5);
      pvVar12 = *(void **)(pIVar5 + 0x18);
      NullCheck(pvVar12);
      uVar13 = *(undefined8 *)((long)pvVar12 + 0x68);
      pAVar8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
               il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                (pAVar8,pIVar5,*(long *)Method_System_Array_Sort__,(MethodInfo *)0x0);
      pIVar9 = (Il2CppObject *)
               Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar13,pAVar8,0);
      NullCheck(pvVar12);
      uVar13 = Castclass(pIVar9,*(Il2CppClass **)puVar2);
      *(undefined8 *)((long)pvVar12 + 0x68) = uVar13;
      pvVar6 = (void *)Castclass(pIVar9,*(Il2CppClass **)puVar2);
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar12 + 0x68),pvVar6);
      uVar13 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
      Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
                (uVar13,pIVar5,*(undefined8 *)Method_System_Array_SetValue__,0);
      uVar13 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4
                         (param_1,uVar13,0);
      CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(uVar13,0,0);
      NullCheck(pIVar5);
      local_28 = *(undefined8 *)(pIVar5 + 0x18);
    }
    else {
      NullCheck(pIVar5);
      if (*(long *)(pIVar5 + 0x10) != 0) {
        NullCheck(pIVar5);
        pvVar6 = *(void **)(pIVar5 + 0x18);
        NullCheck(pvVar6);
        if (*(int *)((long)pvVar6 + 0x58) == 1) {
          NullCheck(pIVar5);
          pvVar12 = *(void **)(pIVar5 + 0x18);
          NullCheck(pvVar12);
          uVar13 = *(undefined8 *)((long)pvVar12 + 0x68);
          pAVar8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
                   il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
          Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                    (pAVar8,pIVar5,*(long *)Method_System_Array_Sort__,(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)
                   Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar13,pAVar8,0);
          NullCheck(pvVar12);
          uVar13 = Castclass(pIVar9,*(Il2CppClass **)puVar2);
          *(undefined8 *)((long)pvVar12 + 0x68) = uVar13;
          pvVar6 = (void *)Castclass(pIVar9,*(Il2CppClass **)puVar2);
          Il2CppCodeGenWriteBarrier((void **)((long)pvVar12 + 0x68),pvVar6);
        }
        else {
          uVar13 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
          Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
                    (uVar13,pIVar5,*(undefined8 *)Method_System_Array_SetValue__);
          uVar13 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4
                             (param_1,uVar13,0);
          CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(uVar13,0,0);
        }
      }
      NullCheck(pIVar5);
      local_28 = *(undefined8 *)(pIVar5 + 0x18);
    }
  }
  return local_28;
}


