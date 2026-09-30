/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalResourceDataBase$$.ctor
ENTRY_POINT: 05c6c59c
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


void UnityEngine_Rendering_Universal_UniversalResourceDataBase___ctor(void)

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
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined8 *unaff_x19;
  uint uVar29;
  long unaff_x23;
  int unaff_w25;
  int iVar30;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  int iStack000000000000003c;
  long in_stack_00000050;
  int iStack000000000000005c;
  int iStack0000000000000074;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000f8;
  ulong uStack0000000000000108;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
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
  
  lVar9 = FUN_02f0880c();
  if (*(long *)(unaff_x26 + 0x18) != 0) {
    if (*(int *)(*(long *)(unaff_x26 + 0x18) + 0x80) < 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_02f0880c(*unaff_x19,0x1ff);
    }
    puVar7 = Method_System_Linq_Enumerable_ToList<FieldInfo>__;
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToList<FieldInfo>__);
    puVar6 = Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__;
    FUN_03a9f568(lVar11,*(undefined8 *)
                         Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__);
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
    FUN_03a9f568(lVar12,*(undefined8 *)puVar6);
    lVar13 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_05c7ff00(lVar13,0);
    puVar6 = Method_System_Enum_ToObject__;
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x20) = unaff_x23;
      lVar14 = *(long *)puVar6;
      *(long *)(lVar13 + 0x10) = in_stack_000000d0;
      *(long *)(lVar13 + 0x18) = in_stack_000000c8;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_05c7a928(0);
      auVar47 = FUN_05c7c078(uVar15,0);
      lVar14 = FUN_05c5f534(in_stack_000000f8);
      fVar5 = DAT_011b0568;
      if ((lVar14 != 0) && (*(long *)(unaff_x26 + 0x10) != 0)) {
        uVar2 = *(uint *)(*(long *)(unaff_x26 + 0x10) + 0x20);
        if (0x3f < (int)uVar2) {
          fVar31 = *(float *)(lVar14 + 0x28);
          uVar24 = 0;
          uVar29 = 0;
          iVar21 = auVar47._0_4_;
          iVar26 = auVar47._4_4_;
          iVar4 = 0;
          iStack0000000000000074 = 0;
          iStack000000000000005c = 0;
          iStack000000000000003c = 0;
          do {
            if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
            iVar28 = *(int *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x48) + uVar24 * 0x10 + 0xc);
            if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            iVar8 = FUN_05c7a920(0);
            if (in_stack_00000050 == 0) goto LAB_05c6d050;
            iVar23 = 0;
            if (iVar8 != 0) {
              iVar23 = (int)uVar24 / iVar8;
            }
            auVar48 = FUN_03c208d4(in_stack_00000050,iVar23,
                                   *(undefined8 *)
                                    Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__
                                  );
            fVar34 = (float)iVar28;
            iVar28 = 0;
            uVar19 = (ulong)(uint)(iStack0000000000000074 + iVar23 * (int)uVar15 +
                                  iVar21 * (iStack000000000000005c + iVar26 * iStack000000000000003c
                                           ));
            iVar8 = iVar4;
            do {
              iVar23 = 0;
              uStack0000000000000108 = uVar19;
              iVar3 = iVar8;
              do {
                lVar14 = 0;
                do {
                  if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
                  iVar30 = (int)lVar14;
                  iVar1 = (int)uStack0000000000000108 + iVar30;
                  puVar16 = (undefined8 *)
                            (*(long *)(*(long *)(unaff_x26 + 0x18) + 0x58) + (long)iVar1 * 0xc);
                  fVar37 = *(float *)(puVar16 + 1);
                  uVar44 = *puVar16;
                  uVar46 = *(undefined8 *)(in_stack_000000f8 + 0x28);
                  fVar38 = *(float *)(in_stack_000000f8 + 0x30);
                  if (DAT_06bb42c3 == '\0') {
                    FUN_02f08768(PTR_DAT_067c90a8);
                    DAT_06bb42c3 = '\x01';
                  }
                  puVar17 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
                  uVar39 = *puVar17;
                  uVar40 = puVar17[1];
                  uVar41 = puVar17[2];
                  uVar42 = puVar17[3];
                  if (DAT_06bb42c2 == '\0') {
                    FUN_02f08768(PTR_DAT_067c8f78);
                    DAT_06bb42c2 = '\x01';
                  }
                  fVar32 = (float)uVar44 - (float)uVar46;
                  fVar33 = (float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar46 >> 0x20);
                  fVar37 = fVar37 - fVar38;
                  FUN_060dbfb8(&stack0x00000140,CONCAT44(fVar33,fVar32),fVar33,fVar37,uVar39,uVar40,
                               uVar41,uVar42,0);
                  puVar6 = 
                  Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__;
                  if (lVar11 == 0) goto LAB_05c6d050;
                  lVar18 = *(long *)(lVar11 + 0x10);
                  in_stack_00000188 = in_stack_00000148;
                  in_stack_00000180 = in_stack_00000140;
                  in_stack_00000198 = in_stack_00000158;
                  in_stack_00000190 = in_stack_00000150;
                  in_stack_000001a8 = in_stack_00000168;
                  in_stack_000001a0 = in_stack_00000160;
                  in_stack_000001b8 = in_stack_00000178;
                  in_stack_000001b0 = in_stack_00000170;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_05c6d050;
                  uVar27 = *(uint *)(lVar11 + 0x18);
                  if (uVar27 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)uVar27 * 0x40;
                    *(uint *)(lVar11 + 0x18) = uVar27 + 1;
                    *(undefined8 *)(lVar18 + 0x28) = in_stack_00000148;
                    *(undefined8 *)(lVar18 + 0x20) = in_stack_00000140;
                    *(undefined8 *)(lVar18 + 0x38) = in_stack_00000158;
                    *(undefined8 *)(lVar18 + 0x30) = in_stack_00000150;
                    *(undefined8 *)(lVar18 + 0x48) = in_stack_00000168;
                    *(undefined8 *)(lVar18 + 0x40) = in_stack_00000160;
                    *(undefined8 *)(lVar18 + 0x58) = in_stack_00000178;
                    *(undefined8 *)(lVar18 + 0x50) = in_stack_00000170;
                  }
                  else {
                    in_stack_000001c8 = in_stack_00000148;
                    in_stack_000001c0 = in_stack_00000140;
                    in_stack_000001d8 = in_stack_00000158;
                    in_stack_000001d0 = in_stack_00000150;
                    in_stack_000001e8 = in_stack_00000168;
                    in_stack_000001e0 = in_stack_00000160;
                    FUN_03a9fe08(lVar11,&stack0x000001c0,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  if ((*(long *)(unaff_x26 + 0x18) == 0) || (in_stack_00000138 == 0))
                  goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000138 + 0x18) <= uVar29) {
LAB_05c6d054:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar20 = (long)iVar1;
                  lVar18 = (long)(int)uVar29;
                  *(undefined4 *)(in_stack_00000138 + lVar18 * 4 + 0x20) =
                       *(undefined4 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x88) + lVar20 * 4);
                  if (unaff_x28 == 0) goto LAB_05c6d050;
                  if (*(uint *)(unaff_x28 + 0x18) <= uVar29) goto LAB_05c6d054;
                  pfVar22 = (float *)(unaff_x28 + lVar18 * 4 + 0x20);
                  *pfVar22 = fVar31;
                  if (in_stack_00000130 == 0) goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000130 + 0x18) <= uVar29) goto LAB_05c6d054;
                  lVar25 = in_stack_00000130 + lVar18 * 0x10;
                  *(float *)(lVar25 + 0x20) =
                       (float)(iStack0000000000000074 + auVar48._0_4_ + iVar30);
                  *(float *)(lVar25 + 0x24) =
                       (float)(iStack000000000000005c + auVar48._4_4_ + iVar23);
                  *(float *)(lVar25 + 0x28) =
                       (float)(iStack000000000000003c + auVar48._8_4_ + iVar28);
                  *(float *)(lVar25 + 0x2c) = fVar34;
                  if (in_stack_00000128 == 0) goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000128 + 0x18) <= uVar29) goto LAB_05c6d054;
                  *(float *)(in_stack_00000128 + lVar18 * 4 + 0x20) =
                       fVar34 / (float)(unaff_w25 + -1);
                  lVar25 = *(long *)(unaff_x26 + 0x18);
                  if (lVar25 == 0) goto LAB_05c6d050;
                  if (*(int *)(lVar25 + 0xa0) < 1) {
                    uVar27 = 0xffffffff;
                  }
                  else {
                    uVar27 = (uint)*(byte *)(*(long *)(lVar25 + 0x98) + lVar20);
                  }
                  if (unaff_x27 == 0) goto LAB_05c6d050;
                  if (*(uint *)(unaff_x27 + 0x18) <= uVar29) goto LAB_05c6d054;
                  *(uint *)(unaff_x27 + lVar18 * 4 + 0x20) = uVar27;
                  if (lVar9 != 0) {
                    if (*(uint *)(lVar9 + 0x18) <= uVar29) goto LAB_05c6d054;
                    fVar38 = *(float *)(*(long *)(lVar25 + 0x68) + lVar20 * 4);
                    *(float *)(lVar9 + lVar18 * 4 + 0x20) = fVar38;
                    if (*(uint *)(unaff_x28 + 0x18) <= uVar29) goto LAB_05c6d054;
                    fVar43 = fVar38 + -1.0;
                    if (fVar38 <= 1.0) {
                      fVar43 = fVar31;
                    }
                    *pfVar22 = fVar43;
                  }
                  if (lVar10 != 0) {
                    if (*(uint *)(lVar10 + 0x18) <= uVar29) goto LAB_05c6d054;
                    lVar18 = lVar10 + lVar18 * 0x10;
                    pfVar22 = (float *)(*(long *)(lVar25 + 0x78) + (long)iVar1 * 0xc);
                    fVar43 = *pfVar22;
                    fVar45 = pfVar22[1];
                    fVar38 = pfVar22[2];
                    *(undefined4 *)(lVar18 + 0x2c) = 0;
                    *(float *)(lVar18 + 0x28) = fVar38;
                    *(float *)(lVar18 + 0x20) = fVar43;
                    *(float *)(lVar18 + 0x24) = fVar45;
                    if (fVar5 <= fVar43 * fVar43 + fVar45 * fVar45 + fVar38 * fVar38) {
                      fVar35 = -fVar45;
                      fVar36 = -fVar38;
                      uVar40 = FUN_060df954(-fVar43,fVar35,0);
                      if (DAT_06bb42c7 == '\0') {
                        FUN_02f08768(PTR_DAT_067c8f80);
                        DAT_06bb42c7 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      FUN_060dbfb8(&stack0x00000140,fVar32 + fVar43,fVar33 + fVar45,fVar37 + fVar38,
                                   uVar40,fVar35,fVar36,uVar39,0);
                      if (lVar12 == 0) goto LAB_05c6d050;
                      iVar1 = *(int *)(lVar12 + 0x1c);
                      lVar18 = *(long *)(lVar12 + 0x10);
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
                      if (lVar12 == 0) goto LAB_05c6d050;
                      iVar1 = *(int *)(lVar12 + 0x1c);
                      lVar18 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
                      in_stack_00000188 = *(undefined8 *)(lVar18 + 0x48);
                      in_stack_00000180 = *(undefined8 *)(lVar18 + 0x40);
                      in_stack_00000198 = *(undefined8 *)(lVar18 + 0x58);
                      in_stack_00000190 = *(undefined8 *)(lVar18 + 0x50);
                      in_stack_000001a8 = *(undefined8 *)(lVar18 + 0x68);
                      in_stack_000001a0 = *(undefined8 *)(lVar18 + 0x60);
                      in_stack_000001b8 = *(undefined8 *)(lVar18 + 0x78);
                      in_stack_000001b0 = *(undefined8 *)(lVar18 + 0x70);
                      lVar18 = *(long *)(lVar12 + 0x10);
                    }
                    lVar20 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                    ;
                    *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                    if (lVar18 == 0) goto LAB_05c6d050;
                    uVar27 = *(uint *)(lVar12 + 0x18);
                    if (uVar27 < *(uint *)(lVar18 + 0x18)) {
                      lVar18 = lVar18 + (long)(int)uVar27 * 0x40;
                      *(uint *)(lVar12 + 0x18) = uVar27 + 1;
                      *(undefined8 *)(lVar18 + 0x28) = in_stack_00000188;
                      *(undefined8 *)(lVar18 + 0x20) = in_stack_00000180;
                      *(undefined8 *)(lVar18 + 0x38) = in_stack_00000198;
                      *(undefined8 *)(lVar18 + 0x30) = in_stack_00000190;
                      *(undefined8 *)(lVar18 + 0x48) = in_stack_000001a8;
                      *(undefined8 *)(lVar18 + 0x40) = in_stack_000001a0;
                      *(undefined8 *)(lVar18 + 0x58) = in_stack_000001b8;
                      *(undefined8 *)(lVar18 + 0x50) = in_stack_000001b0;
                    }
                    else {
                      in_stack_000001c8 = in_stack_00000188;
                      in_stack_000001c0 = in_stack_00000180;
                      in_stack_000001d8 = in_stack_00000198;
                      in_stack_000001d0 = in_stack_00000190;
                      in_stack_000001e8 = in_stack_000001a8;
                      in_stack_000001e0 = in_stack_000001a0;
                      FUN_03a9fe08(lVar12,&stack0x000001c0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  if (*(int *)(lVar11 + 0x18) < 0x1ff) {
                    if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_05c6d050;
                    if (iVar3 + iVar30 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x20) + -1)
                    goto LAB_05c6cd1c;
                    uVar29 = uVar29 + 1;
                  }
                  else {
LAB_05c6cd1c:
                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                 UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
                    FUN_060ba0e0(lVar18,0);
                    if (lVar18 == 0) goto LAB_05c6d050;
                    FUN_060ba5d8(lVar18,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                                 in_stack_00000138,0);
                    FUN_060ba5d8(lVar18,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                                 unaff_x27,0);
                    FUN_060ba5d8(lVar18,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                );
                    FUN_060ba5d8(lVar18,*(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__,
                                 lVar9,0);
                    FUN_060ba5d8(lVar18,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IInteractorView>__,
                                 in_stack_00000128,0);
                    FUN_060ba628(lVar18,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__
                                 ,in_stack_00000130,0);
                    if (lVar10 != 0) {
                      FUN_060ba628(lVar18,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<InstanceHandle>__,
                                   lVar10,0);
                    }
                    if (unaff_x23 == 0) goto LAB_05c6d050;
                    lVar20 = *(long *)(unaff_x23 + 0x10);
                    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
                    if (lVar20 == 0) goto LAB_05c6d050;
                    uVar29 = *(uint *)(unaff_x23 + 0x18);
                    if (uVar29 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(unaff_x23 + 0x18) = uVar29 + 1;
                      *(long *)(lVar20 + (long)(int)uVar29 * 8 + 0x20) = lVar18;
                    }
                    else {
                      FUN_03abf904();
                    }
                    puVar6 = 
                    Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                    ;
                    uVar44 = FUN_03aa1ac0(lVar11,*(undefined8 *)
                                                  Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                                         );
                    if (in_stack_000000d0 == 0) goto LAB_05c6d050;
                    lVar18 = *(long *)(in_stack_000000d0 + 0x10);
                    lVar20 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                    ;
                    *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
                    if (lVar18 == 0) goto LAB_05c6d050;
                    uVar29 = *(uint *)(in_stack_000000d0 + 0x18);
                    if (uVar29 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(in_stack_000000d0 + 0x18) = uVar29 + 1;
                      *(undefined8 *)(lVar18 + (long)(int)uVar29 * 8 + 0x20) = uVar44;
                    }
                    else {
                      FUN_03abf904(in_stack_000000d0,uVar44,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if ((lVar12 == 0) ||
                       (uVar44 = FUN_03aa1ac0(lVar12,*(undefined8 *)puVar6), in_stack_000000c8 == 0)
                       ) goto LAB_05c6d050;
                    lVar18 = *(long *)(in_stack_000000c8 + 0x10);
                    lVar20 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                    ;
                    *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
                    if (lVar18 == 0) goto LAB_05c6d050;
                    uVar29 = *(uint *)(in_stack_000000c8 + 0x18);
                    if (uVar29 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(in_stack_000000c8 + 0x18) = uVar29 + 1;
                      *(undefined8 *)(lVar18 + (long)(int)uVar29 * 8 + 0x20) = uVar44;
                    }
                    else {
                      FUN_03abf904(in_stack_000000c8,uVar44,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar29 = 0;
                    *(undefined4 *)(lVar12 + 0x18) = 0;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  }
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 4);
                uStack0000000000000108 = uStack0000000000000108 + auVar47._0_8_;
                iVar23 = iVar23 + 1;
                iVar3 = iVar3 + 4;
              } while (iVar23 != 4);
              iVar28 = iVar28 + 1;
              uVar19 = uVar19 + (uint)(iVar21 * iVar26);
              iVar8 = iVar8 + 0x10;
            } while (iVar28 != 4);
            iStack0000000000000074 = iStack0000000000000074 + 4;
            if (iVar21 <= iStack0000000000000074) {
              iStack000000000000005c = iStack000000000000005c + 4;
              if (iStack000000000000005c < iVar26) {
                iStack0000000000000074 = 0;
              }
              else {
                iStack000000000000005c = 0;
                iStack0000000000000074 = 0;
                iStack000000000000003c = iStack000000000000003c + 4;
                if (auVar47._8_4_ <= iStack000000000000003c) {
                  iStack000000000000003c = 0;
                }
              }
            }
            uVar24 = uVar24 + 1;
            iVar4 = iVar4 + 0x40;
          } while (uVar24 != uVar2 >> 6);
        }
        *(long *)(unaff_x26 + 0x150) = lVar13;
        return;
      }
    }
  }
LAB_05c6d050:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


