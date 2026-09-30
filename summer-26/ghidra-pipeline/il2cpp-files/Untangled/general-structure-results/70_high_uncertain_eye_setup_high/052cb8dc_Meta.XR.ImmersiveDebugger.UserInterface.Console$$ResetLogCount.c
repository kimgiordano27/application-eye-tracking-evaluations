/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$ResetLogCount
ENTRY_POINT: 052cb8dc
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


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__ResetLogCount(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x26;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar28;
  float fVar29;
  undefined4 unaff_s14;
  float fVar30;
  
  FUN_066d5334();
                    /* try { // try from 052cb8e4 to 053cb90b has its CatchHandler @ 052cb920 */
  if ((unaff_x20[0x2d] == 0) || (lVar5 = FUN_066c67ec(unaff_x20[0x2d],0), lVar5 == 0))
  goto LAB_052cc5a8;
  lVar5 = FUN_03a862a4(lVar5,*(undefined8 *)PTR_DAT_06d03770);
  plVar13 = (long *)(unaff_x19 + 0x88);
  *plVar13 = lVar5;
                    /* try { // try from 052cb90c to 053cb917 has its CatchHandler @ 052cb39c */
  thunk_FUN_02f411dc(plVar13,lVar5);
                    /* try { // try from 052cb918 to 053cb91f has its CatchHandler @ 052cb920 */
  if (*plVar13 == 0) goto LAB_052cc5a8;
                    /* catch() { ... } // from try @ 052cb8e4 with catch @ 052cb920
                       catch() { ... } // from try @ 052cb918 with catch @ 052cb920 */
  FUN_06744404(*plVar13,0,0);
  if (*plVar13 == 0) goto LAB_052cc5a8;
  FUN_06746704(*plVar13,1,0);
  FUN_0529a830(*plVar13,0);
  if (*plVar13 == 0) goto LAB_052cc5a8;
  FUN_06743fdc(*plVar13,*unaff_x21,0);
  if (*unaff_x21 == 0) goto LAB_052cc5a8;
  lVar11 = *plVar13;
  lVar5 = FUN_066c67b0(*unaff_x21,0);
  if ((lVar5 == 0) || (FUN_066d6014(lVar5,0), lVar11 == 0)) goto LAB_052cc5a8;
  FUN_06744330(lVar11,0);
  lVar5 = *plVar13;
  if (DAT_071babf5 == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071babf5 = '\x01';
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
  fVar19 = (float)puVar9[1];
  fVar21 = (float)puVar9[2];
  FUN_067441f8(*puVar9,lVar5,0);
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    unaff_s14 = *(undefined4 *)(unaff_x19 + 0x68);
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined4 *)(unaff_x19 + 0x90) = unaff_s14;
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  thunk_FUN_02f411dc();
  if ((char)unaff_x20[0x29] != '\0') {
    FUN_066d1830(*(undefined4 *)((long)unaff_x20 + 0x14c),0);
  }
  plVar13 = (long *)unaff_x20[0x19];
  if (plVar13 == (long *)0x0) goto LAB_052cc5a8;
  fVar14 = (float)(**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
  if (DAT_071bac5f == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071bac5f = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar19 = (fVar19 - unaff_s9) * (fVar19 - unaff_s9);
  uVar7 = (ulong)(uint)fVar19;
  fVar21 = (fVar21 - unaff_s10) * (fVar21 - unaff_s10);
  uVar24 = (ulong)(uint)fVar21;
  fVar19 = SQRT(fVar21 + (fVar14 - unaff_s8) * (fVar14 - unaff_s8) + fVar19);
  *(float *)(unaff_x19 + 0xa8) = fVar19;
  *(float *)(unaff_x19 + 0xac) = fVar19;
  lVar5 = unaff_x20[0x13];
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_066cd30c(lVar5,0);
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
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 != 0) {
            uVar6 = FUN_067413b4(lVar5,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              fVar19 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x34);
              if (DAT_071babf9 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf9 = '\x01';
              }
              fVar14 = (float)uVar6;
              fVar15 = (float)uVar7;
              fVar16 = (float)uVar24;
              fVar21 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
              if (fVar19 * fVar19 < fVar21) {
                if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                fVar21 = SQRT(fVar21);
                uVar6 = (ulong)(uint)((fVar14 / fVar21) * fVar19);
                uVar7 = (ulong)(uint)((fVar15 / fVar21) * fVar19);
                uVar24 = (ulong)(uint)((fVar16 / fVar21) * fVar19);
              }
              FUN_06741454(uVar6,lVar5,0);
              lVar5 = *(long *)(unaff_x19 + 0x30);
              if (lVar5 != 0) {
                uVar6 = FUN_067414ec(lVar5,0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar19 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x38);
                  if (DAT_071babf9 == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    DAT_071babf9 = '\x01';
                  }
                  fVar14 = (float)uVar6;
                  fVar15 = (float)uVar7;
                  fVar16 = (float)uVar24;
                  fVar21 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
                  if (fVar19 * fVar19 < fVar21) {
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar21 = SQRT(fVar21);
                    uVar6 = (ulong)(uint)((fVar14 / fVar21) * fVar19);
                    uVar7 = (ulong)(uint)((fVar15 / fVar21) * fVar19);
                    uVar24 = (ulong)(uint)((fVar16 / fVar21) * fVar19);
                  }
                  FUN_0674158c(uVar6,uVar7,uVar24,lVar5,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_06741b64(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40)
                                 ,*(undefined4 *)(unaff_x19 + 0x44),*(long *)(unaff_x19 + 0x30),0);
                    if (*(char *)((long)unaff_x20 + 0x72) != '\0') {
                      lVar5 = unaff_x20[0x19];
                      uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
                      if (*(float *)(unaff_x19 + 0x90) <= *(float *)(unaff_x19 + 0xac)) {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                      }
                      else {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar7 = FUN_052cb1ec(lVar5,uVar12,*(undefined8 *)(unaff_x19 + 0x50));
                        if ((uVar7 & 1) != 0) {
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          puVar3 = PTR_DAT_06d02c10;
                          if (lVar5 != 0) {
                            puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
                            FUN_0674158c(*puVar9,puVar9[1],puVar9[2],lVar5,0);
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(PTR_DAT_06d02c10);
                              DAT_071babf5 = '\x01';
                            }
                            if (lVar5 != 0) {
                              puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                              FUN_06741454(*puVar9,puVar9[1],puVar9[2],lVar5,0);
                              return 0;
                            }
                          }
                          goto LAB_052cc5a8;
                        }
                        lVar5 = unaff_x20[0x19];
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
                      }
                      FUN_052cb430(lVar5,uVar12);
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
  lVar5 = unaff_x20[0x19];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x128) == 0)) goto LAB_052cc5a8;
  uVar6 = FUN_052eae08(*(long *)(lVar5 + 0x128),*(undefined4 *)(lVar5 + 0xdc),0);
  if (((uVar6 & 1) == 0) ||
     (uVar7 = (ulong)(uint)*(float *)(unaff_x19 + 0x90),
     *(float *)(unaff_x19 + 0xac) <= *(float *)(unaff_x19 + 0x90))) goto LAB_052cbc84;
  fVar21 = *(float *)(unaff_x19 + 0x9c);
  fVar19 = (float)FUN_066d1758(0);
  *(float *)(unaff_x19 + 0x9c) = fVar21 + fVar19;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_052cc5a8;
  fVar20 = *(float *)(unaff_x19 + 0x7c);
  fVar22 = *(float *)(unaff_x19 + 0x80);
  fVar15 = (float)FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x78),lVar5,0);
  fVar19 = fVar20;
  fVar14 = fVar22;
  fVar16 = (float)(**(code **)(*unaff_x20 + 600))();
  fVar21 = fVar14;
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar3 = PTR_DAT_06d03010;
  fVar16 = fVar16 - fVar15;
  fVar19 = fVar19 - fVar20;
  fVar14 = fVar14 - fVar22;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar20 = fVar14 * fVar14;
  fVar15 = SQRT(fVar20 + fVar16 * fVar16 + fVar19 * fVar19);
  *(float *)(unaff_x19 + 0xac) = fVar15;
  if ((*(char *)(unaff_x19 + 0x58) != '\0') &&
     (fVar20 = *(float *)(unaff_x19 + 0x68), fVar15 < fVar20)) {
    if (unaff_x20[0x19] == 0) goto LAB_052cc5a8;
    uVar7 = FUN_052cb1ec(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x50));
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      puVar3 = PTR_DAT_06d02c10;
      if (lVar5 == 0) goto LAB_052cc5a8;
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_0674158c(*puVar9,puVar9[1],puVar9[2],lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      if (lVar5 == 0) goto LAB_052cc5a8;
      puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      uVar7 = (ulong)(uint)puVar9[1];
      uVar24 = (ulong)(uint)puVar9[2];
      FUN_06741454(*puVar9,lVar5,0);
      goto LAB_052cbc84;
    }
  }
  fVar15 = (float)FUN_066d1758(0);
  if ((unaff_x20[0x19] == 0) || (lVar5 = *(long *)(unaff_x20[0x19] + 0x78), lVar5 == 0))
  goto LAB_052cc5a8;
  fVar22 = (float)FUN_067413b4(lVar5,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar23 = fVar21;
  fVar26 = fVar20;
  fVar17 = (float)FUN_067413b4(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar18 = (float)FUN_06741734(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar15 = 1.0 / fVar15;
  fVar30 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x20);
  fVar16 = fVar16 * fVar15;
  fVar19 = fVar19 * fVar15;
  fVar14 = fVar14 * fVar15;
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar29 = fVar14 * fVar14 + fVar16 * fVar16 + fVar19 * fVar19;
  if (fVar30 * fVar30 < fVar29) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar29 = SQRT(fVar29);
    fVar16 = (fVar16 / fVar29) * fVar30;
    fVar19 = (fVar19 / fVar29) * fVar30;
    fVar14 = (fVar14 / fVar29) * fVar30;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar30 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
  fVar15 = fVar15 * fVar18;
  fVar16 = fVar15 * (fVar16 - (fVar17 - fVar22));
  fVar19 = fVar15 * (fVar19 - (fVar26 - fVar20));
  fVar15 = fVar15 * (fVar14 - (fVar23 - fVar21));
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar29 = fVar15 * fVar15;
  fVar14 = fVar29 + fVar16 * fVar16 + fVar19 * fVar19;
  if (fVar30 * fVar30 < fVar14) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar14 = SQRT(fVar14);
    fVar29 = fVar19 / fVar14;
    fVar16 = (fVar16 / fVar14) * fVar30;
    fVar19 = fVar29 * fVar30;
    fVar15 = (fVar15 / fVar14) * fVar30;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar28 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x28);
  fVar30 = *(float *)(unaff_x19 + 0xac);
  fVar14 = fVar28;
  if (fVar30 <= fVar28) {
    fVar14 = fVar30;
  }
  fVar2 = fVar14;
  if (fVar30 < 0.0) {
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
    fVar30 = *pfVar10;
    fVar14 = pfVar10[1];
    fVar18 = pfVar10[2];
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar30 = (float)FUN_0673c42c(0);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
    fVar18 = fVar18 * *(float *)(*(long *)(unaff_x19 + 0x60) + 0x24);
    fVar30 = fVar18 * -fVar30;
    fVar14 = fVar18 * -fVar14;
    fVar18 = fVar18 * -fVar29;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  FUN_067427b0(fVar16 + fVar30,fVar19 + fVar14,fVar15 + fVar18,*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  lVar5 = *(long *)(unaff_x19 + 0x30);
  fVar19 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
  fVar14 = (float)FUN_066d1758(0);
  fVar14 = ((fVar28 - fVar2) / fVar28) * fVar19 * fVar14;
  fVar19 = fVar14;
  if (1.0 < fVar14) {
    fVar19 = 1.0;
  }
  if (fVar14 < 0.0) {
    fVar19 = 0.0;
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  uVar6 = (ulong)(uint)(fVar22 - fVar17);
  uVar24 = (ulong)(uint)(fVar23 + (fVar21 - fVar23) * fVar19);
  uVar7 = (ulong)(uint)(fVar26 + (fVar20 - fVar26) * fVar19);
  FUN_06741454(fVar17 + (fVar22 - fVar17) * fVar19,lVar5,0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar8 = FUN_066cd30c(uVar12,0);
  if (((uVar8 & 1) != 0) && (*(char *)(unaff_x19 + 0x94) == '\0')) {
    lVar5 = *(long *)(unaff_x19 + 0x60);
    if (lVar5 == 0) goto LAB_052cc5a8;
    iVar1 = *(int *)(lVar5 + 0x3c);
    if (iVar1 == 2) {
      uVar24 = (ulong)(uint)*(float *)(lVar5 + 0x48);
      uVar6 = 0x42c80000;
      fVar19 = (*(float *)(unaff_x19 + 0xa8) - *(float *)(unaff_x19 + 0xac)) /
               *(float *)(unaff_x19 + 0xa8);
      fVar21 = *(float *)(lVar5 + 0x48) / 100.0;
LAB_052cc4b8:
      uVar7 = (ulong)(uint)fVar21;
      bVar4 = fVar21 < fVar19;
    }
    else {
      if (iVar1 == 1) {
        fVar19 = *(float *)(unaff_x19 + 0x9c);
        fVar21 = *(float *)(lVar5 + 0x44);
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
        lVar5 = *(long *)(unaff_x19 + 0x88);
        if (lVar5 == 0) goto LAB_052cc5a8;
        fVar19 = *(float *)(unaff_x19 + 0xac);
      }
      else {
        if (iVar1 != 0) goto LAB_052cc2e0;
        fVar21 = *(float *)(unaff_x19 + 0xac);
        uVar7 = (ulong)(uint)fVar21;
        lVar5 = *(long *)(unaff_x19 + 0x88);
        fVar19 = *(float *)(unaff_x19 + 0x74);
        if (fVar21 <= *(float *)(unaff_x19 + 0x74)) {
          fVar19 = fVar21;
        }
        if (lVar5 == 0) goto LAB_052cc5a8;
      }
      fVar21 = (float)uVar7;
      fVar16 = *(float *)(unaff_x19 + 0x6c);
      lVar5 = FUN_066c67b0(lVar5,0);
      fVar15 = (float)uVar6;
      fVar14 = (float)uVar24;
      if ((lVar5 == 0) || (fVar20 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0))
      goto LAB_052cc5a8;
      fVar22 = fVar21;
      fVar23 = fVar14;
      fVar26 = fVar15;
      fVar17 = (float)FUN_052cc80c();
      uVar6 = (ulong)(uint)(fVar15 * fVar26);
      uVar24 = 0x3f800000;
      fVar21 = (float)NEON_fminnm(ABS(fVar15 * fVar26 +
                                      fVar14 * fVar23 + fVar20 * fVar17 + fVar21 * fVar22),
                                  0x3f800000);
      fVar14 = 0.0;
      if (fVar21 <= DAT_013f6c48) {
        fVar21 = acosf(fVar21);
        fVar14 = (fVar21 + fVar21) * DAT_013f6f10;
      }
      uVar7 = (ulong)(uint)fVar14;
      *(float *)(unaff_x19 + 0x98) = fVar14 / (fVar19 / fVar16);
    }
  }
LAB_052cc2e0:
  if (*(char *)(unaff_x19 + 0x94) != '\0') {
    lVar5 = unaff_x20[0x2d];
    if ((lVar5 == 0) || (fVar19 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0)) {
LAB_052cc5a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar8 = uVar7;
    uVar25 = uVar24;
    uVar27 = uVar6;
    uVar12 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar21 = (float)NEON_fminnm(ABS((float)uVar6 * (float)uVar27 +
                                    (float)uVar24 * (float)uVar25 +
                                    fVar19 * (float)uVar12 + (float)uVar7 * (float)uVar8),0x3f800000
                               );
    if ((fVar21 <= DAT_013f6c48) &&
       (fVar21 = acosf(fVar21), (fVar21 + fVar21) * DAT_013f6f10 != 0.0)) {
      uVar12 = FUN_066bd84c(fVar19,uVar7,uVar24,uVar6,uVar12,uVar8,uVar25,uVar27,0);
      uVar8 = uVar7;
      uVar25 = uVar24;
      uVar27 = uVar6;
    }
    FUN_066d4ae0(uVar12,uVar8,uVar25,uVar27,lVar5,0);
  }
  uVar12 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar12);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


