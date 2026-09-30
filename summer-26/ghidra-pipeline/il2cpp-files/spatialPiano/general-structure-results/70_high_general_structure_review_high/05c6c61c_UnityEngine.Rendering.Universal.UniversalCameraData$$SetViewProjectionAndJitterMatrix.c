/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalCameraData$$SetViewProjectionAndJitterMatrix
ENTRY_POINT: 05c6c61c
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


void UnityEngine_Rendering_Universal_UniversalCameraData__SetViewProjectionAndJitterMatrix
               (long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int unaff_w25;
  int iVar26;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
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
  
  puVar6 = Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__;
  FUN_03a9f568(param_1,*(undefined8 *)
                        Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__);
  lVar8 = thunk_FUN_02f45270(*unaff_x20);
  FUN_03a9f568(lVar8,*(undefined8 *)puVar6);
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__);
  FUN_05c7ff00(lVar9,0);
  puVar6 = Method_System_Enum_ToObject__;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x20) = unaff_x23;
    lVar10 = *(long *)puVar6;
    *(long *)(lVar9 + 0x10) = in_stack_000000d0;
    *(long *)(lVar9 + 0x18) = in_stack_000000c8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05c7a928(0);
    auVar43 = FUN_05c7c078(uVar11,0);
    lVar10 = FUN_05c5f534(in_stack_000000f8);
    fVar5 = DAT_011b0568;
    if ((lVar10 != 0) && (*(long *)(unaff_x26 + 0x10) != 0)) {
      uVar2 = *(uint *)(*(long *)(unaff_x26 + 0x10) + 0x20);
      if (0x3f < (int)uVar2) {
        fVar27 = *(float *)(lVar10 + 0x28);
        uVar20 = 0;
        uVar25 = 0;
        iVar17 = auVar43._0_4_;
        iVar22 = auVar43._4_4_;
        iVar4 = 0;
        iStack0000000000000074 = 0;
        iStack000000000000005c = 0;
        iStack000000000000003c = 0;
        do {
          if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
          iVar24 = *(int *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x48) + uVar20 * 0x10 + 0xc);
          if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          iVar7 = FUN_05c7a920(0);
          if (in_stack_00000050 == 0) goto LAB_05c6d050;
          iVar19 = 0;
          if (iVar7 != 0) {
            iVar19 = (int)uVar20 / iVar7;
          }
          auVar44 = FUN_03c208d4(in_stack_00000050,iVar19,
                                 *(undefined8 *)
                                  Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__);
          fVar30 = (float)iVar24;
          iVar24 = 0;
          uVar15 = (ulong)(uint)(iStack0000000000000074 + iVar19 * (int)uVar11 +
                                iVar17 * (iStack000000000000005c + iVar22 * iStack000000000000003c))
          ;
          iVar7 = iVar4;
          do {
            iVar19 = 0;
            uStack0000000000000108 = uVar15;
            iVar3 = iVar7;
            do {
              lVar10 = 0;
              do {
                if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_05c6d050;
                iVar26 = (int)lVar10;
                iVar1 = (int)uStack0000000000000108 + iVar26;
                puVar12 = (undefined8 *)
                          (*(long *)(*(long *)(unaff_x26 + 0x18) + 0x58) + (long)iVar1 * 0xc);
                fVar33 = *(float *)(puVar12 + 1);
                uVar40 = *puVar12;
                uVar42 = *(undefined8 *)(in_stack_000000f8 + 0x28);
                fVar34 = *(float *)(in_stack_000000f8 + 0x30);
                if (DAT_06bb42c3 == '\0') {
                  FUN_02f08768(PTR_DAT_067c90a8);
                  DAT_06bb42c3 = '\x01';
                }
                puVar13 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
                uVar35 = *puVar13;
                uVar36 = puVar13[1];
                uVar37 = puVar13[2];
                uVar38 = puVar13[3];
                if (DAT_06bb42c2 == '\0') {
                  FUN_02f08768(PTR_DAT_067c8f78);
                  DAT_06bb42c2 = '\x01';
                }
                fVar28 = (float)uVar40 - (float)uVar42;
                fVar29 = (float)((ulong)uVar40 >> 0x20) - (float)((ulong)uVar42 >> 0x20);
                fVar33 = fVar33 - fVar34;
                FUN_060dbfb8(&stack0x00000140,CONCAT44(fVar29,fVar28),fVar29,fVar33,uVar35,uVar36,
                             uVar37,uVar38,0);
                puVar6 = 
                Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__;
                if (param_1 == 0) goto LAB_05c6d050;
                lVar14 = *(long *)(param_1 + 0x10);
                in_stack_00000188 = in_stack_00000148;
                in_stack_00000180 = in_stack_00000140;
                in_stack_00000198 = in_stack_00000158;
                in_stack_00000190 = in_stack_00000150;
                in_stack_000001a8 = in_stack_00000168;
                in_stack_000001a0 = in_stack_00000160;
                in_stack_000001b8 = in_stack_00000178;
                in_stack_000001b0 = in_stack_00000170;
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_05c6d050;
                uVar23 = *(uint *)(param_1 + 0x18);
                if (uVar23 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)uVar23 * 0x40;
                  *(uint *)(param_1 + 0x18) = uVar23 + 1;
                  *(undefined8 *)(lVar14 + 0x28) = in_stack_00000148;
                  *(undefined8 *)(lVar14 + 0x20) = in_stack_00000140;
                  *(undefined8 *)(lVar14 + 0x38) = in_stack_00000158;
                  *(undefined8 *)(lVar14 + 0x30) = in_stack_00000150;
                  *(undefined8 *)(lVar14 + 0x48) = in_stack_00000168;
                  *(undefined8 *)(lVar14 + 0x40) = in_stack_00000160;
                  *(undefined8 *)(lVar14 + 0x58) = in_stack_00000178;
                  *(undefined8 *)(lVar14 + 0x50) = in_stack_00000170;
                }
                else {
                  in_stack_000001c8 = in_stack_00000148;
                  in_stack_000001c0 = in_stack_00000140;
                  in_stack_000001d8 = in_stack_00000158;
                  in_stack_000001d0 = in_stack_00000150;
                  in_stack_000001e8 = in_stack_00000168;
                  in_stack_000001e0 = in_stack_00000160;
                  FUN_03a9fe08(param_1,&stack0x000001c0,
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
                }
                if ((*(long *)(unaff_x26 + 0x18) == 0) || (in_stack_00000138 == 0))
                goto LAB_05c6d050;
                if (*(uint *)(in_stack_00000138 + 0x18) <= uVar25) {
LAB_05c6d054:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                lVar16 = (long)iVar1;
                lVar14 = (long)(int)uVar25;
                *(undefined4 *)(in_stack_00000138 + lVar14 * 4 + 0x20) =
                     *(undefined4 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x88) + lVar16 * 4);
                if (unaff_x28 == 0) goto LAB_05c6d050;
                if (*(uint *)(unaff_x28 + 0x18) <= uVar25) goto LAB_05c6d054;
                pfVar18 = (float *)(unaff_x28 + lVar14 * 4 + 0x20);
                *pfVar18 = fVar27;
                if (in_stack_00000130 == 0) goto LAB_05c6d050;
                if (*(uint *)(in_stack_00000130 + 0x18) <= uVar25) goto LAB_05c6d054;
                lVar21 = in_stack_00000130 + lVar14 * 0x10;
                *(float *)(lVar21 + 0x20) = (float)(iStack0000000000000074 + auVar44._0_4_ + iVar26)
                ;
                *(float *)(lVar21 + 0x24) = (float)(iStack000000000000005c + auVar44._4_4_ + iVar19)
                ;
                *(float *)(lVar21 + 0x28) = (float)(iStack000000000000003c + auVar44._8_4_ + iVar24)
                ;
                *(float *)(lVar21 + 0x2c) = fVar30;
                if (in_stack_00000128 == 0) goto LAB_05c6d050;
                if (*(uint *)(in_stack_00000128 + 0x18) <= uVar25) goto LAB_05c6d054;
                *(float *)(in_stack_00000128 + lVar14 * 4 + 0x20) = fVar30 / (float)(unaff_w25 + -1)
                ;
                lVar21 = *(long *)(unaff_x26 + 0x18);
                if (lVar21 == 0) goto LAB_05c6d050;
                if (*(int *)(lVar21 + 0xa0) < 1) {
                  uVar23 = 0xffffffff;
                }
                else {
                  uVar23 = (uint)*(byte *)(*(long *)(lVar21 + 0x98) + lVar16);
                }
                if (unaff_x27 == 0) goto LAB_05c6d050;
                if (*(uint *)(unaff_x27 + 0x18) <= uVar25) goto LAB_05c6d054;
                *(uint *)(unaff_x27 + lVar14 * 4 + 0x20) = uVar23;
                if (unaff_x29 != 0) {
                  if (*(uint *)(unaff_x29 + 0x18) <= uVar25) goto LAB_05c6d054;
                  fVar34 = *(float *)(*(long *)(lVar21 + 0x68) + lVar16 * 4);
                  *(float *)(unaff_x29 + lVar14 * 4 + 0x20) = fVar34;
                  if (*(uint *)(unaff_x28 + 0x18) <= uVar25) goto LAB_05c6d054;
                  fVar39 = fVar34 + -1.0;
                  if (fVar34 <= 1.0) {
                    fVar39 = fVar27;
                  }
                  *pfVar18 = fVar39;
                }
                if (unaff_x21 != 0) {
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05c6d054;
                  lVar14 = unaff_x21 + lVar14 * 0x10;
                  pfVar18 = (float *)(*(long *)(lVar21 + 0x78) + (long)iVar1 * 0xc);
                  fVar39 = *pfVar18;
                  fVar41 = pfVar18[1];
                  fVar34 = pfVar18[2];
                  *(undefined4 *)(lVar14 + 0x2c) = 0;
                  *(float *)(lVar14 + 0x28) = fVar34;
                  *(float *)(lVar14 + 0x20) = fVar39;
                  *(float *)(lVar14 + 0x24) = fVar41;
                  if (fVar5 <= fVar39 * fVar39 + fVar41 * fVar41 + fVar34 * fVar34) {
                    fVar31 = -fVar41;
                    fVar32 = -fVar34;
                    uVar36 = FUN_060df954(-fVar39,fVar31,0);
                    if (DAT_06bb42c7 == '\0') {
                      FUN_02f08768(PTR_DAT_067c8f80);
                      DAT_06bb42c7 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    FUN_060dbfb8(&stack0x00000140,fVar28 + fVar39,fVar29 + fVar41,fVar33 + fVar34,
                                 uVar36,fVar31,fVar32,uVar35,0);
                    if (lVar8 == 0) goto LAB_05c6d050;
                    iVar1 = *(int *)(lVar8 + 0x1c);
                    lVar14 = *(long *)(lVar8 + 0x10);
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
                    if (lVar8 == 0) goto LAB_05c6d050;
                    iVar1 = *(int *)(lVar8 + 0x1c);
                    lVar14 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
                    in_stack_00000188 = *(undefined8 *)(lVar14 + 0x48);
                    in_stack_00000180 = *(undefined8 *)(lVar14 + 0x40);
                    in_stack_00000198 = *(undefined8 *)(lVar14 + 0x58);
                    in_stack_00000190 = *(undefined8 *)(lVar14 + 0x50);
                    in_stack_000001a8 = *(undefined8 *)(lVar14 + 0x68);
                    in_stack_000001a0 = *(undefined8 *)(lVar14 + 0x60);
                    in_stack_000001b8 = *(undefined8 *)(lVar14 + 0x78);
                    in_stack_000001b0 = *(undefined8 *)(lVar14 + 0x70);
                    lVar14 = *(long *)(lVar8 + 0x10);
                  }
                  lVar16 = *(long *)
                            Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                  ;
                  *(int *)(lVar8 + 0x1c) = iVar1 + 1;
                  if (lVar14 == 0) goto LAB_05c6d050;
                  uVar23 = *(uint *)(lVar8 + 0x18);
                  if (uVar23 < *(uint *)(lVar14 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)uVar23 * 0x40;
                    *(uint *)(lVar8 + 0x18) = uVar23 + 1;
                    *(undefined8 *)(lVar14 + 0x28) = in_stack_00000188;
                    *(undefined8 *)(lVar14 + 0x20) = in_stack_00000180;
                    *(undefined8 *)(lVar14 + 0x38) = in_stack_00000198;
                    *(undefined8 *)(lVar14 + 0x30) = in_stack_00000190;
                    *(undefined8 *)(lVar14 + 0x48) = in_stack_000001a8;
                    *(undefined8 *)(lVar14 + 0x40) = in_stack_000001a0;
                    *(undefined8 *)(lVar14 + 0x58) = in_stack_000001b8;
                    *(undefined8 *)(lVar14 + 0x50) = in_stack_000001b0;
                  }
                  else {
                    in_stack_000001c8 = in_stack_00000188;
                    in_stack_000001c0 = in_stack_00000180;
                    in_stack_000001d8 = in_stack_00000198;
                    in_stack_000001d0 = in_stack_00000190;
                    in_stack_000001e8 = in_stack_000001a8;
                    in_stack_000001e0 = in_stack_000001a0;
                    FUN_03a9fe08(lVar8,&stack0x000001c0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(int *)(param_1 + 0x18) < 0x1ff) {
                  if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_05c6d050;
                  if (iVar3 + iVar26 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x20) + -1)
                  goto LAB_05c6cd1c;
                  uVar25 = uVar25 + 1;
                }
                else {
LAB_05c6cd1c:
                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                               UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
                  FUN_060ba0e0(lVar14,0);
                  if (lVar14 == 0) goto LAB_05c6d050;
                  FUN_060ba5d8(lVar14,*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                               in_stack_00000138,0);
                  FUN_060ba5d8(lVar14,*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                               unaff_x27,0);
                  FUN_060ba5d8(lVar14,*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                              );
                  FUN_060ba5d8(lVar14,*(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__,
                               unaff_x29,0);
                  FUN_060ba5d8(lVar14,*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<IInteractorView>__,
                               in_stack_00000128,0);
                  FUN_060ba628(lVar14,*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__
                               ,in_stack_00000130,0);
                  if (unaff_x21 != 0) {
                    FUN_060ba628(lVar14,*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<InstanceHandle>__,
                                 unaff_x21,0);
                  }
                  if (unaff_x23 == 0) goto LAB_05c6d050;
                  lVar16 = *(long *)(unaff_x23 + 0x10);
                  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_05c6d050;
                  uVar25 = *(uint *)(unaff_x23 + 0x18);
                  if (uVar25 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(unaff_x23 + 0x18) = uVar25 + 1;
                    *(long *)(lVar16 + (long)(int)uVar25 * 8 + 0x20) = lVar14;
                  }
                  else {
                    FUN_03abf904();
                  }
                  puVar6 = 
                  Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                  ;
                  uVar40 = FUN_03aa1ac0(param_1,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                                       );
                  if (in_stack_000000d0 == 0) goto LAB_05c6d050;
                  lVar14 = *(long *)(in_stack_000000d0 + 0x10);
                  lVar16 = *(long *)
                            Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                  ;
                  *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_05c6d050;
                  uVar25 = *(uint *)(in_stack_000000d0 + 0x18);
                  if (uVar25 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(in_stack_000000d0 + 0x18) = uVar25 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar25 * 8 + 0x20) = uVar40;
                  }
                  else {
                    FUN_03abf904(in_stack_000000d0,uVar40,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(undefined4 *)(param_1 + 0x18) = 0;
                  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                  if ((lVar8 == 0) ||
                     (uVar40 = FUN_03aa1ac0(lVar8,*(undefined8 *)puVar6), in_stack_000000c8 == 0))
                  goto LAB_05c6d050;
                  lVar14 = *(long *)(in_stack_000000c8 + 0x10);
                  lVar16 = *(long *)
                            Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                  ;
                  *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_05c6d050;
                  uVar25 = *(uint *)(in_stack_000000c8 + 0x18);
                  if (uVar25 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(in_stack_000000c8 + 0x18) = uVar25 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar25 * 8 + 0x20) = uVar40;
                  }
                  else {
                    FUN_03abf904(in_stack_000000c8,uVar40,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar25 = 0;
                  *(undefined4 *)(lVar8 + 0x18) = 0;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                }
                lVar10 = lVar10 + 1;
              } while (lVar10 != 4);
              uStack0000000000000108 = uStack0000000000000108 + auVar43._0_8_;
              iVar19 = iVar19 + 1;
              iVar3 = iVar3 + 4;
            } while (iVar19 != 4);
            iVar24 = iVar24 + 1;
            uVar15 = uVar15 + (uint)(iVar17 * iVar22);
            iVar7 = iVar7 + 0x10;
          } while (iVar24 != 4);
          iStack0000000000000074 = iStack0000000000000074 + 4;
          if (iVar17 <= iStack0000000000000074) {
            iStack000000000000005c = iStack000000000000005c + 4;
            if (iStack000000000000005c < iVar22) {
              iStack0000000000000074 = 0;
            }
            else {
              iStack000000000000005c = 0;
              iStack0000000000000074 = 0;
              iStack000000000000003c = iStack000000000000003c + 4;
              if (auVar43._8_4_ <= iStack000000000000003c) {
                iStack000000000000003c = 0;
              }
            }
          }
          uVar20 = uVar20 + 1;
          iVar4 = iVar4 + 0x40;
        } while (uVar20 != uVar2 >> 6);
      }
      *(long *)(unaff_x26 + 0x150) = lVar9;
      return;
    }
  }
LAB_05c6d050:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


