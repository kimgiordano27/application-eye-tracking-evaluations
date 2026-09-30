/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 02caf394
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_11;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetControllerIsInHand(void)

{
  byte bVar1;
  undefined8 uVar2;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  String_t *pSVar3;
  void *pvVar4;
  long unaff_x29;
  undefined8 in_stack_00000008;
  byte bStack0000000000000037;
  byte bStack0000000000000057;
  byte bStack0000000000000077;
  
  NullCheck(*(void **)(unaff_x29 + -0x50));
  bVar1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4
                    (*(undefined8 *)(unaff_x29 + -0x50),in_stack_00000008);
  *(byte *)(unaff_x29 + -0x51) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x51) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x78));
    uVar2 = Message_1_get_Data_m5311FC9770EDDF9FB6A5888EE0EE7F81CC4F7C7F_inline
                      (*(Message_1_tF82F9260C694E05FC6DF694B043D9FA541AF32C6 **)(unaff_x29 + -0x78),
                       *(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputActionState_BindingState_set_processorStartIndex__
                      );
    *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x80);
    NullCheck(*(void **)(unaff_x29 + -0x88));
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(*(long *)(unaff_x29 + -0x88) + 0x10);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x88);
    NullCheck(*(void **)(unaff_x29 + -0x98));
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(*(long *)(unaff_x29 + -0x98) + 0x18);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
    NullCheck(*(void **)(unaff_x29 + -0xa8));
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(*(long *)(unaff_x29 + -0xa8) + 0x28);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xb0);
    NullCheck(*(void **)(unaff_x29 + -0xa8));
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(*(long *)(unaff_x29 + -0xa8) + 0x20);
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar2 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                       ,8);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xc0);
    NullCheck(*(void **)(unaff_x29 + -200));
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(unaff_x29 + -200),0,
               *(String_t **)
                Method_UnityEngine_InputSystem_InputActionState_InteractionState_set_triggerControlIndex__
              );
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -200);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x20);
    NullCheck(*(void **)(unaff_x29 + -0xd0));
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(unaff_x29 + -0xd0),1,
               *(String_t **)(unaff_x29 + -0xd8));
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd0);
    NullCheck(*(void **)(unaff_x29 + -0xe0));
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(unaff_x29 + -0xe0),2,
               *(String_t **)
                Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_bindingIndex__);
    this = *(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(unaff_x29 + -0xe0);
    pSVar3 = *(String_t **)(unaff_x29 + -0x28);
    NullCheck(this);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,3,pSVar3);
    NullCheck(this);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (this,4,*(String_t **)
                       Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_mapIndex__);
    pSVar3 = *(String_t **)(unaff_x29 + -0x38);
    NullCheck(this);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,5,pSVar3);
    NullCheck(this);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (this,6,*(String_t **)
                       Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_interactionIndex__
              );
    pSVar3 = *(String_t **)(unaff_x29 + -0x30);
    NullCheck(this);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,7,pSVar3);
    uVar2 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(this);
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    uVar2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)(unaff_x29 + -0x40),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0);
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    uVar2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_controlIndex__
                       ,*(undefined8 *)(unaff_x29 + -0x40),0);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),uVar2,0);
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithPath__
                      );
    GroupPresenceOptions__ctor_m793B93FF13AAA359F49421977850848351DF7C56(uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar2;
    bStack0000000000000077 =
         String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                   (*(undefined8 *)(unaff_x29 + -0x28),0);
    bStack0000000000000077 = bStack0000000000000077 & 1;
    if (bStack0000000000000077 == 0) {
      pvVar4 = *(void **)(unaff_x29 + -0x48);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
      NullCheck(pvVar4);
      GroupPresenceOptions_SetDestinationApiName_m5F0030669BFD5F89B1E65BA94C44B8B5EF87E426
                (pvVar4,uVar2,0);
    }
    bStack0000000000000057 =
         String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                   (*(undefined8 *)(unaff_x29 + -0x30),0);
    bStack0000000000000057 = bStack0000000000000057 & 1;
    if (bStack0000000000000057 == 0) {
      pvVar4 = *(void **)(unaff_x29 + -0x48);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x30);
      NullCheck(pvVar4);
      GroupPresenceOptions_SetMatchSessionId_m57D07643712FCDA1866F6C3263B3D450235D8FD1
                (pvVar4,uVar2,0);
    }
    bStack0000000000000037 =
         String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                   (*(undefined8 *)(unaff_x29 + -0x38),0);
    bStack0000000000000037 = bStack0000000000000037 & 1;
    if (bStack0000000000000037 == 0) {
      pvVar4 = *(void **)(unaff_x29 + -0x48);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x38);
      NullCheck(pvVar4);
      GroupPresenceOptions_SetLobbySessionId_m162D6F6F3199B15B78238E815DAA122A9B01A63B
                (pvVar4,uVar2,0);
    }
    GroupPresence_Set_m299E65E855451B87F6C7AB4DDB3E6B1B8953A137
              (*(undefined8 *)(unaff_x29 + -0x48),0);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x60));
    uVar2 = VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                      (4,*(Il2CppObject **)(unaff_x29 + -0x60));
    *(undefined8 *)(unaff_x29 + -0x68) = uVar2;
    NullCheck(*(void **)(unaff_x29 + -0x68));
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(*(long *)(unaff_x29 + -0x68) + 0x18);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x70),0);
  }
  return;
}


