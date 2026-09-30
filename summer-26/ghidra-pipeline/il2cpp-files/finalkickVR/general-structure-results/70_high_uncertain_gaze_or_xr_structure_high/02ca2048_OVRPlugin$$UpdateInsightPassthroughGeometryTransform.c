/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 02ca2048
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(undefined8 param_1,MethodInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB *pPVar3;
  void *pvVar4;
  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 *pBVar5;
  long unaff_x29;
  undefined8 in_stack_00000028;
  MethodInfo *in_stack_00000030;
  int iStack00000000000000b4;
  byte bStack00000000000000c7;
  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 *in_stack_000000c8;
  
  bStack00000000000000c7 =
       BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline
                 (in_stack_000000c8,param_2);
  bStack00000000000000c7 = bStack00000000000000c7 & in_stack_00000028._4_1_;
  BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline
            (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -8),
             (bool)(bStack00000000000000c7 & 1),in_stack_00000030);
  pBVar5 = *(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -0x10);
  NullCheck(pBVar5);
  iStack00000000000000b4 =
       BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline
                 (pBVar5,in_stack_00000030);
  BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline
            (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -8),
             iStack00000000000000b4,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pBVar5 = *(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -0x10);
    NullCheck(pBVar5);
    pvVar4 = (void *)BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline
                               (pBVar5,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    if ((int)*(undefined8 *)((long)pvVar4 + 0x18) <= iVar1) break;
    pPVar3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB *)
             BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline
                       (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)
                         (unaff_x29 + -8),(MethodInfo *)0x0);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pBVar5 = *(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -0x10);
    NullCheck(pBVar5);
    pvVar4 = (void *)BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline
                               (pBVar5,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB::GetAt((ulong)pvVar4);
    NullCheck(pPVar3);
    PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB::SetAt(pPVar3,(long)iVar1);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x1c),1);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
  }
  return;
}


