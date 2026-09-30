/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetBool$$Invoke
ENTRY_POINT: 02da743c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_3
*/


void OVR_OpenVR_IVRSettings__GetBool__Invoke(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  String_t *pSVar4;
  Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *pSVar5;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined4 uStack0000000000000024;
  
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)**(undefined8 **)(param_1 + 0x890));
  *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
  Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22
            (*(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457 **)(unaff_x29 + -0x28),
             (Il2CppObject *)0x0,
             *(long *)
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
             ,(MethodInfo *)0x0);
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x28) = *(undefined8 *)(unaff_x29 + -0x28);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0x28),*(void **)(unaff_x29 + -0x28));
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (*(undefined8 *)(unaff_x29 + -8),0,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    pSVar5 = (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *)*puVar3;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializableBoundItem>_MoveNext__
              );
    uStack0000000000000024 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8()
    ;
    *(undefined4 *)(unaff_x29 + -0x14) = uStack0000000000000024;
    pSVar4 = (String_t *)
             Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C(unaff_x29 + -0x14,0);
    NullCheck(pSVar5);
    Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20
              (pSVar5,pSVar4,*(MethodInfo **)Method_Oculus_Interaction_HandJoint_HandleHandUpdated__
              );
  }
  return;
}


