/*
FUNCTION_NAME: Oculus.Interaction.Input.SyntheticControllerInHand$$.ctor
ENTRY_POINT: 019307e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 140
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Oculus_Interaction_Input_SyntheticControllerInHand___ctor(void)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  undefined4 uVar27;
  ulong uVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  int iStack00000000000000d4;
  double in_stack_000000d8;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_get_Item__
                    );
  thunk_FUN_00d48444(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x103) = 1;
  in_stack_000000d8 = 0.0;
  iStack00000000000000d4 = 0;
  in_stack_000000c0 = 0.0;
  in_stack_000000c8 = 0.0;
  lVar14 = FUN_026cc3f8(0);
  if (lVar14 != 0) {
    iVar12 = FUN_026cc440(lVar14,0);
    if (iVar12 == 8) {
      FUN_019305c8();
    }
    puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__;
    puVar8 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      uVar22 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar10 = 
      Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_get_Item__;
      puVar9 = 
      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
      ;
      puVar7 = Method_System_Collections_ObjectModel_Collection<JsonProperty>_GetEnumerator__;
      puVar6 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
      puVar5 = System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
      puVar16 = (undefined8 *)PTR_DAT_033f28e8;
                    /* try { // try from 01930878 to 01a30917 has its CatchHandler @ 01930878
                       catch() { ... } // from try @ 01930878 with catch @ 01930878
                       catch() { ... } // from try @ 0193098c with catch @ 01930878
                       catch() { ... } // from try @ 01930a3c with catch @ 01930878
                       catch() { ... } // from try @ 01930a90 with catch @ 01930878
                       catch() { ... } // from try @ 01930af8 with catch @ 01930878 */
      FUN_026cb86c(uVar22,0);
      iVar12 = FUN_0267c710(0);
      fVar30 = (float)iVar12 / *(float *)(unaff_x19 + 0x9c);
      dVar37 = *(double *)(unaff_x19 + 0x88) - *(double *)(unaff_x19 + 0x80);
      iVar12 = FUN_0267c710(0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c(0,0,(float)iVar12,0x41a00000,&stack0x000000b0,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_026e77b8(*(undefined8 *)puVar9,0);
      FUN_026d084c(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,*(undefined8 *)puVar6,
                   uVar22,0);
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      FUN_0268834c(0x40a00000,0,0x42480000,0x41a00000,&stack0x000000a0,0);
      FUN_026cbc44(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                   in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,*(undefined8 *)puVar7,0);
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      FUN_0268834c(0x42480000,0x40a00000,0x42c80000,0x41a00000,&stack0x00000090,0);
      uVar27 = FUN_026cf998(in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,
                            in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,
                            *(undefined4 *)(unaff_x19 + 0x9c),DAT_028aa140,0x3f800000,0);
      *(undefined4 *)(unaff_x19 + 0x9c) = uVar27;
      iVar12 = FUN_0267c710(0);
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      FUN_0268834c((float)(iVar12 + -100),0,0x42c80000,0x41a00000,&stack0x00000080,0);
      dVar4 = DAT_028aab70;
      in_stack_000000d8 = dVar37 / DAT_028aab70;
      uVar22 = FUN_017562ec(&stack0x000000d8,*(undefined8 *)puVar5,0);
      uVar22 = FUN_015f5b28(uVar22,*(undefined8 *)puVar10,0);
      FUN_026cbc44(in_stack_00000080 & 0xffffffff,in_stack_00000080._4_4_,
                   in_stack_00000088 & 0xffffffff,in_stack_00000088._4_4_,uVar22,0);
      FUN_026d0cbc(0);
      iVar12 = FUN_0267c710(0);
      iVar13 = FUN_0267c738(0);
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_0268834c(0,0x41a00000,(float)iVar12,(float)(iVar13 + -0x14),&stack0x00000070,0);
      uVar27 = *(undefined4 *)(unaff_x19 + 0xa0);
      uVar33 = *(undefined4 *)(unaff_x19 + 0xa4);
      fVar3 = -2.1474836e+09;
      if (fVar30 != INFINITY) {
        fVar3 = (float)(int)fVar30;
      }
      uStack0000000000000060 = 0;
      uStack0000000000000064 = 0;
      uStack0000000000000068 = 0;
      uStack000000000000006c = 0;
      FUN_0268834c(0,0,fVar3,(float)(*(int *)(unaff_x19 + 0x94) + 0x1e),&stack0x00000060,0);
      uVar35 = (undefined4)(in_stack_00000070 >> 0x20);
      uVar27 = FUN_026d0d68(in_stack_00000070 & 0xffffffff,in_stack_00000070 >> 0x20,
                            in_stack_00000078 & 0xffffffff,in_stack_00000078._4_4_,uVar27,uVar33,0);
      *(undefined4 *)(unaff_x19 + 0xa0) = uVar27;
      *(undefined4 *)(unaff_x19 + 0xa4) = uVar35;
      FUN_026d3158(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24),
                   *(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),0);
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      FUN_0268834c(0x40a00000,0,0x43480000,0x41a00000,&stack0x00000050,0);
      FUN_026cbc44(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                   *(undefined8 *)StringLiteral_14412,0);
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      FUN_0268834c(0,0,fVar3,0x42200000,&stack0x00000040,0);
      uVar22 = FUN_026e77b8(*puVar16,0);
      FUN_026cc304(in_stack_00000040 & 0xffffffff,in_stack_00000040._4_4_,
                   in_stack_00000048 & 0xffffffff,in_stack_00000048._4_4_,*(undefined8 *)puVar6,
                   uVar22,0);
      lVar14 = *(long *)(unaff_x19 + 0x78);
      *(undefined4 *)(unaff_x19 + 0x94) = 0x19;
      if (lVar14 == 0) goto LAB_01930f8c;
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar26 = 0;
        uVar21 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        puVar24 = (undefined8 *)(lVar14 + 0x38);
        plVar25 = (long *)
                  Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
        uVar20 = 0;
        uVar18 = 0;
        do {
          if (uVar21 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(uint *)(puVar24 + -1);
          dVar31 = (double)puVar24[-3];
          dVar29 = (double)puVar24[-2];
          uVar22 = *puVar24;
          uVar2 = uVar1 >> 8 & 0xff;
          if (uVar20 == uVar1 >> 0x10) {
            if (uVar18 != uVar2) {
              iVar12 = *(int *)(unaff_x19 + 0x94) + 0x15;
              goto LAB_01930d18;
            }
          }
          else {
            uVar36 = *(undefined4 *)(unaff_x19 + 0x20);
            uVar35 = *(undefined4 *)(unaff_x19 + 0x24);
            uVar33 = *(undefined4 *)(unaff_x19 + 0x28);
            uVar27 = *(undefined4 *)(unaff_x19 + 0x2c);
            *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
            if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026d3158(uVar36,uVar35,uVar33,uVar27,0);
            in_stack_000000b0 = 0;
            in_stack_000000b8 = 0;
            FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,0x41a00000,
                         &stack0x000000b0,0);
            iStack00000000000000d4 = (uVar1 >> 0x10) + 1;
            uVar17 = FUN_0178e9b8(&stack0x000000d4,0);
            uVar17 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar17,0);
            FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                         in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar17,0);
            in_stack_000000a0 = 0;
            in_stack_000000a8 = 0;
            FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),fVar3,0x42200000,&stack0x000000a0
                         ,0);
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_026e77b8(*puVar16,0);
            FUN_026cc304(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                         in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,
                         *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar17,0);
            iVar12 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
            *(int *)(unaff_x19 + 0x94) = iVar12;
          }
          uVar20 = uVar1 & 0xff;
          if (uVar20 == 3) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(unaff_x19 + 0x58);
            uVar21 = *(ulong *)(unaff_x19 + 0x50);
          }
          else if (uVar20 == 2) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(unaff_x19 + 0x48);
            uVar21 = *(ulong *)(unaff_x19 + 0x40);
          }
          else if (uVar20 == 0) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(unaff_x19 + 0x38);
            uVar21 = *(ulong *)(unaff_x19 + 0x30);
          }
          else {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(unaff_x19 + 0x68);
            uVar21 = *(ulong *)(unaff_x19 + 0x60);
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026d3158(uVar21,uVar21 >> 0x20,uVar28 & 0xffffffff,uVar28 >> 0x20,0);
          dVar32 = *(double *)(unaff_x19 + 0x80);
          iVar12 = FUN_0267c710(0);
          dVar34 = *(double *)(unaff_x19 + 0x80);
          dVar32 = (((dVar31 - dVar32) / dVar37) * (double)(iVar12 + -10)) /
                   (double)*(float *)(unaff_x19 + 0x9c);
          uVar20 = 0x80000000;
          if (dVar32 != INFINITY) {
            uVar20 = (int)dVar32;
          }
          iVar12 = FUN_0267c710(0);
          dVar32 = (((dVar29 - dVar34) / dVar37) * (double)(iVar12 + -10)) /
                   (double)*(float *)(unaff_x19 + 0x9c);
          uVar18 = 0x80000000;
          if (dVar32 != INFINITY) {
            uVar18 = (int)dVar32;
          }
          dVar29 = dVar29 - dVar31;
          if (*(char *)(unaff_x19 + 0x70) == '\0') {
            puVar16 = &stack0x000000c0;
            in_stack_000000c0 = dVar29 / dVar4;
            puVar19 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
            puVar23 = (undefined8 *)StringLiteral_7259;
          }
          else {
            in_stack_000000c8 = (dVar29 / dVar37) * 100.0;
            puVar16 = &stack0x000000c8;
            puVar19 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
            puVar23 = (undefined8 *)PTR_DAT_033f6be8;
          }
          uVar17 = FUN_017562ec(puVar16,*puVar19,0);
          uVar22 = FUN_0160073c(uVar22,*(undefined8 *)
                                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                                ,uVar17,*puVar23,0);
          in_stack_000000b0 = 0;
          in_stack_000000b8 = 0;
          FUN_0268834c((float)(int)uVar20,(float)*(int *)(unaff_x19 + 0x94),
                       (float)(int)(uVar18 + ~uVar20),0x41a00000,&stack0x000000b0,0);
          plVar25 = (long *)
                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_026e77b8(*(undefined8 *)
                                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                                ,0);
          if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar11);
          }
          FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                       in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar22,uVar17,0);
          uVar21 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar26 = uVar26 + 1;
          puVar24 = puVar24 + 4;
          puVar16 = (undefined8 *)PTR_DAT_033f28e8;
          uVar20 = uVar1 >> 0x10;
          uVar18 = uVar2;
        } while ((long)uVar26 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d1ab8(0);
    }
    return;
  }
LAB_01930f8c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


