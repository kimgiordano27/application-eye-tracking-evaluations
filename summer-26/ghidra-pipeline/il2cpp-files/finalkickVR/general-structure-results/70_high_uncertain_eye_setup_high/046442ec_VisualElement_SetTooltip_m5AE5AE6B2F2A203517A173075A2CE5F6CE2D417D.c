/*
FUNCTION_NAME: VisualElement_SetTooltip_m5AE5AE6B2F2A203517A173075A2CE5F6CE2D417D
ENTRY_POINT: 046442ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VisualElement_SetTooltip_m5AE5AE6B2F2A203517A173075A2CE5F6CE2D417D
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,Il2CppObject *param_6)

{
  bool bVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  String_t *pSVar5;
  undefined4 uVar6;
  
  if ((VisualElement_SetTooltip_m5AE5AE6B2F2A203517A173075A2CE5F6CE2D417D::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_SetTooltip_m5AE5AE6B2F2A203517A173075A2CE5F6CE2D417D::s_Il2CppMethodInitialized =
         1;
  }
  NullCheck(param_6);
  pIVar3 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,param_6);
  pIVar3 = (Il2CppObject *)
           IsInstClass(pIVar3,*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  if (pIVar3 == (Il2CppObject *)0x0) {
    bVar1 = false;
  }
  else {
    NullCheck(pIVar3);
    uVar4 = VisualElement_get_tooltip_mFFF67C9BB593EA781557BFE7A9BE267ACAE8B525(pIVar3);
    bVar2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar4,0);
    bVar1 = (bVar2 & 1) == 0;
  }
  if (bVar1) {
    NullCheck(pIVar3);
    uVar6 = VirtualFuncInvoker0<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>::Invoke(0x5f,pIVar3)
    ;
    NullCheck(param_6);
    TooltipEvent_set_rect_mCD96D19C063247F8DE3B8553843C27611286A5FD_inline
              (uVar6,param_2,param_3,param_4,param_6);
    NullCheck(pIVar3);
    pSVar5 = (String_t *)
             VisualElement_get_tooltip_mFFF67C9BB593EA781557BFE7A9BE267ACAE8B525(pIVar3,0);
    NullCheck(param_6);
    TooltipEvent_set_tooltip_m989CA98943B7E44DDCC4FFC4940F8701A65C4980_inline
              ((TooltipEvent_t48F59E9AFAADF9D1B8A7A3A5CB8A49DA6D3E7187 *)param_6,pSVar5,
               (MethodInfo *)0x0);
    NullCheck(param_6);
    EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(param_6,0);
  }
  return;
}


