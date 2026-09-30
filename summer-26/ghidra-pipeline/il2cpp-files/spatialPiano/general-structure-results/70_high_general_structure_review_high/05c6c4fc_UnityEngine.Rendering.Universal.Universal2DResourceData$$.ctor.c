/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Universal2DResourceData$$.ctor
ENTRY_POINT: 05c6c4fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_Universal2DResourceData___ctor(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  float *pfVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  long unaff_x23;
  int unaff_w25;
  int iVar36;
  long unaff_x26;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  int iStack000000000000003c;
  int iStack000000000000005c;
  int iStack0000000000000074;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000f8;
  ulong uStack0000000000000108;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_03abf108();
  puVar7 = PTR_DAT_067d13f0;
  if (*(long *)(unaff_x26 + 0x20) != 0) {
    lVar20 = *(long *)(*(long *)(unaff_x26 + 0x20) + 0x10);
    lVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067d13f0,0x1ff);
    puVar6 = PTR_DAT_067cc450;
    lVar10 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cc450,0x1ff);
    lVar11 = FUN_02f0880c(*(undefined8 *)puVar6,0x1ff);
    lVar12 = FUN_02f0880c(*(undefined8 *)puVar6,0x1ff);
    lVar13 = FUN_02f0880c(*(undefined8 *)puVar6,0x1ff);
    lVar21 = *(long *)(unaff_x26 + 0x18);
    if (lVar21 != 0) {
      if (*(int *)(lVar21 + 0x70) < 1) {
        lVar14 = 0;
      }
      else {
        lVar14 = FUN_02f0880c(*(undefined8 *)puVar6,0x1ff);
        lVar21 = *(long *)(unaff_x26 + 0x18);
        if (lVar21 == 0) goto LAB_05c6d050;
      }
      if (*(int *)(lVar21 + 0x80) < 1) {
        lVar21 = 0;
      }
      else {
        lVar21 = FUN_02f0880c(*(undefined8 *)puVar7,0x1ff);
      }
      puVar6 = Method_System_Linq_Enumerable_ToList<FieldInfo>__;
      lVar15 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToList<FieldInfo>__);
      puVar7 = Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__;
      FUN_03a9f568(lVar15,*(undefined8 *)
                           Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__)
      ;
      lVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      FUN_03a9f568(lVar16,*(undefined8 *)puVar7);
      lVar17 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__);
      FUN_05c7ff00(lVar17,0);
      puVar7 = Method_System_Enum_ToObject__;
      if (lVar17 != 0) {
        *(long *)(lVar17 + 0x20) = unaff_x23;
        lVar18 = *(long *)puVar7;
        *(long *)(lVar17 + 0x10) = in_stack_000000d0;
        *(long *)(lVar17 + 0x18) = in_stack_000000c8;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar19 = FUN_05c7a928(0);
        auVar53 = FUN_05c7c078(uVar19,0);
        lVar18 = FUN_05c5f534(in_stack_000000f8);
        fVar5 = DAT_011b0568;
        if ((lVar18 != 0) && (*(long *)(unaff_x26 + 0x10) != 0)) {
          uVar2 = *(uint *)(*(long *)(unaff_x26 + 0x10) + 0x20);
          if (0x3f < (int)uVar2) {
            fVar37 = *(float *)(lVar18 + 0x28);
            uVar30 = 0;
            uVar35 = 0;
            iVar27 = auVar53._0_4_;
            iVar32 = auVar53._4_4_;
            iVar4 = 0;
            iStack0000000000000074 = 0;
            iStack000000000000005c = 0;
            iStack000000000000003c = 0;
            do {
              if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
              iVar34 = *(int *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x48) + uVar30 * 0x10 + 0xc)
              ;
              if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              iVar8 = FUN_05c7a920(0);
              if (lVar20 == 0) goto LAB_05c6d050;
              iVar29 = 0;
              if (iVar8 != 0) {
                iVar29 = (int)uVar30 / iVar8;
              }
              auVar54 = FUN_03c208d4(lVar20,iVar29,
                                     *(undefined8 *)
                                      Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__
                                    );
              fVar40 = (float)iVar34;
              iVar34 = 0;
              uVar25 = (ulong)(uint)(iStack0000000000000074 + iVar29 * (int)uVar19 +
                                    iVar27 * (iStack000000000000005c +
                                             iVar32 * iStack000000000000003c));
              iVar8 = iVar4;
              do {
                iVar29 = 0;
                uStack0000000000000108 = uVar25;
                iVar3 = iVar8;
                do {
                  lVar18 = 0;
                  do {
                    if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
                    iVar36 = (int)lVar18;
                    iVar1 = (int)uStack0000000000000108 + iVar36;
                    puVar22 = (undefined8 *)
                              (*(long *)(*(long *)(unaff_x26 + 0x18) + 0x58) + (long)iVar1 * 0xc);
                    fVar43 = *(float *)(puVar22 + 1);
                    uVar50 = *puVar22;
                    uVar52 = *(undefined8 *)(in_stack_000000f8 + 0x28);
                    fVar44 = *(float *)(in_stack_000000f8 + 0x30);
                    if (DAT_06bb42c3 == '\0') {
                      FUN_02f08768(PTR_DAT_067c90a8);
                      DAT_06bb42c3 = '\x01';
                    }
                    puVar23 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
                    uVar45 = *puVar23;
                    uVar46 = puVar23[1];
                    uVar47 = puVar23[2];
                    uVar48 = puVar23[3];
                    if (DAT_06bb42c2 == '\0') {
                      FUN_02f08768(PTR_DAT_067c8f78);
                      DAT_06bb42c2 = '\x01';
                    }
                    fVar38 = (float)uVar50 - (float)uVar52;
                    fVar39 = (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar52 >> 0x20);
                    fVar43 = fVar43 - fVar44;
                    FUN_060dbfb8(&stack0x00000140,CONCAT44(fVar39,fVar38),fVar39,fVar43,uVar45,
                                 uVar46,uVar47,uVar48,0);
                    puVar7 = 
                    Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                    ;
                    if (lVar15 == 0) goto LAB_05c6d050;
                    lVar24 = *(long *)(lVar15 + 0x10);
                    in_stack_00000188 = in_stack_00000148;
                    in_stack_00000180 = in_stack_00000140;
                    in_stack_00000198 = in_stack_00000158;
                    in_stack_00000190 = in_stack_00000150;
                    in_stack_000001a8 = in_stack_00000168;
                    in_stack_000001a0 = in_stack_00000160;
                    in_stack_000001b8 = in_stack_00000178;
                    in_stack_000001b0 = in_stack_00000170;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar24 == 0) goto LAB_05c6d050;
                    uVar33 = *(uint *)(lVar15 + 0x18);
                    if (uVar33 < *(uint *)(lVar24 + 0x18)) {
                      lVar24 = lVar24 + (long)(int)uVar33 * 0x40;
                      *(uint *)(lVar15 + 0x18) = uVar33 + 1;
                      *(undefined8 *)(lVar24 + 0x28) = in_stack_00000148;
                      *(undefined8 *)(lVar24 + 0x20) = in_stack_00000140;
                      *(undefined8 *)(lVar24 + 0x38) = in_stack_00000158;
                      *(undefined8 *)(lVar24 + 0x30) = in_stack_00000150;
                      *(undefined8 *)(lVar24 + 0x48) = in_stack_00000168;
                      *(undefined8 *)(lVar24 + 0x40) = in_stack_00000160;
                      *(undefined8 *)(lVar24 + 0x58) = in_stack_00000178;
                      *(undefined8 *)(lVar24 + 0x50) = in_stack_00000170;
                    }
                    else {
                      in_stack_000001c8 = in_stack_00000148;
                      in_stack_000001c0 = in_stack_00000140;
                      in_stack_000001d8 = in_stack_00000158;
                      in_stack_000001d0 = in_stack_00000150;
                      in_stack_000001e8 = in_stack_00000168;
                      in_stack_000001e0 = in_stack_00000160;
                      FUN_03a9fe08(lVar15,&stack0x000001c0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((*(long *)(unaff_x26 + 0x18) == 0) || (lVar11 == 0)) goto LAB_05c6d050;
                    if (*(uint *)(lVar11 + 0x18) <= uVar35) {
LAB_05c6d054:
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                    lVar26 = (long)iVar1;
                    lVar24 = (long)(int)uVar35;
                    *(undefined4 *)(lVar11 + lVar24 * 4 + 0x20) =
                         *(undefined4 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x88) + lVar26 * 4)
                    ;
                    if (lVar12 == 0) goto LAB_05c6d050;
                    if (*(uint *)(lVar12 + 0x18) <= uVar35) goto LAB_05c6d054;
                    pfVar28 = (float *)(lVar12 + lVar24 * 4 + 0x20);
                    *pfVar28 = fVar37;
                    if (lVar9 == 0) goto LAB_05c6d050;
                    if (*(uint *)(lVar9 + 0x18) <= uVar35) goto LAB_05c6d054;
                    lVar31 = lVar9 + lVar24 * 0x10;
                    *(float *)(lVar31 + 0x20) =
                         (float)(iStack0000000000000074 + auVar54._0_4_ + iVar36);
                    *(float *)(lVar31 + 0x24) =
                         (float)(iStack000000000000005c + auVar54._4_4_ + iVar29);
                    *(float *)(lVar31 + 0x28) =
                         (float)(iStack000000000000003c + auVar54._8_4_ + iVar34);
                    *(float *)(lVar31 + 0x2c) = fVar40;
                    if (lVar13 == 0) goto LAB_05c6d050;
                    if (*(uint *)(lVar13 + 0x18) <= uVar35) goto LAB_05c6d054;
                    *(float *)(lVar13 + lVar24 * 4 + 0x20) = fVar40 / (float)(unaff_w25 + -1);
                    lVar31 = *(long *)(unaff_x26 + 0x18);
                    if (lVar31 == 0) goto LAB_05c6d050;
                    if (*(int *)(lVar31 + 0xa0) < 1) {
                      uVar33 = 0xffffffff;
                    }
                    else {
                      uVar33 = (uint)*(byte *)(*(long *)(lVar31 + 0x98) + lVar26);
                    }
                    if (lVar10 == 0) goto LAB_05c6d050;
                    if (*(uint *)(lVar10 + 0x18) <= uVar35) goto LAB_05c6d054;
                    *(uint *)(lVar10 + lVar24 * 4 + 0x20) = uVar33;
                    if (lVar14 != 0) {
                      if (*(uint *)(lVar14 + 0x18) <= uVar35) goto LAB_05c6d054;
                      fVar44 = *(float *)(*(long *)(lVar31 + 0x68) + lVar26 * 4);
                      *(float *)(lVar14 + lVar24 * 4 + 0x20) = fVar44;
                      if (*(uint *)(lVar12 + 0x18) <= uVar35) goto LAB_05c6d054;
                      fVar49 = fVar44 + -1.0;
                      if (fVar44 <= 1.0) {
                        fVar49 = fVar37;
                      }
                      *pfVar28 = fVar49;
                    }
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= uVar35) goto LAB_05c6d054;
                      lVar24 = lVar21 + lVar24 * 0x10;
                      pfVar28 = (float *)(*(long *)(lVar31 + 0x78) + (long)iVar1 * 0xc);
                      fVar49 = *pfVar28;
                      fVar51 = pfVar28[1];
                      fVar44 = pfVar28[2];
                      *(undefined4 *)(lVar24 + 0x2c) = 0;
                      *(float *)(lVar24 + 0x28) = fVar44;
                      *(float *)(lVar24 + 0x20) = fVar49;
                      *(float *)(lVar24 + 0x24) = fVar51;
                      if (fVar5 <= fVar49 * fVar49 + fVar51 * fVar51 + fVar44 * fVar44) {
                        fVar41 = -fVar51;
                        fVar42 = -fVar44;
                        uVar46 = FUN_060df954(-fVar49,fVar41,0);
                        if (DAT_06bb42c7 == '\0') {
                          FUN_02f08768(PTR_DAT_067c8f80);
                          DAT_06bb42c7 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        FUN_060dbfb8(&stack0x00000140,fVar38 + fVar49,fVar39 + fVar51,
                                     fVar43 + fVar44,uVar46,fVar41,fVar42,uVar45,0);
                        if (lVar16 == 0) goto LAB_05c6d050;
                        iVar1 = *(int *)(lVar16 + 0x1c);
                        lVar24 = *(long *)(lVar16 + 0x10);
                        in_stack_00000188 = in_stack_00000148;
                        in_stack_00000180 = in_stack_00000140;
                        in_stack_00000198 = in_stack_00000158;
                        in_stack_00000190 = in_stack_00000150;
                        in_stack_000001a8 = in_stack_00000168;
                        in_stack_000001a0 = in_stack_00000160;
                        in_stack_000001b8 = in_stack_00000178;
                        in_stack_000001b0 = in_stack_00000170;
                      }
                      else {
                        if (DAT_06bb87a1 == '\0') {
                          FUN_02f08768(PTR_DAT_067c9770);
                          DAT_06bb87a1 = '\x01';
                        }
                        if (lVar16 == 0) goto LAB_05c6d050;
                        iVar1 = *(int *)(lVar16 + 0x1c);
                        lVar24 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
                        in_stack_00000188 = *(undefined8 *)(lVar24 + 0x48);
                        in_stack_00000180 = *(undefined8 *)(lVar24 + 0x40);
                        in_stack_00000198 = *(undefined8 *)(lVar24 + 0x58);
                        in_stack_00000190 = *(undefined8 *)(lVar24 + 0x50);
                        in_stack_000001a8 = *(undefined8 *)(lVar24 + 0x68);
                        in_stack_000001a0 = *(undefined8 *)(lVar24 + 0x60);
                        in_stack_000001b8 = *(undefined8 *)(lVar24 + 0x78);
                        in_stack_000001b0 = *(undefined8 *)(lVar24 + 0x70);
                        lVar24 = *(long *)(lVar16 + 0x10);
                      }
                      lVar26 = *(long *)
                                Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                      ;
                      *(int *)(lVar16 + 0x1c) = iVar1 + 1;
                      if (lVar24 == 0) goto LAB_05c6d050;
                      uVar33 = *(uint *)(lVar16 + 0x18);
                      if (uVar33 < *(uint *)(lVar24 + 0x18)) {
                        lVar24 = lVar24 + (long)(int)uVar33 * 0x40;
                        *(uint *)(lVar16 + 0x18) = uVar33 + 1;
                        *(undefined8 *)(lVar24 + 0x28) = in_stack_00000188;
                        *(undefined8 *)(lVar24 + 0x20) = in_stack_00000180;
                        *(undefined8 *)(lVar24 + 0x38) = in_stack_00000198;
                        *(undefined8 *)(lVar24 + 0x30) = in_stack_00000190;
                        *(undefined8 *)(lVar24 + 0x48) = in_stack_000001a8;
                        *(undefined8 *)(lVar24 + 0x40) = in_stack_000001a0;
                        *(undefined8 *)(lVar24 + 0x58) = in_stack_000001b8;
                        *(undefined8 *)(lVar24 + 0x50) = in_stack_000001b0;
                      }
                      else {
                        in_stack_000001c8 = in_stack_00000188;
                        in_stack_000001c0 = in_stack_00000180;
                        in_stack_000001d8 = in_stack_00000198;
                        in_stack_000001d0 = in_stack_00000190;
                        in_stack_000001e8 = in_stack_000001a8;
                        in_stack_000001e0 = in_stack_000001a0;
                        FUN_03a9fe08(lVar16,&stack0x000001c0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    if (*(int *)(lVar15 + 0x18) < 0x1ff) {
                      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_05c6d050;
                      if (iVar3 + iVar36 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x20) + -1)
                      goto LAB_05c6cd1c;
                      uVar35 = uVar35 + 1;
                    }
                    else {
LAB_05c6cd1c:
                      lVar24 = thunk_FUN_02f45270(*(undefined8 *)
                                                   UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo
                                                 );
                      FUN_060ba0e0(lVar24,0);
                      if (lVar24 == 0) goto LAB_05c6d050;
                      FUN_060ba5d8(lVar24,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                                   lVar11,0);
                      FUN_060ba5d8(lVar24,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                                   lVar10,0);
                      FUN_060ba5d8(lVar24,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                   ,lVar12,0);
                      FUN_060ba5d8(lVar24,*(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__
                                   ,lVar14,0);
                      FUN_060ba5d8(lVar24,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<IInteractorView>__,
                                   lVar13,0);
                      FUN_060ba628(lVar24,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__
                                   ,lVar9,0);
                      if (lVar21 != 0) {
                        FUN_060ba628(lVar24,*(undefined8 *)
                                             Method_System_Linq_Enumerable_ToList<InstanceHandle>__,
                                     lVar21,0);
                      }
                      if (unaff_x23 == 0) goto LAB_05c6d050;
                      lVar26 = *(long *)(unaff_x23 + 0x10);
                      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
                      if (lVar26 == 0) goto LAB_05c6d050;
                      uVar35 = *(uint *)(unaff_x23 + 0x18);
                      if (uVar35 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(unaff_x23 + 0x18) = uVar35 + 1;
                        *(long *)(lVar26 + (long)(int)uVar35 * 8 + 0x20) = lVar24;
                      }
                      else {
                        FUN_03abf904();
                      }
                      puVar7 = 
                      Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                      ;
                      uVar50 = FUN_03aa1ac0(lVar15,*(undefined8 *)
                                                                                                        
                                                  Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                                           );
                      if (in_stack_000000d0 == 0) goto LAB_05c6d050;
                      lVar24 = *(long *)(in_stack_000000d0 + 0x10);
                      lVar26 = *(long *)
                                Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                      ;
                      *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
                      if (lVar24 == 0) goto LAB_05c6d050;
                      uVar35 = *(uint *)(in_stack_000000d0 + 0x18);
                      if (uVar35 < *(uint *)(lVar24 + 0x18)) {
                        *(uint *)(in_stack_000000d0 + 0x18) = uVar35 + 1;
                        *(undefined8 *)(lVar24 + (long)(int)uVar35 * 8 + 0x20) = uVar50;
                      }
                      else {
                        FUN_03abf904(in_stack_000000d0,uVar50,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                      }
                      *(undefined4 *)(lVar15 + 0x18) = 0;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if ((lVar16 == 0) ||
                         (uVar50 = FUN_03aa1ac0(lVar16,*(undefined8 *)puVar7),
                         in_stack_000000c8 == 0)) goto LAB_05c6d050;
                      lVar24 = *(long *)(in_stack_000000c8 + 0x10);
                      lVar26 = *(long *)
                                Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                      ;
                      *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
                      if (lVar24 == 0) goto LAB_05c6d050;
                      uVar35 = *(uint *)(in_stack_000000c8 + 0x18);
                      if (uVar35 < *(uint *)(lVar24 + 0x18)) {
                        *(uint *)(in_stack_000000c8 + 0x18) = uVar35 + 1;
                        *(undefined8 *)(lVar24 + (long)(int)uVar35 * 8 + 0x20) = uVar50;
                      }
                      else {
                        FUN_03abf904(in_stack_000000c8,uVar50,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar35 = 0;
                      *(undefined4 *)(lVar16 + 0x18) = 0;
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                    }
                    lVar18 = lVar18 + 1;
                  } while (lVar18 != 4);
                  uStack0000000000000108 = uStack0000000000000108 + auVar53._0_8_;
                  iVar29 = iVar29 + 1;
                  iVar3 = iVar3 + 4;
                } while (iVar29 != 4);
                iVar34 = iVar34 + 1;
                uVar25 = uVar25 + (uint)(iVar27 * iVar32);
                iVar8 = iVar8 + 0x10;
              } while (iVar34 != 4);
              iStack0000000000000074 = iStack0000000000000074 + 4;
              if (iVar27 <= iStack0000000000000074) {
                iStack000000000000005c = iStack000000000000005c + 4;
                if (iStack000000000000005c < iVar32) {
                  iStack0000000000000074 = 0;
                }
                else {
                  iStack000000000000005c = 0;
                  iStack0000000000000074 = 0;
                  iStack000000000000003c = iStack000000000000003c + 4;
                  if (auVar53._8_4_ <= iStack000000000000003c) {
                    iStack000000000000003c = 0;
                  }
                }
              }
              uVar30 = uVar30 + 1;
              iVar4 = iVar4 + 0x40;
            } while (uVar30 != uVar2 >> 6);
          }
          *(long *)(unaff_x26 + 0x150) = lVar17;
          return;
        }
      }
    }
  }
LAB_05c6d050:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


