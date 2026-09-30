/*
FUNCTION_NAME: thunk_FUN_068cfc1c
ENTRY_POINT: 068cfc18
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void thunk_FUN_068cfc1c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  char cVar20;
  int iVar21;
  bool bVar22;
  ulong uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  char acStack_a4 [4];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_78;
  
  puVar7 = PTR_DAT_070c1b68;
  if ((DAT_07559248 & 1) == 0) {
    FUN_03188a78(System_Reflection_Internal_EncodingHelper_String_CreateStringFromEncoding_TypeInfo)
    ;
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Endo_EndoUtilities_MapPointCallback_TypeInfo
                );
    FUN_03188a78(Sentry_Internal_Enricher_<>c_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                );
    FUN_03188a78(System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                );
    FUN_03188a78(UnityEngine_EnumDataUtility_<>c_TypeInfo);
    FUN_03188a78(System_Net_FtpWebRequest_<>c_TypeInfo);
    FUN_03188a78(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_03188a78(System_Reflection_Internal_PooledStringBuilder_<>c__DisplayClass8_0_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_07559248 = 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  fStack_78 = 0.0;
  uStack_80 = 0;
  fStack_88 = 0.0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  acStack_a4[0] = '\0';
  auStack_b8._0_8_ = 0;
  auStack_b8._8_8_ = 0;
  auStack_c8._0_8_ = 0;
  auStack_c8._8_8_ = 0;
  auStack_d8._0_8_ = 0;
  auStack_d8._8_8_ = 0;
  uStack_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar13 = FUN_069d69b8(uVar18,0,0);
  if ((uVar13 & 1) == 0) {
LAB_068cfd60:
    *(undefined4 *)(param_1 + 0x148) = 0;
    uVar13 = FUN_068d05d8(param_1,param_1 + 0x118,(int *)(param_1 + 0x128));
    if (((uVar13 & 1) != 0) && (*(int *)(param_1 + 0x128) != 0)) {
      if (*(char *)(param_1 + 0x1c3) == '\0') {
        bVar11 = 0;
      }
      else {
        plVar19 = *(long **)(param_1 + 0xf8);
        if (plVar19 == (long *)0x0) goto LAB_068d0024;
        lVar14 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
               ) {
              puVar15 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
              goto LAB_068cfe28;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_031c0d08(plVar19,*(long *)
                                        System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                               ,4);
LAB_068cfe28:
        bVar11 = (*(code *)*puVar15)(plVar19,puVar15[1]);
      }
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        bVar10 = false;
      }
      else {
        if (*(long *)(param_1 + 0x110) == 0) goto LAB_068d0024;
        bVar10 = *(int *)(*(long *)(param_1 + 0x110) + 0x278) == 0;
      }
      FUN_068d095c(param_1,param_1 + 0x118,*(undefined4 *)(param_1 + 0x128),bVar10,&uStack_80,
                   &uStack_90);
      bVar12 = FUN_068d0c64(param_1,param_1 + 0x118,*(undefined4 *)(param_1 + 0x128),&uStack_a0,
                            acStack_a4);
      *(byte *)(param_1 + 0x1a5) = bVar12 & 1;
      puVar9 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
      puVar8 = 
      Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo;
      puVar7 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo;
      if ((bVar11 & 1) != 0) {
        plVar19 = *(long **)(param_1 + 0xf8);
        if (plVar19 != (long *)0x0) {
          iVar21 = 0;
          do {
            lVar16 = *plVar19;
            lVar14 = *(long *)puVar7;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar15 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_068cff10;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_031c0d08(plVar19,lVar14,2);
LAB_068cff10:
            lVar14 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            auVar6._8_8_ = auStack_b8._8_8_;
            auVar6._0_8_ = auStack_b8._0_8_;
            auVar5._8_8_ = auStack_c8._8_8_;
            auVar5._0_8_ = auStack_c8._0_8_;
            auVar31._8_8_ = auStack_d8._8_8_;
            auVar31._0_8_ = auStack_d8._0_8_;
            if (lVar14 == 0) break;
            bVar22 = iVar21 < *(int *)(lVar14 + 0x18);
            if (*(int *)(lVar14 + 0x18) <= iVar21) goto LAB_068d0028;
            plVar19 = *(long **)(param_1 + 0xf8);
            auStack_d8 = auVar31;
            auStack_c8 = auVar5;
            auStack_b8 = auVar6;
            if (plVar19 == (long *)0x0) break;
            lVar16 = *plVar19;
            uVar23 = *(ulong *)(param_1 + 0x90);
            lVar14 = *(long *)puVar7;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar15 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_068cff8c;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_031c0d08(plVar19,lVar14,2);
LAB_068cff8c:
            lVar14 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            if (lVar14 == 0) break;
            plVar19 = (long *)FUN_042e47a4(lVar14,iVar21,*(undefined8 *)puVar9);
            if (plVar19 == (long *)0x0) break;
            lVar14 = *plVar19;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
                  puVar15 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                  goto LAB_068d0000;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_031c0d08(plVar19,*(long *)puVar8,4);
LAB_068d0000:
            uVar13 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            if ((uVar13 & uVar23) >> 0x20 != 0) goto LAB_068d002c;
            plVar19 = *(long **)(param_1 + 0xf8);
            iVar21 = iVar21 + 1;
          } while (plVar19 != (long *)0x0);
        }
        goto LAB_068d0024;
      }
LAB_068d0028:
      bVar22 = false;
LAB_068d002c:
      bVar12 = bVar10 & bVar11 & bVar22;
      bVar4 = 0;
      if (*(char *)(param_1 + 0x98) != '\0') {
        bVar4 = *(byte *)(param_1 + 0x1a5);
      }
      if (((bVar4 & bVar10) == 0 && (acStack_a4[0] == '\0' && bVar12 == 0)) ||
         (1.0 <= *(float *)(param_1 + 0x8c))) {
        cVar20 = '\0';
      }
      else {
        *(undefined4 *)(param_1 + 0x128) = 0x14;
        *(undefined4 *)(param_1 + 200) = 0x13;
        if (bVar12 != 0) {
          FUN_068d0fb4(param_1,&uStack_80,&uStack_a0);
        }
        cVar20 = '\x01';
      }
      FUN_068d1258(param_1 + 0x118,*(undefined4 *)(param_1 + 0x128));
      uVar13 = FUN_068d1258(param_1 + 0x138,*(undefined4 *)(param_1 + 0x128));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x148) = 0;
      }
      uVar13 = FUN_068d1258(param_1 + 0x150,*(undefined4 *)(param_1 + 0x128));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x160) = 0;
      }
      if (cVar20 != '\0') {
        if (*(char *)(param_1 + 0x69) != '\0') {
          if ((*(char *)(param_1 + 0x188) != '\0') && (0 < *(int *)(param_1 + 0x160))) {
            fVar30 = *(float *)(param_1 + 0x6c);
            fVar24 = (float)FUN_069e3244(0);
            fVar30 = fVar30 * fVar24;
            fVar24 = 1.0;
            if (fVar30 <= 1.0) {
              fVar24 = fVar30;
            }
            fVar29 = (float)*(undefined8 *)(param_1 + 0x18c);
            fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x18c) >> 0x20);
            fVar26 = 0.0;
            if (0.0 <= fVar30) {
              fVar26 = fVar24;
            }
            uStack_90 = CONCAT44(fVar28 + ((float)((ulong)uStack_90 >> 0x20) - fVar28) * fVar26,
                                 fVar29 + ((float)uStack_90 - fVar29) * fVar26);
            fStack_88 = *(float *)(param_1 + 0x194) +
                        fVar26 * (fStack_88 - *(float *)(param_1 + 0x194));
            uVar18 = **(undefined8 **)(param_1 + 0x150);
            fVar29 = *(float *)(*(undefined8 **)(param_1 + 0x150) + 1);
            fVar24 = (float)uVar18;
            fVar30 = (float)((ulong)uVar18 >> 0x20);
            uStack_80 = CONCAT44(fVar30 + ((float)((ulong)uStack_80 >> 0x20) - fVar30) * fVar26,
                                 fVar24 + ((float)uStack_80 - fVar24) * fVar26);
            fStack_78 = fVar29 + fVar26 * (fStack_78 - fVar29);
          }
          *(float *)(param_1 + 0x194) = fStack_88;
          *(undefined8 *)(param_1 + 0x18c) = uStack_90;
        }
        FUN_068d1d48(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x128),&uStack_80,
                     &uStack_90,&uStack_a0,param_1 + 0x118);
      }
      uVar1 = *(uint *)(param_1 + 0x160);
      *(char *)(param_1 + 0x188) = cVar20;
      if (uVar1 == *(uint *)(param_1 + 0x128)) {
        if ((((0 < (int)uVar1) && (*(char *)(param_1 + 0x69) != '\0')) &&
            ((int)uVar1 <= *(int *)(param_1 + 0x158))) && ((int)uVar1 <= *(int *)(param_1 + 0x120)))
        {
          lVar14 = *(long *)(param_1 + 0x150) + (ulong)uVar1 * 0xc;
          lVar16 = *(long *)(param_1 + 0x118) + (ulong)uVar1 * 0xc;
          uVar18 = *(undefined8 *)(lVar14 + -0xc);
          uVar27 = *(undefined8 *)(lVar16 + -0xc);
          fVar24 = (float)uVar18 - (float)uVar27;
          fVar30 = (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
          fVar26 = *(float *)(lVar14 + -4) - *(float *)(lVar16 + -4);
          bVar10 = *(float *)(param_1 + 0xac) < fVar26 * fVar26 + fVar24 * fVar24 + fVar30 * fVar30;
          goto LAB_068d0234;
        }
      }
      else {
        bVar10 = true;
LAB_068d0234:
        *(bool *)(param_1 + 0xcc) = bVar10;
      }
      FUN_068d1314(param_1,bVar11 & 1,cVar20,&uStack_80,&uStack_a0);
      puVar7 = UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_<>c_TypeInfo;
      if (((cVar20 == '\0') && (*(char *)(param_1 + 0x69) != '\0')) &&
         (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x128))) {
        bVar12 = *(byte *)(param_1 + 0xcc) ^ 1;
      }
      else {
        bVar12 = 0;
      }
      if (*(char *)(param_1 + 0x24) == '\0' && bVar12 == 0) {
        FUN_045cc3cc(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),0,
                     *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),0,
                     *(undefined4 *)(param_1 + 0x128),
                     *(undefined8 *)
                      System_Reflection_Internal_PooledStringBuilder_<>c__DisplayClass8_0_TypeInfo);
        uVar25 = *(undefined4 *)(param_1 + 0x128);
      }
      else {
        auStack_b8 = FUN_036d6638(param_1 + 0x118,
                                  *(undefined8 *)
                                   UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_<>c_TypeInfo
                                 );
        auStack_c8 = FUN_036d6638(param_1 + 0x150,*(undefined8 *)puVar7);
        auStack_d8 = FUN_036d6638(param_1 + 0x138,*(undefined8 *)puVar7);
        cVar20 = *(char *)(param_1 + 0x24);
        if ((cVar20 == '\0') || (*(char *)(param_1 + 0x2c) == '\0')) {
          uVar25 = *(undefined4 *)(param_1 + 0x28);
        }
        else {
          uVar25 = FUN_068d1758(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
                                *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                                param_1,&uStack_80,&uStack_a0,
                                *(byte *)(param_1 + 0x1a5) | bVar11 & 1,
                                *(undefined1 *)(param_1 + 0x34));
          cVar20 = *(char *)(param_1 + 0x24);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x148);
        uVar3 = *(undefined4 *)(param_1 + 0x128);
        fVar30 = *(float *)(param_1 + 0x6c);
        fVar24 = (float)FUN_069e3244(0);
        uVar25 = FUN_068d1e30(uVar25,fVar30 * fVar24,uVar2,uVar3,bVar12 != 0,cVar20 != '\0',
                              auStack_b8,auStack_c8,auStack_d8);
      }
      *(undefined4 *)(param_1 + 0x148) = uVar25;
      if ((*(char *)(param_1 + 0x1a5) == '\0') && ((*(byte *)(param_1 + 0x68) & bVar11 & 1) == 0)) {
        FUN_068d1cc4(param_1);
        FUN_068d1944(param_1,*(undefined8 *)(param_1 + 0x58));
      }
      else {
        if (((bVar11 & 1) == 0) && (*(char *)(param_1 + 0x1c1) != '\0')) {
          lVar14 = *(long *)(param_1 + 0x108);
          if (lVar14 == 0) goto LAB_068d0024;
          if (*(char *)(lVar14 + 0xa8) != '\0') {
            lVar16 = *(long *)(lVar14 + 0x30);
            lVar14 = FUN_068b0760(lVar14,0);
            if (lVar14 == 0) goto LAB_068d0024;
            FUN_042e54fc(&uStack_108,lVar14,*(undefined8 *)UnityEngine_EnumDataUtility_<>c_TypeInfo)
            ;
            puVar8 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
            puVar7 = 
            Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Endo_EndoUtilities_MapPointCallback_TypeInfo
            ;
            puStack_e8 = puStack_100;
            uStack_f0 = uStack_108;
            uStack_e0 = uStack_f8;
            uStack_108 = 0;
            puStack_100 = &uStack_f0;
            do {
              do {
                uVar13 = FUN_054518b4(&uStack_f0,*(undefined8 *)puVar7);
                if ((uVar13 & 1) == 0) {
                  FUN_054518b0(&uStack_f0,
                               *(undefined8 *)
                                System_Reflection_Internal_EncodingHelper_String_CreateStringFromEncoding_TypeInfo
                              );
                  if (param_1 == 0) goto LAB_068d0024;
                  puVar15 = (undefined8 *)(param_1 + 0x60);
                  uVar25 = 1;
                  goto LAB_068d046c;
                }
                auVar31 = thunk_FUN_031c3cac(uStack_e0,*(undefined8 *)puVar8);
                lVar14 = auVar31._0_8_;
              } while (lVar14 == 0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8(lVar14,auVar31._8_8_,lVar14);
              }
              uVar13 = FUN_068568bc(lVar16,*(undefined8 *)(param_1 + 0x108),lVar14,0);
            } while ((uVar13 & 1) == 0);
            FUN_054518b0(&uStack_f0,
                         *(undefined8 *)
                          System_Reflection_Internal_EncodingHelper_String_CreateStringFromEncoding_TypeInfo
                        );
          }
        }
        uVar25 = 0;
        puVar15 = (undefined8 *)(param_1 + 0x50);
LAB_068d046c:
        FUN_068d1944(param_1,*puVar15);
        FUN_068d1968(param_1,uVar25);
      }
      lVar14 = *(long *)(param_1 + 0xd8);
      if (*(int *)(param_1 + 0x148) < 2) {
        if (lVar14 != 0) {
          FUN_069a0b64(lVar14,0,0);
          return;
        }
      }
      else if (lVar14 != 0) {
        FUN_069a0b64(lVar14,1,0);
        if (*(long *)(param_1 + 0xd8) != 0) {
          FUN_0699e13c(*(long *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x148),0);
          if (*(long *)(param_1 + 0xd8) != 0) {
            FUN_0699e764(*(long *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x138),
                         *(undefined8 *)(param_1 + 0x140),0);
            FUN_045cc3cc(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),0,
                         *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),0,
                         *(undefined4 *)(param_1 + 0x148),
                         *(undefined8 *)
                          System_Reflection_Internal_PooledStringBuilder_<>c__DisplayClass8_0_TypeInfo
                        );
            *(undefined1 *)(param_1 + 0xcc) = 0;
            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x148);
            return;
          }
        }
      }
      goto LAB_068d0024;
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x108);
    if (lVar14 == 0) goto LAB_068d0024;
    if ((*(char *)(lVar14 + 0x59) == '\0') || (uVar13 = FUN_068a9b28(lVar14,0), (uVar13 & 1) == 0))
    goto LAB_068cfd60;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_069a0b64(*(long *)(param_1 + 0xd8),0,0);
    return;
  }
LAB_068d0024:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


