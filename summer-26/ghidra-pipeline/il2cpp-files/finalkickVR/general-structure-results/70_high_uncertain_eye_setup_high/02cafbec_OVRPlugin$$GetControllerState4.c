/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 02cafbec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  long in_stack_000000b0;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x3c0));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_<CreateControlItemFromMember>b__75_0__
            );
  GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x40));
  bVar1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4
                    (*(undefined8 *)(unaff_x29 + -0x40),0);
  *(byte *)(unaff_x29 + -0x41) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x41) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x68));
    uVar4 = Message_1_get_Data_m30E4E4CBF5470F1497FD40E9CBE5CDCB8C306BEA_inline
                      (*(Message_1_t688AF015D1F97794F6E8D07772ECA4E3C0856B72 **)(unaff_x29 + -0x68),
                       *(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_System_Collections_IEnumerator_Reset__
                      );
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
    NullCheck(*(void **)(unaff_x29 + -0x70));
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(*(long *)(unaff_x29 + -0x70) + 0x10);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x20);
    NullCheck(*(void **)(unaff_x29 + -0x80));
    uVar2 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9
                      (*(DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8 **)
                        (unaff_x29 + -0x80),
                       *(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                      );
    *(undefined4 *)(unaff_x29 + -0x84) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x28) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_<CreateControlItemFromMember>b__75_0__
    ;
    if (*(int *)(unaff_x29 + -0x84) < 1) {
      uVar4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x28),
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_MoveNext__
                         ,0);
      *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x20);
      NullCheck(*(void **)(unaff_x29 + -0x90));
      auVar7 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93
                         (*(DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8 **)
                           (unaff_x29 + -0x90),
                          *(MethodInfo **)
                           Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_MoveNext__
                         );
      *(long *)(unaff_x29 + -0x98) = auVar7._0_8_;
      in_stack_000000b0 = unaff_x29 + -0x30;
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x98);
      il2cpp::utils::
      Finally<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::__0>
                ((utils *)&stack0x000000b0,auVar7._8_8_);
      while( true ) {
        pIVar6 = *(Il2CppObject **)(unaff_x29 + -0x30);
        NullCheck(pIVar6);
        uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,pIVar6);
        if ((uVar3 & 1) == 0) break;
        pIVar6 = *(Il2CppObject **)(unaff_x29 + -0x30);
        NullCheck(pIVar6);
        uVar4 = InterfaceFuncInvoker0<User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*>::Invoke
                          (0,*(Il2CppClass **)
                              Method_UnityEngine_InputSystem_InputBindingCompositeContext_<get_controls>d__2_System_Collections_IEnumerator_Reset__
                           ,pIVar6);
        *(undefined8 *)(unaff_x29 + -0x38) = uVar4;
        uVar4 = *(undefined8 *)(unaff_x29 + -0x28);
        pvVar5 = *(void **)(unaff_x29 + -0x38);
        NullCheck(pvVar5);
        uVar4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                          (uVar4,*(undefined8 *)((long)pvVar5 + 0x28),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0);
        *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
      }
      il2cpp::utils::
      FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::$_0,false>
      ::~FinallyHelper((FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::__0,false>
                        *)(unaff_x29 + -0xa8));
    }
    uVar4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_Reset__
                       ,*(undefined8 *)(unaff_x29 + -0x28));
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),uVar4,0);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    uVar4 = VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                      (4,*(Il2CppObject **)(unaff_x29 + -0x50));
    *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
    NullCheck(*(void **)(unaff_x29 + -0x58));
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(*(long *)(unaff_x29 + -0x58) + 0x18);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x60),0);
  }
  return;
}


