/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetCurrentGridAlpha$$.ctor
ENTRY_POINT: 02d91808
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_gaze_interaction_hits_1;functionality_possible_biometrics_hits_1
*/


void OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Il2CppArray *this;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 uVar5;
  ulong *in_stack_00000108;
  ulong *in_stack_00000110;
  ulong *in_stack_00000118;
  byte bStack0000000000000147;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  ulong in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  undefined8 uStack00000000000001e4;
  byte bStack00000000000001ef;
  
  if ((OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000110);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000118);
    OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized = 1
    ;
  }
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  memset((void *)(unaff_x29 + -0x70),0,0x40);
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1b0);
  if (*(int *)(unaff_x29 + -0x84) != -1) {
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B();
    uVar3 = in_stack_00000108[0xe];
    *(ulong *)(unaff_x29 + -0x98) = in_stack_00000108[0xf];
    *(ulong *)(unaff_x29 + -0xa0) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x8c) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0x94) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x1c) = *(undefined8 *)(unaff_x29 + -0x8c);
    *(undefined8 *)(unaff_x29 + -0x24) = *(undefined8 *)(unaff_x29 + -0x94);
    OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3(unaff_x29 + -0x30,0);
    uVar3 = in_stack_00000108[6];
    *(ulong *)(unaff_x29 + -0xd8) = in_stack_00000108[7];
    *(ulong *)(unaff_x29 + -0xe0) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xcc) = *(undefined8 *)(unaff_x29 + -0xe8);
    *(undefined8 *)(unaff_x29 + -0xd4) = *(undefined8 *)(unaff_x29 + -0xf0);
    Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline((MethodInfo *)0x0);
    OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC
              (in_stack_00000108[3] & 0xffffffff,0);
    uVar3 = *in_stack_00000108;
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x70),0x40);
    memcpy(&stack0x00000210,(void *)(unaff_x29 + -0x70),0x40);
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x80),0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x80);
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x80),0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000118);
    in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0xe0);
    uStack00000000000001d8 = (undefined4)*(undefined8 *)(unaff_x29 + -0xd8);
    uStack00000000000001e4 = *(undefined8 *)(unaff_x29 + -0xcc);
    uStack00000000000001dc = (undefined4)*(undefined8 *)(unaff_x29 + -0xd4);
    uStack00000000000001e0 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0xd4) >> 0x20);
    in_stack_000001c0 = uVar3;
    in_stack_000001c8 = param_3;
    memcpy(&stack0x00000180,&stack0x00000210,0x40);
    uStack0000000000000170 = (undefined4)uVar4;
    uStack0000000000000174 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack0000000000000178 = (undefined4)uVar5;
    uStack000000000000017c = (undefined4)((ulong)uVar5 >> 0x20);
    bStack00000000000001ef =
         OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                   (in_stack_000001c0 & 0xffffffff,in_stack_000001c0._4_4_,in_stack_000001c8,
                    uStack0000000000000170,uStack0000000000000174,uStack0000000000000178,
                    uStack000000000000017c,1,0,0,0,0,0xffffffff,0,&stack0x000001d0);
    bStack00000000000001ef = bStack00000000000001ef & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000110);
    puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000110);
    this = (Il2CppArray *)*puVar2;
    iVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x1b0);
    NullCheck(this);
    ArrayElementTypeCheck(this,(void *)0x0);
    OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
              ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)this,(long)iVar1,
               (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)0x0);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1b0) = 0xffffffff;
  }
  bStack0000000000000147 =
       IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                 (*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0),0,0);
  bStack0000000000000147 = bStack0000000000000147 & 1;
  if (bStack0000000000000147 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000118);
    OVRPlugin_EnqueueDestroyLayer_mC4A991C01B4734190C2F8291670BE84B30AB252B(uVar4);
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0) = 0;
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(*(long *)(unaff_x29 + -8) + 0x1b8,0);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
              (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -8),0,
               (MethodInfo *)0x0);
  }
  il2cpp_codegen_initobj((void *)(*(long *)(unaff_x29 + -8) + 0x130),0x7c);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1c8) = 0;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1cc) = 0xffffffff;
  return;
}


