/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 02caf4f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 175
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose
               (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *param_1,ulong param_2,
               String_t *param_3)

{
  undefined8 uVar1;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  String_t *pSVar2;
  void *pvVar3;
  long unaff_x29;
  byte bStack0000000000000037;
  byte bStack0000000000000057;
  byte bStack0000000000000077;
  
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(param_1,param_2,param_3);
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
  pSVar2 = *(String_t **)(unaff_x29 + -0x28);
  NullCheck(this);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,3,pSVar2);
  NullCheck(this);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            (this,4,*(String_t **)
                     Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_mapIndex__);
  pSVar2 = *(String_t **)(unaff_x29 + -0x38);
  NullCheck(this);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,5,pSVar2);
  NullCheck(this);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            (this,6,*(String_t **)
                     Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_interactionIndex__
            );
  pSVar2 = *(String_t **)(unaff_x29 + -0x30);
  NullCheck(this);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,7,pSVar2);
  uVar1 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(this);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)(unaff_x29 + -0x40),
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)
                      Method_UnityEngine_InputSystem_InputActionState_TriggerState_set_controlIndex__
                     ,*(undefined8 *)(unaff_x29 + -0x40),0);
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),uVar1,0);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithPath__
                    );
  GroupPresenceOptions__ctor_m793B93FF13AAA359F49421977850848351DF7C56(uVar1,0);
  *(undefined8 *)(unaff_x29 + -0x48) = uVar1;
  bStack0000000000000077 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x28),0);
  bStack0000000000000077 = bStack0000000000000077 & 1;
  if (bStack0000000000000077 == 0) {
    pvVar3 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x28);
    NullCheck(pvVar3);
    GroupPresenceOptions_SetDestinationApiName_m5F0030669BFD5F89B1E65BA94C44B8B5EF87E426
              (pvVar3,uVar1,0);
  }
  bStack0000000000000057 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x30),0);
  bStack0000000000000057 = bStack0000000000000057 & 1;
  if (bStack0000000000000057 == 0) {
    pvVar3 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x30);
    NullCheck(pvVar3);
    GroupPresenceOptions_SetMatchSessionId_m57D07643712FCDA1866F6C3263B3D450235D8FD1(pvVar3,uVar1,0)
    ;
  }
  bStack0000000000000037 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x38),0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    pvVar3 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x38);
    NullCheck(pvVar3);
    GroupPresenceOptions_SetLobbySessionId_m162D6F6F3199B15B78238E815DAA122A9B01A63B(pvVar3,uVar1,0)
    ;
  }
  GroupPresence_Set_m299E65E855451B87F6C7AB4DDB3E6B1B8953A137(*(undefined8 *)(unaff_x29 + -0x48),0);
  return;
}


