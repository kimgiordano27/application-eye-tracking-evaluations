/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 02cb0ce0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(long param_1)

{
  Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *pCVar1;
  Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *pRVar2;
  Callback_t8DACF51EBB2AEA1DBFAC9311E40F8F22E2B72B2D *pCVar3;
  Callback_tD1FBAFEC63B0112CFBE8DCB5EF96452FB354F484 *pCVar4;
  Callback_t72ADDA0DCE925D83D0AF201E5D1DE0639B65C8F1 *pCVar5;
  Callback_t9DA24D9401D6E6519599DC938267C4BCDFFCD3AB *pCVar6;
  long unaff_x29;
  MethodInfo *in_stack_00000000;
  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *in_stack_00000048;
  
  pCVar1 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *)
           il2cpp_codegen_object_new((Il2CppClass *)**(undefined8 **)(param_1 + 0x540));
  Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C
            (pCVar1,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_PlayOneEvent__
             ,in_stack_00000000);
  NullCheck(in_stack_00000048);
  Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E
            (in_stack_00000048,pCVar1,
             *(MethodInfo **)Method_System_Collections_Generic_List<Vector4>_AddRange__);
  pRVar2 = (Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *)
           RichPresence_GetDestinations_mA408B5A17ED3D0F47BF07AED912FBED58C8CF5A6(in_stack_00000000)
  ;
  pCVar3 = (Callback_t8DACF51EBB2AEA1DBFAC9311E40F8F22E2B72B2D *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<>c_<With>b__11_0__
                     );
  Callback__ctor_m14B397BC553B95CE2AC5A075DF52CD6359728AAD
            (pCVar3,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Method_UnityEngine_InputSystem_LowLevel_InputEventListener_ObserverState_<_ctor>b__2_0__
             ,in_stack_00000000);
  NullCheck(pRVar2);
  Request_1_OnComplete_m8F38D326E8DE628335E10C90FEE7F142A2B6D82B
            (pRVar2,pCVar3,
             *(MethodInfo **)
              Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_WithDeviceMappedFromTo__
            );
  pCVar4 = (Callback_tD1FBAFEC63B0112CFBE8DCB5EF96452FB354F484 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_UnityEngine_UIElements_InputEvent_<>c_<_cctor>b__0_0__
                     );
  Callback__ctor_m272403F9D2A1595C5C6C1E64B6F5BF12F12C28AD
            (pCVar4,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController__ctor__,
             in_stack_00000000);
  GroupPresence_SetJoinIntentReceivedNotificationCallback_mF04360D9D808031E5887E5A19F547E749E9A8515
            (pCVar4,in_stack_00000000);
  pCVar5 = (Callback_t72ADDA0DCE925D83D0AF201E5D1DE0639B65C8F1 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_InputSystem_InputControlScheme_MatchResult_get_Item__);
  Callback__ctor_mBB4A65AD21B6E3459AF6A13092C07214EBA62432
            (pCVar5,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_OnBeginFrame__
             ,in_stack_00000000);
  GroupPresence_SetLeaveIntentReceivedNotificationCallback_m2F76EF993892BA6F8CB68C0231F4F3474BF73F8C
            (pCVar5,in_stack_00000000);
  pCVar6 = (Callback_t9DA24D9401D6E6519599DC938267C4BCDFFCD3AB *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_System_Collections_IEnumerator_Reset__
                     );
  Callback__ctor_m03D91159CB9EDEA9ED79CF1BBC75ED7C4BDE8281
            (pCVar6,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Enumerator_MoveNext__,
             in_stack_00000000);
  GroupPresence_SetInvitationsSentNotificationCallback_m6AC5D1092031BC4C44B42EDB607E17D29B3A18F6
            (pCVar6,in_stack_00000000);
  return;
}


