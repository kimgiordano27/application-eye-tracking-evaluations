/*
FUNCTION_NAME: System.Threading.ManualResetEventSlim$$set_SpinCount
ENTRY_POINT: 02851150
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


void System_Threading_ManualResetEventSlim__set_SpinCount(void)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  long unaff_x29;
  
  if (0x2bca2875f4373fff < *(long *)(unaff_x29 + -0x30)) {
    pIVar1 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                       );
    uVar3 = il2cpp_codegen_object_new(pIVar1);
    *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
    uVar6 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVREyeGaze_OnPermissionGranted__);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRFaceExpressions_CheckValidity__);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(uVar6,uVar3,uVar4,0)
    ;
    pEVar2 = *(Exception_t **)(unaff_x29 + -0x38);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_OVRFaceExpressions_OnPermissionGranted__);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar5);
  }
  *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x14);
  if ((-1 < *(int *)(unaff_x29 + -0x3c)) &&
     (*(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x14),
     *(int *)(unaff_x29 + -0x40) < 3)) {
    **(ulong **)(unaff_x29 + -8) =
         *(ulong *)(unaff_x29 + -0x10) | (long)*(int *)(unaff_x29 + -0x14) << 0x3e;
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


