/*
FUNCTION_NAME: U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__2_m9E24D74B3E65891BA7362170D6B556B11A160559
ENTRY_POINT: 0252e9b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_14;functionality_gaze_interaction_hits_14
*/


void U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__2_m9E24D74B3E65891BA7362170D6B556B11A160559
               (Il2CppObject *param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  void *pvVar5;
  String_t *pSVar6;
  undefined8 uVar7;
  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *pTVar8;
  Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *local_50;
  
  puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if ((U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__2_m9E24D74B3E65891BA7362170D6B556B11A160559::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
              );
    U3CU3Ec__DisplayClass48_0_U3CLoadU3Eb__2_m9E24D74B3E65891BA7362170D6B556B11A160559::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
  NullCheck(pIVar4);
  pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,pIVar4);
  pvVar5 = *(void **)(param_1 + 0x18);
  NullCheck(pvVar5);
  pSVar6 = *(String_t **)((long)pvVar5 + 0x10);
  NullCheck(pIVar4);
  uVar3 = InterfaceFuncInvoker1<String_t*,String_t*>::Invoke
                    (2,*(Il2CppClass **)puVar1,pIVar4,pSVar6);
  bVar2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar3,0);
  if ((bVar2 & 1) == 0) {
    pvVar5 = *(void **)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    NullCheck(pvVar5);
    TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659(pvVar5,uVar7,uVar3,0);
  }
  else {
    pvVar5 = *(void **)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    NullCheck(pvVar5);
    bVar2 = TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78(pvVar5,uVar3,0);
    if ((bVar2 & 1) == 0) {
      pvVar5 = *(void **)(param_1 + 0x18);
      NullCheck(pvVar5);
      if (*(int *)((long)pvVar5 + 0x58) == 1) {
        pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
        NullCheck(pIVar4);
        pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,pIVar4);
        if (pIVar4 != (Il2CppObject *)0x0) {
          pTVar8 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x18);
          NullCheck(pIVar4);
          InterfaceActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
                    (3,*(Il2CppClass **)puVar1,pIVar4,pTVar8);
        }
      }
      else {
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(pvVar5,uVar3);
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(pvVar5,uVar3,0);
      }
    }
    else {
      pvVar5 = *(void **)(param_1 + 0x18);
      NullCheck(pvVar5);
      if (*(int *)((long)pvVar5 + 0x58) == 1) {
        pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
        pTVar8 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x18);
        local_50 = *(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D **)(param_1 + 0x28);
        if (local_50 == (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *)0x0) {
          local_50 = (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D *)
                     il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__
                               );
          Action_3__ctor_mC4EA44981086B6C5D5142C90ADAC15001A00E418
                    (local_50,param_1,
                     *(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
                     ,(MethodInfo *)0x0);
          *(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D **)(param_1 + 0x28) = local_50;
          Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x28),local_50);
        }
        NullCheck(pIVar4);
        VirtualActionInvoker2<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*,Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*>
        ::Invoke(0x1b,pIVar4,pTVar8,local_50);
      }
      else {
        pIVar4 = *(Il2CppObject **)(param_1 + 0x20);
        NullCheck(pIVar4);
        pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,pIVar4);
        pTVar8 = *(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 **)(param_1 + 0x18);
        NullCheck(pIVar4);
        uVar3 = InterfaceFuncInvoker1<String_t*,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>
                ::Invoke(3,*(Il2CppClass **)
                            Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__,
                         pIVar4,pTVar8);
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292(pvVar5,uVar7,uVar3);
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A
                  (pvVar5,uVar7,uVar3,0);
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(pvVar5,uVar3,0);
        pvVar5 = *(void **)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        NullCheck(pvVar5);
        TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(pvVar5,uVar3,0);
      }
    }
  }
  return;
}


