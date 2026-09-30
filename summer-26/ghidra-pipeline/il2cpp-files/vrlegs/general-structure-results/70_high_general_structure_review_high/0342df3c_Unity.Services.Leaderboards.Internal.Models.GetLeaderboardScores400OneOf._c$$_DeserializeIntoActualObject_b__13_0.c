/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardScores400OneOf.<>c$$<DeserializeIntoActualObject>b__13_0
ENTRY_POINT: 0342df3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint Unity_Services_Leaderboards_Internal_Models_GetLeaderboardScores400OneOf_<>c__<DeserializeIntoActualObject>b__13_0
               (undefined **param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  undefined8 unaff_x21;
  uint unaff_w24;
  long unaff_x25;
  undefined8 unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  int unaff_w29;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float unaff_s9;
  float fVar33;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  uint in_stack_00000068;
  long *in_stack_00000070;
  uint in_stack_00000078;
  ulong in_stack_00000080;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  uint *in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  float in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
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
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  uint uVar34;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  
code_r0x0342df3c:
  FUN_01b5f01c(param_2,&stack0x00000270,*(undefined8 *)param_1[0xa1]);
  if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x128),&stack0x00000270,*(undefined8 *)PTR_DAT_03cbe508
              );
  lVar15 = FUN_037016dc(unaff_x21,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar22 = FUN_036a042c(lVar15,0);
  if (in_stack_00000018._4_4_ == 0) {
    bVar10 = false;
  }
  else {
    iVar12 = FUN_036a03ac(lVar15,0);
    bVar10 = iVar12 == 2;
  }
  if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar23 = FUN_034092a0(lVar15,bVar10,0);
  lVar15 = *in_stack_00000030;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x25) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar15 = lVar15 + unaff_x25 * 0x40;
  *(undefined8 *)(lVar15 + 0x48) = in_stack_00000318;
  *(undefined8 *)(lVar15 + 0x40) = in_stack_00000310;
  *(undefined8 *)(lVar15 + 0x58) = in_stack_00000328;
  *(undefined8 *)(lVar15 + 0x50) = in_stack_00000320;
  *(undefined8 *)(lVar15 + 0x28) = in_stack_000002f8;
  *(undefined8 *)(lVar15 + 0x20) = in_stack_000002f0;
  *(undefined8 *)(lVar15 + 0x38) = in_stack_00000308;
  *(undefined8 *)(lVar15 + 0x30) = in_stack_00000300;
  lVar15 = *(long *)(in_stack_000000b8 + 0x130);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar15 = lVar15 + in_stack_00000048 * 0x10;
  *(undefined4 *)(lVar15 + 0x20) = uVar22;
  *(undefined4 *)(lVar15 + 0x24) = uVar23;
  *(undefined4 *)(lVar15 + 0x28) = 0x3f800000;
  uVar32 = in_stack_000002f0;
LAB_0342e1f0:
  iVar12 = 1;
  *(float *)(lVar15 + 0x2c) = unaff_s9;
