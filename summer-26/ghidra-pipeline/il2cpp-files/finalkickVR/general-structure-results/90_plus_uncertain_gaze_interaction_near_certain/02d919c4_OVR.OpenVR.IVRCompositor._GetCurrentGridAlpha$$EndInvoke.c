/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetCurrentGridAlpha$$EndInvoke
ENTRY_POINT: 02d919c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


void OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha__EndInvoke
               (undefined8 *param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  Il2CppArray *this;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  long in_stack_000000b0;
  void *in_stack_000000b8;
  size_t in_stack_000000c0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000f4;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *in_stack_000000f8;
  undefined4 uStack0000000000000104;
  undefined8 *in_stack_00000110;
  undefined8 *in_stack_00000118;
  byte bStack0000000000000147;
  int iStack0000000000000154;
  undefined4 uStack0000000000000164;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  ulong in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 in_stack_000001e0;
  undefined8 uStack00000000000001e4;
  byte bStack00000000000001ef;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  ulong in_stack_00000270;
  undefined4 in_stack_00000278;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0xe0);
  in_stack_000001d8 = (undefined4)*(undefined8 *)(unaff_x29 + -0xd8);
  uStack00000000000001e4 = *(undefined8 *)(in_stack_000000b0 + 0x14);
  uStack00000000000001dc = (undefined4)*(undefined8 *)(in_stack_000000b0 + 0xc);
  in_stack_000001e0 = (undefined4)((ulong)*(undefined8 *)(in_stack_000000b0 + 0xc) >> 0x20);
  in_stack_000001c0 = in_stack_00000270;
  in_stack_000001c8 = in_stack_00000278;
  memcpy(&stack0x00000180,in_stack_000000b8,in_stack_000000c0);
  uStack0000000000000170 = (undefined4)in_stack_00000200;
  uStack0000000000000174 = (undefined4)((ulong)in_stack_00000200 >> 0x20);
  uStack0000000000000178 = (undefined4)in_stack_00000208;
  uStack000000000000017c = (undefined4)((ulong)in_stack_00000208 >> 0x20);
  uStack0000000000000164 = param_2._4_4_;
  uStack000000000000016c = param_2._12_4_;
  uStack00000000000000f4 = 1;
  uStack00000000000000e4 = 0;
  uStack0000000000000104 = 0xffffffff;
  uStack000000000000002c = uStack0000000000000164;
  uStack0000000000000034 = uStack000000000000016c;
  bStack00000000000001ef =
       OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                 (in_stack_000001c0 & 0xffffffff,in_stack_000001c0._4_4_,in_stack_000001c8,
                  uStack0000000000000170,uStack0000000000000174,uStack0000000000000178,
                  uStack000000000000017c,1,0,0,0,0,0xffffffff,0,&stack0x000001d0);
  bStack00000000000001ef = bStack00000000000001ef & (byte)uStack00000000000000f4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000110);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000110);
  this = (Il2CppArray *)*puVar1;
  iStack0000000000000154 = *(int *)(*(long *)(unaff_x29 + -8) + 0x1b0);
  NullCheck(this);
  ArrayElementTypeCheck(this,in_stack_000000f8);
  OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
            ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)this,
             (long)iStack0000000000000154,in_stack_000000f8);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1b0) = uStack0000000000000104;
  bStack0000000000000147 =
       IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                 (*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0),0,0);
  bStack0000000000000147 = bStack0000000000000147 & 1;
  if (bStack0000000000000147 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000118);
    OVRPlugin_EnqueueDestroyLayer_mC4A991C01B4734190C2F8291670BE84B30AB252B(uVar2);
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


