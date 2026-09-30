/*
FUNCTION_NAME: CameraFilterPack_TV_BrokenGlass2$$OnDisable
ENTRY_POINT: 01faca68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void CameraFilterPack_TV_BrokenGlass2__OnDisable
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float fVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  long unaff_x29;
  undefined4 uVar6;
  float fVar7;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  float in_stack_000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  float fStack00000000000001bc;
  undefined8 in_stack_000001c0;
  float in_stack_000001c8;
  void *in_stack_000001d0;
  float fStack00000000000001dc;
  float in_stack_000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 in_stack_000001e8;
  float fStack00000000000001ec;
  float fStack00000000000001f0;
  
  *(undefined4 *)(unaff_x29 + -0xac) = *(undefined4 *)(unaff_x29 + -0x18);
  if (*(float *)(unaff_x29 + -0xac) == 0.0) {
    *(undefined4 *)(unaff_x29 + -0x30) = 0;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0x18);
    *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x14);
    uVar6 = il2cpp_codegen_add<float,float>
                      (*(float *)(unaff_x29 + -0xb0) / 2.0,*(float *)(unaff_x29 + -0xb4));
    *(undefined4 *)(unaff_x29 + -0x30) = uVar6;
  }
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0x30);
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  uVar3 = OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D();
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
  NullCheck(*(void **)(unaff_x29 + -0xc0));
  uVar6 = OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1
                    (*(undefined8 *)(unaff_x29 + -0xc0),0);
  *(undefined4 *)(unaff_x29 + -0xc4) = uVar6;
  *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0xc4);
  *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0x1c);
  *(undefined4 *)(unaff_x29 + -0xcc) = *(undefined4 *)(unaff_x29 + -0x20);
  uVar6 = il2cpp_codegen_subtract<float,float>
                    (*(float *)(unaff_x29 + -200),*(float *)(unaff_x29 + -0xcc));
  *(undefined4 *)(unaff_x29 + -0x1c) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  bVar2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A
                    (*(undefined8 *)(unaff_x29 + -0xd8),0);
  *(byte *)(unaff_x29 + -0xd9) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0xd9) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xf0));
    BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E
              (*(undefined8 *)(unaff_x29 + -0xf0));
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(in_stack_00000030 + 0x180);
    *(float *)(unaff_x29 + -0xf8) = param_3;
    fVar7 = *(float *)(unaff_x29 + -0x100);
    fVar1 = *(float *)(unaff_x29 + -0x18);
    pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pvVar4);
    BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(pvVar4,0);
    Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
              (&stack0x00000220,fVar7,fVar1,param_3,(MethodInfo *)0x0);
    NullCheck(*(void **)(unaff_x29 + -0xe8));
    uVar6 = 0;
    fVar7 = 0.0;
    BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A
              (0,*(undefined8 *)(unaff_x29 + -0xe8),0);
    pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
    pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
    NullCheck(pvVar5);
    uStack00000000000001e4 =
         Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar5,0);
    fStack00000000000001f0 = (float)*(undefined8 *)(in_stack_00000030 + 0x100);
    in_stack_000001e0 = fStack00000000000001f0;
    fStack00000000000001dc = *(float *)(unaff_x29 + -0x1c);
    in_stack_000001d0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
    in_stack_000001e8 = uVar6;
    fStack00000000000001ec = fVar7;
    NullCheck(in_stack_000001d0);
    uStack00000000000001b4 =
         Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(in_stack_000001d0,0);
    in_stack_000001c0 = *(undefined8 *)(in_stack_00000030 + 0xd0);
    in_stack_000001a0 = 0;
    in_stack_000001a8 = 0;
    in_stack_000001b0 = fVar7;
    in_stack_000001b8 = uVar6;
    fStack00000000000001bc = fVar7;
    in_stack_000001c8 = fVar7;
    Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
              ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&stack0x000001a0,
               in_stack_000001e0,fStack00000000000001dc,fVar7,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    uStack0000000000000190 = (undefined4)in_stack_000001a0;
    uStack0000000000000194 = (undefined4)((ulong)in_stack_000001a0 >> 0x20);
    BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0
              (uStack0000000000000190,uStack0000000000000194,in_stack_000001a8,pvVar4,0);
  }
  return;
}


