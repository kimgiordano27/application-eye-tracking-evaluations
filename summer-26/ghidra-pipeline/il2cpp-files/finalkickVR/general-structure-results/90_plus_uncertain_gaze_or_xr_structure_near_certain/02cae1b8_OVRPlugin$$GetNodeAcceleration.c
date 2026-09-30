/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 02cae1b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNodeAcceleration(ulong param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar3;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  int iStack0000000000000054;
  byte bStack0000000000000067;
  
  if ((param_1 & 1) == 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x18);
    uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pvVar2);
    GroupPresenceOptions_SetLobbySessionId_m162D6F6F3199B15B78238E815DAA122A9B01A63B(pvVar2,uVar1,0)
    ;
  }
  pvVar2 = *(void **)(unaff_x29 + -0x18);
  bStack0000000000000067 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x20) & 1;
  NullCheck(pvVar2);
  GroupPresenceOptions_SetIsJoinable_mA7FD34DF3984C98B13D4A0482AB201E6A4910EC2
            (pvVar2,bStack0000000000000067 & 1);
  pLVar3 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)(*(long *)(unaff_x29 + -8) + 0x50);
  iStack0000000000000054 = *(int *)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pLVar3);
  uVar1 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8
                    (pLVar3,iStack0000000000000054,(MethodInfo *)*in_stack_00000018);
  uVar1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                    (*(undefined8 *)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithProcessors__
                     ,uVar1,*(undefined8 *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesFont>__
                     ,0);
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),uVar1,0);
  pvVar2 = (void *)GroupPresence_Set_m299E65E855451B87F6C7AB4DDB3E6B1B8953A137
                             (*(undefined8 *)(unaff_x29 + -0x18),0);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector3>_get_Capacity__
                    );
  Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92
            (uVar1,*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithProcessor__
             ,0);
  NullCheck(pvVar2);
  Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(pvVar2,uVar1,0);
  return;
}


