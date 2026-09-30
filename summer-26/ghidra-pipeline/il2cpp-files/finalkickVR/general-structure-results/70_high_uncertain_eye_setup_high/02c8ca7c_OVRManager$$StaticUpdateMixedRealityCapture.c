/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 02c8ca7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_w4;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar3;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  float fStack0000000000000024;
  float fStack0000000000000030;
  int in_stack_00000038;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *in_stack_00000040;
  float fStack0000000000000054;
  float fStack0000000000000078;
  
  while( true ) {
    fStack0000000000000024 = *(float *)(unaff_x29 + -0x28);
    fStack0000000000000030 = fStack0000000000000024;
    NullCheck(in_stack_00000040);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
              (in_stack_00000040,(long)in_stack_00000038,fStack0000000000000024);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x20),in_stack_00000008._4_4_);
    *(undefined4 *)(unaff_x29 + -0x20) = uVar2;
    if (0x17 < *(int *)(unaff_x29 + -0x20)) break;
    *(undefined8 *)((long)in_stack_00000010 + 0x44) =
         *(undefined8 *)((long)in_stack_00000010 + 0x6c);
    *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x20);
    NullCheck(*(void **)((long)in_stack_00000010 + 0x44));
    InterfaceFuncInvoker1<Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971,int>::Invoke
              ((InterfaceFuncInvoker1<Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971,int> *)0x0,
               (ushort)*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_<Render>b__20_0__
               ,*(Il2CppClass **)((long)in_stack_00000010 + 0x44),
               (Il2CppObject *)(ulong)*(uint *)(unaff_x29 + -0x3c),in_w4);
    *(undefined8 *)((long)in_stack_00000010 + 0x24) = in_stack_00000010[1];
    *(undefined8 *)((long)in_stack_00000010 + 0x1c) = *in_stack_00000010;
    *(undefined8 *)(unaff_x29 + -0x4c) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x54) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)((long)in_stack_00000010 + 0x1c);
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x58);
    *(undefined8 *)((long)in_stack_00000010 + 0x4c) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x80);
    pSVar3 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
              (*(long *)((long)in_stack_00000010 + 0x74) + 0x10);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    in_stack_00000008._4_4_ = 1;
    uVar2 = il2cpp_codegen_add<int,int>(iVar1,1);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    fStack0000000000000078 = (float)*(undefined8 *)((long)in_stack_00000010 + 0x4c);
    NullCheck(pSVar3);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
              (pSVar3,(long)iVar1,fStack0000000000000078);
    pSVar3 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
              (*(long *)((long)in_stack_00000010 + 0x74) + 0x10);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    uVar2 = il2cpp_codegen_add<int,int>(iVar1,1);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    fStack0000000000000054 = (float)((ulong)*(undefined8 *)((long)in_stack_00000010 + 0x4c) >> 0x20)
    ;
    NullCheck(pSVar3);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
              (pSVar3,(long)iVar1,fStack0000000000000054);
    in_stack_00000040 =
         *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
          (*(long *)((long)in_stack_00000010 + 0x74) + 0x10);
    in_stack_00000038 = *(int *)(unaff_x29 + -0x1c);
    uVar2 = il2cpp_codegen_add<int,int>(in_stack_00000038,1);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
  }
  return;
}


