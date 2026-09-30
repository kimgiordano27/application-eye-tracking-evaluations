/*
FUNCTION_NAME: OVRPlatformMenu_Awake_mD884337F9692E6C70E13F84FC3582A4E185D0830
ENTRY_POINT: 02da7384
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void OVRPlatformMenu_Awake_mD884337F9692E6C70E13F84FC3582A4E185D0830
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457 *pFVar3;
  undefined8 *puVar4;
  String_t *pSVar5;
  Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *pSVar6;
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  puVar1 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRPlatformMenu_Awake_mD884337F9692E6C70E13F84FC3582A4E185D0830::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializableBoundItem>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_HandJoint_HandleHandUpdated__);
    OVRPlatformMenu_Awake_mD884337F9692E6C70E13F84FC3582A4E185D0830::s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  if ((*(int *)(local_18 + 0x24) == 1) && (*(long *)(local_18 + 0x28) == 0)) {
    pFVar3 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
                       );
    Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22
              (pFVar3,(Il2CppObject *)0x0,
               *(long *)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
               ,(MethodInfo *)0x0);
    *(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457 **)(local_18 + 0x28) = pFVar3;
    Il2CppCodeGenWriteBarrier((void **)(local_18 + 0x28),pFVar3);
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar2 & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(local_18,0,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pSVar6 = (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094 *)*puVar4;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializableBoundItem>_MoveNext__
              );
    local_24 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8();
    pSVar5 = (String_t *)Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C(&local_24,0);
    NullCheck(pSVar6);
    Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20
              (pSVar6,pSVar5,*(MethodInfo **)Method_Oculus_Interaction_HandJoint_HandleHandUpdated__
              );
  }
  return;
}


