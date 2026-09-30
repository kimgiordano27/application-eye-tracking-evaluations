/*
FUNCTION_NAME: OVRSceneModelLoader_LoadSceneModel_m4C0D4FA61C4EADB52885BA208830FB701B98AE4E
ENTRY_POINT: 02df478c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRSceneModelLoader_LoadSceneModel_m4C0D4FA61C4EADB52885BA208830FB701B98AE4E
               (OVRSceneModelLoader_t7160C4C0DBFCA17D10EC99147D78865100B5AA01 *param_1,
               undefined8 param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined1 local_23;
  undefined2 local_22;
  undefined8 local_20;
  OVRSceneModelLoader_t7160C4C0DBFCA17D10EC99147D78865100B5AA01 *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRSceneModelLoader_LoadSceneModel_m4C0D4FA61C4EADB52885BA208830FB701B98AE4E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
              );
    OVRSceneModelLoader_LoadSceneModel_m4C0D4FA61C4EADB52885BA208830FB701B98AE4E::
    s_Il2CppMethodInitialized = 1;
  }
  local_22 = 0;
  local_23 = 0;
  pvVar2 = (void *)OVRSceneModelLoader_get_SceneManager_m9FBF2C39385F9521BD6953620042B44D128A41AA_inline
                             (local_18,(MethodInfo *)0x0);
  NullCheck(pvVar2);
  local_22 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E(pvVar2,0);
  bVar1 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                    ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_22,
                     *(MethodInfo **)
                      Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
                    );
  if ((bVar1 & 1) != 0) {
    local_23 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                         ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_22,
                          *(MethodInfo **)
                           Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
                         );
    LogForwarder_Log_mEA2227D3CC8532C4FE53B12DF1CE6F98ED09B867
              (&local_23,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
               ,*(undefined8 *)
                 Field_<PrivateImplementationDetails>_A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
               ,0);
  }
  pvVar2 = (void *)OVRSceneModelLoader_get_SceneManager_m9FBF2C39385F9521BD6953620042B44D128A41AA_inline
                             (local_18,(MethodInfo *)0x0);
  NullCheck(pvVar2);
  bVar1 = OVRSceneManager_LoadSceneModel_m974BAD7DDB03A9A3788FB298573AC672905A12CB(pvVar2,0);
  if ((bVar1 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
    if ((bVar1 & 1) != 0) {
      uVar3 = OVRSceneModelLoader_AttemptToLoadSceneModel_m7C4C1D3915C5F5AE8941AEB27E2A77CA29BD4C38
                        (local_18);
      MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(local_18,uVar3,0);
    }
  }
  return;
}


