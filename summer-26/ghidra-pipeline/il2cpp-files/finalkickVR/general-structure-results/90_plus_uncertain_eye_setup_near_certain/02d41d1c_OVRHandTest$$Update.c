/*
FUNCTION_NAME: OVRHandTest$$Update
ENTRY_POINT: 02d41d1c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRHandTest__Update(long param_1)

{
  float fVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x29;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  byte bStack000000000000015f;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_0000039c;
  
  uVar5 = *(ulong *)(param_1 + 0x288);
  uVar6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865();
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar5 & 0xffffffff,(int)(uVar5 >> 0x20),in_stack_0000039c,uVar6,in_stack_00000028);
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (in_stack_00000030[0x4c] & 0xffffffff,(int)((ulong)in_stack_00000030[0x4c] >> 0x20),
             in_stack_0000039c,*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x34),in_stack_00000028);
  *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000030[0x47];
  *(undefined4 *)(unaff_x29 + -0x40) = in_stack_0000039c;
  pvVar3 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                             (*(undefined8 *)(unaff_x29 + -8),in_stack_00000028);
  NullCheck(pvVar3);
  Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar3,in_stack_00000028);
  uVar5 = in_stack_00000030[0x40];
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (*(ulong *)(unaff_x29 + -0x38) & 0xffffffff,(int)(*(ulong *)(unaff_x29 + -0x38) >> 0x20)
             ,*(undefined4 *)(unaff_x29 + -0x30),(int)*(undefined8 *)(unaff_x29 + -0x48),
             (int)((ulong)*(undefined8 *)(unaff_x29 + -0x48) >> 0x20),
             *(undefined4 *)(unaff_x29 + -0x40),in_stack_00000028);
  uVar6 = (undefined4)in_stack_00000030[0x39];
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (uVar5 & 0xffffffff,in_stack_00000028);
  uVar5 = in_stack_00000030[0x32];
  NullCheck(pvVar3);
  uStack00000000000001b0 = (undefined4)(uVar5 >> 0x20);
  Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156
            (uVar5 & 0xffffffff,pvVar3,in_stack_00000028);
  *(undefined1 *)(unaff_x29 + -0x11) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  uVar4 = OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8(0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  if (*(long *)(unaff_x29 + -0x20) != 0) {
    pvVar3 = *(void **)(unaff_x29 + -0x20);
    NullCheck(pvVar3);
    bVar2 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(pvVar3,0);
    *(byte *)(unaff_x29 + -0x11) = bVar2 & 1;
  }
  if (((*(byte *)(unaff_x29 + -0x11) & 1) == 0) &&
     (((*(byte *)(*(long *)(unaff_x29 + -8) + 0x21) & 1) != 0 ||
      ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x20) & 1) != 0)))) {
    pvVar3 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                               (*(undefined8 *)(unaff_x29 + -8));
    NullCheck(pvVar3);
    uVar7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar3,0);
    *(ulong *)(unaff_x29 + -0x58) = CONCAT44(uVar6,in_stack_0000039c);
    *(ulong *)(unaff_x29 + -0x60) = CONCAT44(uStack00000000000001b0,uVar7);
    if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x21) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
      fVar9 = (float)OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304(2,0x80000000);
      fVar8 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
      fVar1 = *(float *)(*(long *)(unaff_x29 + -8) + 0x28);
      Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline((MethodInfo *)0x0);
      uVar4 = in_stack_00000030[0x1b];
      fVar9 = (float)il2cpp_codegen_multiply<float,float>(fVar9,fVar8);
      il2cpp_codegen_multiply<float,float>(fVar9,fVar1);
      uStack00000000000001b0 = (undefined4)uVar4;
      uStack00000000000001b4 = (undefined4)((ulong)uVar4 >> 0x20);
      uVar6 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(0);
      uVar6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(uVar6,0);
      *(ulong *)(unaff_x29 + -0x58) = CONCAT44(in_stack_0000039c,uStack00000000000001b4);
      *(ulong *)(unaff_x29 + -0x60) = CONCAT44(uStack00000000000001b0,uVar6);
      in_stack_0000039c = uStack00000000000001b4;
    }
    bStack000000000000015f = *(byte *)(*(long *)(unaff_x29 + -8) + 0x20) & 1;
    if (bStack000000000000015f != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
      OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304(2,0x80000000,0);
      *(undefined4 *)(unaff_x29 + -100) = uStack00000000000001b0;
      if (0.0001 < ABS(*(float *)(unaff_x29 + -100))) {
        if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x22) & 1) != 0) {
          uVar6 = il2cpp_codegen_multiply<float,float>(*(float *)(unaff_x29 + -100),-1.0);
          *(undefined4 *)(unaff_x29 + -100) = uVar6;
        }
        fVar9 = *(float *)(unaff_x29 + -100);
        fVar8 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865();
        fVar1 = *(float *)(*(long *)(unaff_x29 + -8) + 0x24);
        Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline((MethodInfo *)0x0);
        uVar4 = *in_stack_00000030;
        fVar9 = (float)il2cpp_codegen_multiply<float,float>(fVar9,fVar8);
        il2cpp_codegen_multiply<float,float>(fVar9,fVar1);
        uStack00000000000000d0 = (undefined4)uVar4;
        uStack00000000000000d4 = (undefined4)((ulong)uVar4 >> 0x20);
        uVar6 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(0);
        *(ulong *)(unaff_x29 + -0x78) = CONCAT44(in_stack_0000039c,uStack00000000000000d4);
        *(ulong *)(unaff_x29 + -0x80) = CONCAT44(uStack00000000000000d0,uVar6);
        uStack0000000000000084 = (undefined4)(*(ulong *)(unaff_x29 + -0x60) >> 0x20);
        uStack0000000000000088 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
        uStack000000000000008c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
        uVar6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                          (*(ulong *)(unaff_x29 + -0x60) & 0xffffffff,0);
        *(ulong *)(unaff_x29 + -0x58) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        *(ulong *)(unaff_x29 + -0x60) = CONCAT44(uStack0000000000000084,uVar6);
      }
    }
    pvVar3 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                               (*(undefined8 *)(unaff_x29 + -8));
    uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar5 = *(ulong *)(unaff_x29 + -0x60);
    NullCheck(pvVar3);
    uStack0000000000000044 = (undefined4)(uVar5 >> 0x20);
    uStack0000000000000048 = (undefined4)uVar4;
    uStack000000000000004c = (undefined4)((ulong)uVar4 >> 0x20);
    Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D
              (uVar5 & 0xffffffff,uStack0000000000000044,uStack0000000000000048,
               uStack000000000000004c,pvVar3,0);
  }
  return;
}


