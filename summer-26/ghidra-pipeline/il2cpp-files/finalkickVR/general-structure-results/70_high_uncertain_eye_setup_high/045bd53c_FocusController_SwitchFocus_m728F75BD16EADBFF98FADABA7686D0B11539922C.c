/*
FUNCTION_NAME: FocusController_SwitchFocus_m728F75BD16EADBFF98FADABA7686D0B11539922C
ENTRY_POINT: 045bd53c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FocusController_SwitchFocus_m728F75BD16EADBFF98FADABA7686D0B11539922C
               (long param_1,Il2CppObject *param_2,undefined8 param_3,byte param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Il2CppObject *local_c8;
  Il2CppObject *local_c0;
  Il2CppObject *local_a0;
  Il2CppObject *local_98;
  Il2CppObject *local_78;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  if ((FocusController_SwitchFocus_m728F75BD16EADBFF98FADABA7686D0B11539922C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FocusController_SwitchFocus_m728F75BD16EADBFF98FADABA7686D0B11539922C::s_Il2CppMethodInitialized
         = 1;
  }
  *(Il2CppObject **)(param_1 + 0x28) = param_2;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x28),param_2);
  if (*(int *)(param_1 + 0x38) < 1) {
    local_78 = (Il2CppObject *)
               FocusController_GetLeafFocusedElement_m69566DBCE9BBD3167E76EC6A229D1FB53115748A
                         (*(int *)(param_1 + 0x38),param_1,0);
  }
  else {
    local_78 = *(Il2CppObject **)(param_1 + 0x30);
  }
  if (local_78 != param_2) {
    if (param_2 == (Il2CppObject *)0x0) {
      bVar2 = true;
    }
    else {
      NullCheck(param_2);
      bVar3 = VirtualFuncInvoker0<bool>::Invoke(0x10,param_2);
      bVar2 = (bVar3 & 1) == 0;
    }
    if (bVar2) {
      if (local_78 != (Il2CppObject *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x30),(void *)0x0);
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x38),1);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        FocusController_AboutToReleaseFocus_mD699883EF5462F259013E95C9D8C0464C6C8FBEE
                  (param_1,local_78,0,param_3,param_5);
        FocusController_ReleaseFocus_m3B9E2A26CC992B720222E36E655FA1B35C3A1934
                  (param_1,local_78,0,param_3,param_5);
      }
    }
    else if (param_2 != local_78) {
      pvVar5 = (void *)IsInstClass(param_2,*(Il2CppClass **)puVar1);
      if (pvVar5 == (void *)0x0) {
        local_98 = (Il2CppObject *)0x0;
      }
      else {
        NullCheck(pvVar5);
        uVar6 = IsInstClass(local_78,*(Il2CppClass **)puVar1);
        local_98 = (Il2CppObject *)
                   VisualElement_RetargetElement_m45ED230705469D6BDF4F68B331829BCD53C68CC5
                             (pvVar5,uVar6,0);
      }
      local_a0 = param_2;
      if (local_98 != (Il2CppObject *)0x0) {
        local_a0 = local_98;
      }
      pvVar5 = (void *)IsInstClass(local_78,*(Il2CppClass **)puVar1);
      if (pvVar5 == (void *)0x0) {
        local_c0 = (Il2CppObject *)0x0;
      }
      else {
        NullCheck(pvVar5);
        uVar6 = IsInstClass(param_2,*(Il2CppClass **)puVar1);
        local_c0 = (Il2CppObject *)
                   VisualElement_RetargetElement_m45ED230705469D6BDF4F68B331829BCD53C68CC5
                             (pvVar5,uVar6,0);
      }
      if (local_c0 == (Il2CppObject *)0x0) {
        local_c8 = local_78;
      }
      else {
        local_c8 = local_c0;
      }
      *(Il2CppObject **)(param_1 + 0x30) = param_2;
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x30),param_2);
      uVar4 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x38),1);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      if (local_78 != (Il2CppObject *)0x0) {
        FocusController_AboutToReleaseFocus_mD699883EF5462F259013E95C9D8C0464C6C8FBEE
                  (param_1,local_78,local_a0,param_3,param_5,0);
      }
      FocusController_AboutToGrabFocus_m2034967D66D99E4F9D001E77DA66F530332E0273
                (param_1,param_2,local_c8,param_3,param_5,0);
      if (local_78 != (Il2CppObject *)0x0) {
        FocusController_ReleaseFocus_m3B9E2A26CC992B720222E36E655FA1B35C3A1934
                  (param_1,local_78,local_a0,param_3,param_5,0);
      }
      FocusController_GrabFocus_m23251F6C8B96C87E6EAF835B5D02B09AEDD1D729
                (param_1,param_2,local_c8,param_3,param_4 & 1,param_5,0);
    }
  }
  return;
}


