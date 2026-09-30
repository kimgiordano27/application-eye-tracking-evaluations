/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 02cabeb0
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


void OVRPlugin__GetTrackerPose(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar3;
  OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C *pOVar4;
  long unaff_x29;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000028;
  undefined4 uStack000000000000003c;
  int iStack000000000000004c;
  int iStack000000000000005c;
  
  while( true ) {
    uVar5 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                      ((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)*param_1,
                       (long)*(int *)(unaff_x29 + -0x98));
    *(undefined4 *)(unaff_x29 + -0x9c) = uVar5;
    *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x20);
    pvVar2 = (void *)in_stack_00000028[0xf];
    NullCheck(pvVar2);
    pSVar3 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)((long)pvVar2 + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    NullCheck(pSVar3);
    fVar6 = (float)SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt(pSVar3,(long)iVar1)
    ;
    fVar8 = *(float *)(unaff_x29 + -0x20);
    NullCheck((void *)in_stack_00000028[3]);
    pSVar3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)in_stack_00000028[3];
    iVar1 = *(int *)(unaff_x29 + -0x7c);
    fVar7 = (float)il2cpp_codegen_multiply<float,float>
                             (*(float *)(unaff_x29 + -0x9c),*(float *)(unaff_x29 + -0xa0));
    fVar8 = (float)il2cpp_codegen_subtract<float,float>(1.0,fVar8);
    fVar8 = (float)il2cpp_codegen_multiply<float,float>(fVar6,fVar8);
    fVar8 = (float)il2cpp_codegen_add<float,float>(fVar7,fVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar3,(long)iVar1,fVar8);
    uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x1c),in_stack_00000018._4_4_);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar5;
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pvVar2 = (void *)in_stack_00000028[0xf];
    NullCheck(pvVar2);
    pvVar2 = *(void **)((long)pvVar2 + 0x18);
    NullCheck(pvVar2);
    if ((int)*(undefined8 *)((long)pvVar2 + 0x18) <= iVar1) break;
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
    param_1 = in_stack_00000028;
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
    pvVar2 = *(void **)(in_stack_00000028[0x11] + 0x38);
    uStack000000000000003c = *(undefined4 *)(in_stack_00000028[0x11] + 0x30);
    NullCheck(pvVar2);
    OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC
              (pvVar2,uStack000000000000003c,0);
  }
  return;
}


