/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.HttpClient$$.ctor
ENTRY_POINT: 05f7a5d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Matchmaker_Http_HttpClient___ctor(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulong unaff_x22;
  long lVar9;
  long *unaff_x25;
  long unaff_x26;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float unaff_s15;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  float fStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  long in_stack_00000160;
  float fStack00000000000001b8;
  float fStack00000000000001bc;
  
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f7a438 with catch @ 05f7a5d0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f7a5b0 with catch @ 05f7a5d4
                        */
  uStack00000000000000f8 = in_stack_00000120;
  uStack00000000000000f0 = in_stack_00000118;
  uStack0000000000000108 = in_stack_00000130;
  uStack0000000000000100 = in_stack_00000128;
  uStack0000000000000110 = in_stack_00000138;
  FUN_0637e6f4();
  if (in_stack_00000160 == 0) goto LAB_05f7af04;
  if (*(int *)(in_stack_00000160 + 0x7c) != 0) {
    if (((*(int *)(*unaff_x25 + 0xe4) == 0) && (thunk_FUN_02df485c(), in_stack_00000160 == 0)) ||
       (*(long *)(in_stack_00000160 + 0x90) == 0)) goto LAB_05f7af04;
    uVar7 = FUN_05fa7008(*(long *)(in_stack_00000160 + 0x90),0);
    if (*(int *)(*(long *)PTR_DAT_06a0d0d0 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d0d0);
    }
    FUN_0636baa4(&stack0x00000118,uVar7,0);
    FUN_0637e6f4();
    if (in_stack_00000160 == 0) goto LAB_05f7af04;
  }
  lVar9 = in_stack_00000160;
  fVar12 = 1.0;
  iVar8 = *(int *)(in_stack_00000160 + 0xa0);
  fVar10 = (1.0 - *(float *)(in_stack_00000160 + 0x100)) + DAT_010fcefc;
  fVar13 = fVar12;
  if (fVar10 <= 1.0) {
    fVar13 = fVar10;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar13;
  }
  if (iVar8 == 2) {
    fVar11 = powf(fVar11 + 1.0,5.0);
  }
  fVar23 = *(float *)(lVar9 + 0x108);
  fVar10 = 1.0 - *(float *)(lVar9 + 0xfc);
  fVar13 = fVar12;
  if ((unaff_x22 & 1) == 0) {
    fVar13 = -1.0;
  }
  if (fVar10 <= 1.0) {
    fVar12 = fVar10;
  }
  fVar18 = 0.0;
  if (0.0 <= fVar10) {
    fVar18 = fVar12;
  }
  fVar12 = 0.0;
  if (0.0 <= fVar18) {
    fVar12 = fVar18;
  }
  fVar12 = expf(fVar12 * 4.0 + 0.0);
  if (iVar8 == 3) {
    fVar10 = *(float *)(lVar9 + 0x34);
  }
  else {
    fVar10 = 1.0 / (float)*(int *)(lVar9 + 0x104);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_06374f58(fVar13,fVar11,fVar12,fVar10);
  if (in_stack_00000160 != 0) {
    if (*(int *)(in_stack_00000160 + 0xa0) == 3) {
      if ((*(int *)(*unaff_x25 + 0xe4) == 0) && (thunk_FUN_02df485c(), in_stack_00000160 == 0))
      goto LAB_05f7af04;
      fVar23 = *(float *)(in_stack_00000160 + 0x3c);
      fVar10 = *(float *)(in_stack_00000160 + 0x44);
      fVar12 = 0.0;
      fVar13 = (float)*(int *)(in_stack_00000160 + 0x40);
    }
    else if (*(int *)(in_stack_00000160 + 0xa0) == 2) {
      fVar10 = 1.0 / (float)*(int *)(in_stack_00000160 + 0x104);
      fVar13 = cosf(fVar10 * DAT_010fd08c);
      fVar10 = fVar10 * DAT_010fcd08;
      fVar13 = fVar13 - fVar23 * fVar13;
      fVar12 = tanf(fVar10 * 0.5);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar12 = fVar12 * fVar13;
    }
    else {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar13 = 0.0;
      fVar10 = 0.0;
      fVar12 = 0.0;
    }
    FUN_06374f58(fVar23,fVar13,fVar10,fVar12);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((in_stack_00000160 != 0) &&
       (FUN_06374f58((float)*(int *)(in_stack_00000160 + 0x7c),unaff_s10,
                     *(undefined4 *)(in_stack_00000160 + 0x48)), fVar23 = fStack0000000000000150,
       fVar11 = fStack000000000000014c, fVar10 = fStack0000000000000148,
       fVar12 = fStack0000000000000144, fVar13 = fStack0000000000000140,
       puVar3 = Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__, in_stack_00000160 != 0
       )) {
      fStack00000000000000ac = fStack00000000000000ac * unaff_s15;
      fStack00000000000000a8 = unaff_s13 * unaff_s15;
      in_stack_00000098 = unaff_s11 * in_stack_00000098;
      fStack0000000000000094 = unaff_s12 * fStack0000000000000094;
      fStack00000000000001b8 = fStack00000000000001b8 * fStack0000000000000090;
      fStack00000000000001bc = fStack00000000000001bc * in_stack_00000088._4_4_;
      if ((*(char *)(in_stack_00000160 + 0x6c) == '\0') ||
         ((iVar8 = *(int *)(in_stack_00000160 + 0x70) + -1, iVar8 == 0 ||
          (*(int *)(in_stack_00000160 + 0xa0) == 3)))) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar16 = fStack0000000000000150;
        fVar14 = fStack0000000000000144;
        fVar18 = fStack0000000000000140;
        if (in_stack_00000160 != 0) {
          fVar13 = fVar13 + fVar13 * (fVar10 + -1.0);
          fVar12 = fVar12 + fVar12 * (fVar10 + -1.0);
          fVar10 = fVar23 * fVar12 - fVar11 * fVar13;
          fVar13 = -(fVar12 * fVar11) - fVar23 * fVar13;
          if ((*(char *)(in_stack_00000160 + 0xe4) == '\0') ||
             (((*(int *)(*unaff_x25 + 0xe4) != 0 || (thunk_FUN_02df485c(), in_stack_00000160 != 0))
              && (fVar14 = fVar14 - fVar14, fVar18 = fVar18 - fVar18, fVar12 = fVar13,
                 fStack00000000000000ac =
                      (float)FUN_05f7b7d0(fVar10,fVar13,
                                          fVar14 * fVar16 - fVar18 * fStack000000000000014c,
                                          -(fVar14 * fStack000000000000014c) - fVar18 * fVar16,
                                          fStack00000000000000ac,fStack00000000000000a8,
                                          *(undefined8 *)(in_stack_00000160 + 0xf0),&stack0x00000140
                                         ), fStack00000000000000a8 = fVar12, in_stack_00000160 != 0)
              ))) {
            uVar2 = in_stack_00000158;
            fVar11 = fStack0000000000000144;
            fVar12 = fStack0000000000000140;
            uVar24 = *(undefined4 *)(in_stack_00000160 + 0x2c);
            uVar27 = *(undefined4 *)(in_stack_00000160 + 0x30);
            cVar1 = *(char *)(in_stack_00000160 + 0x9c);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05f78094(fVar12,fVar11,uVar24,uVar27,fVar10,fVar13,uStack0000000000000154,uVar2,
                         cVar1 != '\0');
            FUN_06374f58();
            FUN_06374f58(fStack0000000000000140,fStack0000000000000144,fStack00000000000000ac,
                         fStack00000000000000a8);
            FUN_06374f58(in_stack_00000098,fStack0000000000000094,fStack00000000000001b8,
                         fStack00000000000001bc);
            if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05f97f18();
            return;
          }
        }
      }
      else {
        iVar6 = *(int *)(in_stack_00000160 + 0xa8);
        fVar13 = (*(float *)(in_stack_00000160 + 0xac) + *(float *)(in_stack_00000160 + 0xac)) /
                 (float)iVar8;
        if (iVar6 == 0) {
          if (0 < *(int *)(in_stack_00000160 + 0x70)) {
            iVar8 = 0;
            do {
              fVar18 = fStack0000000000000150;
              fVar23 = fStack000000000000014c;
              fVar11 = fStack0000000000000148;
              fVar10 = fStack0000000000000144;
              fVar12 = fStack0000000000000140;
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar19 = fStack0000000000000150;
              fVar25 = fStack000000000000014c;
              fVar16 = fStack0000000000000144;
              fVar14 = fStack0000000000000140;
              if (in_stack_00000160 == 0) goto LAB_05f7af04;
              fVar12 = fVar12 + fVar12 * (fVar11 + -1.0);
              fVar10 = fVar10 + fVar10 * (fVar11 + -1.0);
              fVar11 = fVar18 * fVar10 - fVar23 * fVar12;
              fVar23 = -(fVar10 * fVar23) - fVar18 * fVar12;
              fVar12 = fStack00000000000000ac;
              fVar10 = fStack00000000000000a8;
              if ((*(char *)(in_stack_00000160 + 0xe4) != '\0') &&
                 (((*(int *)(*unaff_x25 + 0xe4) == 0 &&
                   (thunk_FUN_02df485c(), in_stack_00000160 == 0)) ||
                  (fVar16 = fVar16 - fVar16, fVar14 = fVar14 - fVar14, fVar10 = fVar23,
                  fVar12 = (float)FUN_05f7b7d0(fVar11,fVar23,fVar16 * fVar19 - fVar14 * fVar25,
                                               -(fVar16 * fVar25) - fVar14 * fVar19,
                                               fStack00000000000000ac,fStack00000000000000a8,
                                               *(undefined8 *)(in_stack_00000160 + 0xf0),
                                               &stack0x00000140), in_stack_00000160 == 0))))
              goto LAB_05f7af04;
              fVar14 = 0.5;
              fVar18 = 0.5;
              if (1 < *(int *)(in_stack_00000160 + 0x70)) {
                fVar18 = (float)iVar8 / (float)(*(int *)(in_stack_00000160 + 0x70) + -1);
              }
              if ((*(long *)(in_stack_00000160 + 200) == 0) ||
                 (fVar25 = fVar10, fVar19 = fVar12,
                 fVar15 = (float)FUN_0633b1e0(fVar18,*(long *)(in_stack_00000160 + 200),0),
                 uVar24 = in_stack_00000158, uVar2 = uStack0000000000000154,
                 fVar16 = fStack0000000000000144, fVar18 = fStack0000000000000140,
                 in_stack_00000160 == 0)) goto LAB_05f7af04;
              uVar27 = *(undefined4 *)(in_stack_00000160 + 0x2c);
              uVar20 = *(undefined4 *)(in_stack_00000160 + 0x30);
              cVar1 = *(char *)(in_stack_00000160 + 0x9c);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05f78094(fVar18,fVar16,uVar27,uVar20,fVar11,fVar23,uVar2,uVar24,cVar1 != '\0');
              FUN_06374f58();
              FUN_06374f58(in_stack_000000a0._4_4_,(float)iVar8,uStack00000000000000b0,
                           uStack00000000000000b4);
              FUN_06374f58(fStack0000000000000140,fStack0000000000000144,fVar12,fVar10);
              FUN_06374f58(in_stack_00000098 * fVar15,fStack0000000000000094 * fVar14,
                           fStack00000000000001b8 * fVar19,fStack00000000000001bc * fVar25);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05f97f18();
              fStack0000000000000148 = fVar13 + fStack0000000000000148;
              if (in_stack_00000160 == 0) goto LAB_05f7af04;
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(in_stack_00000160 + 0x70));
          }
          return;
        }
        if (iVar6 == 2) {
          auVar30 = FUN_063462fc(0);
          if ((in_stack_00000160 != 0) &&
             (FUN_063462c0(*(undefined4 *)(in_stack_00000160 + 0xc0),0),
             puVar3 = Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__,
             fVar12 = DAT_010fd08c, uVar2 = DAT_010fcfdc, in_stack_00000160 != 0)) {
            if (0 < *(int *)(in_stack_00000160 + 0x70)) {
              uVar7 = *(undefined8 *)(unaff_x26 + 0xc);
              fVar10 = *(float *)(in_stack_00000160 + 0xd8);
              iVar8 = 0;
              do {
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar16 = (float)FUN_063463f8(0xbf800000,0x3f800000,0);
                fVar14 = fStack0000000000000150;
                fVar18 = fStack000000000000014c;
                fVar23 = fStack0000000000000144;
                fVar11 = fStack0000000000000140;
                if (in_stack_00000160 == 0) goto LAB_05f7af04;
                fVar28 = *(float *)(in_stack_00000160 + 0xd0);
                fVar19 = fStack0000000000000140 +
                         fStack0000000000000140 * (fStack0000000000000148 + -1.0);
                fVar25 = fStack0000000000000144 +
                         fStack0000000000000144 * (fStack0000000000000148 + -1.0);
                fVar15 = fStack0000000000000150 * fVar25;
                fVar21 = fStack000000000000014c * fVar19;
                fVar22 = fVar15 - fVar21;
                fVar26 = -(fVar25 * fStack000000000000014c) - fStack0000000000000150 * fVar19;
                fVar25 = fStack00000000000000ac;
                fVar19 = fStack00000000000000a8;
                if (*(char *)(in_stack_00000160 + 0xe4) != '\0') {
                  if ((*(int *)(*unaff_x25 + 0xe4) == 0) &&
                     (thunk_FUN_02df485c(), in_stack_00000160 == 0)) goto LAB_05f7af04;
                  fVar23 = fVar23 - fVar23;
                  fVar11 = fVar11 - fVar11;
                  fVar21 = -(fVar23 * fVar18) - fVar11 * fVar14;
                  fVar15 = fVar23 * fVar14 - fVar11 * fVar18;
                  fVar19 = fVar26;
                  fVar25 = (float)FUN_05f7b7d0(fVar22,fVar26,fVar15,fVar21,fStack00000000000000ac,
                                               fStack00000000000000a8,
                                               *(undefined8 *)(in_stack_00000160 + 0xf0),
                                               &stack0x00000140);
                  if (in_stack_00000160 == 0) goto LAB_05f7af04;
                }
                fVar11 = *(float *)(in_stack_00000160 + 0xdc);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar23 = (float)FUN_063463f8(0xbf800000,0x3f800000,0);
                if (in_stack_00000160 == 0) goto LAB_05f7af04;
                lVar9 = *(long *)(in_stack_00000160 + 200);
                fVar18 = 1.0;
                FUN_063463f8(0,0);
                if ((lVar9 == 0) || (fVar14 = (float)FUN_0633b1e0(lVar9,0), in_stack_00000160 == 0))
                goto LAB_05f7af04;
                fVar17 = (float)FUN_063463f8(0xbf800000,0x3f800000,0);
                FUN_063463f8(uVar2,fVar12,0);
                uVar27 = in_stack_00000158;
                uVar24 = uStack0000000000000154;
                fVar5 = fStack0000000000000144;
                fVar4 = fStack0000000000000140;
                if (in_stack_00000160 == 0) goto LAB_05f7af04;
                fVar16 = fVar16 * fVar28 + 1.0;
                if (0.0 < fVar16) {
                  uVar29 = *(undefined4 *)(in_stack_00000160 + 0x2c);
                  uVar20 = *(undefined4 *)(in_stack_00000160 + 0x30);
                  cVar1 = *(char *)(in_stack_00000160 + 0x9c);
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar11 = fVar11 * fVar23;
                  NEON_rev64(CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar10 * fVar17,
                                      (float)uVar7 * fVar10 * fVar17),4);
                  FUN_05f78094(fVar4,fVar5,uVar29,uVar20,fVar22,fVar26,uVar24,uVar27,cVar1 != '\0');
                  FUN_06374f58();
                  FUN_06374f58(in_stack_000000a0._4_4_,(float)iVar8,uStack00000000000000b0,
                               uStack00000000000000b4);
                  FUN_06374f58(fStack0000000000000140,fStack0000000000000144,
                               fVar25 + fVar25 * fVar11,fVar19 + fVar19 * fVar11);
                  FUN_06374f58(fVar16 * in_stack_00000098 * fVar14,
                               fVar16 * fStack0000000000000094 * fVar18,
                               fVar16 * fStack00000000000001b8 * fVar15,
                               fVar16 * fStack00000000000001bc * fVar21);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_05f97f18();
                }
                fVar11 = fVar13 + fStack0000000000000148;
                fStack0000000000000148 = fVar11;
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar23 = (float)FUN_063463f8(0xbf800000,0x3f800000,0);
                if (in_stack_00000160 == 0) goto LAB_05f7af04;
                iVar8 = iVar8 + 1;
                fStack0000000000000148 =
                     fVar11 + fVar13 * 0.5 * fVar23 * *(float *)(in_stack_00000160 + 0xd4);
              } while (iVar8 < *(int *)(in_stack_00000160 + 0x70));
            }
            FUN_0634637c(auVar30._0_8_,auVar30._8_8_,0);
            return;
          }
        }
        else {
          if (iVar6 != 1) {
            return;
          }
          iVar8 = 0;
          while( true ) {
            iVar6 = *(int *)(in_stack_00000160 + 0x70);
            if (iVar6 <= iVar8) {
              return;
            }
            fVar13 = 0.5;
            if (1 < iVar6) {
              fVar13 = (float)iVar8 / (float)(iVar6 + -1);
            }
            if (((*(long *)(in_stack_00000160 + 200) == 0) ||
                (fVar12 = (float)FUN_0633b1e0(fVar13,*(long *)(in_stack_00000160 + 200),0),
                in_stack_00000160 == 0)) || (*(long *)(in_stack_00000160 + 0xb0) == 0)) break;
            iVar6 = FUN_06303f3c(*(long *)(in_stack_00000160 + 0xb0),0);
            if (iVar6 < 1) {
              fVar10 = 1.0;
            }
            else {
              if ((in_stack_00000160 == 0) || (*(long *)(in_stack_00000160 + 0xb0) == 0)) break;
              fVar10 = (float)FUN_06303828(fVar13,*(long *)(in_stack_00000160 + 0xb0),0);
            }
            fVar16 = fStack0000000000000150;
            fVar14 = fStack000000000000014c;
            fVar18 = fStack0000000000000148;
            fVar23 = fStack0000000000000144;
            fVar11 = fStack0000000000000140;
            if (in_stack_00000160 == 0) break;
            fVar25 = *(float *)(in_stack_00000160 + 0xac);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar22 = fStack0000000000000150;
            fVar21 = fStack000000000000014c;
            fVar15 = fStack0000000000000144;
            fVar19 = fStack0000000000000140;
            if (in_stack_00000160 == 0) break;
            fVar10 = fVar18 + fVar10 * (fVar25 + fVar25) + -1.0;
            fVar11 = fVar11 + fVar11 * fVar10;
            fVar23 = fVar23 + fVar23 * fVar10;
            fVar18 = fVar16 * fVar23 - fVar14 * fVar11;
            fVar23 = -(fVar23 * fVar14) - fVar16 * fVar11;
            fVar10 = fStack00000000000000ac;
            fVar11 = fStack00000000000000a8;
            if (((*(char *)(in_stack_00000160 + 0xe4) != '\0') &&
                (((*(int *)(*unaff_x25 + 0xe4) == 0 &&
                  (thunk_FUN_02df485c(), in_stack_00000160 == 0)) ||
                 (fVar15 = fVar15 - fVar15, fVar19 = fVar19 - fVar19, fVar11 = fVar23,
                 fVar10 = (float)FUN_05f7b7d0(fVar18,fVar23,fVar15 * fVar22 - fVar19 * fVar21,
                                              -(fVar15 * fVar21) - fVar19 * fVar22,
                                              fStack00000000000000ac,fStack00000000000000a8,
                                              *(undefined8 *)(in_stack_00000160 + 0xf0),
                                              &stack0x00000140), in_stack_00000160 == 0)))) ||
               (*(long *)(in_stack_00000160 + 0xb8) == 0)) break;
            iVar6 = FUN_06303f3c(*(long *)(in_stack_00000160 + 0xb8),0);
            if (iVar6 < 1) {
              fVar14 = 1.0;
            }
            else {
              if ((in_stack_00000160 == 0) || (*(long *)(in_stack_00000160 + 0xb8) == 0)) break;
              fVar14 = (float)FUN_06303828(fVar13,*(long *)(in_stack_00000160 + 0xb8),0);
            }
            if (((in_stack_00000160 == 0) || (*(long *)(in_stack_00000160 + 0x118) == 0)) ||
               (FUN_06303828(fVar13,*(long *)(in_stack_00000160 + 0x118),0),
               uVar24 = in_stack_00000158, uVar2 = uStack0000000000000154,
               fVar16 = fStack0000000000000144, fVar13 = fStack0000000000000140,
               in_stack_00000160 == 0)) break;
            uVar27 = *(undefined4 *)(in_stack_00000160 + 0x2c);
            uVar20 = *(undefined4 *)(in_stack_00000160 + 0x30);
            cVar1 = *(char *)(in_stack_00000160 + 0x9c);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05f78094(fVar13,fVar16,uVar27,uVar20,fVar18,fVar23,uVar2,uVar24,cVar1 != '\0');
            FUN_06374f58();
            FUN_06374f58(in_stack_000000a0._4_4_,(float)iVar8,uStack00000000000000b0,
                         uStack00000000000000b4);
            FUN_06374f58(fStack0000000000000140,fStack0000000000000144,fVar10 * fVar14,
                         fVar11 * fVar14);
            FUN_06374f58(in_stack_00000098 * fVar12);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05f97f18();
            iVar8 = iVar8 + 1;
            if (in_stack_00000160 == 0) break;
          }
        }
      }
    }
  }
LAB_05f7af04:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


