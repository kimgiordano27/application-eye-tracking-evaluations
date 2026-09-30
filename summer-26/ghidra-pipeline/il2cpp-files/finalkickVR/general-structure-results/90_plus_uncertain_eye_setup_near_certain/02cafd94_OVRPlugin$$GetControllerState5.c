/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 02cafd94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState5(utils *param_1,__0 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  long unaff_x29;
  int iStack0000000000000054;
  
  il2cpp::utils::
  Finally<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::__0>
            (param_1,param_2);
  while( true ) {
    pIVar4 = *(Il2CppObject **)(unaff_x29 + -0x30);
    NullCheck(pIVar4);
    uVar1 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar4);
    if ((uVar1 & 1) == 0) break;
    pIVar4 = *(Il2CppObject **)(unaff_x29 + -0x30);
    NullCheck(pIVar4);
    uVar2 = InterfaceFuncInvoker0<User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*>::Invoke
                      (0,*(Il2CppClass **)
                          Method_UnityEngine_InputSystem_InputBindingCompositeContext_<get_controls>d__2_System_Collections_IEnumerator_Reset__
                       ,pIVar4);
    *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
    uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
    pvVar3 = *(void **)(unaff_x29 + -0x38);
    NullCheck(pvVar3);
    uVar2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                      (uVar2,*(undefined8 *)((long)pvVar3 + 0x28),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
  }
  iStack0000000000000054 = 6;
  il2cpp::utils::
  FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::$_0,false>
  ::~FinallyHelper((FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::__0,false>
                    *)(unaff_x29 + -0xa8));
  if (iStack0000000000000054 == 0) {
    uVar2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)(unaff_x29 + -0x28),
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_MoveNext__
                       ,0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
  }
  uVar2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)
                      Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_Reset__
                     ,*(undefined8 *)(unaff_x29 + -0x28));
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),uVar2,0);
  return;
}