LAB_0342e1f8:
  if (unaff_w27 == unaff_w29) {
    do {
      in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + iVar12;
      uVar13 = in_stack_00000078;
      do {
        do {
          while( true ) {
            unaff_w24 = uVar13;
            unaff_x28 = unaff_x28 + 1;
            if (unaff_x28 == in_stack_00000080) goto LAB_0342e248;
            unaff_x21 = FUN_01fb3ff4(in_stack_00000058,in_stack_00000098,unaff_x28 & 0xffffffff,
                                     *(undefined8 *)
                                      System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo);
            if (unaff_x28 != *in_stack_000000a8) break;
            lVar15 = *in_stack_00000070;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar15 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            *(undefined4 *)(lVar15 + unaff_x28 * 4 + 0x20) = 0xffffffff;
            uVar13 = unaff_w24;
          }
          lVar15 = *in_stack_00000038;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000078 = unaff_w24 + 1;
          uVar13 = in_stack_00000078;
        } while ((int)*(uint *)(lVar15 + 0x18) <= (int)unaff_w24);
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        in_stack_00000048 = (long)(int)unaff_w24;
        *(int *)(lVar15 + in_stack_00000048 * 4 + 0x20) = (int)unaff_x28;
        lVar15 = *in_stack_00000070;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar15 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(uint *)(lVar15 + unaff_x28 * 4 + 0x20) = unaff_w24;
        if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar13 = in_stack_00000078;
      } while ((in_stack_00000060._4_4_ <= (int)unaff_w24) ||
              (uVar13 = in_stack_00000078,
              (int)in_stack_00000068 <= *(int *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18)));
      uVar25 = FUN_03701768(unaff_x21,0);
      in_stack_00000040._4_4_ = (int)uVar25;
      iVar11 = 6;
      if (in_stack_00000040._4_4_ != 2) {
        iVar11 = 0;
      }
      lVar15 = *(long *)(in_stack_000000b8 + 0x120);
      if (in_stack_00000040._4_4_ == 0) {
        iVar11 = 1;
      }
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((int)in_stack_00000068 < *(int *)(lVar15 + 0x18) + iVar11) {
        uVar14 = FUN_0342ed34(uVar25,in_stack_000000a8,unaff_x28 & 0xffffffff);
        if ((uVar14 & 1) != 0) {
LAB_0342e248:
          if (in_stack_00000028._4_4_ == 0) {
            uVar13 = FUN_0342eb14(in_stack_000000b8,in_stack_000000b0);
          }
          else {
            if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar13 = *(uint *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18);
            if ((int)in_stack_00000068 < 1) {
              uVar22 = 0;
              uVar14 = 0;
            }
            else {
              lVar15 = *in_stack_000000a0;
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar17 = 0;
              piVar20 = (int *)(lVar15 + 0x38);
              uVar14 = 0;
              do {
                if (*(uint *)(lVar15 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                piVar1 = piVar20 + -2;
                iVar12 = *piVar20;
                uVar17 = uVar17 + 1;
                piVar20 = piVar20 + 7;
                uVar14 = NEON_smax(uVar14,CONCAT44(iVar12 + (int)((ulong)*(undefined8 *)piVar1 >>
                                                                 0x20),
                                                   iVar12 + (int)*(undefined8 *)piVar1),4);
              } while (in_stack_00000068 != uVar17);
              uVar22 = (undefined4)(uVar14 >> 0x20);
              uVar14 = uVar14 & 0xffffffff;
            }
            uVar23 = FUN_036c1d60(uVar14,0);
            *(undefined4 *)(in_stack_000000b8 + 0x168) = uVar23;
            iVar11 = FUN_036c1d60(uVar22,0);
            iVar12 = *(int *)(in_stack_000000b8 + 0x168);
            *(int *)(in_stack_000000b8 + 0x16c) = iVar11;
            puVar9 = PTR_DAT_03cbec20;
            puVar8 = PTR_DAT_03cbe590;
            fVar7 = DAT_00d38bdc;
            if (0 < (int)uVar13) {
              uVar14 = 0;
              lVar15 = 0x20;
              lVar16 = 0xe0;
              do {
                if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_02215a88(*(long *)(in_stack_000000b8 + 0x120),uVar14 & 0xffffffff,
                             &stack0x00000270,*(undefined8 *)puVar8);
                lVar18 = *(long *)(in_stack_000000b8 + 0x130);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                uVar34 = (uint)uVar32;
                lVar21 = (long)(int)uVar34;
                if (*(uint *)(lVar18 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                fVar33 = *(float *)(lVar18 + lVar21 * 0x10 + 0x20);
                if (DAT_0411f262 == '\0') {
                  FUN_01ab69ac(puVar9);
                  DAT_0411f262 = '\x01';
                }
                fVar30 = ABS(fVar33);
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                }
                fVar30 = fVar30 * fVar7;
                fVar24 = **(float **)(*(long *)puVar9 + 0xb8) * 8.0;
                if (fVar30 <= fVar24) {
                  fVar30 = fVar24;
                }
                if (fVar30 <= ABS(0.0 - fVar33)) {
                  lVar18 = *(long *)(in_stack_000000b8 + 0x130);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  fVar30 = *(float *)(lVar18 + lVar21 * 0x10 + 0x2c);
                  fVar33 = ABS(fVar30);
                  if (fVar33 <= 1.0) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * fVar7;
                  if (fVar33 <= fVar24) {
                    fVar33 = fVar24;
                  }
                  if (fVar33 <= ABS(-1.0 - fVar30)) {
                    lVar18 = *in_stack_00000038;
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    lVar19 = *(long *)(in_stack_000000b8 + 0x158);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    uVar6 = *(uint *)(lVar18 + lVar21 * 4 + 0x20);
                    if (*(uint *)(lVar19 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    iVar4 = *(int *)(lVar19 + (long)(int)uVar6 * 4 + 0x20);
                    FUN_02215a88(*(long *)(in_stack_000000b8 + 0x128),uVar14 & 0xffffffff,
                                 &stack0x00000270,*(undefined8 *)puVar8);
                    lVar18 = *in_stack_000000a0;
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    uVar34 = uVar34 + iVar4;
                    if (*(uint *)(lVar18 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    lVar18 = lVar18 + (long)(int)uVar34 * 0x1c;
                    iVar4 = *(int *)(lVar18 + 0x30);
                    iVar3 = *(int *)(lVar18 + 0x34);
                    iVar5 = *(int *)(lVar18 + 0x38);
                    if (DAT_0411f171 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbe2f0);
                      DAT_0411f171 = '\x01';
                    }
                    lVar18 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
                    uVar31 = *(undefined8 *)(lVar18 + 0x58);
                    uVar28 = *(undefined8 *)(lVar18 + 0x68);
                    uVar26 = *(undefined8 *)(lVar18 + 0x60);
                    uVar25 = *(undefined8 *)(lVar18 + 0x78);
                    uVar29 = ((undefined8 *)((ulong)&stack0x00000270 | 4))[1];
                    uVar27 = *(undefined8 *)((ulong)&stack0x00000270 | 4);
                    lVar18 = *in_stack_00000050;
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    piVar20 = (int *)(lVar18 + lVar16);
                    *piVar20 = iVar4;
                    piVar20[1] = iVar3;
                    piVar20[2] = iVar5;
                    lVar18 = *in_stack_00000030;
                    in_stack_000001c0 = uVar31;
                    in_stack_000001c8 = uVar26;
                    in_stack_000001d0 = uVar28;
                    in_stack_000001e0 = uVar27;
                    in_stack_000001e8 = uVar29;
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    in_stack_00000150._4_4_ = (float)iVar5;
                    puVar2 = (undefined8 *)(lVar18 + lVar15);
                    in_stack_00000140 = (1.0 / (float)iVar12) * in_stack_00000150._4_4_;
                    in_stack_00000108 = puVar2[1];
                    uVar32 = *puVar2;
                    in_stack_00000118 = puVar2[3];
                    in_stack_00000110 = puVar2[2];
                    in_stack_00000128 = puVar2[5];
                    in_stack_00000120 = puVar2[4];
                    in_stack_00000138 = puVar2[7];
                    in_stack_00000130 = puVar2[6];
                    ((undefined8 *)((ulong)&stack0x00000140 | 4))[1] = uVar29;
                    *(undefined8 *)((ulong)&stack0x00000140 | 4) = uVar27;
                    in_stack_00000150._4_4_ = (1.0 / (float)iVar11) * in_stack_00000150._4_4_;
                    fStack0000000000000170 = (1.0 / (float)iVar12) * (float)iVar4;
                    fStack0000000000000174 = (1.0 / (float)iVar11) * (float)iVar3;
                    in_stack_00000100 = uVar32;
                    in_stack_00000178 = uVar25;
                    in_stack_00000158 = uVar31;
                    in_stack_00000160 = uVar26;
                    in_stack_00000168 = uVar28;
                    FUN_036bd894(&stack0x00000180,&stack0x00000140,&stack0x00000100,0);
                    if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    puVar2[5] = in_stack_000001a8;
                    puVar2[4] = in_stack_000001a0;
                    puVar2[7] = in_stack_000001b8;
                    puVar2[6] = in_stack_000001b0;
                    puVar2[1] = in_stack_00000188;
                    *puVar2 = in_stack_00000180;
                    puVar2[3] = in_stack_00000198;
                    puVar2[2] = in_stack_00000190;
                  }
                }
                uVar14 = uVar14 + 1;
                lVar15 = lVar15 + 0x40;
                lVar16 = lVar16 + 0x1c8;
              } while (uVar13 != uVar14);
              iVar12 = *(int *)(in_stack_000000b8 + 0x168);
              iVar11 = *(int *)(in_stack_000000b8 + 0x16c);
            }
            if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = 1;
            FUN_034091a4(0,in_stack_000000b8 + 0xe8,iVar12,iVar11,0x10,1,
                         *(undefined8 *)Mono_CSharp_PropertySpec_TypeInfo,0);
            *(float *)(in_stack_000000b8 + 0x100) =
                 *(float *)(in_stack_000000b0 + 0x1a4) * *(float *)(in_stack_000000b0 + 0x1a4);
            uVar22 = *(undefined4 *)(in_stack_000000b0 + 0x274);
            *(undefined1 *)(in_stack_000000b8 + 0xf0) = 0;
            *(undefined1 *)(in_stack_000000b8 + 0x42) = 1;
            *(undefined4 *)(in_stack_000000b8 + 0x104) = uVar22;
          }
          FUN_033a2194(&stack0x000003c8,0);
          return uVar13 & 1;
        }
        lVar15 = *(long *)(in_stack_000000b8 + 0x120);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (iVar11 != 0) goto code_r0x0342ddbc;
      iVar12 = 0;
    } while( true );
  }
  unaff_w29 = unaff_w29 + 1;
  lVar15 = *(long *)(in_stack_000000b8 + 0x120);
  if (lVar15 == 0) goto LAB_0342e73c;
  goto LAB_0342ddd8;
code_r0x0342ddbc:
  if (lVar15 == 0) {
LAB_0342e73c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  unaff_w29 = 0;
  iVar12 = 0;
  unaff_w27 = iVar11 + -1;
  unaff_s9 = (float)*(int *)(lVar15 + 0x18);
LAB_0342ddd8:
  uVar13 = *(uint *)(lVar15 + 0x18);
  unaff_x25 = (long)(int)uVar13;
  uVar14 = FUN_036f60c4(unaff_x26,unaff_x28 & 0xffffffff,&stack0x00000378,0);
  if ((((uVar14 & 1) == 0) || (*(char *)(in_stack_000000b0 + 0x278) == '\0')) ||
     (uVar14 = FUN_0342ed34(uVar14,in_stack_000000a8,unaff_x28 & 0xffffffff), (uVar14 & 1) == 0))
  goto LAB_0342e1f8;
  lVar15 = *(long *)(in_stack_000000b8 + 0x158);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar34 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
  if (uVar34 == 0xffffffff) goto LAB_0342e1f8;
  if (in_stack_00000040._4_4_ != 0) {
    if (in_stack_00000040._4_4_ == 2) {
      lVar15 = *in_stack_000000a0;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar22 = *(undefined4 *)(lVar15 + (long)(int)uVar34 * 0x1c + 0x38);
      lVar15 = FUN_037016dc(unaff_x21,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar11 = FUN_036a03ac(lVar15,0);
      if (*(int *)(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_0342cb28(uVar22,iVar11 == 2);
      lVar15 = *in_stack_00000050;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar16 = lVar15 + unaff_x25 * 0x1c8;
      uVar14 = FUN_034080f8(uVar25,in_stack_00000010,in_stack_00000020,unaff_x28 & 0xffffffff,
                            unaff_w29,&stack0x000002f0,lVar16 + 0x20,lVar16 + 0x60,
                            lVar15 + unaff_x25 * 0x1c8 + 0xec);
      unaff_x26 = in_stack_00000010;
      if ((uVar14 & 1) != 0) {
        param_2 = *(long *)(in_stack_000000b8 + 0x120);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        param_1 = &PTR_DAT_03cbe000;
        goto code_r0x0342df3c;
      }
    }
    goto LAB_0342e1f8;
  }
  lVar15 = *in_stack_00000050;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar16 = lVar15 + unaff_x25 * 0x1c8;
  uVar14 = FUN_03407fec(unaff_x26,in_stack_00000020,unaff_x28 & 0xffffffff,&stack0x00000330,
                        lVar16 + 0x20,lVar16 + 0x60,lVar15 + unaff_x25 * 0x1c8 + 0xec,0);
  if ((uVar14 & 1) == 0) goto LAB_0342e1f8;
  if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x120),&stack0x00000270,*(undefined8 *)PTR_DAT_03cbe508
              );
  if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x128),&stack0x00000270,*(undefined8 *)PTR_DAT_03cbe508
              );
  lVar15 = FUN_037016dc(unaff_x21,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar22 = FUN_036a042c(lVar15,0);
  if (in_stack_00000018._4_4_ == 0) {
    bVar10 = false;
  }
  else {
    iVar12 = FUN_036a03ac(lVar15,0);
    bVar10 = iVar12 == 2;
  }
  if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar23 = FUN_034092a0(lVar15,bVar10,0);
  lVar15 = *in_stack_00000030;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar15 = lVar15 + unaff_x25 * 0x40;
  *(undefined8 *)(lVar15 + 0x48) = in_stack_00000358;
  *(undefined8 *)(lVar15 + 0x40) = in_stack_00000350;
  *(undefined8 *)(lVar15 + 0x58) = in_stack_00000368;
  *(undefined8 *)(lVar15 + 0x50) = in_stack_00000360;
  *(undefined8 *)(lVar15 + 0x28) = in_stack_00000338;
  *(undefined8 *)(lVar15 + 0x20) = in_stack_00000330;
  *(undefined8 *)(lVar15 + 0x38) = in_stack_00000348;
  *(undefined8 *)(lVar15 + 0x30) = in_stack_00000340;
  lVar15 = *(long *)(in_stack_000000b8 + 0x130);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar15 = lVar15 + in_stack_00000048 * 0x10;
  *(undefined4 *)(lVar15 + 0x20) = uVar22;
  *(undefined4 *)(lVar15 + 0x24) = uVar23;
  *(undefined4 *)(lVar15 + 0x28) = 0;
  uVar32 = in_stack_00000330;
  goto LAB_0342e1f0;
}


