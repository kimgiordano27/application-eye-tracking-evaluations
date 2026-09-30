/*
FUNCTION_NAME: System.Threading.ManualResetEventSlim$$.ctor
ENTRY_POINT: 02851310
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


void System_Threading_ManualResetEventSlim___ctor(long param_1)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  ulong in_x9;
  long unaff_x29;
  byte bStack0000000000000027;
  ulong *puStack0000000000000048;
  ulong uStack0000000000000050;
  
  if (param_1 <= (long)(in_x9 & 0xffff | 0x2bca2875f4370000)) {
    bStack0000000000000027 = *(byte *)(unaff_x29 + -0x15) & 1;
    if (bStack0000000000000027 == 0) {
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x10);
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -8);
      uVar5 = std::__ndk1::numeric_limits<long>::min();
      *(undefined8 *)(unaff_x29 + -0x48) = uVar5;
      uStack0000000000000050 = *(ulong *)(unaff_x29 + -0x38);
      puStack0000000000000048 = *(ulong **)(unaff_x29 + -0x40);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -8);
      *(undefined8 *)(unaff_x29 + -0x48) = 0xc000000000000000;
      uStack0000000000000050 = *(ulong *)(unaff_x29 + -0x28);
      puStack0000000000000048 = *(ulong **)(unaff_x29 + -0x30);
    }
    *puStack0000000000000048 = uStack0000000000000050 | *(ulong *)(unaff_x29 + -0x48);
    return;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                     );
  pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVREyeGaze_OnPermissionGranted__);
  uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRFaceExpressions_CheckValidity__);
  ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(pEVar2,uVar5,uVar3,0);
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar4);
}


