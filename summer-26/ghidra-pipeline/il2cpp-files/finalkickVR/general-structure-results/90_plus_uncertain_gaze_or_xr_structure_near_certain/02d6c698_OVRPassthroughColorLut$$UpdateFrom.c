/*
FUNCTION_NAME: OVRPassthroughColorLut$$UpdateFrom
ENTRY_POINT: 02d6c698
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


byte OVRPassthroughColorLut__UpdateFrom(void)

{
  byte bVar1;
  int in_w8;
  undefined8 *puVar2;
  long unaff_x29;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000f0;
  undefined4 uStack00000000000000fc;
  undefined1 in_stack_00000160 [16];
  undefined8 *in_stack_00000188;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 uStack00000000000001ec;
  undefined4 in_stack_000002dc;
  undefined4 in_stack_000002e4;
  undefined8 in_stack_00000370;
  undefined4 in_stack_00000378;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  
  if (in_w8 < 3) {
    if (*(int *)(unaff_x29 + -8) == 1) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
      OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xc,0);
      memcpy(&stack0x00000680,&stack0x00000628,0x58);
      memcpy((void *)(unaff_x29 + -0x88),&stack0x00000680,0x58);
    }
    else {
      if (*(int *)(unaff_x29 + -8) != 2) goto LAB_02d6c83c;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
      OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xd,0);
      memcpy(&stack0x00000520,&stack0x000004c8,0x58);
      memcpy((void *)(unaff_x29 + -0x88),&stack0x00000520,0x58);
    }
  }
  else if (*(int *)(unaff_x29 + -8) == 0x20) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
    OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(3,0);
    memcpy(&stack0x000005d0,&stack0x00000578,0x58);
    memcpy((void *)(unaff_x29 + -0x88),&stack0x000005d0,0x58);
  }
  else {
    if (*(int *)(unaff_x29 + -8) != 0x40) {
LAB_02d6c83c:
      *(undefined1 *)(unaff_x29 + -1) = 0;
      goto LAB_02d6cb10;
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
    OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(4,0);
    memcpy(&stack0x00000470,&stack0x00000418,0x58);
    memcpy((void *)(unaff_x29 + -0x88),&stack0x00000470,0x58);
  }
  uVar3 = *(undefined4 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94(uVar3,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x10);
    memcpy(&stack0x000003b0,(void *)(unaff_x29 + -0x88),0x58);
    *(undefined8 *)((long)in_stack_000000d0 + 0x104) = in_stack_000003b8;
    *(undefined8 *)((long)in_stack_000000d0 + 0xfc) = in_stack_000003b0;
    *(undefined8 *)((long)in_stack_000000d0 + 0xa4) =
         *(undefined8 *)((long)in_stack_000000d0 + 0x104);
    *(undefined8 *)((long)in_stack_000000d0 + 0x9c) =
         *(undefined8 *)((long)in_stack_000000d0 + 0xfc);
    OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
    *(undefined8 *)((long)in_stack_000000d0 + 0xe4) = in_stack_000000d0[0x19];
    *(undefined8 *)((long)in_stack_000000d0 + 0xdc) = in_stack_000000d0[0x18];
    *puVar2 = in_stack_00000370;
    *(undefined4 *)(puVar2 + 1) = in_stack_00000378;
    puVar2 = *(undefined8 **)(unaff_x29 + -0x20);
    memcpy(&stack0x000002c0,(void *)(unaff_x29 + -0x88),0x58);
    OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
              (in_stack_000002dc,0);
    *puVar2 = *in_stack_000000d0;
    *(undefined4 *)(puVar2 + 1) = in_stack_000002e4;
  }
  uVar3 = *(undefined4 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bVar1 = OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1(uVar3,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x18);
    memcpy(&stack0x00000220,(void *)(unaff_x29 + -0x88),0x58);
    in_stack_000000d8[0xf] = in_stack_000000d8[0x13];
    in_stack_000000d8[0xe] = in_stack_000000d8[0x12];
    in_stack_000000d8[3] = in_stack_000000d8[0xf];
    in_stack_000000d8[2] = in_stack_000000d8[0xe];
    OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
    in_stack_000000d8[0xb] = *(undefined8 *)((long)in_stack_000000d8 + 0x3c);
    in_stack_000000d8[10] = *(undefined8 *)((long)in_stack_000000d8 + 0x34);
    uStack00000000000001ec = in_stack_000001d0;
    in_stack_000000d8[1] = in_stack_000001d8;
    *in_stack_000000d8 = in_stack_000001d0;
    uVar4 = *in_stack_000000d8;
    puVar2[1] = in_stack_000000d8[1];
    *puVar2 = uVar4;
    in_stack_00000188 = *(undefined8 **)(unaff_x29 + -0x28);
    memcpy(&stack0x00000130,(void *)(unaff_x29 + -0x88),0x58);
    uStack00000000000000fc = SUB84(in_stack_00000160._4_8_,4);
    uVar3 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                      (in_stack_00000160._4_8_ & 0xffffffff,0);
    *in_stack_00000188 = CONCAT44(uStack00000000000000fc,uVar3);
    *(undefined4 *)(in_stack_00000188 + 1) = in_stack_00000160._12_4_;
  }
  *(undefined1 *)(unaff_x29 + -1) = 1;
LAB_02d6cb10:
  return *(byte *)(unaff_x29 + -1) & 1;
}


