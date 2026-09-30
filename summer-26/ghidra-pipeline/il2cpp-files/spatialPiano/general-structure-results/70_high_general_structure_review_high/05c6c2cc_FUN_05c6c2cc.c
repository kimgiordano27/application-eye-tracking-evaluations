/*
FUNCTION_NAME: FUN_05c6c2cc
ENTRY_POINT: 05c6c2cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05c6c2cc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  float *pfVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  int local_264;
  int local_244;
  int local_22c;
  ulong local_198;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_06bc2ffe & 1) == 0) {
    FUN_02f08768(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToArray<DebugUI_Value>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__);
    FUN_02f08768(
                Method_System_Linq_Enumerable_ToDictionary<KeyValuePair<string,_string>,_string,_string>__
                );
    FUN_02f08768(
                Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                );
    FUN_02f08768(Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__);
    FUN_02f08768(
                Method_System_Linq_Enumerable_ToDictionary<string,_string,_AndroidAssetPackStatus>__
                );
    FUN_02f08768(Method_System_Linq_Enumerable_ToDictionary<string,_string,_bool>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<KeyValuePair<string,_JsonSchema>>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<Character>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<FieldInfo>__);
    FUN_02f08768(UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<Glyph>__);
    FUN_02f08768(Method_System_Reflection_Emit_EnumBuilder_IsByRefImpl__);
    FUN_02f08768(Method_System_Enum_ToObject__);
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<IBoundsClipper>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<ICylinderClipper>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<IInteractorView>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<InstanceHandle>__);
    FUN_02f08768(Method_System_Linq_Enumerable_ToList<int>__);
    DAT_06bc2ffe = 1;
  }
  if (param_2 == 0) goto LAB_05c6d050;
  lVar10 = *(long *)(param_2 + 0x150);
  if (lVar10 == 0) {
    uVar11 = FUN_05c6e944(param_1,param_2);
    puVar8 = Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__;
    if ((uVar11 & 1) == 0) {
      lVar10 = *(long *)(param_2 + 0x18);
      if (lVar10 == 0) {
LAB_05c6d050:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((((*(long *)(lVar10 + 0x48) != 0) && (*(int *)(lVar10 + 0x50) != 0)) &&
          (*(long *)(lVar10 + 0x58) != 0)) && (*(char *)(param_2 + 0x44) != '\0')) {
        iVar2 = *(int *)(param_1 + 0x24);
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__);
        puVar7 = Method_System_Linq_Enumerable_ToDictionary<string,_string,_bool>__;
        FUN_03abf108(lVar10,*(undefined8 *)
                             Method_System_Linq_Enumerable_ToDictionary<string,_string,_bool>__);
        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
        FUN_03abf108(lVar12,*(undefined8 *)puVar7);
        lVar13 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Linq_Enumerable_ToList<Character>__
                                   );
        FUN_03abf108(lVar13,*(undefined8 *)
                             Method_System_Linq_Enumerable_ToDictionary<string,_string,_AndroidAssetPackStatus>__
                    );
        puVar8 = PTR_DAT_067d13f0;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar25 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
          lVar14 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067d13f0,0x1ff);
          puVar7 = PTR_DAT_067cc450;
          lVar15 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cc450,0x1ff);
          lVar16 = FUN_02f0880c(*(undefined8 *)puVar7,0x1ff);
          lVar17 = FUN_02f0880c(*(undefined8 *)puVar7,0x1ff);
          lVar18 = FUN_02f0880c(*(undefined8 *)puVar7,0x1ff);
          lVar26 = *(long *)(param_2 + 0x18);
          if (lVar26 != 0) {
            if (*(int *)(lVar26 + 0x70) < 1) {
              lVar19 = 0;
            }
            else {
              lVar19 = FUN_02f0880c(*(undefined8 *)puVar7,0x1ff);
              lVar26 = *(long *)(param_2 + 0x18);
              if (lVar26 == 0) goto LAB_05c6d050;
            }
            if (*(int *)(lVar26 + 0x80) < 1) {
              lVar26 = 0;
            }
            else {
              lVar26 = FUN_02f0880c(*(undefined8 *)puVar8,0x1ff);
            }
            puVar7 = Method_System_Linq_Enumerable_ToList<FieldInfo>__;
            lVar20 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToList<FieldInfo>__);
            puVar8 = Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__;
            FUN_03a9f568(lVar20,*(undefined8 *)
                                 Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__
                        );
            lVar21 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
            FUN_03a9f568(lVar21,*(undefined8 *)puVar8);
            lVar22 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_System_Linq_Enumerable_ToArray<Volume>__);
            FUN_05c7ff00(lVar22,0);
            puVar8 = Method_System_Enum_ToObject__;
            if (lVar22 != 0) {
              *(long *)(lVar22 + 0x20) = lVar13;
              lVar23 = *(long *)puVar8;
              *(long *)(lVar22 + 0x10) = lVar10;
              *(long *)(lVar22 + 0x18) = lVar12;
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar24 = FUN_05c7a928(0);
              auVar57 = FUN_05c7c078(uVar24,0);
              lVar23 = FUN_05c5f534(param_1);
              fVar6 = DAT_011b0568;
              if ((lVar23 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
                uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + 0x20);
                if (0x3f < (int)uVar3) {
                  fVar41 = *(float *)(lVar23 + 0x28);
                  uVar11 = 0;
                  uVar39 = 0;
                  iVar32 = auVar57._0_4_;
                  iVar36 = auVar57._4_4_;
                  iVar5 = 0;
                  local_22c = 0;
                  local_244 = 0;
                  local_264 = 0;
                  do {
                    if (*(long *)(param_2 + 0x18) == 0) goto LAB_05c6d050;
                    iVar38 = *(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0x48) + uVar11 * 0x10 +
                                     0xc);
                    if (*(int *)(*(long *)Method_System_Enum_ToObject__ + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    iVar9 = FUN_05c7a920(0);
                    if (lVar25 == 0) goto LAB_05c6d050;
                    iVar34 = 0;
                    if (iVar9 != 0) {
                      iVar34 = (int)uVar11 / iVar9;
                    }
                    auVar58 = FUN_03c208d4(lVar25,iVar34,
                                           *(undefined8 *)
                                            Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__
                                          );
                    fVar44 = (float)iVar38;
                    iVar38 = 0;
                    uVar30 = (ulong)(uint)(local_22c + iVar34 * (int)uVar24 +
                                          iVar32 * (local_244 + iVar36 * local_264));
                    iVar9 = iVar5;
                    do {
                      iVar34 = 0;
                      local_198 = uVar30;
                      iVar4 = iVar9;
                      do {
                        lVar23 = 0;
                        do {
                          if (*(long *)(param_2 + 0x18) == 0) goto LAB_05c6d050;
                          iVar40 = (int)lVar23;
                          iVar1 = (int)local_198 + iVar40;
                          puVar27 = (undefined8 *)
                                    (*(long *)(*(long *)(param_2 + 0x18) + 0x58) + (long)iVar1 * 0xc
                                    );
                          fVar47 = *(float *)(puVar27 + 1);
                          uVar54 = *puVar27;
                          uVar56 = *(undefined8 *)(param_1 + 0x28);
                          fVar48 = *(float *)(param_1 + 0x30);
                          if (DAT_06bb42c3 == '\0') {
                            FUN_02f08768(PTR_DAT_067c90a8);
                            DAT_06bb42c3 = '\x01';
                          }
                          puVar28 = *(undefined4 **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
                          uVar49 = *puVar28;
                          uVar50 = puVar28[1];
                          uVar51 = puVar28[2];
                          uVar52 = puVar28[3];
                          if (DAT_06bb42c2 == '\0') {
                            FUN_02f08768(PTR_DAT_067c8f78);
                            DAT_06bb42c2 = '\x01';
                          }
                          fVar42 = (float)uVar54 - (float)uVar56;
                          fVar43 = (float)((ulong)uVar54 >> 0x20) - (float)((ulong)uVar56 >> 0x20);
                          fVar47 = fVar47 - fVar48;
                          FUN_060dbfb8(&local_160,CONCAT44(fVar43,fVar42),fVar43,fVar47,uVar49,
                                       uVar50,uVar51,uVar52,0);
                          puVar8 = 
                          Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                          ;
                          if (lVar20 == 0) goto LAB_05c6d050;
                          lVar29 = *(long *)(lVar20 + 0x10);
                          uStack_118 = uStack_158;
                          local_120 = local_160;
                          uStack_108 = uStack_148;
                          uStack_110 = uStack_150;
                          uStack_f8 = uStack_138;
                          local_100 = local_140;
                          uStack_e8 = uStack_128;
                          local_f0 = uStack_130;
                          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                          if (lVar29 == 0) goto LAB_05c6d050;
                          uVar37 = *(uint *)(lVar20 + 0x18);
                          if (uVar37 < *(uint *)(lVar29 + 0x18)) {
                            lVar29 = lVar29 + (long)(int)uVar37 * 0x40;
                            *(uint *)(lVar20 + 0x18) = uVar37 + 1;
                            *(undefined8 *)(lVar29 + 0x28) = uStack_158;
                            *(undefined8 *)(lVar29 + 0x20) = local_160;
                            *(undefined8 *)(lVar29 + 0x38) = uStack_148;
                            *(undefined8 *)(lVar29 + 0x30) = uStack_150;
                            *(undefined8 *)(lVar29 + 0x48) = uStack_138;
                            *(undefined8 *)(lVar29 + 0x40) = local_140;
                            *(undefined8 *)(lVar29 + 0x58) = uStack_128;
                            *(undefined8 *)(lVar29 + 0x50) = uStack_130;
                          }
                          else {
                            uStack_d8 = uStack_158;
                            local_e0 = local_160;
                            uStack_c8 = uStack_148;
                            uStack_d0 = uStack_150;
                            uStack_b8 = uStack_138;
                            local_c0 = local_140;
                            uStack_a8 = uStack_128;
                            uStack_b0 = uStack_130;
                            FUN_03a9fe08(lVar20,&local_e0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) +
                                          0x70));
                          }
                          if ((*(long *)(param_2 + 0x18) == 0) || (lVar16 == 0)) goto LAB_05c6d050;
                          if (*(uint *)(lVar16 + 0x18) <= uVar39) {
LAB_05c6d054:
                    /* WARNING: Subroutine does not return */
                            FUN_02f089d0();
                          }
                          lVar31 = (long)iVar1;
                          lVar29 = (long)(int)uVar39;
                          *(undefined4 *)(lVar16 + lVar29 * 4 + 0x20) =
                               *(undefined4 *)
                                (*(long *)(*(long *)(param_2 + 0x18) + 0x88) + lVar31 * 4);
                          if (lVar17 == 0) goto LAB_05c6d050;
                          if (*(uint *)(lVar17 + 0x18) <= uVar39) goto LAB_05c6d054;
                          pfVar33 = (float *)(lVar17 + lVar29 * 4 + 0x20);
                          *pfVar33 = fVar41;
                          if (lVar14 == 0) goto LAB_05c6d050;
                          if (*(uint *)(lVar14 + 0x18) <= uVar39) goto LAB_05c6d054;
                          lVar35 = lVar14 + lVar29 * 0x10;
                          *(float *)(lVar35 + 0x20) = (float)(local_22c + auVar58._0_4_ + iVar40);
                          *(float *)(lVar35 + 0x24) = (float)(local_244 + auVar58._4_4_ + iVar34);
                          *(float *)(lVar35 + 0x28) = (float)(local_264 + auVar58._8_4_ + iVar38);
                          *(float *)(lVar35 + 0x2c) = fVar44;
                          if (lVar18 == 0) goto LAB_05c6d050;
                          if (*(uint *)(lVar18 + 0x18) <= uVar39) goto LAB_05c6d054;
                          *(float *)(lVar18 + lVar29 * 4 + 0x20) = fVar44 / (float)(iVar2 + -1);
                          lVar35 = *(long *)(param_2 + 0x18);
                          if (lVar35 == 0) goto LAB_05c6d050;
                          if (*(int *)(lVar35 + 0xa0) < 1) {
                            uVar37 = 0xffffffff;
                          }
                          else {
                            uVar37 = (uint)*(byte *)(*(long *)(lVar35 + 0x98) + lVar31);
                          }
                          if (lVar15 == 0) goto LAB_05c6d050;
                          if (*(uint *)(lVar15 + 0x18) <= uVar39) goto LAB_05c6d054;
                          *(uint *)(lVar15 + lVar29 * 4 + 0x20) = uVar37;
                          if (lVar19 != 0) {
                            if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_05c6d054;
                            fVar48 = *(float *)(*(long *)(lVar35 + 0x68) + lVar31 * 4);
                            *(float *)(lVar19 + lVar29 * 4 + 0x20) = fVar48;
                            if (*(uint *)(lVar17 + 0x18) <= uVar39) goto LAB_05c6d054;
                            fVar53 = fVar48 + -1.0;
                            if (fVar48 <= 1.0) {
                              fVar53 = fVar41;
                            }
                            *pfVar33 = fVar53;
                          }
                          if (lVar26 != 0) {
                            if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_05c6d054;
                            lVar29 = lVar26 + lVar29 * 0x10;
                            pfVar33 = (float *)(*(long *)(lVar35 + 0x78) + (long)iVar1 * 0xc);
                            fVar53 = *pfVar33;
                            fVar55 = pfVar33[1];
                            fVar48 = pfVar33[2];
                            *(undefined4 *)(lVar29 + 0x2c) = 0;
                            *(float *)(lVar29 + 0x28) = fVar48;
                            *(float *)(lVar29 + 0x20) = fVar53;
                            *(float *)(lVar29 + 0x24) = fVar55;
                            if (fVar6 <= fVar53 * fVar53 + fVar55 * fVar55 + fVar48 * fVar48) {
                              fVar45 = -fVar55;
                              fVar46 = -fVar48;
                              uVar50 = FUN_060df954(-fVar53,fVar45,0);
                              if (DAT_06bb42c7 == '\0') {
                                FUN_02f08768(PTR_DAT_067c8f80);
                                DAT_06bb42c7 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                              }
                              FUN_060dbfb8(&local_160,fVar42 + fVar53,fVar43 + fVar55,
                                           fVar47 + fVar48,uVar50,fVar45,fVar46,uVar49,0);
                              if (lVar21 == 0) goto LAB_05c6d050;
                              iVar1 = *(int *)(lVar21 + 0x1c);
                              lVar29 = *(long *)(lVar21 + 0x10);
                              uStack_118 = uStack_158;
                              local_120 = local_160;
                              uStack_108 = uStack_148;
                              uStack_110 = uStack_150;
                              uStack_f8 = uStack_138;
                              local_100 = local_140;
                              uStack_e8 = uStack_128;
                              local_f0 = uStack_130;
                            }
                            else {
                              if (DAT_06bb87a1 == '\0') {
                                FUN_02f08768(PTR_DAT_067c9770);
                                DAT_06bb87a1 = '\x01';
                              }
                              if (lVar21 == 0) goto LAB_05c6d050;
                              iVar1 = *(int *)(lVar21 + 0x1c);
                              lVar29 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
                              uStack_118 = *(undefined8 *)(lVar29 + 0x48);
                              local_120 = *(undefined8 *)(lVar29 + 0x40);
                              uStack_108 = *(undefined8 *)(lVar29 + 0x58);
                              uStack_110 = *(undefined8 *)(lVar29 + 0x50);
                              uStack_f8 = *(undefined8 *)(lVar29 + 0x68);
                              local_100 = *(undefined8 *)(lVar29 + 0x60);
                              uStack_e8 = *(undefined8 *)(lVar29 + 0x78);
                              local_f0 = *(undefined8 *)(lVar29 + 0x70);
                              lVar29 = *(long *)(lVar21 + 0x10);
                            }
                            lVar31 = *(long *)
                                      Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                            ;
                            *(int *)(lVar21 + 0x1c) = iVar1 + 1;
                            if (lVar29 == 0) goto LAB_05c6d050;
                            uVar37 = *(uint *)(lVar21 + 0x18);
                            if (uVar37 < *(uint *)(lVar29 + 0x18)) {
                              lVar29 = lVar29 + (long)(int)uVar37 * 0x40;
                              *(uint *)(lVar21 + 0x18) = uVar37 + 1;
                              *(undefined8 *)(lVar29 + 0x28) = uStack_118;
                              *(undefined8 *)(lVar29 + 0x20) = local_120;
                              *(undefined8 *)(lVar29 + 0x38) = uStack_108;
                              *(undefined8 *)(lVar29 + 0x30) = uStack_110;
                              *(undefined8 *)(lVar29 + 0x48) = uStack_f8;
                              *(undefined8 *)(lVar29 + 0x40) = local_100;
                              *(undefined8 *)(lVar29 + 0x58) = uStack_e8;
                              *(undefined8 *)(lVar29 + 0x50) = local_f0;
                            }
                            else {
                              uStack_d8 = uStack_118;
                              local_e0 = local_120;
                              uStack_c8 = uStack_108;
                              uStack_d0 = uStack_110;
                              uStack_b8 = uStack_f8;
                              local_c0 = local_100;
                              uStack_a8 = uStack_e8;
                              uStack_b0 = local_f0;
                              FUN_03a9fe08(lVar21,&local_e0,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                          if (*(int *)(lVar20 + 0x18) < 0x1ff) {
                            if (*(long *)(param_2 + 0x10) == 0) goto LAB_05c6d050;
                            if (iVar4 + iVar40 == *(int *)(*(long *)(param_2 + 0x10) + 0x20) + -1)
                            goto LAB_05c6cd1c;
                            uVar39 = uVar39 + 1;
                          }
                          else {
LAB_05c6cd1c:
                            lVar29 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo)
                            ;
                            FUN_060ba0e0(lVar29,0);
                            if (lVar29 == 0) goto LAB_05c6d050;
                            FUN_060ba5d8(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<IBoundsClipper>__
                                         ,lVar16,0);
                            FUN_060ba5d8(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<ICylinderClipper>__
                                         ,lVar15,0);
                            FUN_060ba5d8(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__
                                         ,lVar17,0);
                            FUN_060ba5d8(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<int>__,lVar19,
                                         0);
                            FUN_060ba5d8(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<IInteractorView>__
                                         ,lVar18,0);
                            FUN_060ba628(lVar29,*(undefined8 *)
                                                 Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__
                                         ,lVar14,0);
                            if (lVar26 != 0) {
                              FUN_060ba628(lVar29,*(undefined8 *)
                                                                                                      
                                                  Method_System_Linq_Enumerable_ToList<InstanceHandle>__
                                           ,lVar26,0);
                            }
                            if (lVar13 == 0) goto LAB_05c6d050;
                            lVar31 = *(long *)(lVar13 + 0x10);
                            lVar35 = *(long *)Method_System_Linq_Enumerable_ToArray<DebugUI_Value>__
                            ;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar31 == 0) goto LAB_05c6d050;
                            uVar39 = *(uint *)(lVar13 + 0x18);
                            if (uVar39 < *(uint *)(lVar31 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar39 + 1;
                              *(long *)(lVar31 + (long)(int)uVar39 * 8 + 0x20) = lVar29;
                            }
                            else {
                              FUN_03abf904(lVar13,lVar29,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar8 = 
                            Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                            ;
                            uVar54 = FUN_03aa1ac0(lVar20,*(undefined8 *)
                                                                                                                    
                                                  Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                                                 );
                            if (lVar10 == 0) goto LAB_05c6d050;
                            lVar29 = *(long *)(lVar10 + 0x10);
                            lVar31 = *(long *)
                                      Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                            ;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar29 == 0) goto LAB_05c6d050;
                            uVar39 = *(uint *)(lVar10 + 0x18);
                            if (uVar39 < *(uint *)(lVar29 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar39 + 1;
                              *(undefined8 *)(lVar29 + (long)(int)uVar39 * 8 + 0x20) = uVar54;
                            }
                            else {
                              FUN_03abf904(lVar10,uVar54,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                            *(undefined4 *)(lVar20 + 0x18) = 0;
                            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                            if ((lVar21 == 0) ||
                               (uVar54 = FUN_03aa1ac0(lVar21,*(undefined8 *)puVar8), lVar12 == 0))
                            goto LAB_05c6d050;
                            lVar29 = *(long *)(lVar12 + 0x10);
                            lVar31 = *(long *)
                                      Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__
                            ;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar29 == 0) goto LAB_05c6d050;
                            uVar39 = *(uint *)(lVar12 + 0x18);
                            if (uVar39 < *(uint *)(lVar29 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar39 + 1;
                              *(undefined8 *)(lVar29 + (long)(int)uVar39 * 8 + 0x20) = uVar54;
                            }
                            else {
                              FUN_03abf904(lVar12,uVar54,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar39 = 0;
                            *(undefined4 *)(lVar21 + 0x18) = 0;
                            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                          }
                          lVar23 = lVar23 + 1;
                        } while (lVar23 != 4);
                        local_198 = local_198 + auVar57._0_8_;
                        iVar34 = iVar34 + 1;
                        iVar4 = iVar4 + 4;
                      } while (iVar34 != 4);
                      iVar38 = iVar38 + 1;
                      uVar30 = uVar30 + (uint)(iVar32 * iVar36);
                      iVar9 = iVar9 + 0x10;
                    } while (iVar38 != 4);
                    local_22c = local_22c + 4;
                    if (iVar32 <= local_22c) {
                      local_244 = local_244 + 4;
                      if (local_244 < iVar36) {
                        local_22c = 0;
                      }
                      else {
                        local_244 = 0;
                        local_22c = 0;
                        local_264 = local_264 + 4;
                        if (auVar57._8_4_ <= local_264) {
                          local_264 = 0;
                        }
                      }
                    }
                    uVar11 = uVar11 + 1;
                    iVar5 = iVar5 + 0x40;
                  } while (uVar11 != uVar3 >> 6);
                }
                *(long *)(param_2 + 0x150) = lVar22;
                return lVar22;
              }
            }
          }
        }
        goto LAB_05c6d050;
      }
    }
    lVar10 = 0;
  }
  return lVar10;
}


