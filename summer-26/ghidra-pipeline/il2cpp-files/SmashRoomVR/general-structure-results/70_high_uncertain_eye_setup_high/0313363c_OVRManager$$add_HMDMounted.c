/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 0313363c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDMounted(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 in_w8;
  uint *puVar6;
  float *pfVar7;
  long unaff_x19;
  long *plVar8;
  char *unaff_x20;
  long unaff_x21;
  long lVar9;
  long unaff_x23;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  ulong uVar38;
  float fStack000000000000001c;
  float fStack000000000000002c;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 uStack00000000000000e8;
  
  *(undefined1 *)(unaff_x19 + 0xea9) = in_w8;
  uStack00000000000000d8 = 0;
  _uStack00000000000000e0 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c0 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  if ((unaff_x23 != 0) && (plVar8 = *(long **)(unaff_x23 + 0x10), plVar8 != (long *)0x0)) {
    uVar33 = *(undefined8 *)((long)plVar8 + 0x104);
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    FUN_03135054();
    if (*(char *)(unaff_x23 + 0x18) != '\0') {
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0x11] = 0;
      plVar8[0x10] = 0;
      plVar8[0x13] = 0;
      plVar8[0x12] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      thunk_FUN_01b4f09c(plVar8 + 10,0);
      return;
    }
    lVar9 = *(long *)(unaff_x23 + 0x20);
    if (lVar9 != 0) {
      FUN_03afb0c4(lVar9,*(undefined8 *)(unaff_x21 + 0x70),0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      puVar6 = *(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      uVar34 = *puVar6;
      fVar19 = (float)puVar6[1];
      uVar10 = puVar6[2];
      fVar31 = fVar19;
      lVar4 = FUN_0391c27c(lVar9,0);
      if (lVar4 != 0) {
        fVar11 = (float)FUN_039291ac(lVar4,0);
        fVar29 = fVar31;
        fVar32 = param_3;
        lVar4 = FUN_0391c27c(lVar9,0);
        if (lVar4 != 0) {
          fVar12 = (float)FUN_03928d34(lVar4,0);
          fVar27 = fVar32;
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar22 = DAT_00b55370;
          fVar20 = param_3 * param_3;
          fVar13 = SQRT(fVar20 + fVar11 * fVar11 + fVar31 * fVar31);
          if (fVar13 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
            fStack000000000000001c = *pfVar7;
            fStack000000000000002c = pfVar7[1];
            fVar13 = pfVar7[2];
          }
          else {
            fVar27 = -fVar31;
            fStack000000000000001c = -fVar11 / fVar13;
            fVar20 = fVar27 / fVar13;
            fVar13 = -param_3 / fVar13;
            fStack000000000000002c = fVar20;
          }
          fVar31 = *(float *)(unaff_x23 + 0x28);
          fVar37 = *(float *)(unaff_x23 + 0x2c);
          fVar11 = *(float *)(unaff_x23 + 0x30);
          lVar4 = FUN_0391c27c(lVar9,0);
          if (lVar4 != 0) {
            fVar14 = (float)FUN_039291ac(lVar4,0);
            fVar15 = fVar20;
            fVar21 = fVar27;
            lVar4 = FUN_0391c27c(lVar9,0);
            if (lVar4 != 0) {
              fVar11 = fVar11 - fVar27;
              fVar37 = fVar37 - fVar20;
              fVar31 = fVar31 - fVar14;
              fVar27 = (float)FUN_039291ac(lVar4,0);
              uStack00000000000000d8 = CONCAT44(fVar37,fVar31);
              _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,fVar11);
              if (DAT_03fed25d == '\0') {
                thunk_FUN_01ad9084(
                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                  );
                DAT_03fed25d = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar20 = SQRT(fVar21 * fVar21 + fVar27 * fVar27 + fVar15 * fVar15);
              if (fVar20 <= fVar22) {
                if (DAT_03fed257 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed257 = '\x01';
                }
                pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
                fVar27 = *pfVar7;
                fVar15 = pfVar7[1];
                fVar21 = pfVar7[2];
              }
              else {
                fVar27 = fVar27 / fVar20;
                fVar15 = fVar15 / fVar20;
                fVar21 = fVar21 / fVar20;
              }
              _uStack00000000000000e0 = CONCAT44(fVar27,uStack00000000000000e0);
              uStack00000000000000e8 = CONCAT44(fVar21,fVar15);
              fVar27 = fVar13 * fVar21 +
                       fStack000000000000001c * fVar27 + fStack000000000000002c * fVar15;
              if (DAT_03fed263 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__
                                  );
                DAT_03fed263 = '\x01';
              }
              fVar22 = ABS(fVar27);
              uVar24 = 0;
              if (fVar22 <= 0.0) {
                fVar22 = 0.0;
              }
              fVar15 = **(float **)
                         (*(long *)
                           Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8
                         ) * 8.0;
              fVar20 = fVar22 * DAT_00b55490;
              if (fVar22 * DAT_00b55490 <= fVar15) {
                fVar20 = fVar15;
              }
              uVar23 = (ulong)(uint)ABS(0.0 - fVar27);
              uVar26 = (ulong)(uint)fVar19;
              uVar38 = (ulong)uVar10;
              if (fVar20 <= ABS(0.0 - fVar27)) {
                fVar31 = fStack000000000000001c * fVar31;
                uVar24 = (ulong)(uint)fVar31;
                fVar31 = fVar13 * fVar11 + fVar31 + fStack000000000000002c * fVar37;
                uVar23 = (ulong)(uint)fVar31;
                uVar16 = (ulong)uVar34;
                if (0.0 < ((fVar32 * fVar13 +
                           fVar12 * fStack000000000000001c + fVar29 * fStack000000000000002c) -
                          fVar31) / fVar27) {
                  uVar16 = FUN_038f7ac0(&stack0x000000d8,0);
                  uVar26 = uVar23;
                  uVar38 = uVar24;
                }
              }
              else {
                uVar16 = (ulong)uVar34;
              }
              fVar31 = (float)uVar23;
              fVar19 = (float)uVar24;
              if (*(long *)(unaff_x21 + 0x70) != 0) {
                lVar4 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                fVar29 = *(float *)(unaff_x23 + 0x28);
                fVar32 = *(float *)(unaff_x23 + 0x2c);
                fVar11 = *(float *)(unaff_x23 + 0x30);
                lVar5 = FUN_0391c27c(lVar9,0);
                if ((lVar5 != 0) && (fVar27 = (float)FUN_039291ac(lVar5,0), lVar4 != 0)) {
                  uVar23 = (ulong)(uint)(fVar11 - fVar19);
                  uVar24 = (ulong)(uint)(fVar32 - fVar31);
                  FUN_03928dd4(fVar29 - fVar27,uVar24,uVar23,lVar4,0);
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    lVar4 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                    uVar30 = *(undefined4 *)(unaff_x23 + 0x28);
                    uVar35 = *(undefined4 *)(unaff_x23 + 0x2c);
                    uVar36 = *(undefined4 *)(unaff_x23 + 0x30);
                    lVar5 = FUN_0391c27c(lVar9,0);
                    if ((lVar5 != 0) && (uVar17 = FUN_03929130(lVar5,0), lVar4 != 0)) {
                      thunk_FUN_0392a110(uVar30,uVar35,uVar36,uVar17,uVar24,uVar23,lVar4,0);
                      if (*(long *)(unaff_x21 + 0x70) != 0) {
                        uVar24 = uVar26;
                        uVar23 = uVar38;
                        uVar30 = FUN_038f13a0(uVar16,uVar26,uVar38,*(long *)(unaff_x21 + 0x70),0);
                        fVar19 = (float)uVar23;
                        *(undefined4 *)((long)plVar8 + 0x104) = uVar30;
                        fVar31 = (float)uVar24;
                        *(float *)(plVar8 + 0x21) = fVar31;
                        if (*(long *)(unaff_x21 + 0x38) != 0) {
                          FUN_03b278e4(*(long *)(unaff_x21 + 0x38),plVar8,
                                       *(undefined8 *)(unaff_x21 + 0x80),0);
                          FUN_03133434(&stack0x00000080,*(undefined8 *)(unaff_x21 + 0x80),lVar9);
                          lVar4 = *(long *)(unaff_x23 + 0x10);
                          memcpy(&stack0x00000030,&stack0x00000080,0x50);
                          if (lVar4 != 0) {
                            __dest = (void *)(lVar4 + 0x50);
                            memcpy(__dest,&stack0x00000030,0x50);
                            thunk_FUN_01b4f09c(__dest,0);
                            lVar4 = *(long *)(unaff_x21 + 0x80);
                            if (lVar4 != 0) {
                              iVar1 = *(int *)(lVar4 + 0x18);
                              *(undefined4 *)(lVar4 + 0x18) = 0;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (0 < iVar1) {
                                FUN_03062488(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                              }
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                lVar4 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                                lVar5 = FUN_0391c27c(lVar9,0);
                                if (lVar5 != 0) {
                                  fVar11 = (float)FUN_03928d34(lVar5,0);
                                  fVar29 = fVar19;
                                  fVar32 = fVar31;
                                  lVar5 = FUN_0391c27c(lVar9,0);
                                  if ((lVar5 != 0) &&
                                     (fVar27 = (float)FUN_039291ac(lVar5,0), lVar4 != 0)) {
                                    uVar23 = (ulong)(uint)(fVar19 - fVar29);
                                    uVar24 = (ulong)(uint)(fVar31 - fVar32);
                                    FUN_03928dd4(fVar11 - fVar27,uVar24,uVar23,lVar4,0);
                                    if (*(long *)(unaff_x21 + 0x70) != 0) {
                                      lVar4 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                                      lVar5 = FUN_0391c27c(lVar9,0);
                                      if (lVar5 != 0) {
                                        uVar17 = FUN_03928d34(lVar5,0);
                                        uVar25 = uVar24;
                                        uVar28 = uVar23;
                                        lVar9 = FUN_0391c27c(lVar9,0);
                                        if ((lVar9 != 0) &&
                                           (uVar18 = FUN_03929130(lVar9,0), lVar4 != 0)) {
                                          thunk_FUN_0392a110(uVar17,uVar24,uVar23,uVar18,uVar25,
                                                             uVar28,lVar4,0);
                                          if (*(long *)(unaff_x21 + 0x70) != 0) {
                                            fVar31 = (float)FUN_038f13a0(uVar16,uVar26,uVar38,
                                                                         *(long *)(unaff_x21 + 0x70)
                                                                         ,0);
                                            *(float *)((long)plVar8 + 0x104) = fVar31;
                                            *(float *)(plVar8 + 0x21) = (float)uVar26;
                                            if (*unaff_x20 == '\0') {
                                              uVar33 = CONCAT44((float)uVar26 -
                                                                (float)((ulong)uVar33 >> 0x20),
                                                                fVar31 - (float)uVar33);
                                            }
                                            else {
                                              if (DAT_03fed2da == '\0') {
                                                thunk_FUN_01ad9084(
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  );
                                                DAT_03fed2da = '\x01';
                                              }
                                              uVar33 = **(undefined8 **)
                                                         (*(long *)
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  + 0xb8);
                                            }
                                            *(undefined8 *)((long)plVar8 + 0x10c) = uVar33;
                                            *(undefined4 *)(plVar8 + 0x29) = 0;
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


