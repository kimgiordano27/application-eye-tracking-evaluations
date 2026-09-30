/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$get_DeltaTimeProvider
ENTRY_POINT: 01930928
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__get_DeltaTimeProvider(void)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 in_w8;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar14;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *puVar15;
  undefined8 *unaff_x25;
  long *plVar16;
  undefined8 *unaff_x26;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x29;
  undefined4 uVar19;
  ulong uVar20;
  double dVar21;
  float unaff_s10;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double unaff_d15;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack000000000000002c;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong uStack00000000000000a0;
  ulong uStack00000000000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  undefined8 in_stack_000000d0;
  double in_stack_000000d8;
  
                    /* try { // try from 01930928 to 01a30933 has its CatchHandler @ 01930a48 */
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  FUN_0268834c(0x40a00000,0,in_w8,0x41a00000,&stack0x000000a0,0);
  FUN_026cbc44(uStack00000000000000a0 & 0xffffffff,uStack00000000000000a0._4_4_,
               uStack00000000000000a8 & 0xffffffff,uStack00000000000000a8._4_4_,*unaff_x26,0);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  FUN_0268834c(in_w8,0x40a00000,0x42c80000,0x41a00000,&stack0x00000090,0);
  uVar19 = FUN_026cf998(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,
                        in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,
                        *(undefined4 *)(unaff_x19 + 0x9c),DAT_028aa140,0x3f800000,0);
  *(undefined4 *)(unaff_x19 + 0x9c) = uVar19;
  iVar4 = FUN_0267c710(0);
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  FUN_0268834c((float)(iVar4 + -100),0,0x42c80000,0x41a00000,&stack0x00000080,0);
  dVar3 = DAT_028aab70;
  in_stack_000000d8 = unaff_d15 / DAT_028aab70;
  uVar6 = FUN_017562ec(&stack0x000000d8,*unaff_x25,0);
  uVar6 = FUN_015f5b28(uVar6,*unaff_x24,0);
  FUN_026cbc44(in_stack_00000080 & 0xffffffff,in_stack_00000080._4_4_,in_stack_00000088 & 0xffffffff
               ,in_stack_00000088._4_4_,uVar6,0);
  FUN_026d0cbc(0);
  iVar4 = FUN_0267c710(0);
  iVar5 = FUN_0267c738(0);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_0268834c(0,0x41a00000,(float)iVar4,(float)(iVar5 + -0x14),&stack0x00000070,0);
  uVar19 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar24 = *(undefined4 *)(unaff_x19 + 0xa4);
  fStack000000000000002c = -2.1474836e+09;
  if (unaff_s10 != INFINITY) {
    fStack000000000000002c = (float)unaff_w23;
  }
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  FUN_0268834c(0,0,fStack000000000000002c,(float)(*(int *)(unaff_x19 + 0x94) + 0x1e),
               &stack0x00000060,0);
  uVar26 = (undefined4)(in_stack_00000070 >> 0x20);
  uStack0000000000000004 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  uStack000000000000000c = uStack000000000000006c;
  uVar19 = FUN_026d0d68(in_stack_00000070 & 0xffffffff,in_stack_00000070 >> 0x20,
                        in_stack_00000078 & 0xffffffff,in_stack_00000078._4_4_,uVar19,uVar24,0);
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar19;
  *(undefined4 *)(unaff_x19 + 0xa4) = uVar26;
  FUN_026d3158(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24),
               *(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),0);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_0268834c(0x40a00000,0,0x43480000,0x41a00000,&stack0x00000050,0);
  FUN_026cbc44(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,in_stack_00000058 & 0xffffffff
               ,in_stack_00000058._4_4_,*(undefined8 *)StringLiteral_14412,0);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0268834c(0,0,fStack000000000000002c,0x42200000,&stack0x00000040,0);
  uVar6 = FUN_026e77b8(*unaff_x21,0);
  FUN_026cc304(in_stack_00000040 & 0xffffffff,in_stack_00000040._4_4_,in_stack_00000048 & 0xffffffff
               ,in_stack_00000048._4_4_,*unaff_x29,uVar6,0);
  lVar17 = *(long *)(unaff_x19 + 0x78);
  *(undefined4 *)(unaff_x19 + 0x94) = 0x19;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
    uVar18 = 0;
    uVar13 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
    puVar15 = (undefined8 *)(lVar17 + 0x38);
    plVar16 = (long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    uVar12 = 0;
    uVar10 = 0;
    do {
      if (uVar13 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(puVar15 + -1);
      dVar22 = (double)puVar15[-3];
      dVar21 = (double)puVar15[-2];
      uVar6 = *puVar15;
      uVar2 = uVar1 >> 8 & 0xff;
      if (uVar12 == uVar1 >> 0x10) {
        if (uVar10 != uVar2) {
          iVar4 = *(int *)(unaff_x19 + 0x94) + 0x15;
          goto LAB_01930d18;
        }
      }
      else {
        uVar27 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar26 = *(undefined4 *)(unaff_x19 + 0x24);
        uVar24 = *(undefined4 *)(unaff_x19 + 0x28);
        uVar19 = *(undefined4 *)(unaff_x19 + 0x2c);
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026d3158(uVar27,uVar26,uVar24,uVar19,0);
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,0x41a00000,
                     &stack0x000000b0,0);
        in_stack_000000d0._4_4_ = (uVar1 >> 0x10) + 1;
        uVar9 = FUN_0178e9b8((long)&stack0x000000d0 + 4,0);
        uVar9 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar9,0);
        FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                     in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar9,0);
        uStack00000000000000a0 = 0;
        uStack00000000000000a8 = 0;
        FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),fStack000000000000002c,0x42200000,
                     &stack0x000000a0,0);
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_026e77b8(*unaff_x21,0);
        FUN_026cc304(uStack00000000000000a0 & 0xffffffff,uStack00000000000000a0._4_4_,
                     uStack00000000000000a8 & 0xffffffff,uStack00000000000000a8._4_4_,
                     *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar9,0);
        iVar4 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
        *(int *)(unaff_x19 + 0x94) = iVar4;
      }
      uVar12 = uVar1 & 0xff;
      if (uVar12 == 3) {
        lVar7 = *unaff_x22;
        uVar20 = *(ulong *)(unaff_x19 + 0x58);
        uVar13 = *(ulong *)(unaff_x19 + 0x50);
      }
      else if (uVar12 == 2) {
        lVar7 = *unaff_x22;
        uVar20 = *(ulong *)(unaff_x19 + 0x48);
        uVar13 = *(ulong *)(unaff_x19 + 0x40);
      }
      else if (uVar12 == 0) {
        lVar7 = *unaff_x22;
        uVar20 = *(ulong *)(unaff_x19 + 0x38);
        uVar13 = *(ulong *)(unaff_x19 + 0x30);
      }
      else {
        lVar7 = *unaff_x22;
        uVar20 = *(ulong *)(unaff_x19 + 0x68);
        uVar13 = *(ulong *)(unaff_x19 + 0x60);
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d3158(uVar13,uVar13 >> 0x20,uVar20 & 0xffffffff,uVar20 >> 0x20,0);
      dVar23 = *(double *)(unaff_x19 + 0x80);
      iVar4 = FUN_0267c710(0);
      dVar25 = *(double *)(unaff_x19 + 0x80);
      dVar23 = (((dVar22 - dVar23) / unaff_d15) * (double)(iVar4 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar12 = 0x80000000;
      if (dVar23 != INFINITY) {
        uVar12 = (int)dVar23;
      }
      iVar4 = FUN_0267c710(0);
      dVar23 = (((dVar21 - dVar25) / unaff_d15) * (double)(iVar4 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar10 = 0x80000000;
      if (dVar23 != INFINITY) {
        uVar10 = (int)dVar23;
      }
      dVar21 = dVar21 - dVar22;
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        puVar8 = &stack0x000000c0;
        in_stack_000000c0 = dVar21 / dVar3;
        puVar11 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
        puVar14 = (undefined8 *)StringLiteral_7259;
      }
      else {
        in_stack_000000c8 = (dVar21 / unaff_d15) * 100.0;
        puVar8 = &stack0x000000c8;
        puVar11 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
        puVar14 = (undefined8 *)PTR_DAT_033f6be8;
      }
      uVar9 = FUN_017562ec(puVar8,*puVar11,0);
      uVar6 = FUN_0160073c(uVar6,*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                           ,uVar9,*puVar14,0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c((float)(int)uVar12,(float)*(int *)(unaff_x19 + 0x94),
                   (float)(int)(uVar10 + ~uVar12),0x41a00000,&stack0x000000b0,0);
      plVar16 = (long *)
                Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_026e77b8(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                           ,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar6,uVar9,0);
      uVar13 = (ulong)*(uint *)(lVar17 + 0x18);
      uVar18 = uVar18 + 1;
      puVar15 = puVar15 + 4;
      unaff_x21 = (undefined8 *)PTR_DAT_033f28e8;
      uVar12 = uVar1 >> 0x10;
      uVar10 = uVar2;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar17 + 0x18));
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d1ab8(0);
  return;
}


