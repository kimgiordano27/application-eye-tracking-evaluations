/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 02c272e4
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  char in_NG;
  char in_OV;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int iVar15;
  int iVar16;
  int iVar17;
  long unaff_x26;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  while (in_NG != in_OV) {
    uVar6 = FUN_02a4b568();
    uVar6 = uVar6 & 0xffff;
    if (uVar6 < 0x5b) {
      if (uVar6 - 0x26 < 7) {
                    /* WARNING: Could not recover jumptable at 0x02c27284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(uVar6 - 0x26) * 2) * 4 + 0x2c27288))();
        return;
      }
    }
    else if (uVar6 == 0x5c) {
      unaff_w25 = unaff_w25 + 1;
    }
    else {
      if (uVar6 == 0x5b) {
        sVar5 = FUN_02a4b568();
        if ((sVar5 != 0x5b) && ((unaff_w22 & 1) != 0)) {
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar9 = thunk_FUN_01861bbc();
          puVar10 = PTR_DAT_0380bc08;
          goto LAB_02c27cbc;
        }
        FUN_02a51d10();
        if (unaff_x21 == 0) goto LAB_02c279c4;
        FUN_02c27d30();
        unaff_w24 = unaff_w25 + 1;
        bVar3 = true;
        goto LAB_02c27348;
      }
      if (uVar6 == 0x5d) {
        FUN_02a51d10();
        if (unaff_x21 == 0) goto LAB_02c279c4;
        FUN_02c27d30();
        unaff_w24 = unaff_w25 + 1;
        bVar3 = true;
        if (((unaff_w22 & 1) == 0) || ((unaff_w23 & 1) != 0)) goto LAB_02c27348;
        goto LAB_02c2799c;
      }
    }
    unaff_w25 = unaff_w25 + 1;
    in_OV = SBORROW4(unaff_w25,*(int *)(unaff_x20 + 0x10));
    iStack000000000000000c = unaff_w25;
    in_NG = unaff_w25 - *(int *)(unaff_x20 + 0x10) < 0;
  }
  bVar3 = false;
LAB_02c27348:
  if (unaff_w24 < unaff_w25) {
    FUN_02a51d10();
joined_r0x02c27370:
    if (unaff_x21 == 0) {
LAB_02c279c4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02c27d30();
  }
  else if (unaff_w25 == unaff_w24) goto joined_r0x02c27370;
                    /* try { // try from 02c27398 to 02d273a3 has its CatchHandler @ 02c27454 */
  if ((bVar3) && (unaff_w25 < *(int *)(unaff_x20 + 0x10))) {
    puVar1 = (undefined8 *)(unaff_x21 + 0x18);
LAB_02c273b0:
    uVar4 = FUN_02a4b568();
    if (uVar4 < 0x2b) {
      if (uVar4 == 0x26) {
        if (unaff_x21 == 0) goto LAB_02c279c4;
        if (*(char *)(unaff_x21 + 0x38) == '\0') {
          *(undefined1 *)(unaff_x21 + 0x38) = 1;
          goto LAB_02c27670;
        }
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar9 = thunk_FUN_01861bbc();
        puVar10 = PTR_DAT_0380bbc8;
        goto LAB_02c27cbc;
      }
      if (uVar4 != 0x2a) {
LAB_02c27a30:
        FUN_015d6ff8();
        uStack0000000000000008 = FUN_02a4b568();
        thunk_FUN_01851c08(PTR_DAT_037f6f10);
        FUN_015d6960();
        uVar9 = FUN_02b390d4(&stack0x00000008,0);
        uVar11 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
        uVar12 = thunk_FUN_01851c08(PTR_DAT_0380bba8);
        uVar8 = thunk_FUN_01851c08(PTR_DAT_0380bbb0);
        uVar9 = FUN_02a506f0(uVar12,uVar9,uVar8,uVar11,0);
LAB_02c27c10:
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar11 = thunk_FUN_01861bbc();
        uVar12 = thunk_FUN_01851c08(PTR_DAT_03804108);
        FUN_02b3cc64(uVar11,uVar9,uVar12,0);
        uVar9 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar11,uVar9);
      }
      if (unaff_x21 == 0) goto LAB_02c279c4;
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar9 = thunk_FUN_01861bbc();
        puVar10 = PTR_DAT_0380bbc0;
        goto LAB_02c27cbc;
      }
      if (unaff_w25 + 1 < *(int *)(unaff_x20 + 0x10)) {
        iVar17 = 0;
        do {
          iVar15 = iVar17;
          iVar16 = unaff_w25 + iVar15 + 1;
          sVar5 = FUN_02a4b568();
          if (sVar5 != 0x2a) {
            iVar17 = iVar15 + 1;
            unaff_w25 = unaff_w25 + iVar15;
            goto LAB_02c275f4;
          }
          iVar2 = unaff_w25 + iVar15 + 1;
          iVar17 = iVar15 + 1;
          iStack000000000000000c = iVar16;
        } while (iVar2 + 1 < *(int *)(unaff_x20 + 0x10));
        iVar17 = iVar15 + 2;
        unaff_w25 = iVar2;
      }
      else {
        iVar17 = 1;
      }
LAB_02c275f4:
      lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb88);
      *(int *)(lVar7 + 0x10) = iVar17;
LAB_02c27668:
      FUN_02c27e68();
    }
    else {
      if (uVar4 != 0x2c) {
        if (uVar4 == 0x5b) {
          if (unaff_x21 == 0) goto LAB_02c279c4;
          if (*(char *)(unaff_x21 + 0x38) == '\0') {
            iStack000000000000000c = unaff_w25 + 1;
            if (iStack000000000000000c < *(int *)(unaff_x20 + 0x10)) {
              FUN_02c27f68();
              unaff_w25 = iStack000000000000000c;
              sVar5 = FUN_02a4b568();
              if (((sVar5 == 0x2c) || (sVar5 = FUN_02a4b568(), sVar5 == 0x2a)) ||
                 (sVar5 = FUN_02a4b568(), sVar5 == 0x5d)) {
                iVar17 = *(int *)(unaff_x20 + 0x10);
                if (unaff_w25 < iVar17) {
                  bVar3 = false;
                  iVar16 = 1;
                  do {
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x5d) {
                      iVar17 = *(int *)(unaff_x20 + 0x10);
                      break;
                    }
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x2a) {
                      if (bVar3) {
                        thunk_FUN_01851c08(PTR_DAT_037f87a8);
                        uVar9 = thunk_FUN_01861bbc();
                        puVar10 = PTR_DAT_0380bb98;
                        goto LAB_02c27cbc;
                      }
                      bVar3 = true;
                    }
                    else {
                      sVar5 = FUN_02a4b568();
                      if (sVar5 != 0x2c) {
                        FUN_015d6ff8();
                        uStack0000000000000008 = FUN_02a4b568();
                        thunk_FUN_01851c08(PTR_DAT_037f6f10);
                        FUN_015d6960();
                        uVar9 = FUN_02b390d4(&stack0x00000008,0);
                        puVar10 = PTR_DAT_0380bba0;
                        goto LAB_02c27c00;
                      }
                      iVar16 = iVar16 + 1;
                    }
                    iStack000000000000000c = unaff_w25 + 1;
                    FUN_02c27f68();
                    iVar17 = *(int *)(unaff_x20 + 0x10);
                    unaff_w25 = iStack000000000000000c;
                  } while (iStack000000000000000c < iVar17);
                }
                else {
                  bVar3 = false;
                  iVar16 = 1;
                }
                if ((unaff_w25 < iVar17) && (sVar5 = FUN_02a4b568(), sVar5 == 0x5d)) {
                  if (iVar16 < 2 || bVar3 != true) {
                    lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb68);
                    *(int *)(lVar7 + 0x10) = iVar16;
                    *(bool *)(lVar7 + 0x14) = bVar3;
                    goto LAB_02c27668;
                  }
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar9 = thunk_FUN_01861bbc();
                  puVar10 = PTR_DAT_0380bbe8;
                }
                else {
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar9 = thunk_FUN_01861bbc();
                  puVar10 = PTR_DAT_0380bbb8;
                }
              }
              else {
                lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb80);
                FUN_02709c10(lVar7,*(undefined8 *)PTR_DAT_0380bb78);
                if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_02c276b4:
                  iVar17 = *(int *)(unaff_x20 + 0x10);
                  if (iVar17 <= unaff_w25) goto LAB_02c27874;
                  FUN_02c27f68();
                  iVar17 = iStack000000000000000c;
                  sVar5 = FUN_02a4b568();
                  if (sVar5 != 0x5b) {
                    uVar9 = FUN_02c27170();
                    if (lVar7 == 0) goto LAB_02c279c4;
                    lVar13 = *(long *)(lVar7 + 0x10);
                    lVar14 = *(long *)PTR_DAT_0380bb70;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar13 == 0) goto LAB_02c279c4;
                    uVar6 = *(uint *)(lVar7 + 0x18);
                    if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar6 + 1;
                      *(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = uVar9;
                      thunk_FUN_0188fd20();
                    }
                    else {
                      FUN_0270a444(lVar7,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
LAB_02c27820:
                    unaff_w25 = iStack000000000000000c;
                    FUN_02c28018(iStack000000000000000c);
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x5d) {
                      iVar17 = *(int *)(unaff_x20 + 0x10);
                      goto LAB_02c27874;
                    }
                    sVar5 = FUN_02a4b568();
                    if (sVar5 != 0x2c) {
                      FUN_015d6ff8();
                      uStack0000000000000008 = FUN_02a4b568();
                      thunk_FUN_01851c08(PTR_DAT_037f6f10);
                      FUN_015d6960();
                      uVar9 = FUN_02b390d4(&stack0x00000008,0);
                      puVar10 = PTR_DAT_0380bbe0;
                      goto LAB_02c27c00;
                    }
                    unaff_w25 = unaff_w25 + 1;
                    iStack000000000000000c = unaff_w25;
                    goto LAB_02c276b4;
                  }
                  iStack000000000000000c = iVar17 + 1;
                  uVar9 = FUN_02c27170();
                  if (lVar7 == 0) goto LAB_02c279c4;
                  lVar13 = *(long *)(lVar7 + 0x10);
                  lVar14 = *(long *)PTR_DAT_0380bb70;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_02c279c4;
                  uVar6 = *(uint *)(lVar7 + 0x18);
                  if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar6 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = uVar9;
                    thunk_FUN_0188fd20();
                  }
                  else {
                    FUN_0270a444(lVar7,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar17 = iStack000000000000000c;
                  FUN_02c28018(iStack000000000000000c);
                  sVar5 = FUN_02a4b568();
                  if (sVar5 == 0x5d) {
                    iStack000000000000000c = iVar17 + 1;
                    goto LAB_02c27820;
                  }
                  FUN_015d6ff8();
                  uStack0000000000000008 = FUN_02a4b568();
                  thunk_FUN_01851c08(PTR_DAT_037f6f10);
                  FUN_015d6960();
                  uVar9 = FUN_02b390d4(&stack0x00000008,0);
                  puVar10 = PTR_DAT_0380bbf0;
LAB_02c27c00:
                  uVar11 = thunk_FUN_01851c08(puVar10);
                  uVar9 = FUN_02a43498(uVar11,uVar9,0);
                  goto LAB_02c27c10;
                }
                thunk_FUN_01851c08(PTR_DAT_037f87a8);
                uVar9 = thunk_FUN_01861bbc();
                puVar10 = PTR_DAT_0380bc10;
              }
            }
            else {
              thunk_FUN_01851c08(PTR_DAT_037f87a8);
              uVar9 = thunk_FUN_01861bbc();
              puVar10 = PTR_DAT_0380bbd8;
            }
          }
          else {
            thunk_FUN_01851c08(PTR_DAT_037f87a8);
            uVar9 = thunk_FUN_01861bbc();
            puVar10 = PTR_DAT_0380bbd0;
          }
          goto LAB_02c27cbc;
        }
        if (uVar4 != 0x5d) goto LAB_02c27a30;
        if ((unaff_w22 & 1) == 0) goto code_r0x02c278f0;
        goto LAB_02c2799c;
      }
      if ((unaff_w22 & unaff_w23 & 1) != 0) {
        iVar17 = *(int *)(unaff_x20 + 0x10);
        if (unaff_w25 < iVar17) goto LAB_02c27924;
        goto LAB_02c27958;
      }
      if ((unaff_w22 & 1) != 0) goto LAB_02c2799c;
      if ((unaff_w23 & 1) != 0) {
        lVar7 = FUN_02a53f68();
        if ((lVar7 == 0) || (uVar9 = FUN_02a543c0(lVar7,0), unaff_x21 == 0)) goto LAB_02c279c4;
        *puVar1 = uVar9;
        thunk_FUN_0188fd20(puVar1,uVar9);
        unaff_w25 = *(int *)(unaff_x20 + 0x10);
      }
    }
