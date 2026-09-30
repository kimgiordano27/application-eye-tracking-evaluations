/*
FUNCTION_NAME: U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__6_m3840006EB49523C19892A97CE168812DED7E6740
ENTRY_POINT: 0252ef08
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__6_m3840006EB49523C19892A97CE168812DED7E6740
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *pTVar5;
  
  if ((U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__6_m3840006EB49523C19892A97CE168812DED7E6740::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<Sequence>__
              );
    U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__6_m3840006EB49523C19892A97CE168812DED7E6740::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D
                    (param_4,*(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<Sequence>__
                     ,0);
  if ((bVar1 & 1) == 0) {
    bVar1 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D
                      (param_4,*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                       ,0);
    if ((bVar1 & 1) == 0) {
      bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_4,0);
      if ((bVar1 & 1) == 0) {
        pvVar2 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar2);
        TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(pvVar2,uVar3);
        pvVar2 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar2);
        TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659
                  (pvVar2,uVar3,param_4,0);
      }
      else {
        pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
        NullCheck(pIVar4);
        pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,pIVar4);
        if (pIVar4 != (Il2CppObject *)0x0) {
          pTVar5 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x18);
          NullCheck(pIVar4);
          InterfaceActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                    (6,*(Il2CppClass **)
                        Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__,
                     pIVar4,pTVar5);
        }
      }
    }
    else {
      pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
      NullCheck(pIVar4);
      pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,pIVar4);
      if (pIVar4 != (Il2CppObject *)0x0) {
        pTVar5 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x18);
        NullCheck(pIVar4);
        InterfaceActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                  (3,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__,
                   pIVar4,pTVar5);
      }
    }
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    NullCheck(pvVar2);
    TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(pvVar2,uVar3);
    pvVar2 = *(void **)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    NullCheck(pvVar2);
    TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(pvVar2,uVar3,0);
  }
  return;
}


