/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetDashboardOverlaySceneProcess$$BeginInvoke
ENTRY_POINT: 02da0b34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


void OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess__BeginInvoke
               (void *param_1,int param_2,size_t param_3)

{
  undefined8 uVar1;
  __0 *extraout_x1;
  long unaff_x29;
  uint uStack0000000000000094;
  undefined8 in_stack_000000a8;
  size_t in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  void *in_stack_000000c8;
  void *in_stack_000000d0;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_00000368;
  undefined4 in_stack_0000036c;
  
  memset(param_1,param_2,param_3);
  memset((void *)(unaff_x29 + -0x94),in_stack_000000a8._4_4_,in_stack_000000b0);
  memset((void *)(unaff_x29 + -0xd4),in_stack_000000a8._4_4_,in_stack_000000b0);
  OVRProfilerScope__ctor_m9420381BC476AD6837745E63335B61DE79C2E33B
            (in_stack_000000b8,
             *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Panel_<>c_<_ctor>b__29_0__,0);
  in_stack_000000c0[0x3d] = in_stack_000000b8;
  il2cpp::utils::
  Finally<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::__0>
            ((utils *)(unaff_x29 + -0xf0),extraout_x1);
  *(byte *)(unaff_x29 + -0xf1) = *(byte *)(in_stack_000000c0[0x5a] + 0xc0) & 1;
  if ((*(byte *)(unaff_x29 + -0xf1) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    uVar1 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                      ((MethodInfo *)0x0);
    in_stack_000000c0[0x39] = uVar1;
    NullCheck((void *)in_stack_000000c0[0x39]);
    uVar1 = Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                      ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                       in_stack_000000c0[0x39],
                       *(MethodInfo **)Method_System_Collections_Stack_StackEnumerator_Reset__);
    in_stack_000000c0[0x38] = uVar1;
    *(undefined8 *)(in_stack_000000c0[0x5a] + 0xb8) = in_stack_000000c0[0x38];
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_000000c0[0x5a] + 0xb8),(void *)in_stack_000000c0[0x38]);
    *(undefined1 *)(in_stack_000000c0[0x5a] + 0xc0) = 1;
  }
  in_stack_000000c0[0x37] = *(undefined8 *)(in_stack_000000c0[0x5a] + 0xb8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  uStack0000000000000094 =
       Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(in_stack_000000c0[0x37],0);
  if ((uStack0000000000000094 & 1) == 0) {
    Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline((MethodInfo *)0x0);
    memcpy(&stack0x000004dc,&stack0x0000049c,0x40);
    memcpy((void *)(unaff_x29 + -0xd4),&stack0x000004dc,0x40);
  }
  else {
    in_stack_000000c0[0x25] = *(undefined8 *)(in_stack_000000c0[0x5a] + 0xb8);
    NullCheck((void *)in_stack_000000c0[0x25]);
    uVar1 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_000000c0[0x25],(MethodInfo *)0x0);
    in_stack_000000c0[0x24] = uVar1;
    NullCheck((void *)in_stack_000000c0[0x24]);
    Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1
              (&stack0x00000408,in_stack_000000c0[0x24],0);
    memcpy(&stack0x00000448,&stack0x00000408,0x40);
    memcpy((void *)(unaff_x29 + -0xd4),&stack0x00000448,0x40);
  }
  memcpy((void *)(unaff_x29 + -0x54),(void *)(unaff_x29 + -0xd4),0x40);
  in_stack_000000c0[0x12] = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            (&stack0x000003f8,1.0,1.0,-1.0,(MethodInfo *)0x0);
  *in_stack_000000c0 = in_stack_000000c0[0x12];
  Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642
            (&stack0x00000378,in_stack_00000368,in_stack_0000036c,0,0);
  memcpy(&stack0x000003b8,&stack0x00000378,0x40);
  memcpy(&stack0x00000328,(void *)(unaff_x29 + -0x54),0x40);
  memcpy(&stack0x00000268,&stack0x000003b8,0x40);
  memcpy(&stack0x00000228,&stack0x00000328,0x40);
  Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
            (&stack0x000002a8,&stack0x00000268,&stack0x00000228,0);
  memcpy(&stack0x000002e8,&stack0x000002a8,0x40);
  memcpy(&stack0x000001e8,in_stack_000000d0,0x40);
  memcpy(&stack0x00000128,&stack0x000002e8,0x40);
  memcpy(&stack0x000000e8,&stack0x000001e8,0x40);
  Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
            (&stack0x00000168,&stack0x00000128,&stack0x000000e8,0);
  memcpy(&stack0x000001a8,&stack0x00000168,0x40);
  memcpy((void *)(unaff_x29 + -0x94),&stack0x000001a8,0x40);
  uStack00000000000000dc = 5;
  il2cpp::utils::
  FinallyHelper<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::$_0,false>
  ::~FinallyHelper((FinallyHelper<OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B::__0,false>
                    *)(unaff_x29 + -0xe8));
  memcpy(in_stack_000000c8,(void *)(unaff_x29 + -0x94),0x40);
  return;
}


