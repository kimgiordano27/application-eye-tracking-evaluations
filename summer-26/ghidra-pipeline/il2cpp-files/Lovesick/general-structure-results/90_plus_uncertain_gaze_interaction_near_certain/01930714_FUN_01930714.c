/*
FUNCTION_NAME: FUN_01930714
ENTRY_POINT: 01930714
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


void FUN_01930714(long param_1)

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
  double *pdVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
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
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  int local_ac;
  double local_a8;
  
                    /* try { // try from 0193072c to 01a3073b has its CatchHandler @ 0193073c */
                    /* catch() { ... } // from try @ 019306c4 with catch @ 0193073c
                       catch() { ... } // from try @ 0193072c with catch @ 0193073c */
                    /* try { // try from 01930740 to 01a30743 has its CatchHandler @ 0193074c */
                    /* try { // try from 01930744 to 01a3074f has its CatchHandler @ 01930150 */
                    /* catch() { ... } // from try @ 01930740 with catch @ 0193074c */
  if ((DAT_0377a103 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_7259);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_Collection<JsonProperty>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f28e8);
    thunk_FUN_00d48444(StringLiteral_14412);
    thunk_FUN_00d48444(StringLiteral_6209);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6be8);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_get_Item__
                      );
    thunk_FUN_00d48444(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
    DAT_0377a103 = 1;
  }
  local_a8 = 0.0;
  local_ac = 0;
  local_c0 = 0.0;
  local_b8 = 0.0;
  lVar14 = FUN_026cc3f8(0);
  if (lVar14 != 0) {
    iVar12 = FUN_026cc440(lVar14,0);
    if (iVar12 == 8) {
      FUN_019305c8(param_1);
    }
    puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__;
    puVar8 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar22 = *(undefined8 *)(param_1 + 0x18);
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
      puVar19 = (undefined8 *)PTR_DAT_033f28e8;
      FUN_026cb86c(uVar22,0);
      iVar12 = FUN_0267c710(0);
      fVar30 = (float)iVar12 / *(float *)(param_1 + 0x9c);
      dVar37 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x80);
      iVar12 = FUN_0267c710(0);
      local_d0 = 0;
      local_c8 = 0;
      FUN_0268834c(0,0,(float)iVar12,0x41a00000,&local_d0,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_026e77b8(*(undefined8 *)puVar9,0);
      FUN_026d084c(local_d0 & 0xffffffff,local_d0._4_4_,local_c8 & 0xffffffff,local_c8._4_4_,
                   *(undefined8 *)puVar6,uVar22,0);
      local_e0 = 0;
      local_d8 = 0;
      FUN_0268834c(0x40a00000,0,0x42480000,0x41a00000,&local_e0,0);
      FUN_026cbc44(local_e0 & 0xffffffff,local_e0._4_4_,local_d8 & 0xffffffff,local_d8._4_4_,
                   *(undefined8 *)puVar7,0);
      local_f0 = 0;
      local_e8 = 0;
      FUN_0268834c(0x42480000,0x40a00000,0x42c80000,0x41a00000,&local_f0,0);
      uVar27 = FUN_026cf998(local_f0 & 0xffffffff,local_f0._4_4_,local_e8 & 0xffffffff,
                            local_e8._4_4_,*(undefined4 *)(param_1 + 0x9c),DAT_028aa140,0x3f800000,0
                           );
      *(undefined4 *)(param_1 + 0x9c) = uVar27;
      iVar12 = FUN_0267c710(0);
      local_100 = 0;
      local_f8 = 0;
      FUN_0268834c((float)(iVar12 + -100),0,0x42c80000,0x41a00000,&local_100,0);
      dVar4 = DAT_028aab70;
      local_a8 = dVar37 / DAT_028aab70;
      uVar22 = FUN_017562ec(&local_a8,*(undefined8 *)puVar5,0);
      uVar22 = FUN_015f5b28(uVar22,*(undefined8 *)puVar10,0);
      FUN_026cbc44(local_100 & 0xffffffff,local_100._4_4_,local_f8 & 0xffffffff,local_f8._4_4_,
                   uVar22,0);
      FUN_026d0cbc(0);
      iVar12 = FUN_0267c710(0);
      iVar13 = FUN_0267c738(0);
      local_110 = 0;
      local_108 = 0;
      FUN_0268834c(0,0x41a00000,(float)iVar12,(float)(iVar13 + -0x14),&local_110,0);
      uVar27 = *(undefined4 *)(param_1 + 0xa0);
      uVar33 = *(undefined4 *)(param_1 + 0xa4);
      fVar3 = -2.1474836e+09;
      if (fVar30 != INFINITY) {
        fVar3 = (float)(int)fVar30;
      }
      local_120 = 0;
      uStack_11c = 0;
      uStack_118 = 0;
      local_114 = 0;
      FUN_0268834c(0,0,fVar3,(float)(*(int *)(param_1 + 0x94) + 0x1e),&local_120,0);
      uVar35 = (undefined4)(local_110 >> 0x20);
      uVar27 = FUN_026d0d68(local_110 & 0xffffffff,local_110 >> 0x20,local_108 & 0xffffffff,
                            local_108._4_4_,uVar27,uVar33,0);
      *(undefined4 *)(param_1 + 0xa0) = uVar27;
      *(undefined4 *)(param_1 + 0xa4) = uVar35;
      FUN_026d3158(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),0);
      local_130 = 0;
      local_128 = 0;
      FUN_0268834c(0x40a00000,0,0x43480000,0x41a00000,&local_130,0);
      FUN_026cbc44(local_130 & 0xffffffff,local_130._4_4_,local_128 & 0xffffffff,local_128._4_4_,
                   *(undefined8 *)StringLiteral_14412,0);
      local_140 = 0;
      local_138 = 0;
      FUN_0268834c(0,0,fVar3,0x42200000,&local_140,0);
      uVar22 = FUN_026e77b8(*puVar19,0);
      FUN_026cc304(local_140 & 0xffffffff,local_140._4_4_,local_138 & 0xffffffff,local_138._4_4_,
                   *(undefined8 *)puVar6,uVar22,0);
      lVar14 = *(long *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x94) = 0x19;
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
              iVar12 = *(int *)(param_1 + 0x94) + 0x15;
              goto LAB_01930d18;
            }
          }
          else {
            uVar36 = *(undefined4 *)(param_1 + 0x20);
            uVar35 = *(undefined4 *)(param_1 + 0x24);
            uVar33 = *(undefined4 *)(param_1 + 0x28);
            uVar27 = *(undefined4 *)(param_1 + 0x2c);
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 0x15;
            if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026d3158(uVar36,uVar35,uVar33,uVar27,0);
            local_d0 = 0;
            local_c8 = 0;
            FUN_0268834c(0x40a00000,(float)(*(int *)(param_1 + 0x94) + 5),0x43480000,0x41a00000,
                         &local_d0,0);
            local_ac = (uVar1 >> 0x10) + 1;
            uVar17 = FUN_0178e9b8(&local_ac,0);
            uVar17 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar17,0);
            FUN_026cbc44(local_d0 & 0xffffffff,local_d0._4_4_,local_c8 & 0xffffffff,local_c8._4_4_,
                         uVar17,0);
            local_e0 = 0;
            local_d8 = 0;
            FUN_0268834c(0,(float)(*(int *)(param_1 + 0x94) + 5),fVar3,0x42200000,&local_e0,0);
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_026e77b8(*puVar19,0);
            FUN_026cc304(local_e0 & 0xffffffff,local_e0._4_4_,local_d8 & 0xffffffff,local_d8._4_4_,
                         *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar17,0);
            iVar12 = *(int *)(param_1 + 0x94) + 0x1e;
