/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Clear
ENTRY_POINT: 052cb57c
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
Meta_XR_ImmersiveDebugger_UserInterface_Console__Clear
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *unaff_x26;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  
  plVar13 = (long *)(unaff_x21 + 0x30);
  *plVar13 = param_6;
  thunk_FUN_02f411dc(plVar13);
  if (*plVar13 == 0) goto LAB_052cc5a8;
  uVar17 = FUN_067416ac(*plVar13,0);
  *(undefined4 *)(unaff_x19 + 0x38) = uVar17;
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  uVar17 = FUN_06741ac4(*(long *)(unaff_x19 + 0x30),0);
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar17;
  *(undefined4 *)(unaff_x19 + 0x40) = param_2;
  *(undefined4 *)(unaff_x19 + 0x44) = param_3;
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  uVar17 = FUN_06741624(*(long *)(unaff_x19 + 0x30),0);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar17;
  if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x19] == 0)) goto LAB_052cc5a8;
  FUN_052cb19c(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x20));
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  FUN_067416e8(0,*(long *)(unaff_x19 + 0x30),0);
  if (*plVar13 == 0) goto LAB_052cc5a8;
  FUN_06741660(0,*plVar13,0);
                    /* try { // try from 052cb608 to 053cb62f has its CatchHandler @ 052cb87c */
  (**(code **)(*unaff_x20 + 0x1e8))();
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052cc5a8;
  lVar5 = FUN_05290058(*(long *)(unaff_x19 + 0x20),unaff_x20[0x19],1,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x26);
  }
                    /* try { // try from 052cb648 to 053cb6a7 has its CatchHandler @ 052cb880 */
  uVar6 = FUN_066cd30c(lVar5,0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052cc5a8;
    lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0);
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  lVar7 = FUN_037f15fc(lVar5,*(undefined8 *)PTR_DAT_06d3d5f8);
  plVar14 = (long *)(unaff_x19 + 0x50);
  *plVar14 = lVar7;
  thunk_FUN_02f411dc(plVar14,lVar7);
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 == 0) goto LAB_052cc5a8;
  iVar1 = *(int *)(lVar7 + 0x24);
  *(bool *)(unaff_x19 + 0x58) = iVar1 == 1;
  if (1 < iVar1 - 1U) {
    lVar7 = *plVar14;
                    /* try { // try from 052cb6c0 to 053cb6d3 has its CatchHandler @ 052cb878 */
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_066cd30c(lVar7,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((uVar6 & 1) == 0) {
      if (lVar7 == 0) goto LAB_052cc5a8;
                    /* try { // try from 052cb700 to 053cb70f has its CatchHandler @ 052cb868 */
      *(undefined1 *)(unaff_x19 + 0x58) = *(undefined1 *)(lVar7 + 0xf4);
    }
    else {
                    /* try { // try from 052cb6e0 to 053cb6ef has its CatchHandler @ 052cb874 */
      *(undefined1 *)(unaff_x19 + 0x58) = 0;
      if (lVar7 == 0) goto LAB_052cc5a8;
    }
  }
  plVar16 = (long *)(unaff_x19 + 0x60);
  *plVar16 = *(long *)(lVar7 + 0x70);
                    /* try { // try from 052cb718 to 053cb727 has its CatchHandler @ 052cb864 */
  thunk_FUN_02f411dc(plVar16);
  lVar7 = *plVar16;
                    /* try { // try from 052cb728 to 053cb837 has its CatchHandler @ 052cb39c */
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_066cd30c(lVar7,0);
  if ((uVar6 & 1) == 0) {
    *plVar16 = unaff_x20[0x22];
    thunk_FUN_02f411dc(plVar16);
  }
  lVar7 = *plVar16;
  if (lVar7 == 0) goto LAB_052cc5a8;
  uVar35 = *(undefined4 *)(lVar7 + 0x58);
  uVar17 = *(undefined4 *)(lVar7 + 0x5c);
  uVar36 = *(undefined4 *)(lVar7 + 0x54);
  uVar37 = *(undefined4 *)(lVar7 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar7 + 0x1c);
  *(undefined4 *)(unaff_x19 + 0x70) = *(undefined4 *)(lVar7 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x74) = *(undefined4 *)(lVar7 + 0x50);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052cc5a8;
  lVar7 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0);
  lVar5 = FUN_066c67b0(lVar5,0);
  if ((lVar5 == 0) || (FUN_066d48c0(lVar5,0), lVar7 == 0)) goto LAB_052cc5a8;
  uVar18 = FUN_066d6014(lVar7,0);
  *(undefined4 *)(unaff_x19 + 0x78) = uVar18;
  *(undefined4 *)(unaff_x19 + 0x7c) = param_2;
  *(undefined4 *)(unaff_x19 + 0x80) = param_3;
  uVar15 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_066cd30c(uVar15,0);
  if ((uVar6 & 1) != 0) {
    if (unaff_x20[0x19] == 0) goto LAB_052cc5a8;
    uVar18 = FUN_052cc5ac(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x20),
                          *(undefined8 *)(unaff_x19 + 0x50));
    *(undefined4 *)(unaff_x19 + 0x78) = uVar18;
    *(undefined4 *)(unaff_x19 + 0x7c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x80) = param_3;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
    FUN_06741b64(*(long *)(unaff_x19 + 0x30),0);
  }
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_052cc5a8;
  uVar9 = (ulong)*(uint *)(unaff_x19 + 0x7c);
  uVar10 = (ulong)*(uint *)(unaff_x19 + 0x80);
  uVar24 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x78),lVar5,0);
                    /* try { // try from 052cb838 to 053cb83b has its CatchHandler @ 052cb870 */
  lVar5 = unaff_x20[0x2d];
                    /* try { // try from 052cb83c to 053cb83f has its CatchHandler @ 052cb39c */
  uVar15 = *(undefined8 *)(unaff_x19 + 0x50);
                    /* try { // try from 052cb840 to 053cb843 has its CatchHandler @ 052cb86c */
                    /* try { // try from 052cb844 to 053cb847 has its CatchHandler @ 052cb39c */
                    /* try { // try from 052cb848 to 053cb84b has its CatchHandler @ 052cb860 */
                    /* try { // try from 052cb84c to 053cb84f has its CatchHandler @ 052cb85c */
                    /* try { // try from 052cb850 to 053cb88f has its CatchHandler @ 052cb39c */
  uVar6 = uVar9;
  uVar30 = uVar10;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* catch() { ... } // from try @ 052cb84c with catch @ 052cb85c */
                    /* catch() { ... } // from try @ 052cb848 with catch @ 052cb860 */
  uVar8 = FUN_066cd30c(uVar15,0);
                    /* catch() { ... } // from try @ 052cb718 with catch @ 052cb864 */
  if ((uVar8 & 1) == 0) {
                    /* try { // try from 052cb890 to 053cb893 has its CatchHandler @ 052cb8ac */
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar7 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar7 == 0)) goto LAB_052cc5a8;
    uVar15 = FUN_066d320c(lVar7,0);
  }
  else {
                    /* catch() { ... } // from try @ 052cb700 with catch @ 052cb868 */
                    /* catch() { ... } // from try @ 052cb840 with catch @ 052cb86c */
                    /* catch() { ... } // from try @ 052cb838 with catch @ 052cb870 */
                    /* catch() { ... } // from try @ 052cb6e0 with catch @ 052cb874 */
    if ((unaff_x20[0x19] == 0) || (*plVar14 == 0)) goto LAB_052cc5a8;
                    /* catch() { ... } // from try @ 052cb6c0 with catch @ 052cb878 */
                    /* catch() { ... } // from try @ 052cb608 with catch @ 052cb87c */
                    /* catch() { ... } // from try @ 052cb648 with catch @ 052cb880 */
    uVar15 = FUN_052c3304(*plVar14,*(undefined4 *)(unaff_x20[0x19] + 0xdc),0);
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  FUN_066d5334(uVar24,uVar9,uVar10,uVar15,uVar6,uVar30,param_4,lVar5,0);
  if ((unaff_x20[0x2d] == 0) || (lVar5 = FUN_066c67ec(unaff_x20[0x2d],0), lVar5 == 0))
  goto LAB_052cc5a8;
  lVar5 = FUN_03a862a4(lVar5,*(undefined8 *)PTR_DAT_06d03770);
  plVar14 = (long *)(unaff_x19 + 0x88);
  *plVar14 = lVar5;
  thunk_FUN_02f411dc(plVar14,lVar5);
  if (*plVar14 == 0) goto LAB_052cc5a8;
  FUN_06744404(*plVar14,0,0);
  if (*plVar14 == 0) goto LAB_052cc5a8;
  FUN_06746704(*plVar14,1,0);
  FUN_0529a830(uVar36,uVar35,uVar17,*plVar14,0);
  if (*plVar14 == 0) goto LAB_052cc5a8;
  FUN_06743fdc(*plVar14,*plVar13,0);
  if (*plVar13 == 0) goto LAB_052cc5a8;
  lVar7 = *plVar14;
  lVar5 = FUN_066c67b0(*plVar13,0);
  if ((lVar5 == 0) || (FUN_066d6014(uVar24,uVar9,uVar10,lVar5,0), lVar7 == 0)) goto LAB_052cc5a8;
  FUN_06744330(lVar7,0);
  lVar5 = *plVar14;
  if (DAT_071babf5 == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071babf5 = '\x01';
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
  fVar25 = (float)puVar11[1];
  fVar27 = (float)puVar11[2];
  FUN_067441f8(*puVar11,lVar5,0);
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    uVar37 = *(undefined4 *)(unaff_x19 + 0x68);
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined4 *)(unaff_x19 + 0x90) = uVar37;
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  thunk_FUN_02f411dc();
  if ((char)unaff_x20[0x29] != '\0') {
    FUN_066d1830(*(undefined4 *)((long)unaff_x20 + 0x14c),0);
  }
  plVar13 = (long *)unaff_x20[0x19];
  if (plVar13 == (long *)0x0) goto LAB_052cc5a8;
  fVar19 = (float)(**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
  if (DAT_071bac5f == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071bac5f = '\x01';
  }
  fVar19 = fVar19 - (float)uVar24;
  fVar25 = fVar25 - (float)uVar9;
  fVar27 = fVar27 - (float)uVar10;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar25 = fVar25 * fVar25;
  uVar6 = (ulong)(uint)fVar25;
  fVar27 = fVar27 * fVar27;
  uVar30 = (ulong)(uint)fVar27;
  fVar25 = SQRT(fVar27 + fVar19 * fVar19 + fVar25);
  *(float *)(unaff_x19 + 0xa8) = fVar25;
  *(float *)(unaff_x19 + 0xac) = fVar25;
  lVar5 = unaff_x20[0x13];
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066cd30c(lVar5,0);
  if ((uVar9 & 1) == 0) {
LAB_052cbc84:
    if ((char)unaff_x20[0x29] != '\0') {
      FUN_066d1830(0x3f800000,0);
    }
    FUN_052c9fd0();
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_06743fdc(*(long *)(unaff_x19 + 0x88),0,0);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x88);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar15,0);
      *(undefined1 *)(unaff_x20 + 0x2f) = 0;
      (**(code **)(*unaff_x20 + 0x1e8))();
      uVar9 = FUN_066cd30c(*(undefined8 *)(unaff_x19 + 0x20),0);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_067416e8(*(undefined4 *)(unaff_x19 + 0x38),*(long *)(unaff_x19 + 0x30),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06741660(*(undefined4 *)(unaff_x19 + 0x48),*(long *)(unaff_x19 + 0x30),0);
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 != 0) {
            uVar9 = FUN_067413b4(lVar5,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              fVar25 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x34);
              if (DAT_071babf9 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf9 = '\x01';
              }
              fVar19 = (float)uVar9;
              fVar20 = (float)uVar6;
              fVar21 = (float)uVar30;
              fVar27 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
              if (fVar25 * fVar25 < fVar27) {
                if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                fVar27 = SQRT(fVar27);
                uVar9 = (ulong)(uint)((fVar19 / fVar27) * fVar25);
                uVar6 = (ulong)(uint)((fVar20 / fVar27) * fVar25);
                uVar30 = (ulong)(uint)((fVar21 / fVar27) * fVar25);
              }
              FUN_06741454(uVar9,lVar5,0);
              lVar5 = *(long *)(unaff_x19 + 0x30);
              if (lVar5 != 0) {
                uVar9 = FUN_067414ec(lVar5,0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar25 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x38);
                  if (DAT_071babf9 == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    DAT_071babf9 = '\x01';
                  }
                  fVar19 = (float)uVar9;
                  fVar20 = (float)uVar6;
                  fVar21 = (float)uVar30;
                  fVar27 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
                  if (fVar25 * fVar25 < fVar27) {
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar27 = SQRT(fVar27);
                    uVar9 = (ulong)(uint)((fVar19 / fVar27) * fVar25);
                    uVar6 = (ulong)(uint)((fVar20 / fVar27) * fVar25);
                    uVar30 = (ulong)(uint)((fVar21 / fVar27) * fVar25);
                  }
                  FUN_0674158c(uVar9,uVar6,uVar30,lVar5,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_06741b64(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40)
                                 ,*(undefined4 *)(unaff_x19 + 0x44),*(long *)(unaff_x19 + 0x30),0);
                    if (*(char *)((long)unaff_x20 + 0x72) != '\0') {
                      lVar5 = unaff_x20[0x19];
                      uVar15 = *(undefined8 *)(unaff_x19 + 0x20);
                      if (*(float *)(unaff_x19 + 0x90) <= *(float *)(unaff_x19 + 0xac)) {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                      }
                      else {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar6 = FUN_052cb1ec(lVar5,uVar15,*(undefined8 *)(unaff_x19 + 0x50));
                        if ((uVar6 & 1) != 0) {
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          puVar3 = PTR_DAT_06d02c10;
                          if (lVar5 != 0) {
                            puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
                            FUN_0674158c(*puVar11,puVar11[1],puVar11[2],lVar5,0);
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(PTR_DAT_06d02c10);
                              DAT_071babf5 = '\x01';
                            }
                            if (lVar5 != 0) {
                              puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                              FUN_06741454(*puVar11,puVar11[1],puVar11[2],lVar5,0);
                              return 0;
                            }
                          }
                          goto LAB_052cc5a8;
                        }
                        lVar5 = unaff_x20[0x19];
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar15 = *(undefined8 *)(unaff_x19 + 0x20);
                      }
                      FUN_052cb430(lVar5,uVar15);
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
  uVar9 = FUN_052eae08(*(long *)(lVar5 + 0x128),*(undefined4 *)(lVar5 + 0xdc),0);
  if (((uVar9 & 1) == 0) ||
     (uVar6 = (ulong)(uint)*(float *)(unaff_x19 + 0x90),
     *(float *)(unaff_x19 + 0xac) <= *(float *)(unaff_x19 + 0x90))) goto LAB_052cbc84;
  fVar27 = *(float *)(unaff_x19 + 0x9c);
  fVar25 = (float)FUN_066d1758(0);
  *(float *)(unaff_x19 + 0x9c) = fVar27 + fVar25;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_052cc5a8;
  fVar26 = *(float *)(unaff_x19 + 0x7c);
  fVar28 = *(float *)(unaff_x19 + 0x80);
  fVar20 = (float)FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x78),lVar5,0);
  fVar25 = fVar26;
  fVar19 = fVar28;
  fVar21 = (float)(**(code **)(*unaff_x20 + 600))();
  fVar27 = fVar19;
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  puVar3 = PTR_DAT_06d03010;
  fVar21 = fVar21 - fVar20;
  fVar25 = fVar25 - fVar26;
  fVar19 = fVar19 - fVar28;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar26 = fVar19 * fVar19;
  fVar20 = SQRT(fVar26 + fVar21 * fVar21 + fVar25 * fVar25);
  *(float *)(unaff_x19 + 0xac) = fVar20;
  if ((*(char *)(unaff_x19 + 0x58) != '\0') &&
     (fVar26 = *(float *)(unaff_x19 + 0x68), fVar20 < fVar26)) {
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
      puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_0674158c(*puVar11,puVar11[1],puVar11[2],lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      if (lVar5 == 0) goto LAB_052cc5a8;
      puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      uVar6 = (ulong)(uint)puVar11[1];
      uVar30 = (ulong)(uint)puVar11[2];
      FUN_06741454(*puVar11,lVar5,0);
      goto LAB_052cbc84;
    }
  }
  fVar20 = (float)FUN_066d1758(0);
  if ((unaff_x20[0x19] == 0) || (lVar5 = *(long *)(unaff_x20[0x19] + 0x78), lVar5 == 0))
  goto LAB_052cc5a8;
  fVar28 = (float)FUN_067413b4(lVar5,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar29 = fVar27;
  fVar31 = fVar26;
  fVar22 = (float)FUN_067413b4(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  fVar23 = (float)FUN_06741734(*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar20 = 1.0 / fVar20;
  fVar38 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x20);
  fVar21 = fVar21 * fVar20;
  fVar25 = fVar25 * fVar20;
  fVar19 = fVar19 * fVar20;
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar34 = fVar19 * fVar19 + fVar21 * fVar21 + fVar25 * fVar25;
  if (fVar38 * fVar38 < fVar34) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar34 = SQRT(fVar34);
    fVar21 = (fVar21 / fVar34) * fVar38;
    fVar25 = (fVar25 / fVar34) * fVar38;
    fVar19 = (fVar19 / fVar34) * fVar38;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar38 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
  fVar20 = fVar20 * fVar23;
  fVar21 = fVar20 * (fVar21 - (fVar22 - fVar28));
  fVar25 = fVar20 * (fVar25 - (fVar31 - fVar26));
  fVar20 = fVar20 * (fVar19 - (fVar29 - fVar27));
  if (DAT_071babf9 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf9 = '\x01';
  }
  fVar34 = fVar20 * fVar20;
  fVar19 = fVar34 + fVar21 * fVar21 + fVar25 * fVar25;
  if (fVar38 * fVar38 < fVar19) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar19 = SQRT(fVar19);
    fVar34 = fVar25 / fVar19;
    fVar21 = (fVar21 / fVar19) * fVar38;
    fVar25 = fVar34 * fVar38;
    fVar20 = (fVar20 / fVar19) * fVar38;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  fVar33 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x28);
  fVar38 = *(float *)(unaff_x19 + 0xac);
  fVar19 = fVar33;
  if (fVar38 <= fVar33) {
    fVar19 = fVar38;
  }
  fVar2 = fVar19;
  if (fVar38 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  uVar6 = FUN_067417bc(*(long *)(unaff_x19 + 0x30),0);
  if ((uVar6 & 1) == 0) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    fVar38 = *pfVar12;
    fVar19 = pfVar12[1];
    fVar23 = pfVar12[2];
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar38 = (float)FUN_0673c42c(0);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
    fVar23 = fVar23 * *(float *)(*(long *)(unaff_x19 + 0x60) + 0x24);
    fVar38 = fVar23 * -fVar38;
    fVar19 = fVar23 * -fVar19;
    fVar23 = fVar23 * -fVar34;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052cc5a8;
  FUN_067427b0(fVar21 + fVar38,fVar25 + fVar19,fVar20 + fVar23,*(long *)(unaff_x19 + 0x30),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
  lVar5 = *(long *)(unaff_x19 + 0x30);
  fVar25 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
  fVar19 = (float)FUN_066d1758(0);
  fVar19 = ((fVar33 - fVar2) / fVar33) * fVar25 * fVar19;
  fVar25 = fVar19;
  if (1.0 < fVar19) {
    fVar25 = 1.0;
  }
  if (fVar19 < 0.0) {
    fVar25 = 0.0;
  }
  if (lVar5 == 0) goto LAB_052cc5a8;
  uVar9 = (ulong)(uint)(fVar28 - fVar22);
  uVar30 = (ulong)(uint)(fVar29 + (fVar27 - fVar29) * fVar25);
  uVar6 = (ulong)(uint)(fVar31 + (fVar26 - fVar31) * fVar25);
  FUN_06741454(fVar22 + (fVar28 - fVar22) * fVar25,lVar5,0);
  uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar10 = FUN_066cd30c(uVar15,0);
  if (((uVar10 & 1) != 0) && (*(char *)(unaff_x19 + 0x94) == '\0')) {
    lVar5 = *(long *)(unaff_x19 + 0x60);
    if (lVar5 == 0) goto LAB_052cc5a8;
    iVar1 = *(int *)(lVar5 + 0x3c);
    if (iVar1 == 2) {
      uVar30 = (ulong)(uint)*(float *)(lVar5 + 0x48);
      uVar9 = 0x42c80000;
      fVar25 = (*(float *)(unaff_x19 + 0xa8) - *(float *)(unaff_x19 + 0xac)) /
               *(float *)(unaff_x19 + 0xa8);
      fVar27 = *(float *)(lVar5 + 0x48) / 100.0;
LAB_052cc4b8:
      uVar6 = (ulong)(uint)fVar27;
      bVar4 = fVar27 < fVar25;
    }
    else {
      if (iVar1 == 1) {
        fVar25 = *(float *)(unaff_x19 + 0x9c);
        fVar27 = *(float *)(lVar5 + 0x44);
        goto LAB_052cc4b8;
      }
      if (iVar1 != 0) goto LAB_052cc2e0;
      uVar6 = (ulong)(uint)*(float *)(unaff_x19 + 0x70);
      if (*(float *)(unaff_x19 + 0x70) <= *(float *)(unaff_x19 + 0xac)) {
        bVar4 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x19 + 0x50);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        bVar4 = FUN_066cd30c(uVar15,0);
      }
    }
    *(byte *)(unaff_x19 + 0x94) = bVar4 & 1;
    if ((bVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_052cc5a8;
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
      if (iVar1 == 1) {
        lVar5 = *(long *)(unaff_x19 + 0x88);
        if (lVar5 == 0) goto LAB_052cc5a8;
        fVar25 = *(float *)(unaff_x19 + 0xac);
      }
      else {
        if (iVar1 != 0) goto LAB_052cc2e0;
        fVar27 = *(float *)(unaff_x19 + 0xac);
        uVar6 = (ulong)(uint)fVar27;
        lVar5 = *(long *)(unaff_x19 + 0x88);
        fVar25 = *(float *)(unaff_x19 + 0x74);
        if (fVar27 <= *(float *)(unaff_x19 + 0x74)) {
          fVar25 = fVar27;
        }
        if (lVar5 == 0) goto LAB_052cc5a8;
      }
      fVar27 = (float)uVar6;
      fVar21 = *(float *)(unaff_x19 + 0x6c);
      lVar5 = FUN_066c67b0(lVar5,0);
      fVar20 = (float)uVar9;
      fVar19 = (float)uVar30;
      if ((lVar5 == 0) || (fVar26 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0))
      goto LAB_052cc5a8;
      fVar28 = fVar27;
      fVar29 = fVar19;
      fVar31 = fVar20;
      fVar22 = (float)FUN_052cc80c();
      uVar9 = (ulong)(uint)(fVar20 * fVar31);
      uVar30 = 0x3f800000;
      fVar27 = (float)NEON_fminnm(ABS(fVar20 * fVar31 +
                                      fVar19 * fVar29 + fVar26 * fVar22 + fVar27 * fVar28),
                                  0x3f800000);
      fVar19 = 0.0;
      if (fVar27 <= DAT_013f6c48) {
        fVar27 = acosf(fVar27);
        fVar19 = (fVar27 + fVar27) * DAT_013f6f10;
      }
      uVar6 = (ulong)(uint)fVar19;
      *(float *)(unaff_x19 + 0x98) = fVar19 / (fVar25 / fVar21);
    }
  }
LAB_052cc2e0:
  if (*(char *)(unaff_x19 + 0x94) != '\0') {
    lVar5 = unaff_x20[0x2d];
    if ((lVar5 == 0) || (fVar25 = (float)FUN_066d320c(lVar5,0), unaff_x20[0x19] == 0)) {
LAB_052cc5a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar10 = uVar6;
    uVar8 = uVar30;
    uVar32 = uVar9;
    uVar15 = FUN_052cc80c();
    FUN_066d1758(0);
    fVar27 = (float)NEON_fminnm(ABS((float)uVar9 * (float)uVar32 +
                                    (float)uVar30 * (float)uVar8 +
                                    fVar25 * (float)uVar15 + (float)uVar6 * (float)uVar10),
                                0x3f800000);
    if ((fVar27 <= DAT_013f6c48) &&
       (fVar27 = acosf(fVar27), (fVar27 + fVar27) * DAT_013f6f10 != 0.0)) {
      uVar15 = FUN_066bd84c(fVar25,uVar6,uVar30,uVar9,uVar15,uVar10,uVar8,uVar32,0);
      uVar10 = uVar6;
      uVar8 = uVar30;
      uVar32 = uVar9;
    }
    FUN_066d4ae0(uVar15,uVar10,uVar8,uVar32,lVar5,0);
  }
  uVar15 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
  FUN_066cf184(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar15);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