LAB_02c27670:
    unaff_w25 = unaff_w25 + 1;
    iStack000000000000000c = unaff_w25;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w25) goto LAB_02c2799c;
    goto LAB_02c273b0;
  }
LAB_02c2799c:
  *unaff_x19 = unaff_w25;
  return;
LAB_02c27874:
  if ((iVar17 <= unaff_w25) || (sVar5 = FUN_02a4b568(), sVar5 != 0x5d)) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar9 = thunk_FUN_01861bbc();
    puVar10 = PTR_DAT_0380bc00;
    goto LAB_02c27cbc;
  }
  *(long *)(unaff_x21 + 0x28) = lVar7;
  thunk_FUN_0188fd20((long *)(unaff_x21 + 0x28),lVar7);
  goto LAB_02c27670;
  while( true ) {
    iVar17 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = unaff_w25 + 1;
    if (iVar17 <= unaff_w25) break;
LAB_02c27924:
    sVar5 = FUN_02a4b568();
    if (sVar5 == 0x5d) {
      iVar17 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_02c27958:
  if (iVar17 <= unaff_w25) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar9 = thunk_FUN_01861bbc();
    uVar11 = thunk_FUN_01851c08(PTR_DAT_0380bc18);
    System_Threading_Tasks_Task__Finish(uVar9,uVar11,0);
    goto LAB_02c27ce4;
  }
  lVar7 = FUN_02a51d10();
  if ((lVar7 == 0) || (uVar9 = FUN_02a543c0(lVar7,0), unaff_x21 == 0)) goto LAB_02c279c4;
  *puVar1 = uVar9;
  thunk_FUN_0188fd20(puVar1,uVar9);
  goto LAB_02c2799c;
code_r0x02c278f0:
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar9 = thunk_FUN_01861bbc();
  puVar10 = PTR_DAT_0380bb90;
LAB_02c27cbc:
  uVar11 = thunk_FUN_01851c08(puVar10);
  uVar12 = thunk_FUN_01851c08(PTR_DAT_03804108);
  FUN_02b3cc64(uVar9,uVar11,uVar12,0);
LAB_02c27ce4:
  uVar11 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar9,uVar11);
}


