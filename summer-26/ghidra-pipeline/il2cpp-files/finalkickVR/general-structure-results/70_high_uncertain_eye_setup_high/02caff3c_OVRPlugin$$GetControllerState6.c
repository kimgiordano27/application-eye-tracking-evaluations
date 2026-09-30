/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 02caff3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(void)

{
  undefined8 uVar1;
  long unaff_x29;
  int iStack0000000000000054;
  
  iStack0000000000000054 = 6;
  il2cpp::utils::
  FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::$_0,false>
  ::~FinallyHelper((FinallyHelper<GroupPresenceSample_OnInviteSentNotif_m4FA148FCB22A9A17090433DFCA814A1B092AC918::__0,false>
                    *)(unaff_x29 + -0xa8));
  if (iStack0000000000000054 == 0) {
    uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)(unaff_x29 + -0x28),
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_MoveNext__
                       ,0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  }
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)
                      Method_UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_Reset__
                     ,*(undefined8 *)(unaff_x29 + -0x28));
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),uVar1,0);
  return;
}


