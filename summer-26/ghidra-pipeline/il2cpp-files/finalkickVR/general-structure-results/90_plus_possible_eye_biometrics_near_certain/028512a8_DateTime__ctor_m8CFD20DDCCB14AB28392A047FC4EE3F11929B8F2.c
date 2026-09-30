/*
FUNCTION_NAME: DateTime__ctor_m8CFD20DDCCB14AB28392A047FC4EE3F11929B8F2
ENTRY_POINT: 028512a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 156
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


void DateTime__ctor_m8CFD20DDCCB14AB28392A047FC4EE3F11929B8F2
               (ulong *param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  ulong local_58;
  
  if ((-1 < (long)param_2) && ((long)param_2 < 0x2bca2875f4374000)) {
    if ((param_4 & 1) == 0) {
      local_58 = std::__ndk1::numeric_limits<long>::min();
    }
    else {
      local_58 = 0xc000000000000000;
    }
    *param_1 = param_2 | local_58;
    return;
  }
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
  ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(pEVar2,uVar3,uVar4,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar5);
}


