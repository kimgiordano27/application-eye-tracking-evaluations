/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 02cb0bf8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_6;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__GetEyeRecommendedResolutionScale(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *pRVar3;
  Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *pCVar4;
  Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *pRVar5;
  Callback_t8DACF51EBB2AEA1DBFAC9311E40F8F22E2B72B2D *pCVar6;
  Callback_tD1FBAFEC63B0112CFBE8DCB5EF96452FB354F484 *pCVar7;
  Callback_t72ADDA0DCE925D83D0AF201E5D1DE0639B65C8F1 *pCVar8;
  Callback_t9DA24D9401D6E6519599DC938267C4BCDFFCD3AB *pCVar9;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x2d0));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_PlayOneEvent__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_WithDeviceMappedFromTo__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Vector4>_AddRange__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
            );
  GroupPresenceSample_U3CStartU3Eb__8_0_m60EE5ADCBBB4A064F8D1A9E0CFF625FE282F46A7::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  bVar1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4
                    (*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),
               *(undefined8 *)
                Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
              );
    pRVar3 = (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *)
             Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(0);
    pCVar4 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector4>__ctor__);
    Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C
              (pCVar4,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_PlayOneEvent__
               ,(MethodInfo *)0x0);
    NullCheck(pRVar3);
    Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E
              (pRVar3,pCVar4,
               *(MethodInfo **)Method_System_Collections_Generic_List<Vector4>_AddRange__);
    pRVar5 = (Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *)
             RichPresence_GetDestinations_mA408B5A17ED3D0F47BF07AED912FBED58C8CF5A6(0);
    pCVar6 = (Callback_t8DACF51EBB2AEA1DBFAC9311E40F8F22E2B72B2D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<>c_<With>b__11_0__
                       );
    Callback__ctor_m14B397BC553B95CE2AC5A075DF52CD6359728AAD
              (pCVar6,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_LowLevel_InputEventListener_ObserverState_<_ctor>b__2_0__
               ,(MethodInfo *)0x0);
    NullCheck(pRVar5);
    Request_1_OnComplete_m8F38D326E8DE628335E10C90FEE7F142A2B6D82B
              (pRVar5,pCVar6,
               *(MethodInfo **)
                Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_WithDeviceMappedFromTo__
              );
    pCVar7 = (Callback_tD1FBAFEC63B0112CFBE8DCB5EF96452FB354F484 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_UIElements_InputEvent_<>c_<_cctor>b__0_0__);
    Callback__ctor_m272403F9D2A1595C5C6C1E64B6F5BF12F12C28AD
              (pCVar7,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController__ctor__,
               (MethodInfo *)0x0);
    GroupPresence_SetJoinIntentReceivedNotificationCallback_mF04360D9D808031E5887E5A19F547E749E9A8515
              (pCVar7,0);
    pCVar8 = (Callback_t72ADDA0DCE925D83D0AF201E5D1DE0639B65C8F1 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_InputControlScheme_MatchResult_get_Item__);
    Callback__ctor_mBB4A65AD21B6E3459AF6A13092C07214EBA62432
              (pCVar8,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_OnBeginFrame__
               ,(MethodInfo *)0x0);
    GroupPresence_SetLeaveIntentReceivedNotificationCallback_m2F76EF993892BA6F8CB68C0231F4F3474BF73F8C
              (pCVar8,0);
    pCVar9 = (Callback_t9DA24D9401D6E6519599DC938267C4BCDFFCD3AB *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_System_Collections_IEnumerator_Reset__
                       );
    Callback__ctor_m03D91159CB9EDEA9ED79CF1BBC75ED7C4BDE8281
              (pCVar9,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Enumerator_MoveNext__,
               (MethodInfo *)0x0);
    GroupPresence_SetInvitationsSentNotificationCallback_m6AC5D1092031BC4C44B42EDB607E17D29B3A18F6
              (pCVar9,0);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x30));
    uVar2 = VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                      (4,*(Il2CppObject **)(unaff_x29 + -0x30));
    *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
    NullCheck(*(void **)(unaff_x29 + -0x38));
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x40),0);
  }
  return;
}


