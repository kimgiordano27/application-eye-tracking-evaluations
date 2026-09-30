/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalCameraData$$SetViewAndProjectionMatrix
ENTRY_POINT: 05c6c5a4
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


void UnityEngine_Rendering_Universal_UniversalCameraData__SetViewAndProjectionMatrix
               (long param_1,long param_2)

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
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  undefined8 *unaff_x19;
  uint uVar28;
  long unaff_x23;
  int unaff_w25;
  int iVar29;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
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
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x80) < 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_02f0880c(*unaff_x19,0x1ff);
    }
    puVar7 = Method_System_Linq_Enumerable_ToList<FieldInfo>__;
    lVar10 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToList<FieldInfo>__);
    puVar6 = Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__;
    FUN_03a9f568(lVar10,*(undefined8 *)
                         Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__);
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
    FUN_03a9f568(lVar11,*(undefined8 *)puVar6);
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_05c7ff00(lVar12,0);
    puVar6 = Method_System_Enum_ToObject__;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x20) = unaff_x23;
      lVar13 = *(long *)puVar6;
      *(long *)(lVar12 + 0x10) = in_stack_000000d0;
      *(long *)(lVar12 + 0x18) = in_stack_000000c8;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_05c7a928(0);
      auVar46 = FUN_05c7c078(uVar14,0);
      lVar13 = FUN_05c5f534(in_stack_000000f8);
      fVar5 = DAT_011b0568;
      if ((lVar13 != 0) && (*(long *)(unaff_x26 + 0x10) != 0)) {
        uVar2 = *(uint *)(*(long *)(unaff_x26 + 0x10) + 0x20);
        if (0x3f < (int)uVar2) {
          fVar30 = *(float *)(lVar13 + 0x28);
          uVar23 = 0;
          uVar28 = 0;
          iVar20 = auVar46._0_4_;
          iVar25 = auVar46._4_4_;
          iVar4 = 0;
          iStack0000000000000074 = 0;
          iStack000000000000005c = 0;
          iStack000000000000003c = 0;
          do {
            if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
            iVar27 = *(int *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x48) + uVar23 * 0x10 + 0xc);
            if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            iVar8 = FUN_05c7a920(0);
            if (in_stack_00000050 == 0) goto LAB_05c6d050;
            iVar22 = 0;
            if (iVar8 != 0) {
              iVar22 = (int)uVar23 / iVar8;
            }
            auVar47 = FUN_03c208d4(in_stack_00000050,iVar22,
                                   *(undefined8 *)
                                    Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__
                                  );
            fVar33 = (float)iVar27;
            iVar27 = 0;
            uVar18 = (ulong)(uint)(iStack0000000000000074 + iVar22 * (int)uVar14 +
                                  iVar20 * (iStack000000000000005c + iVar25 * iStack000000000000003c
                                           ));
            iVar8 = iVar4;
            do {
              iVar22 = 0;
              uStack0000000000000108 = uVar18;
              iVar3 = iVar8;
              do {
                lVar13 = 0;
                do {
                  if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
                  iVar29 = (int)lVar13;
                  iVar1 = (int)uStack0000000000000108 + iVar29;
                  puVar15 = (undefined8 *)
                            (*(long *)(*(long *)(unaff_x26 + 0x18) + 0x58) + (long)iVar1 * 0xc);
                  fVar36 = *(float *)(puVar15 + 1);
                  uVar43 = *puVar15;
                  uVar45 = *(undefined8 *)(in_stack_000000f8 + 0x28);
                  fVar37 = *(float *)(in_stack_000000f8 + 0x30);
                  if (DAT_06bb42c3 == '\0') {
                    FUN_02f08768(PTR_DAT_067c90a8);
                    DAT_06bb42c3 = '\x01';
                  }
                  puVar16 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
                  uVar38 = *puVar16;
                  uVar39 = puVar16[1];
                  uVar40 = puVar16[2];
                  uVar41 = puVar16[3];
                  if (DAT_06bb42c2 == '\0') {
                    FUN_02f08768(PTR_DAT_067c8f78);
                    DAT_06bb42c2 = '\x01';
                  }
                  fVar31 = (float)uVar43 - (float)uVar45;
                  fVar32 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar45 >> 0x20);
                  fVar36 = fVar36 - fVar37;
                  FUN_060dbfb8(&stack0x00000140,CONCAT44(fVar32,fVar31),fVar32,fVar36,uVar38,uVar39,
                               uVar40,uVar41,0);
                  puVar6 = 
                  Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__;
                  if (lVar10 == 0) goto LAB_05c6d050;
                  lVar17 = *(long *)(lVar10 + 0x10);
                  in_stack_00000188 = in_stack_00000148;
                  in_stack_00000180 = in_stack_00000140;
                  in_stack_00000198 = in_stack_00000158;
                  in_stack_00000190 = in_stack_00000150;
                  in_stack_000001a8 = in_stack_00000168;
                  in_stack_000001a0 = in_stack_00000160;
                  in_stack_000001b8 = in_stack_00000178;
                  in_stack_000001b0 = in_stack_00000170;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_05c6d050;
                  uVar26 = *(uint *)(lVar10 + 0x18);
                  if (uVar26 < *(uint *)(lVar17 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)uVar26 * 0x40;
                    *(uint *)(lVar10 + 0x18) = uVar26 + 1;
                    *(undefined8 *)(lVar17 + 0x28) = in_stack_00000148;
                    *(undefined8 *)(lVar17 + 0x20) = in_stack_00000140;
                    *(undefined8 *)(lVar17 + 0x38) = in_stack_00000158;
                    *(undefined8 *)(lVar17 + 0x30) = in_stack_00000150;
                    *(undefined8 *)(lVar17 + 0x48) = in_stack_00000168;
                    *(undefined8 *)(lVar17 + 0x40) = in_stack_00000160;
                    *(undefined8 *)(lVar17 + 0x58) = in_stack_00000178;
                    *(undefined8 *)(lVar17 + 0x50) = in_stack_00000170;
                  }
                  else {
                    in_stack_000001c8 = in_stack_00000148;
                    in_stack_000001c0 = in_stack_00000140;
                    in_stack_000001d8 = in_stack_00000158;
                    in_stack_000001d0 = in_stack_00000150;
                    in_stack_000001e8 = in_stack_00000168;
                    in_stack_000001e0 = in_stack_00000160;
                    FUN_03a9fe08(lVar10,&stack0x000001c0,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  if ((*(long *)(unaff_x26 + 0x18) == 0) || (in_stack_00000138 == 0))
                  goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000138 + 0x18) <= uVar28) {
LAB_05c6d054:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar19 = (long)iVar1;
                  lVar17 = (long)(int)uVar28;
                  *(undefined4 *)(in_stack_00000138 + lVar17 * 4 + 0x20) =
                       *(undefined4 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x88) + lVar19 * 4);
                  if (unaff_x28 == 0) goto LAB_05c6d050;
                  if (*(uint *)(unaff_x28 + 0x18) <= uVar28) goto LAB_05c6d054;
                  pfVar21 = (float *)(unaff_x28 + lVar17 * 4 + 0x20);
                  *pfVar21 = fVar30;
                  if (in_stack_00000130 == 0) goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000130 + 0x18) <= uVar28) goto LAB_05c6d054;
                  lVar24 = in_stack_00000130 + lVar17 * 0x10;
                  *(float *)(lVar24 + 0x20) =
                       (float)(iStack0000000000000074 + auVar47._0_4_ + iVar29);
                  *(float *)(lVar24 + 0x24) =
                       (float)(iStack000000000000005c + auVar47._4_4_ + iVar22);
                  *(float *)(lVar24 + 0x28) =
                       (float)(iStack000000000000003c + auVar47._8_4_ + iVar27);
                  *(float *)(lVar24 + 0x2c) = fVar33;
                  if (in_stack_00000128 == 0) goto LAB_05c6d050;
                  if (*(uint *)(in_stack_00000128 + 0x18) <= uVar28) goto LAB_05c6d054;
                  *(float *)(in_stack_00000128 + lVar17 * 4 + 0x20) =
                       fVar33 / (float)(unaff_w25 + -1);
                  lVar24 = *(long *)(unaff_x26 + 0x18);
                  if (lVar24 == 0) goto LAB_05c6d050;
                  if (*(int *)(lVar24 + 0xa0) < 1) {
                    uVar26 = 0xffffffff;
                  }
                  else {
                    uVar26 = (uint)*(byte *)(*(long *)(lVar24 + 0x98) + lVar19);
                  }
                  if (unaff_x27 == 0) goto LAB_05c6d050;
                  if (*(uint *)(unaff_x27 + 0x18) <= uVar28) goto LAB_05c6d054;
                  *(uint *)(unaff_x27 + lVar17 * 4 + 0x20) = uVar26;
                  if (param_2 != 0) {
                    if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_05c6d054;
                    fVar37 = *(float *)(*(long *)(lVar24 + 0x68) + lVar19 * 4);
                    *(float *)(param_2 + lVar17 * 4 + 0x20) = fVar37;
                    if (*(uint *)(unaff_x28 + 0x18) <= uVar28) goto LAB_05c6d054;
                    fVar42 = fVar37 + -1.0;
                    if (fVar37 <= 1.0) {
                      fVar42 = fVar30;
                    }
                    *pfVar21 = fVar42;
                  }
                  if (lVar9 != 0) {
                    if (*(uint *)(lVar9 + 0x18) <= uVar28) goto LAB_05c6d054;
                    lVar17 = lVar9 + lVar17 * 0x10;
                    pfVar21 = (float *)(*(long *)(lVar24 + 0x78) + (long)iVar1 * 0xc);
                    fVar42 = *pfVar21;
                    fVar44 = pfVar21[1];
                    fVar37 = pfVar21[2];
                    *(undefined4 *)(lVar17 + 0x2c) = 0;
                    *(float *)(lVar17 + 0x28) = fVar37;
                    *(float *)(lVar17 + 0x20) = fVar42;
                    *(float *)(lVar17 + 0x24) = fVar44;
                    if (fVar5 <= fVar42 * fVar42 + fVar44 * fVar44 + fVar37 * fVar37) {
                      fVar34 = -fVar44;
                      fVar35 = -fVar37;
                      uVar39 = FUN_060df954(-fVar42,fVar34,0);
                      if (DAT_06bb42c7 == '\0') {
                        FUN_02f08768(PTR_DAT_067c8f80);
                        DAT_06bb42c7 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      FUN_060dbfb8(&stack0x00000140,fVar31 + fVar42,fVar32 + fVar44,fVar36 + fVar37,
                                   uVar39,fVar34,fVar35,uVar38,0);
                      if (lVar11 == 0) goto LAB_05c6d050;
                      iVar1 = *(int *)(lVar11 + 0x1c);
                      lVar17 = *(long *)(lVar11 + 0x10);
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
                      if (lVar11 == 0) goto LAB_05c6d050;
                      iVar1 = *(int *)(lVar11 + 0x1c);
                      lVar17 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
                      in_stack_00000188 = *(undefined8 *)(lVar17 + 0x48);
                      in_stack_00000180 = *(undefined8 *)(lVar17 + 0x40);
                      in_stack_00000198 = *(undefined8 *)(lVar17 + 0x58);
                      in_stack_00000190 = *(undefined8 *)(lVar17 + 0x50);
                      in_stack_000001a8 = *(undefined8 *)(lVar17 + 0x68);
                      in_stack_000001a0 = *(undefined8 *)(lVar17 + 0x60);
                      in_stack_000001b8 = *(undefined8 *)(lVar17 + 0x78);
                      in_stack_000001b0 = *(undefined8 *)(lVar17 + 0x70);
                      lVar17 = *(long *)(lVar11 + 0x10);
                    }
                    lVar19 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                    ;
                    *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                    if (lVar17 == 0) goto LAB_05c6d050;
                    uVar26 = *(uint *)(lVar11 + 0x18);
                    if (uVar26 < *(uint *)(lVar17 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)uVar26 * 0x40;
                      *(uint *)(lVar11 + 0x18) = uVar26 + 1;
                      *(undefined8 *)(lVar17 + 0x28) = in_stack_00000188;
                      *(undefined8 *)(lVar17 + 0x20) = in_stack_00000180;
                      *(undefined8 *)(lVar17 + 0x38) = in_stack_00000198;
                      *(undefined8 *)(lVar17 + 0x30) = in_stack_00000190;
                      *(undefined8 *)(lVar17 + 0x48) = in_stack_000001a8;
                      *(undefined8 *)(lVar17 + 0x40) = in_stack_000001a0;
                      *(undefined8 *)(lVar17 + 0x58) = in_stack_000001b8;
                      *(undefined8 *)(lVar17 + 0x50) = in_stack_000001b0;
                    }
                    else {
                      in_stack_000001c8 = in_stack_00000188;
                      in_stack_000001c0 = in_stack_00000180;
                      in_stack_000001d8 = in_stack_00000198;
                      in_stack_000001d0 = in_stack_00000190;
                      in_stack_000001e8 = in_stack_000001a8;
                      in_stack_000001e0 = in_stack_000001a0;
                      FUN_03a9fe08(lVar11,&stack0x000001c0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  if (*(int *)(lVar10 + 0x18) < 0x1ff) {
                    if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_05c6d050;
                    if (iVar3 + iVar29 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x20) + -1)
                    goto LAB_05c6cd1c;
                    uVar28 = uVar28 + 1;
                  }
                  else {
LAB_05c6cd1c:
                    lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                                 UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
                    FUN_060ba0e0(lVar17,0);
                    if (lVar17 == 0) goto LAB_05c6d050;
                    FUN_060ba5d8(lVar17,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                                 in_stack_00000138,0);
                    FUN_060ba5d8(lVar17,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                                 unaff_x27,0);
                    FUN_060ba5d8(lVar17,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                );
                    FUN_060ba5d8(lVar17,*(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__,
                                 param_2,0);
                    FUN_060ba5d8(lVar17,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IInteractorView>__,
                                 in_stack_00000128,0);
                    FUN_060ba628(lVar17,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__
                                 ,in_stack_00000130,0);
                    if (lVar9 != 0) {
                      FUN_060ba628(lVar17,*(undefined8 *)
                                           Method_System_Linq_Enumerable_ToList<InstanceHandle>__,
                                   lVar9,0);
                    }
                    if (unaff_x23 == 0) goto LAB_05c6d050;
                    lVar19 = *(long *)(unaff_x23 + 0x10);
                    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
                    if (lVar19 == 0) goto LAB_05c6d050;
                    uVar28 = *(uint *)(unaff_x23 + 0x18);
                    if (uVar28 < *(uint *)(lVar19 + 0x18)) {
                      *(uint *)(unaff_x23 + 0x18) = uVar28 + 1;
                      *(long *)(lVar19 + (long)(int)uVar28 * 8 + 0x20) = lVar17;
                    }
                    else {
                      FUN_03abf904();
                    }
                    puVar6 = 
                    Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                    ;
                    uVar43 = FUN_03aa1ac0(lVar10,*(undefined8 *)
                                                  Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                                         );
                    if (in_stack_000000d0 == 0) goto LAB_05c6d050;
                    lVar17 = *(long *)(in_stack_000000d0 + 0x10);
                    lVar19 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                    ;
                    *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05c6d050;
                    uVar28 = *(uint *)(in_stack_000000d0 + 0x18);
                    if (uVar28 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(in_stack_000000d0 + 0x18) = uVar28 + 1;
                      *(undefined8 *)(lVar17 + (long)(int)uVar28 * 8 + 0x20) = uVar43;
                    }
                    else {
                      FUN_03abf904(in_stack_000000d0,uVar43,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                    *(undefined4 *)(lVar10 + 0x18) = 0;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if ((lVar11 == 0) ||
                       (uVar43 = FUN_03aa1ac0(lVar11,*(undefined8 *)puVar6), in_stack_000000c8 == 0)
                       ) goto LAB_05c6d050;
                    lVar17 = *(long *)(in_stack_000000c8 + 0x10);
                    lVar19 = *(long *)
                              Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                    ;
                    *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05c6d050;
                    uVar28 = *(uint *)(in_stack_000000c8 + 0x18);
                    if (uVar28 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(in_stack_000000c8 + 0x18) = uVar28 + 1;
                      *(undefined8 *)(lVar17 + (long)(int)uVar28 * 8 + 0x20) = uVar43;
                    }
                    else {
                      FUN_03abf904(in_stack_000000c8,uVar43,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar28 = 0;
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  }
                  lVar13 = lVar13 + 1;
                } while (lVar13 != 4);
                uStack0000000000000108 = uStack0000000000000108 + auVar46._0_8_;
                iVar22 = iVar22 + 1;
                iVar3 = iVar3 + 4;
              } while (iVar22 != 4);
              iVar27 = iVar27 + 1;
              uVar18 = uVar18 + (uint)(iVar20 * iVar25);
              iVar8 = iVar8 + 0x10;
            } while (iVar27 != 4);
            iStack0000000000000074 = iStack0000000000000074 + 4;
            if (iVar20 <= iStack0000000000000074) {
              iStack000000000000005c = iStack000000000000005c + 4;
              if (iStack000000000000005c < iVar25) {
                iStack0000000000000074 = 0;
              }
              else {
                iStack000000000000005c = 0;
                iStack0000000000000074 = 0;
                iStack000000000000003c = iStack000000000000003c + 4;
                if (auVar46._8_4_ <= iStack000000000000003c) {
                  iStack000000000000003c = 0;
                }
              }
            }
            uVar23 = uVar23 + 1;
            iVar4 = iVar4 + 0x40;
          } while (uVar23 != uVar2 >> 6);
        }
        *(long *)(unaff_x26 + 0x150) = lVar12;
        return;
      }
    }
  }
LAB_05c6d050:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


