/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 02cabf48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(void)

{
  int iVar1;
  undefined4 uVar2;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *this;
  void *pvVar3;
  OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C *pOVar4;
  long unaff_x29;
  float fVar5;
  undefined8 in_stack_00000000;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000028;
  undefined4 uStack000000000000003c;
  int iStack000000000000004c;
  int iStack000000000000005c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    fVar5 = (float)il2cpp_codegen_subtract<float,float>(1.0,fStack0000000000000090);
    fVar5 = (float)il2cpp_codegen_multiply<float,float>(fStack0000000000000094,fVar5);
    fVar5 = (float)il2cpp_codegen_add<float,float>(in_stack_00000000._4_4_,fVar5);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
              (in_stack_00000008,in_stack_00000010,fVar5);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x1c),in_stack_00000018._4_4_);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pvVar3 = (void *)in_stack_00000028[0xf];
    NullCheck(pvVar3);
    pvVar3 = *(void **)((long)pvVar3 + 0x18);
    NullCheck(pvVar3);
    if ((int)*(undefined8 *)((long)pvVar3 + 0x18) <= iVar1) break;
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(in_stack_00000028[0x11] + 0x30);
    in_stack_00000018._4_4_ = 1;
    iVar1 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x68),1);
    *(float *)(unaff_x29 + -0x20) = (float)iVar1 / 100.0;
    in_stack_00000028[4] = *(undefined8 *)(in_stack_00000028[0x11] + 0x40);
    NullCheck((void *)in_stack_00000028[4]);
    in_stack_00000028[3] = *(undefined8 *)(in_stack_00000028[4] + 0x18);
    *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0x1c);
    in_stack_00000028[1] = *(undefined8 *)(in_stack_00000028[0x11] + 0x40);
    NullCheck((void *)in_stack_00000028[1]);
    *in_stack_00000028 = *(undefined8 *)(in_stack_00000028[1] + 0x18);
    *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x1c);
    NullCheck((void *)*in_stack_00000028);
    *(undefined4 *)(unaff_x29 + -0x98) = *(undefined4 *)(unaff_x29 + -0x94);
    uVar2 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                      ((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)*in_stack_00000028,
                       (long)*(int *)(unaff_x29 + -0x98));
    *(undefined4 *)(unaff_x29 + -0x9c) = uVar2;
    *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x20);
    pvVar3 = (void *)in_stack_00000028[0xf];
    NullCheck(pvVar3);
    this = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)((long)pvVar3 + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    NullCheck(this);
    fStack0000000000000094 =
         (float)SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt(this,(long)iVar1);
    fStack0000000000000090 = *(float *)(unaff_x29 + -0x20);
    NullCheck((void *)in_stack_00000028[3]);
    in_stack_00000008 =
         (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)in_stack_00000028[3];
    in_stack_00000010 = (ulong)*(int *)(unaff_x29 + -0x7c);
    in_stack_00000000._4_4_ =
         (float)il2cpp_codegen_multiply<float,float>
                          (*(float *)(unaff_x29 + -0x9c),*(float *)(unaff_x29 + -0xa0));
  }
  OVRLipSyncContextTextureFlip_SetVisemeToTexture_mBB7FAE6CCC1E95D60B716B4E34FB0BE5F30DF591
            (in_stack_00000028[0x11],0);
  iStack000000000000005c = *(int *)(in_stack_00000028[0x11] + 0x30);
  pOVar4 = *(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
            (in_stack_00000028[0x11] + 0x38);
  NullCheck(pOVar4);
  iStack000000000000004c =
       OVRLipSyncContextBase_get_Smoothing_mBFAC8B1ADE67B5A7FC8161E148A80E2326C8863E_inline
                 (pOVar4,(MethodInfo *)0x0);
  if (iStack000000000000005c != iStack000000000000004c) {
    pvVar3 = *(void **)(in_stack_00000028[0x11] + 0x38);
    uStack000000000000003c = *(undefined4 *)(in_stack_00000028[0x11] + 0x30);
    NullCheck(pvVar3);
    OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC
              (pvVar3,uStack000000000000003c,0);
  }
  return;
}


