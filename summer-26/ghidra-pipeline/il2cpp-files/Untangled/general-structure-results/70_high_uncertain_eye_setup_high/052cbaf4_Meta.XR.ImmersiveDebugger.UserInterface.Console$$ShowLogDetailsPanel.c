/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$ShowLogDetailsPanel
ENTRY_POINT: 052cbaf4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Console__ShowLogDetailsPanel
          (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long *unaff_x26;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (((param_4 & 1) == 0) ||
     (param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x90),
     *(float *)(unaff_x19 + 0xac) <= *(float *)(unaff_x19 + 0x90))) {
LAB_052cbc84:
    if ((char)unaff_x20[0x29] != '\0') {
      FUN_066d1830(0x3f800000,0);
    }
    FUN_052c9fd0();
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_06743fdc(*(long *)(unaff_x19 + 0x88),0,0);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x88);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar10,0);
      *(undefined1 *)(unaff_x20 + 0x2f) = 0;
      (**(code **)(*unaff_x20 + 0x1e8))();
      uVar6 = FUN_066cd30c(*(undefined8 *)(unaff_x19 + 0x20),0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_067416e8(*(undefined4 *)(unaff_x19 + 0x38),*(long *)(unaff_x19 + 0x30),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06741660(*(undefined4 *)(unaff_x19 + 0x48),*(long *)(unaff_x19 + 0x30),0);
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 != 0) {
            uVar6 = FUN_067413b4(lVar5,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              fVar11 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x34);
              if (DAT_071babf9 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf9 = '\x01';
              }
              fVar25 = (float)uVar6;
              fVar12 = (float)param_2;
              fVar13 = (float)param_3;
              fVar24 = fVar13 * fVar13 + fVar25 * fVar25 + fVar12 * fVar12;
              if (fVar11 * fVar11 < fVar24) {
                if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                fVar24 = SQRT(fVar24);
                uVar6 = (ulong)(uint)((fVar25 / fVar24) * fVar11);
                param_2 = (ulong)(uint)((fVar12 / fVar24) * fVar11);
                param_3 = (ulong)(uint)((fVar13 / fVar24) * fVar11);
              }
              FUN_06741454(uVar6,lVar5,0);
              lVar5 = *(long *)(unaff_x19 + 0x30);
              if (lVar5 != 0) {
                uVar6 = FUN_067414ec(lVar5,0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar11 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x38);
                  if (DAT_071babf9 == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    DAT_071babf9 = '\x01';
                  }
                  fVar25 = (float)uVar6;
                  fVar12 = (float)param_2;
                  fVar13 = (float)param_3;
                  fVar24 = fVar13 * fVar13 + fVar25 * fVar25 + fVar12 * fVar12;
                  if (fVar11 * fVar11 < fVar24) {
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar24 = SQRT(fVar24);
                    uVar6 = (ulong)(uint)((fVar25 / fVar24) * fVar11);
                    param_2 = (ulong)(uint)((fVar12 / fVar24) * fVar11);
                    param_3 = (ulong)(uint)((fVar13 / fVar24) * fVar11);
                  }
                  FUN_0674158c(uVar6,param_2,param_3,lVar5,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_06741b64(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40)
                                 ,*(undefined4 *)(unaff_x19 + 0x44),*(long *)(unaff_x19 + 0x30),0);
                    if (*(char *)((long)unaff_x20 + 0x72) != '\0') {
                      lVar5 = unaff_x20[0x19];
                      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
                      if (*(float *)(unaff_x19 + 0x90) <= *(float *)(unaff_x19 + 0xac)) {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                      }
                      else {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar6 = FUN_052cb1ec(lVar5,uVar10,*(undefined8 *)(unaff_x19 + 0x50));
                        if ((uVar6 & 1) != 0) {
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          puVar3 = PTR_DAT_06d02c10;
                          if (lVar5 != 0) {
                            puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
                            FUN_0674158c(*puVar8,puVar8[1],puVar8[2],lVar5,0);
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(PTR_DAT_06d02c10);
                              DAT_071babf5 = '\x01';
                            }
                            if (lVar5 != 0) {
                              puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                              FUN_06741454(*puVar8,puVar8[1],puVar8[2],lVar5,0);
                              return 0;
                            }
                          }
                          goto LAB_052cc5a8;
                        }
                        lVar5 = unaff_x20[0x19];
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
                      }
                      FUN_052cb430(lVar5,uVar10);
                      (**(code **)(*unaff_x20 + 0x328))();
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_052cc5a8;
  }
  fVar24 = *(float *)(unaff_x19 + 0x9c);
  fVar11 = (float)FUN_066d1758(0);
  *(float *)(unaff_x19 + 0x9c) = fVar24 + fVar11;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_052cc5a8;
  fVar16 = *(float *)(unaff_x19 + 0x7c);
  fVar17 = *(float *)(unaff_x19 + 0x80);
  fVar12 = (float)FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x78),lVar5,0);
  fVar11 = fVar16;
  fVar25 = fVar17;
  fVar13 = (float)(**(code **)(*unaff_x20 + 600))();
  fVar24 = fVar25;
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar3 = PTR_DAT_06d03010;
  fVar13 = fVar13 - fVar12;
  fVar11 = fVar11 - fVar16;
  fVar25 = fVar25 - fVar17;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar16 = fVar25 * fVar25;
  fVar12 = SQRT(fVar16 + fVar13 * fVar13 + fVar11 * fVar11);
  *(float *)(unaff_x19 + 0xac) = fVar12;
  if ((*(char *)(unaff_x19 + 0x58) != '\0') &&
     (fVar16 = *(float *)(unaff_x19 + 0x68), fVar12 < fVar16)) {
    if (unaff_x20[0x19] == 0) goto LAB_052cc5a8;
    uVar6 = FUN_052cb1ec(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x50));
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      puVar3 = PTR_DAT_06d02c10;
      if (lVar5 == 0) goto LAB_052cc5a8;
      puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_0674158c(*puVar8,puVar8[1],puVar8[2],lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      if (lVar5 == 0) goto LAB_052cc5a8;
      puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      param_2 = (ulong)(uint)puVar8[1];
      param_3 = (ulong)(uint)puVar8[2];
      FUN_06741454(*puVar8,lVar5,0);
      goto LAB_052cbc84;
    }
  }
  fVar12 = (float)FUN_066d1758(0);
  if ((unaff_x20[0x19] == 0) || (lVar5 = *(long *)(unaff_x20[0x19] + 0x78), lVar5 == 0))
  goto LAB_052cc5a8;
  fVar17 = (float)FUN_067413b4(lVar5,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar18 = fVar24;
  fVar21 = fVar16;
  fVar14 = (float)FUN_067413b4(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar15 = (float)FUN_06741734(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar12 = 1.0 / fVar12;
  fVar28 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x20);
  fVar13 = fVar13 * fVar12;
  fVar11 = fVar11 * fVar12;
  fVar25 = fVar25 * fVar12;
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar27 = fVar25 * fVar25 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar28 * fVar28 < fVar27) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar27 = SQRT(fVar27);
    fVar13 = (fVar13 / fVar27) * fVar28;
    fVar11 = (fVar11 / fVar27) * fVar28;
    fVar25 = (fVar25 / fVar27) * fVar28;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar28 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
  fVar12 = fVar12 * fVar15;
  fVar13 = fVar12 * (fVar13 - (fVar14 - fVar17));
  fVar11 = fVar12 * (fVar11 - (fVar21 - fVar16));
  fVar12 = fVar12 * (fVar25 - (fVar18 - fVar24));
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar27 = fVar12 * fVar12;
  fVar25 = fVar27 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar28 * fVar28 < fVar25) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar25 = SQRT(fVar25);
    fVar27 = fVar11 / fVar25;
    fVar13 = (fVar13 / fVar25) * fVar28;
    fVar11 = fVar27 * fVar28;
    fVar12 = (fVar12 / fVar25) * fVar28;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar26 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x28);
  fVar28 = *(float *)(unaff_x19 + 0xac);
  fVar25 = fVar26;
  if (fVar28 <= fVar26) {
    fVar25 = fVar28;
  }
  fVar2 = fVar25;
  if (fVar28 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  uVar6 = FUN_067417bc(*(long *)(unaff_x19 + 0x30),0);
  if ((uVar6 & 1) == 0) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    fVar28 = *pfVar9;
    fVar25 = pfVar9[1];
    fVar15 = pfVar9[2];
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar28 = (float)FUN_0673c42c(0);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
    fVar15 = fVar15 * *(float *)(*(long *)(unaff_x19 + 0x60) + 0x24);
    fVar28 = fVar15 * -fVar28;
    fVar25 = fVar15 * -fVar25;
    fVar15 = fVar15 * -fVar27;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  FUN_067427b0(fVar13 + fVar28,fVar11 + fVar25,fVar12 + fVar15,*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  lVar5 = *(long *)(unaff_x19 + 0x30);
  fVar11 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
  fVar25 = (float)FUN_066d1758(0);
  fVar25 = ((fVar26 - fVar2) / fVar26) * fVar11 * fVar25;
  fVar11 = fVar25;
  if (1.0 < fVar25) {
    fVar11 = 1.0;
  }
  if (fVar25 < 0.0) {
    fVar11 = 0.0;
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  uVar22 = (ulong)(uint)(fVar17 - fVar14);
  uVar19 = (ulong)(uint)(fVar18 + (fVar24 - fVar18) * fVar11);
  uVar6 = (ulong)(uint)(fVar21 + (fVar16 - fVar21) * fVar11);
  FUN_06741454(fVar14 + (fVar17 - fVar14) * fVar11,lVar5,0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_066cd30c(uVar10,0);
  if (((uVar7 & 1) != 0) && (*(char *)(unaff_x19 + 0x94) == '\0')) {
    lVar5 = *(long *)(unaff_x19 + 0x60);
    if (lVar5 == 0) goto LAB_052cc5a8;
    iVar1 = *(int *)(lVar5 + 0x3c);
    if (iVar1 == 2) {
      uVar19 = (ulong)(uint)*(float *)(lVar5 + 0x48);
      uVar22 = 0x42c80000;
      fVar11 = (*(float *)(unaff_x19 + 0xa8) - *(float *)(unaff_x19 + 0xac)) /
               *(float *)(unaff_x19 + 0xa8);
      fVar24 = *(float *)(lVar5 + 0x48) / 100.0;
LAB_052cc4b8:
      uVar6 = (ulong)(uint)fVar24;
      bVar4 = fVar24 < fVar11;
    }
    else {
      if (iVar1 == 1) {
        fVar11 = *(float *)(unaff_x19 + 0x9c);
        fVar24 = *(float *)(lVar5 + 0x44);
        goto LAB_052cc4b8;
      }
      if (iVar1 != 0) goto LAB_052cc2e0;
      uVar6 = (ulong)(uint)*(float *)(unaff_x19 + 0x70);
      if (*(float *)(unaff_x19 + 0x70) <= *(float *)(unaff_x19 + 0xac)) {
        bVar4 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        bVar4 = FUN_066cd30c(uVar10,0);
      }
    }
    *(byte *)(unaff_x19 + 0x94) = bVar4 & 1;
    if ((bVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
      if (iVar1 == 1) {
        lVar5 = *(long *)(unaff_x19 + 0x88);
        if (lVar5 == 0) goto LAB_052cc5a8;
        fVar11 = *(float *)(unaff_x19 + 0xac);
      }
      else {
        if (iVar1 != 0) goto LAB_052cc2e0;
        fVar24 = *(float *)(unaff_x19 + 0xac);
        uVar6 = (ulong)(uint)fVar24;
        lVar5 = *(long *)(unaff_x19 + 0x88);
        fVar11 = *(float *)(unaff_x19 + 0x74);
        if (fVar24 <= *(float *)(unaff_x19 + 0x74)) {
          fVar11 = fVar24;
        }
        if (lVar5 == 0) goto LAB_052cc5a8;
      }
      fVar24 = (float)uVar6;
      fVar13 = *(float *)(unaff_x19 + 0x6c);
      lVar5 = FUN_066c67b0(lVar5,0);
      fVar12 = (float)uVar22;
      fVar25 = (float)uVar19;
      if ((lVar5 == 0) || (fVar16 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0))
      goto LAB_052cc5a8;
      fVar17 = fVar24;
      fVar18 = fVar25;
      fVar21 = fVar12;
      fVar14 = (float)FUN_052cc80c();
      uVar22 = (ulong)(uint)(fVar12 * fVar21);
      uVar19 = 0x3f800000;
      fVar24 = (float)NEON_fminnm(ABS(fVar12 * fVar21 +
                                      fVar25 * fVar18 + fVar16 * fVar14 + fVar24 * fVar17),
                                  0x3f800000);
      fVar25 = 0.0;
      if (fVar24 <= DAT_013f6c48) {
        fVar24 = acosf(fVar24);
        fVar25 = (fVar24 + fVar24) * DAT_013f6f10;
      }
      uVar6 = (ulong)(uint)fVar25;
      *(float *)(unaff_x19 + 0x98) = fVar25 / (fVar11 / fVar13);
    }
  }
LAB_052cc2e0:
  if (*(char *)(unaff_x19 + 0x94) != '\0') {
    lVar5 = unaff_x20[0x2d];
    if ((lVar5 == 0) || (fVar11 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0)) {
LAB_052cc5a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = uVar6;
    uVar20 = uVar19;
    uVar23 = uVar22;
    uVar10 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar24 = (float)NEON_fminnm(ABS((float)uVar22 * (float)uVar23 +
                                    (float)uVar19 * (float)uVar20 +
                                    fVar11 * (float)uVar10 + (float)uVar6 * (float)uVar7),0x3f800000
                               );
    if ((fVar24 <= DAT_013f6c48) &&
       (fVar24 = acosf(fVar24), (fVar24 + fVar24) * DAT_013f6f10 != 0.0)) {
      uVar10 = FUN_066bd84c(fVar11,uVar6,uVar19,uVar22,uVar10,uVar7,uVar20,uVar23,0);
      uVar7 = uVar6;
      uVar20 = uVar19;
      uVar23 = uVar22;
    }
    FUN_066d4ae0(uVar10,uVar7,uVar20,uVar23,lVar5,0);
  }
  uVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar10,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar10);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


