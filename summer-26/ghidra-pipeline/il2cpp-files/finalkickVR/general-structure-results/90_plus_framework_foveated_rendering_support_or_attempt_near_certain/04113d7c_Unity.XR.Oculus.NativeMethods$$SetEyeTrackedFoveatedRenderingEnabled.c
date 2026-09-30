/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 04113d7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 155
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_21;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76 *pCVar7;
  undefined4 in_w8;
  long lVar8;
  undefined8 uVar9;
  HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B *pHVar10;
  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787 *this;
  undefined8 uVar11;
  RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8 *this_00;
  void *pvVar12;
  long unaff_x29;
  undefined4 uVar13;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  byte bStack000000000000018f;
  undefined4 uStack0000000000000194;
  undefined4 uStack000000000000019c;
  float fStack00000000000001a0;
  
  *(undefined4 *)(unaff_x29 + -0xa0) = in_w8;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined4 *)(unaff_x29 + -0x18) = *(undefined4 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2d4);
  *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2dc);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined4 *)(unaff_x29 + -0xd8) = *(undefined4 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xe0);
  *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0xd8);
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2c8);
  NullCheck(*(void **)(unaff_x29 + -0xe8));
  uVar13 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697
                     (*(undefined8 *)(unaff_x29 + -0xe8),in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0xec) = uVar13;
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2c8);
  NullCheck(*(void **)(unaff_x29 + -0xf8));
  uVar6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                    (*(undefined8 *)(unaff_x29 + -0xf8),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar6;
  NullCheck(*(void **)(unaff_x29 + -0x100));
  uStack0000000000000194 =
       Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07
                 (*(undefined8 *)(unaff_x29 + -0x100),in_stack_00000040);
  fStack00000000000001a0 = (float)*in_stack_00000048;
  uStack000000000000019c = param_3;
  uVar13 = il2cpp_codegen_multiply<float,float>
                     (*(float *)(unaff_x29 + -0xec),fStack00000000000001a0);
  *(undefined4 *)(unaff_x29 + -0x44) = uVar13;
  BurstPhysicsUtils_GetSphereOverlapParameters_m269F44F0AFA23619414BB738AB5190FFEABB2EF3
            (in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,
             in_stack_00000038,in_stack_00000040);
  bStack000000000000018f = *(byte *)(*(long *)(unaff_x29 + -8) + 0x2f0) & 1;
  if ((bStack000000000000018f != 0) || (*(float *)(unaff_x29 + -0x54) < 0.001)) {
    lVar8 = *(long *)(unaff_x29 + -8);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x40);
    uVar13 = *(undefined4 *)(unaff_x29 + -0x38);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x44);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2e0);
    uVar4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D
                      (*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x294));
    uStack0000000000000140 = (undefined4)uVar6;
    uStack0000000000000144 = (undefined4)((ulong)uVar6 >> 0x20);
    uVar13 = PhysicsScene_OverlapSphere_m0E853FB04ECE662CFA9FF522D8A4E9CE04903D01
                       (uStack0000000000000140,uStack0000000000000144,uVar13,uVar1,lVar8 + 0x2d0,
                        uVar9,uVar4,*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x298),0);
    *(undefined4 *)(unaff_x29 + -0x5c) = uVar13;
    *(undefined4 *)(unaff_x29 + -0x60) = 0;
    while (*(int *)(unaff_x29 + -0x60) < *(int *)(unaff_x29 + -0x5c)) {
      pHVar10 = *(HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B **)
                 (*(long *)(unaff_x29 + -8) + 0x2a8);
      this = *(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787 **)
              (*(long *)(unaff_x29 + -8) + 0x2e0);
      iVar2 = *(int *)(unaff_x29 + -0x60);
      NullCheck(this);
      pCVar7 = (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76 *)
               ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787::GetAt(this,(long)iVar2);
      NullCheck(pHVar10);
      HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37
                (pHVar10,pCVar7,(MethodInfo *)*in_stack_00000050);
      uVar13 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x60),1);
      *(undefined4 *)(unaff_x29 + -0x60) = uVar13;
    }
  }
  else {
    lVar8 = *(long *)(unaff_x29 + -8);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x30);
    uVar13 = *(undefined4 *)(unaff_x29 + -0x28);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x44);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar4 = *(undefined4 *)(unaff_x29 + -0x48);
    uVar11 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2e8);
    uVar3 = *(undefined4 *)(unaff_x29 + -0x58);
    uVar5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D
                      (*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x294));
    uStack00000000000000b8 = (undefined4)uVar6;
    uStack00000000000000bc = (undefined4)((ulong)uVar6 >> 0x20);
    uStack00000000000000a8 = (undefined4)uVar9;
    uStack00000000000000ac = (undefined4)((ulong)uVar9 >> 0x20);
    uVar13 = PhysicsScene_SphereCast_m2C89211A7462980013209F0B22B3D96B0963AF9F
                       (uStack00000000000000b8,uStack00000000000000bc,uVar13,uVar1,
                        uStack00000000000000a8,uStack00000000000000ac,uVar4,uVar3,lVar8 + 0x2d0,
                        uVar11,uVar5,*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x298),0);
    *(undefined4 *)(unaff_x29 + -100) = uVar13;
    *(undefined4 *)(unaff_x29 + -0x68) = 0;
    while (*(int *)(unaff_x29 + -0x68) < *(int *)(unaff_x29 + -100)) {
      pHVar10 = *(HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B **)
                 (*(long *)(unaff_x29 + -8) + 0x2a8);
      this_00 = *(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8 **)
                 (*(long *)(unaff_x29 + -8) + 0x2e8);
      iVar2 = *(int *)(unaff_x29 + -0x68);
      NullCheck(this_00);
      uVar6 = RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8::GetAddressAt
                        (this_00,(long)iVar2);
      pCVar7 = (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76 *)
               RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(uVar6,0);
      NullCheck(pHVar10);
      HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37
                (pHVar10,pCVar7,(MethodInfo *)*in_stack_00000050);
      uVar13 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x68),1);
      *(undefined4 *)(unaff_x29 + -0x68) = uVar13;
    }
  }
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x2b0);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2a8);
  NullCheck(pvVar12);
  TriggerContactMonitor_UpdateStayedColliders_m29B953052CB4C4E4E85D1CA598066F4B9D862FD4
            (pvVar12,uVar6,0);
  uVar13 = *(undefined4 *)(unaff_x29 + -0x18);
  lVar8 = *(long *)(unaff_x29 + -8);
  *(undefined8 *)(lVar8 + 0x2d4) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined4 *)(lVar8 + 0x2dc) = uVar13;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2f0) = 0;
  return;
}


