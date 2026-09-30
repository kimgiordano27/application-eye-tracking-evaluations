/*
FUNCTION_NAME: DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE
ENTRY_POINT: 02851114
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


void DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE
               (ulong *param_1,ulong param_2,int param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  
  if (((long)param_2 < 0) || (0x2bca2875f4373fff < (long)param_2)) {
    pIVar1 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVREyeGaze_OnPermissionGranted__);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRFaceExpressions_CheckValidity__);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar2,uVar3,uVar4,0);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_OVRFaceExpressions_OnPermissionGranted__);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar5);
  }
  if ((-1 < param_3) && (param_3 < 3)) {
    *param_1 = param_2 | (long)param_3 << 0x3e;
    return;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                     );
  pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
  uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRFaceExpressions_get_Item__);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRGLTFAnimatinonNode_CopyData<float>__);
  ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar2,uVar3,uVar4,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRFaceExpressions_OnPermissionGranted__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar5);
}


