/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$OnConsoleLineClicked
ENTRY_POINT: 052cba20
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
Meta_XR_ImmersiveDebugger_UserInterface_Console__OnConsoleLineClicked
          (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int in_w8;
  undefined4 *puVar9;
  float *pfVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x26;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar24;
  float fVar25;
  ulong uVar26;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar23;
  
  if (in_w8 != 0) {
    FUN_066d1830(*(undefined4 *)((long)unaff_x20 + 0x14c),0);
  }
  plVar5 = (long *)unaff_x20[0x19];
  if (plVar5 == (long *)0x0) goto LAB_052cc5a8;
  fVar13 = (float)(**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
  if (DAT_071bac5f == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071bac5f = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar18 = (param_2 - unaff_s9) * (param_2 - unaff_s9);
  uVar7 = (ulong)(uint)fVar18;
  fVar20 = (param_3 - unaff_s10) * (param_3 - unaff_s10);
  uVar23 = (ulong)(uint)fVar20;
  fVar13 = SQRT(fVar20 + (fVar13 - unaff_s8) * (fVar13 - unaff_s8) + fVar18);
  *(float *)(unaff_x19 + 0xa8) = fVar13;
  *(float *)(unaff_x19 + 0xac) = fVar13;
  lVar11 = unaff_x20[0x13];
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_066cd30c(lVar11,0);
  if ((uVar6 & 1) == 0) {
LAB_052cbc84:
    if ((char)unaff_x20[0x29] != '\0') {
      FUN_066d1830(0x3f800000,0);
    }
    FUN_052c9fd0();
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_06743fdc(*(long *)(unaff_x19 + 0x88),0,0);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x88);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar12,0);
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
          lVar11 = *(long *)(unaff_x19 + 0x30);
          if (lVar11 != 0) {
            uVar6 = FUN_067413b4(lVar11,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              fVar13 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x34);
              if (DAT_071babf9 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf9 = '\x01';
              }
              fVar20 = (float)uVar6;
              fVar14 = (float)uVar7;
              fVar15 = (float)uVar23;
              fVar18 = fVar15 * fVar15 + fVar20 * fVar20 + fVar14 * fVar14;
              if (fVar13 * fVar13 < fVar18) {
                if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                fVar18 = SQRT(fVar18);
                uVar6 = (ulong)(uint)((fVar20 / fVar18) * fVar13);
                uVar7 = (ulong)(uint)((fVar14 / fVar18) * fVar13);
                uVar23 = (ulong)(uint)((fVar15 / fVar18) * fVar13);
              }
              FUN_06741454(uVar6,lVar11,0);
              lVar11 = *(long *)(unaff_x19 + 0x30);
              if (lVar11 != 0) {
                uVar6 = FUN_067414ec(lVar11,0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar13 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x38);
                  if (DAT_071babf9 == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    DAT_071babf9 = '\x01';
                  }
                  fVar20 = (float)uVar6;
                  fVar14 = (float)uVar7;
                  fVar15 = (float)uVar23;
                  fVar18 = fVar15 * fVar15 + fVar20 * fVar20 + fVar14 * fVar14;
                  if (fVar13 * fVar13 < fVar18) {
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar18 = SQRT(fVar18);
                    uVar6 = (ulong)(uint)((fVar20 / fVar18) * fVar13);
                    uVar7 = (ulong)(uint)((fVar14 / fVar18) * fVar13);
                    uVar23 = (ulong)(uint)((fVar15 / fVar18) * fVar13);
                  }
                  FUN_0674158c(uVar6,uVar7,uVar23,lVar11,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_06741b64(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40)
                                 ,*(undefined4 *)(unaff_x19 + 0x44),*(long *)(unaff_x19 + 0x30),0);
                    if (*(char *)((long)unaff_x20 + 0x72) != '\0') {
                      lVar11 = unaff_x20[0x19];
                      uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
                      if (*(float *)(unaff_x19 + 0x90) <= *(float *)(unaff_x19 + 0xac)) {
                        if (lVar11 == 0) goto LAB_052cc5a8;
                      }
                      else {
                        if (lVar11 == 0) goto LAB_052cc5a8;
                        uVar7 = FUN_052cb1ec(lVar11,uVar12,*(undefined8 *)(unaff_x19 + 0x50));
                        if ((uVar7 & 1) != 0) {
                          lVar11 = *(long *)(unaff_x19 + 0x30);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          puVar3 = PTR_DAT_06d02c10;
                          if (lVar11 != 0) {
                            puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
                            FUN_0674158c(*puVar9,puVar9[1],puVar9[2],lVar11,0);
                            lVar11 = *(long *)(unaff_x19 + 0x30);
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(PTR_DAT_06d02c10);
                              DAT_071babf5 = '\x01';
                            }
                            if (lVar11 != 0) {
                              puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                              FUN_06741454(*puVar9,puVar9[1],puVar9[2],lVar11,0);
                              return 0;
                            }
                          }
                          goto LAB_052cc5a8;
                        }
                        lVar11 = unaff_x20[0x19];
                        if (lVar11 == 0) goto LAB_052cc5a8;
                        uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
                      }
                      FUN_052cb430(lVar11,uVar12);
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
  lVar11 = unaff_x20[0x19];
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x128) == 0)) goto LAB_052cc5a8;
  uVar6 = FUN_052eae08(*(long *)(lVar11 + 0x128),*(undefined4 *)(lVar11 + 0xdc),0);
  if (((uVar6 & 1) == 0) ||
     (uVar7 = (ulong)(uint)*(float *)(unaff_x19 + 0x90),
     *(float *)(unaff_x19 + 0xac) <= *(float *)(unaff_x19 + 0x90))) goto LAB_052cbc84;
  fVar18 = *(float *)(unaff_x19 + 0x9c);
  fVar13 = (float)FUN_066d1758(0);
  *(float *)(unaff_x19 + 0x9c) = fVar18 + fVar13;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (lVar11 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar11 == 0)) goto LAB_052cc5a8;
  fVar19 = *(float *)(unaff_x19 + 0x7c);
  fVar21 = *(float *)(unaff_x19 + 0x80);
  fVar14 = (float)FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x78),lVar11,0);
  fVar13 = fVar19;
  fVar20 = fVar21;
  fVar15 = (float)(**(code **)(*unaff_x20 + 600))();
  fVar18 = fVar20;
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar3 = PTR_DAT_06d03010;
  fVar15 = fVar15 - fVar14;
  fVar13 = fVar13 - fVar19;
  fVar20 = fVar20 - fVar21;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar19 = fVar20 * fVar20;
  fVar14 = SQRT(fVar19 + fVar15 * fVar15 + fVar13 * fVar13);
  *(float *)(unaff_x19 + 0xac) = fVar14;
  if ((*(char *)(unaff_x19 + 0x58) != '\0') &&
     (fVar19 = *(float *)(unaff_x19 + 0x68), fVar14 < fVar19)) {
    if (unaff_x20[0x19] == 0) goto LAB_052cc5a8;
    uVar7 = FUN_052cb1ec(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x50));
    if ((uVar7 & 1) != 0) {
      lVar11 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      puVar3 = PTR_DAT_06d02c10;
      if (lVar11 == 0) goto LAB_052cc5a8;
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_0674158c(*puVar9,puVar9[1],puVar9[2],lVar11,0);
      lVar11 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      if (lVar11 == 0) goto LAB_052cc5a8;
      puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      uVar7 = (ulong)(uint)puVar9[1];
      uVar23 = (ulong)(uint)puVar9[2];
      FUN_06741454(*puVar9,lVar11,0);
      goto LAB_052cbc84;
    }
  }
  fVar14 = (float)FUN_066d1758(0);
  if ((unaff_x20[0x19] == 0) || (lVar11 = *(long *)(unaff_x20[0x19] + 0x78), lVar11 == 0))
  goto LAB_052cc5a8;
  fVar21 = (float)FUN_067413b4(lVar11,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar22 = fVar18;
  fVar25 = fVar19;
  fVar16 = (float)FUN_067413b4(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar17 = (float)FUN_06741734(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar14 = 1.0 / fVar14;
  fVar29 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x20);
  fVar15 = fVar15 * fVar14;
  fVar13 = fVar13 * fVar14;
  fVar20 = fVar20 * fVar14;
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar28 = fVar20 * fVar20 + fVar15 * fVar15 + fVar13 * fVar13;
  if (fVar29 * fVar29 < fVar28) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar28 = SQRT(fVar28);
    fVar15 = (fVar15 / fVar28) * fVar29;
    fVar13 = (fVar13 / fVar28) * fVar29;
    fVar20 = (fVar20 / fVar28) * fVar29;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar29 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
  fVar14 = fVar14 * fVar17;
  fVar15 = fVar14 * (fVar15 - (fVar16 - fVar21));
  fVar13 = fVar14 * (fVar13 - (fVar25 - fVar19));
  fVar14 = fVar14 * (fVar20 - (fVar22 - fVar18));
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar28 = fVar14 * fVar14;
  fVar20 = fVar28 + fVar15 * fVar15 + fVar13 * fVar13;
  if (fVar29 * fVar29 < fVar20) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar20 = SQRT(fVar20);
    fVar28 = fVar13 / fVar20;
    fVar15 = (fVar15 / fVar20) * fVar29;
    fVar13 = fVar28 * fVar29;
    fVar14 = (fVar14 / fVar20) * fVar29;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar27 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x28);
  fVar29 = *(float *)(unaff_x19 + 0xac);
  fVar20 = fVar27;
  if (fVar29 <= fVar27) {
    fVar20 = fVar29;
  }
  fVar2 = fVar20;
  if (fVar29 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  uVar7 = FUN_067417bc(*(long *)(unaff_x19 + 0x30),0);
  if ((uVar7 & 1) == 0) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar10 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    fVar29 = *pfVar10;
    fVar20 = pfVar10[1];
    fVar17 = pfVar10[2];
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar29 = (float)FUN_0673c42c(0);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
    fVar17 = fVar17 * *(float *)(*(long *)(unaff_x19 + 0x60) + 0x24);
    fVar29 = fVar17 * -fVar29;
    fVar20 = fVar17 * -fVar20;
    fVar17 = fVar17 * -fVar28;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  FUN_067427b0(fVar15 + fVar29,fVar13 + fVar20,fVar14 + fVar17,*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  lVar11 = *(long *)(unaff_x19 + 0x30);
  fVar13 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
  fVar20 = (float)FUN_066d1758(0);
  fVar20 = ((fVar27 - fVar2) / fVar27) * fVar13 * fVar20;
  fVar13 = fVar20;
  if (1.0 < fVar20) {
    fVar13 = 1.0;
  }
  if (fVar20 < 0.0) {
    fVar13 = 0.0;
  }
  if (lVar11 == 0) goto LAB_052cc5a8;
  uVar6 = (ulong)(uint)(fVar21 - fVar16);
  uVar23 = (ulong)(uint)(fVar22 + (fVar18 - fVar22) * fVar13);
  uVar7 = (ulong)(uint)(fVar25 + (fVar19 - fVar25) * fVar13);
  FUN_06741454(fVar16 + (fVar21 - fVar16) * fVar13,lVar11,0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar8 = FUN_066cd30c(uVar12,0);
  if (((uVar8 & 1) != 0) && (*(char *)(unaff_x19 + 0x94) == '\0')) {
    lVar11 = *(long *)(unaff_x19 + 0x60);
    if (lVar11 == 0) goto LAB_052cc5a8;
    iVar1 = *(int *)(lVar11 + 0x3c);
    if (iVar1 == 2) {
      uVar23 = (ulong)(uint)*(float *)(lVar11 + 0x48);
      uVar6 = 0x42c80000;
      fVar13 = (*(float *)(unaff_x19 + 0xa8) - *(float *)(unaff_x19 + 0xac)) /
               *(float *)(unaff_x19 + 0xa8);
      fVar18 = *(float *)(lVar11 + 0x48) / 100.0;
LAB_052cc4b8:
      uVar7 = (ulong)(uint)fVar18;
      bVar4 = fVar18 < fVar13;
    }
    else {
      if (iVar1 == 1) {
        fVar13 = *(float *)(unaff_x19 + 0x9c);
        fVar18 = *(float *)(lVar11 + 0x44);
        goto LAB_052cc4b8;
      }
      if (iVar1 != 0) goto LAB_052cc2e0;
      uVar7 = (ulong)(uint)*(float *)(unaff_x19 + 0x70);
      if (*(float *)(unaff_x19 + 0x70) <= *(float *)(unaff_x19 + 0xac)) {
        bVar4 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        bVar4 = FUN_066cd30c(uVar12,0);
      }
    }
    *(byte *)(unaff_x19 + 0x94) = bVar4 & 1;
    if ((bVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
      if (iVar1 == 1) {
        lVar11 = *(long *)(unaff_x19 + 0x88);
        if (lVar11 == 0) goto LAB_052cc5a8;
        fVar13 = *(float *)(unaff_x19 + 0xac);
      }
      else {
        if (iVar1 != 0) goto LAB_052cc2e0;
        fVar18 = *(float *)(unaff_x19 + 0xac);
        uVar7 = (ulong)(uint)fVar18;
        lVar11 = *(long *)(unaff_x19 + 0x88);
        fVar13 = *(float *)(unaff_x19 + 0x74);
        if (fVar18 <= *(float *)(unaff_x19 + 0x74)) {
          fVar13 = fVar18;
        }
        if (lVar11 == 0) goto LAB_052cc5a8;
      }
      fVar18 = (float)uVar7;
      fVar15 = *(float *)(unaff_x19 + 0x6c);
      lVar11 = FUN_066c67b0(lVar11,0);
      fVar14 = (float)uVar6;
      fVar20 = (float)uVar23;
      if ((lVar11 == 0) || (fVar19 = (float)FUN_066d320c(lVar11,0), unaff_x20[0x19] == 0))
      goto LAB_052cc5a8;
      fVar21 = fVar18;
      fVar22 = fVar20;
      fVar25 = fVar14;
      fVar16 = (float)FUN_052cc80c();
      uVar6 = (ulong)(uint)(fVar14 * fVar25);
      uVar23 = 0x3f800000;
      fVar18 = (float)NEON_fminnm(ABS(fVar14 * fVar25 +
                                      fVar20 * fVar22 + fVar19 * fVar16 + fVar18 * fVar21),
                                  0x3f800000);
      fVar20 = 0.0;
      if (fVar18 <= DAT_013f6c48) {
        fVar18 = acosf(fVar18);
        fVar20 = (fVar18 + fVar18) * DAT_013f6f10;
      }
      uVar7 = (ulong)(uint)fVar20;
      *(float *)(unaff_x19 + 0x98) = fVar20 / (fVar13 / fVar15);
    }
  }
LAB_052cc2e0:
  if (*(char *)(unaff_x19 + 0x94) != '\0') {
    lVar11 = unaff_x20[0x2d];
    if ((lVar11 == 0) || (fVar13 = (float)FUN_066d320c(lVar11,0), unaff_x20[0x19] == 0)) {
LAB_052cc5a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar8 = uVar7;
    uVar24 = uVar23;
    uVar26 = uVar6;
    uVar12 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar18 = (float)NEON_fminnm(ABS((float)uVar6 * (float)uVar26 +
                                    (float)uVar23 * (float)uVar24 +
                                    fVar13 * (float)uVar12 + (float)uVar7 * (float)uVar8),0x3f800000
                               );
    if ((fVar18 <= DAT_013f6c48) &&
       (fVar18 = acosf(fVar18), (fVar18 + fVar18) * DAT_013f6f10 != 0.0)) {
      uVar12 = FUN_066bd84c(fVar13,uVar7,uVar23,uVar6,uVar12,uVar8,uVar24,uVar26,0);
      uVar8 = uVar7;
      uVar24 = uVar23;
      uVar26 = uVar6;
    }
    FUN_066d4ae0(uVar12,uVar8,uVar24,uVar26,lVar11,0);
  }
  uVar12 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar12);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


