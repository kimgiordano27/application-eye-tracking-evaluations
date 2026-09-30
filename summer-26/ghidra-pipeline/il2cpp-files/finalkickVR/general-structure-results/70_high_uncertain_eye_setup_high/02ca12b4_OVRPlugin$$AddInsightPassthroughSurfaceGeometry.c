/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 02ca12b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddInsightPassthroughSurfaceGeometry
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 in_w8;
  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 *pBVar5;
  long lVar6;
  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB *pPVar7;
  ulong uVar8;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  MethodInfo *pMStack0000000000000080;
  ulong *in_stack_00000088;
  undefined8 *in_stack_00000090;
  int iStack00000000000000f4;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  
  BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8::s_Il2CppMethodInitialized =
       in_w8;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x14);
  pMStack0000000000000080 = (MethodInfo *)0x0;
  BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline
            (*(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1 **)(unaff_x29 + -8),
             *(int *)(unaff_x29 + -0x34),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x40));
  uVar3 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline
                    (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)
                      (unaff_x29 + -0x40),pMStack0000000000000080);
  *(undefined8 *)(unaff_x29 + -0x48) = uVar3;
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xe0) = *(undefined8 *)(unaff_x29 + -0x48);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0xe0),*(void **)(unaff_x29 + -0x48));
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  while (*(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0x2c),
        *(int *)(unaff_x29 + -0x7c) < 2) {
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50);
    *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x2c);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::SetAt
              (*(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 **)(unaff_x29 + -0x50),
               (long)*(int *)(unaff_x29 + -0x54),0xffffffffffffffff);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
    *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x2c);
    NullCheck(*(void **)(unaff_x29 + -0x60));
    UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::SetAt
              (*(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 **)(unaff_x29 + -0x60),
               (long)*(int *)(unaff_x29 + -100),0xffffffffffffffff);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x60);
    *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x2c);
    NullCheck(*(void **)(unaff_x29 + -0x70));
    UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::SetAt
              (*(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 **)(unaff_x29 + -0x70),
               (long)*(int *)(unaff_x29 + -0x74),0xffffffffffffffff);
    *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x2c);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x78),1);
    *(undefined4 *)(unaff_x29 + -0x2c) = uVar2;
  }
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x88));
  bVar1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline
                    (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)
                      (unaff_x29 + -0x88),(MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x89) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
    uVar2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline((MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0xa4) = uVar2;
    *(undefined4 *)(unaff_x29 + -0xa0) = param_2;
    *(undefined4 *)(unaff_x29 + -0x9c) = param_3;
    *(ulong *)(unaff_x29 + -0x98) = in_stack_00000088[0x34];
    *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x9c);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0xb0));
    uVar2 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline
                      (*(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)
                        (unaff_x29 + -0xb0),(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0xb4) = uVar2;
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0x90);
    uVar11 = *(undefined4 *)(unaff_x29 + -0xd4);
    uVar12 = *(undefined4 *)(unaff_x29 + -0xd0);
    uVar2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (*(undefined4 *)(unaff_x29 + -0xd8),0);
    *(undefined4 *)(unaff_x29 + -0xcc) = uVar2;
    *(undefined4 *)(unaff_x29 + -200) = uVar11;
    *(undefined4 *)(unaff_x29 + -0xc4) = uVar12;
    *(ulong *)(unaff_x29 + -0xc0) = in_stack_00000088[0x2f];
    *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0xc4);
    uVar2 = *(undefined4 *)(unaff_x29 + -0xb8);
    Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642
              (*(ulong *)(unaff_x29 + -0xc0) & 0xffffffff,0);
    memcpy(&stack0x00000498,&stack0x00000458,0x40);
    memcpy((void *)(*(long *)(unaff_x29 + -8) + 0x68),&stack0x00000498,0x40);
    pBVar5 = *(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -0x10);
    NullCheck(pBVar5);
    BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline
              (pBVar5,(MethodInfo *)0x0);
    *(ulong *)((long)in_stack_00000088 + 0xbc) = in_stack_00000088[0x14];
    *(ulong *)((long)in_stack_00000088 + 0xb4) = in_stack_00000088[0x13];
    lVar6 = *(long *)(unaff_x29 + -8);
    uVar3 = *(undefined8 *)((long)in_stack_00000088 + 0xb4);
    *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)((long)in_stack_00000088 + 0xbc);
    *(undefined8 *)(lVar6 + 0xa8) = uVar3;
    *(undefined8 *)(lVar6 + 0xbc) = in_stack_00000418;
    *(undefined8 *)(lVar6 + 0xb4) = in_stack_00000410;
    lVar6 = *(long *)(unaff_x29 + -8);
    uVar3 = *(undefined8 *)(lVar6 + 0xa8);
    *(undefined8 *)((long)in_stack_00000088 + 0x7c) = *(undefined8 *)(lVar6 + 0xb0);
    *(undefined8 *)((long)in_stack_00000088 + 0x74) = uVar3;
    uVar10 = *(undefined8 *)(lVar6 + 0xbc);
    uVar3 = *(undefined8 *)(lVar6 + 0xb4);
    lVar6 = *(long *)(unaff_x29 + -8);
    uVar9 = *(undefined8 *)((long)in_stack_00000088 + 0x74);
    *(undefined8 *)(lVar6 + 0xcc) = *(undefined8 *)((long)in_stack_00000088 + 0x7c);
    *(undefined8 *)(lVar6 + 0xc4) = uVar9;
    *(undefined8 *)(lVar6 + 0xd8) = uVar10;
    *(undefined8 *)(lVar6 + 0xd0) = uVar3;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar3,0);
    if ((bVar1 & 1) != 0) {
      memcpy(&stack0x00000394,(void *)(*(long *)(unaff_x29 + -8) + 0x68),0x40);
      pvVar4 = *(void **)(unaff_x29 + -0x20);
      NullCheck(pvVar4);
      Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(pvVar4);
      Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642
                (*in_stack_00000088 & 0xffffffff,(int)(*in_stack_00000088 >> 0x20),uVar2,0);
      memcpy(&stack0x0000032c,&stack0x000002ec,0x40);
      memcpy(&stack0x00000220,&stack0x00000394,0x40);
      memcpy(&stack0x000001e0,&stack0x0000032c,0x40);
      Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
                (&stack0x00000220,&stack0x000001e0,0);
      memcpy(&stack0x000002a0,&stack0x00000260,0x40);
      memcpy((void *)(*(long *)(unaff_x29 + -8) + 0x68),&stack0x000002a0,0x40);
      lVar6 = *(long *)(unaff_x29 + -8);
      pvVar4 = *(void **)(unaff_x29 + -0x20);
      uVar8 = *(ulong *)(*(long *)(unaff_x29 + -8) + 0xa8);
      uVar2 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0xb0);
      NullCheck(pvVar4);
      Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44
                (uVar8 & 0xffffffff,pvVar4,0);
      *(undefined8 *)(lVar6 + 0xc4) = *(undefined8 *)((long)in_stack_00000090 + 0x7c);
      *(undefined4 *)(lVar6 + 0xcc) = uVar2;
      lVar6 = *(long *)(unaff_x29 + -8);
      pvVar4 = *(void **)(unaff_x29 + -0x20);
      NullCheck(pvVar4);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar4,0);
      in_stack_00000090[0xb] = in_stack_00000090[9];
      in_stack_00000090[10] = in_stack_00000090[8];
      uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xb4);
      in_stack_00000090[5] = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xbc);
      in_stack_00000090[4] = uVar3;
      Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                (in_stack_00000090[10] & 0xffffffff,0);
      in_stack_00000090[3] = in_stack_00000090[1];
      in_stack_00000090[2] = *in_stack_00000090;
      uVar3 = in_stack_00000090[2];
      *(undefined8 *)(lVar6 + 0xd8) = in_stack_00000090[3];
      *(undefined8 *)(lVar6 + 0xd0) = uVar3;
    }
    *(undefined4 *)(unaff_x29 + -0x30) = 0;
    while (*(int *)(unaff_x29 + -0x30) < 0x46) {
      pPVar7 = *(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB **)
                (*(long *)(unaff_x29 + -8) + 0x18);
      iStack00000000000000f4 = *(int *)(unaff_x29 + -0x30);
      pBVar5 = *(BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456 **)(unaff_x29 + -0x10);
      NullCheck(pBVar5);
      pvVar4 = (void *)BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline
                                 (pBVar5,(MethodInfo *)0x0);
      NullCheck(pvVar4);
      PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB::GetAt((ulong)pvVar4);
      NullCheck(pPVar7);
      PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB::SetAt
                (pPVar7,(long)iStack00000000000000f4);
      uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x30),1);
      *(undefined4 *)(unaff_x29 + -0x30) = uVar2;
    }
  }
  return;
}