LAB_01930d18:
            *(int *)(param_1 + 0x94) = iVar12;
          }
          uVar20 = uVar1 & 0xff;
          if (uVar20 == 3) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(param_1 + 0x58);
            uVar21 = *(ulong *)(param_1 + 0x50);
          }
          else if (uVar20 == 2) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(param_1 + 0x48);
            uVar21 = *(ulong *)(param_1 + 0x40);
          }
          else if (uVar20 == 0) {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(param_1 + 0x38);
            uVar21 = *(ulong *)(param_1 + 0x30);
          }
          else {
            lVar15 = *(long *)puVar11;
            uVar28 = *(ulong *)(param_1 + 0x68);
            uVar21 = *(ulong *)(param_1 + 0x60);
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026d3158(uVar21,uVar21 >> 0x20,uVar28 & 0xffffffff,uVar28 >> 0x20,0);
          dVar32 = *(double *)(param_1 + 0x80);
          iVar12 = FUN_0267c710(0);
          dVar34 = *(double *)(param_1 + 0x80);
          dVar32 = (((dVar31 - dVar32) / dVar37) * (double)(iVar12 + -10)) /
                   (double)*(float *)(param_1 + 0x9c);
          uVar20 = 0x80000000;
          if (dVar32 != INFINITY) {
            uVar20 = (int)dVar32;
          }
          iVar12 = FUN_0267c710(0);
          dVar32 = (((dVar29 - dVar34) / dVar37) * (double)(iVar12 + -10)) /
                   (double)*(float *)(param_1 + 0x9c);
          uVar18 = 0x80000000;
          if (dVar32 != INFINITY) {
            uVar18 = (int)dVar32;
          }
          dVar29 = dVar29 - dVar31;
          if (*(char *)(param_1 + 0x70) == '\0') {
            pdVar16 = &local_c0;
            local_c0 = dVar29 / dVar4;
            puVar19 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
            puVar23 = (undefined8 *)StringLiteral_7259;
          }
          else {
            local_b8 = (dVar29 / dVar37) * 100.0;
            pdVar16 = &local_b8;
            puVar19 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
            puVar23 = (undefined8 *)PTR_DAT_033f6be8;
          }
          uVar17 = FUN_017562ec(pdVar16,*puVar19,0);
          uVar22 = FUN_0160073c(uVar22,*(undefined8 *)
                                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                                ,uVar17,*puVar23,0);
          local_d0 = 0;
          local_c8 = 0;
          FUN_0268834c((float)(int)uVar20,(float)*(int *)(param_1 + 0x94),
                       (float)(int)(uVar18 + ~uVar20),0x41a00000,&local_d0,0);
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
          FUN_026cc304(local_d0 & 0xffffffff,local_d0._4_4_,local_c8 & 0xffffffff,local_c8._4_4_,
                       uVar22,uVar17,0);
          uVar21 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar26 = uVar26 + 1;
          puVar24 = puVar24 + 4;
          puVar19 = (undefined8 *)PTR_DAT_033f28e8;
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


