/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetBool$$BeginInvoke
ENTRY_POINT: 02da7494
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSettings__GetBool__BeginInvoke(void)

{
  byte bVar1;
  undefined8 *puVar2;
  String_t *pSVar3;
  Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *pSVar4;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined4 uStack0000000000000024;
  
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (*(undefined8 *)(unaff_x29 + -8),0,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    pSVar4 = (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *)*puVar2;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializableBoundItem>_MoveNext__
              );
    uStack0000000000000024 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8()
    ;
    *(undefined4 *)(unaff_x29 + -0x14) = uStack0000000000000024;
    pSVar3 = (String_t *)
             Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C(unaff_x29 + -0x14,0);
    NullCheck(pSVar4);
    Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20
              (pSVar4,pSVar3,*(MethodInfo **)Method_Oculus_Interaction_HandJoint_HandleHandUpdated__
              );
  }
  return;
}


