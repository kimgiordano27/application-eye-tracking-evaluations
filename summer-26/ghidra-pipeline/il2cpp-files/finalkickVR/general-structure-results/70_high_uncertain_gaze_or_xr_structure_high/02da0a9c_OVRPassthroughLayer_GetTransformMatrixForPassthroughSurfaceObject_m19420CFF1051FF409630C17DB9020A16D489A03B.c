/*
FUNCTION_NAME: OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
ENTRY_POINT: 02da0a9c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


void OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
               (void *param_1,long param_2,void *param_3,undefined8 param_4)

{
  byte bVar1;
  __0 *extraout_x1;
  undefined1 auStack_578 [64];
  undefined1 auStack_538 [64];
  undefined1 auStack_4f8 [64];
  undefined1 auStack_4b8 [64];
  undefined1 auStack_478 [64];
  undefined1 auStack_438 [64];
  undefined1 auStack_3f8 [64];
  undefined1 auStack_3b8 [64];
  undefined1 auStack_378 [64];
  undefined1 auStack_338 [64];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined1 auStack_2e8 [64];
  undefined1 auStack_2a8 [64];
  undefined8 local_268;
  undefined4 local_260;
  undefined1 auStack_258 [64];
  undefined1 auStack_218 [64];
  void *local_1d8;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_1d0;
  undefined1 auStack_1c4 [64];
  undefined1 auStack_184 [67];
  byte local_141;
  undefined8 local_140;
  void *local_138;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_130;
  byte local_111;
  undefined1 *local_110;
  FinallyHelper<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::__0,false>
  aFStack_108 [20];
  undefined1 auStack_f4 [64];
  undefined1 auStack_b4 [64];
  undefined1 auStack_74 [67];
  undefined1 local_31;
  undefined8 local_30;
  long local_28;
  
  local_30 = param_4;
  local_28 = param_2;
  if ((OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Stack_StackEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_DebugUI_Panel_<>c_<_ctor>b__29_0__);
    OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
    ::s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  memset(auStack_74,0,0x40);
  memset(auStack_b4,0,0x40);
  memset(auStack_f4,0,0x40);
  OVRProfilerScope__ctor_m9420381BC476AD6837745E63335B61DE79C2E33B
            (&local_31,
             *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Panel_<>c_<_ctor>b__29_0__,0);
  local_110 = &local_31;
  il2cpp::utils::
  Finally<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::__0>
            ((utils *)&local_110,extraout_x1);
  local_111 = *(byte *)(local_28 + 0xc0) & 1;
  if (local_111 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    local_130 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                          ((MethodInfo *)0x0);
    NullCheck(local_130);
    local_138 = (void *)Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                                  (local_130,
                                   *(MethodInfo **)
                                    Method_System_Collections_Stack_StackEnumerator_Reset__);
    *(void **)(local_28 + 0xb8) = local_138;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xb8),local_138);
    *(undefined1 *)(local_28 + 0xc0) = 1;
  }
  local_140 = *(undefined8 *)(local_28 + 0xb8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_140,0);
  local_141 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline((MethodInfo *)0x0);
    memcpy(auStack_184,auStack_1c4,0x40);
    memcpy(auStack_f4,auStack_184,0x40);
  }
  else {
    local_1d0 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(local_28 + 0xb8);
    NullCheck(local_1d0);
    local_1d8 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                  (local_1d0,(MethodInfo *)0x0);
    NullCheck(local_1d8);
    Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1
              (auStack_258,local_1d8,0);
    memcpy(auStack_218,auStack_258,0x40);
    memcpy(auStack_f4,auStack_218,0x40);
  }
  memcpy(auStack_74,auStack_f4,0x40);
  local_268 = 0;
  local_260 = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_268,1.0,1.0,-1.0,
             (MethodInfo *)0x0);
  uStack_2f4 = (undefined4)((ulong)local_268 >> 0x20);
  local_2f8 = (undefined4)local_268;
  local_2f0 = local_260;
  Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642
            (auStack_2e8,local_2f8,uStack_2f4,local_260,0);
  memcpy(auStack_2a8,auStack_2e8,0x40);
  memcpy(auStack_338,auStack_74,0x40);
  memcpy(auStack_3f8,auStack_2a8,0x40);
  memcpy(auStack_438,auStack_338,0x40);
  Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
            (auStack_3b8,auStack_3f8,auStack_438,0);
  memcpy(auStack_378,auStack_3b8,0x40);
  memcpy(auStack_478,param_3,0x40);
  memcpy(auStack_538,auStack_378,0x40);
  memcpy(auStack_578,auStack_478,0x40);
  Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
            (auStack_4f8,auStack_538,auStack_578,0);
  memcpy(auStack_4b8,auStack_4f8,0x40);
  memcpy(auStack_b4,auStack_4b8,0x40);
  il2cpp::utils::
  FinallyHelper<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::$_0,false>
  ::~FinallyHelper(aFStack_108);
  memcpy(param_1,auStack_b4,0x40);
  return;
}


