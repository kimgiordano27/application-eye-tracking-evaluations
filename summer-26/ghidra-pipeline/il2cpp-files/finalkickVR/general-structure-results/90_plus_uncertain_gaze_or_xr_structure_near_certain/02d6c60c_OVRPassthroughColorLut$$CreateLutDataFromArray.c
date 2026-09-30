/*
FUNCTION_NAME: OVRPassthroughColorLut$$CreateLutDataFromArray
ENTRY_POINT: 02d6c60c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


byte OVRPassthroughColorLut__CreateLutDataFromArray(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 in_x9;
  undefined8 *in_x10;
  long unaff_x29;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
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
  undefined4 in_stack_00000708;
  
  *in_x10 = in_x9;
  *(undefined4 *)(in_x10 + 1) = in_stack_00000708;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000e8);
  if (*(int *)(lVar3 + 0x100) != 1) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02d6cb10;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
  iVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if (iVar2 != 3) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02d6cb10;
  }
  if (*(int *)(unaff_x29 + -8) < 3) {
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
  uVar5 = *(undefined4 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94(uVar5,0);
  if ((bVar1 & 1) != 0) {
    puVar4 = *(undefined8 **)(unaff_x29 + -0x10);
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
    *puVar4 = in_stack_00000370;
    *(undefined4 *)(puVar4 + 1) = in_stack_00000378;
    puVar4 = *(undefined8 **)(unaff_x29 + -0x20);
    memcpy(&stack0x000002c0,(void *)(unaff_x29 + -0x88),0x58);
    OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
              (in_stack_000002dc,0);
    *puVar4 = *in_stack_000000d0;
    *(undefined4 *)(puVar4 + 1) = in_stack_000002e4;
  }
  uVar5 = *(undefined4 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bVar1 = OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1(uVar5,0);
  if ((bVar1 & 1) != 0) {
    puVar4 = *(undefined8 **)(unaff_x29 + -0x18);
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
    uVar6 = *in_stack_000000d8;
    puVar4[1] = in_stack_000000d8[1];
    *puVar4 = uVar6;
    in_stack_00000188 = *(undefined8 **)(unaff_x29 + -0x28);
    memcpy(&stack0x00000130,(void *)(unaff_x29 + -0x88),0x58);
    uStack00000000000000fc = SUB84(in_stack_00000160._4_8_,4);
    uVar5 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                      (in_stack_00000160._4_8_ & 0xffffffff,0);
    *in_stack_00000188 = CONCAT44(uStack00000000000000fc,uVar5);
    *(undefined4 *)(in_stack_00000188 + 1) = in_stack_00000160._12_4_;
  }
  *(undefined1 *)(unaff_x29 + -1) = 1;
LAB_02d6cb10:
  return *(byte *)(unaff_x29 + -1) & 1;
}


