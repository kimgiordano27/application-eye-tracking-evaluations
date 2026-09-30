/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 02c27214
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_bodyTrackingSupported(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int in_w8;
  long lVar14;
  long lVar15;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined2 in_stack_00000008;
  int iStack000000000000000c;
  
  iStack000000000000000c = in_w8;
  lVar7 = thunk_FUN_01861bbc(*unaff_x21);
  FUN_02c27f68();
  if (unaff_x20 == 0) {
LAB_02c279c4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  iVar16 = iStack000000000000000c;
  if (iStack000000000000000c < *(int *)(unaff_x20 + 0x10)) {
    do {
      iVar17 = iStack000000000000000c;
      uVar5 = FUN_02a4b568();
      if (uVar5 < 0x5b) {
        switch(uVar5) {
        case 0x26:
        case 0x2a:
switchD_02c27284_caseD_26:
          sVar6 = FUN_02a4b568();
          if ((sVar6 != 0x5b) && ((unaff_w22 & 1) != 0)) {
            thunk_FUN_01851c08(PTR_DAT_037f87a8);
            uVar8 = thunk_FUN_01861bbc();
            puVar11 = PTR_DAT_0380bc08;
            goto LAB_02c27cbc;
          }
          uVar8 = FUN_02a51d10();
          if (lVar7 == 0) goto LAB_02c279c4;
          FUN_02c27d30(lVar7,uVar8);
          bVar4 = true;
          iVar16 = iVar17 + 1;
          goto LAB_02c27348;
        case 0x2b:
                    /* try { // try from 02c27294 to 02d27397 has its CatchHandler @ 02c27294
                       catch() { ... } // from try @ 02c27294 with catch @ 02c27294
                       catch() { ... } // from try @ 02c273c4 with catch @ 02c27294
                       catch() { ... } // from try @ 02c27444 with catch @ 02c27294
                       catch() { ... } // from try @ 02c274a0 with catch @ 02c27294 */
          uVar8 = FUN_02a51d10();
          if (lVar7 == 0) goto LAB_02c279c4;
          FUN_02c27d30(lVar7,uVar8);
          iVar16 = iVar17 + 1;
          break;
        case 0x2c:
switchD_02c27284_caseD_2c:
          uVar8 = FUN_02a51d10();
          if (lVar7 == 0) goto LAB_02c279c4;
          FUN_02c27d30(lVar7,uVar8);
          iVar16 = iVar17 + 1;
          bVar4 = true;
          if (((unaff_w22 & 1) == 0) || ((unaff_w23 & 1) != 0)) goto LAB_02c27348;
          goto LAB_02c2799c;
        }
      }
      else if (uVar5 == 0x5c) {
        iVar17 = iVar17 + 1;
      }
      else {
        if (uVar5 == 0x5b) goto switchD_02c27284_caseD_26;
        if (uVar5 == 0x5d) goto switchD_02c27284_caseD_2c;
      }
      iStack000000000000000c = iVar17 + 1;
    } while (iStack000000000000000c < *(int *)(unaff_x20 + 0x10));
    bVar4 = false;
    iVar17 = iStack000000000000000c;
  }
  else {
    bVar4 = false;
    iVar17 = iStack000000000000000c;
  }
LAB_02c27348:
  if (iVar16 < iVar17) {
    uVar8 = FUN_02a51d10();
    if (lVar7 == 0) goto LAB_02c279c4;
LAB_02c27388:
    FUN_02c27d30(lVar7,uVar8);
  }
  else if (iVar17 == iVar16) {
    if (lVar7 == 0) goto LAB_02c279c4;
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_037f5ae8 + 0xb8);
    goto LAB_02c27388;
  }
  if ((bVar4) && (iVar17 < *(int *)(unaff_x20 + 0x10))) {
    puVar1 = (undefined8 *)(lVar7 + 0x18);
LAB_02c273b0:
    uVar5 = FUN_02a4b568();
    if (uVar5 < 0x2b) {
      if (uVar5 != 0x26) {
        if (uVar5 != 0x2a) {
LAB_02c27a30:
          FUN_015d6ff8();
          in_stack_00000008 = FUN_02a4b568();
          thunk_FUN_01851c08(PTR_DAT_037f6f10);
          FUN_015d6960();
          uVar8 = FUN_02b390d4(&stack0x00000008,0);
          uVar12 = FUN_02bccfd8(&stack0x0000000c,0);
          uVar13 = thunk_FUN_01851c08(PTR_DAT_0380bba8);
          uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bbb0);
          uVar8 = FUN_02a506f0(uVar13,uVar8,uVar10,uVar12,0);
LAB_02c27c10:
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar12 = thunk_FUN_01861bbc();
          uVar13 = thunk_FUN_01851c08(PTR_DAT_03804108);
          FUN_02b3cc64(uVar12,uVar8,uVar13,0);
          uVar8 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar12,uVar8);
        }
        if (lVar7 == 0) goto LAB_02c279c4;
        if (*(char *)(lVar7 + 0x38) == '\0') {
          if (iVar17 + 1 < *(int *)(unaff_x20 + 0x10)) {
            iVar16 = 0;
            do {
              iVar18 = iVar16;
              iVar19 = iVar17 + iVar18 + 1;
              sVar6 = FUN_02a4b568();
              if (sVar6 != 0x2a) {
                iVar16 = iVar18 + 1;
                iVar17 = iVar17 + iVar18;
                goto LAB_02c275f4;
              }
              iVar2 = iVar17 + iVar18 + 1;
              iVar16 = iVar18 + 1;
              iStack000000000000000c = iVar19;
            } while (iVar2 + 1 < *(int *)(unaff_x20 + 0x10));
            iVar16 = iVar18 + 2;
            iVar17 = iVar2;
          }
          else {
            iVar16 = 1;
          }
LAB_02c275f4:
          lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb88);
          *(int *)(lVar9 + 0x10) = iVar16;
LAB_02c27668:
          FUN_02c27e68(lVar7,lVar9);
          goto LAB_02c27670;
        }
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar8 = thunk_FUN_01861bbc();
        puVar11 = PTR_DAT_0380bbc0;
        goto LAB_02c27cbc;
      }
      if (lVar7 == 0) goto LAB_02c279c4;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar8 = thunk_FUN_01861bbc();
        puVar11 = PTR_DAT_0380bbc8;
        goto LAB_02c27cbc;
      }
      *(undefined1 *)(lVar7 + 0x38) = 1;
    }
    else {
      if (uVar5 != 0x2c) {
        if (uVar5 == 0x5b) {
          if (lVar7 == 0) goto LAB_02c279c4;
          if (*(char *)(lVar7 + 0x38) == '\0') {
            iStack000000000000000c = iVar17 + 1;
            if (iStack000000000000000c < *(int *)(unaff_x20 + 0x10)) {
              FUN_02c27f68();
              iVar17 = iStack000000000000000c;
              sVar6 = FUN_02a4b568();
              if (((sVar6 == 0x2c) || (sVar6 = FUN_02a4b568(), sVar6 == 0x2a)) ||
                 (sVar6 = FUN_02a4b568(), sVar6 == 0x5d)) {
                iVar16 = *(int *)(unaff_x20 + 0x10);
                if (iVar17 < iVar16) {
                  bVar4 = false;
                  iVar19 = 1;
                  do {
                    sVar6 = FUN_02a4b568();
                    if (sVar6 == 0x5d) {
                      iVar16 = *(int *)(unaff_x20 + 0x10);
                      break;
                    }
                    sVar6 = FUN_02a4b568();
                    if (sVar6 == 0x2a) {
                      if (bVar4) {
                        thunk_FUN_01851c08(PTR_DAT_037f87a8);
                        uVar8 = thunk_FUN_01861bbc();
                        puVar11 = PTR_DAT_0380bb98;
                        goto LAB_02c27cbc;
                      }
                      bVar4 = true;
                    }
                    else {
                      sVar6 = FUN_02a4b568();
                      if (sVar6 != 0x2c) {
                        FUN_015d6ff8();
                        in_stack_00000008 = FUN_02a4b568();
                        thunk_FUN_01851c08(PTR_DAT_037f6f10);
                        FUN_015d6960();
                        uVar8 = FUN_02b390d4(&stack0x00000008,0);
                        puVar11 = PTR_DAT_0380bba0;
                        goto LAB_02c27c00;
                      }
                      iVar19 = iVar19 + 1;
                    }
                    iStack000000000000000c = iVar17 + 1;
                    FUN_02c27f68();
                    iVar16 = *(int *)(unaff_x20 + 0x10);
                    iVar17 = iStack000000000000000c;
                  } while (iStack000000000000000c < iVar16);
                }
                else {
                  bVar4 = false;
                  iVar19 = 1;
                }
                if ((iVar17 < iVar16) && (sVar6 = FUN_02a4b568(), sVar6 == 0x5d)) {
                  if (iVar19 < 2 || bVar4 != true) {
                    lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb68);
                    *(int *)(lVar9 + 0x10) = iVar19;
                    *(bool *)(lVar9 + 0x14) = bVar4;
                    goto LAB_02c27668;
                  }
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar11 = PTR_DAT_0380bbe8;
                }
                else {
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar11 = PTR_DAT_0380bbb8;
                }
              }
              else {
                lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb80);
                FUN_02709c10(lVar9,*(undefined8 *)PTR_DAT_0380bb78);
                if (*(long *)(lVar7 + 0x30) == 0) {
LAB_02c276b4:
                  iVar16 = *(int *)(unaff_x20 + 0x10);
                  if (iVar16 <= iVar17) goto LAB_02c27874;
                  FUN_02c27f68();
                  iVar16 = iStack000000000000000c;
                  sVar6 = FUN_02a4b568();
                  if (sVar6 != 0x5b) {
                    uVar8 = FUN_02c27170();
                    if (lVar9 == 0) goto LAB_02c279c4;
                    lVar14 = *(long *)(lVar9 + 0x10);
                    lVar15 = *(long *)PTR_DAT_0380bb70;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_02c279c4;
                    uVar3 = *(uint *)(lVar9 + 0x18);
                    if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                      *(undefined8 *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
                      thunk_FUN_0188fd20();
                    }
                    else {
                      FUN_0270a444(lVar9,uVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                    }
LAB_02c27820:
                    iVar17 = iStack000000000000000c;
                    FUN_02c28018(iStack000000000000000c);
                    sVar6 = FUN_02a4b568();
                    if (sVar6 == 0x5d) {
                      iVar16 = *(int *)(unaff_x20 + 0x10);
                      goto LAB_02c27874;
                    }
                    sVar6 = FUN_02a4b568();
                    if (sVar6 != 0x2c) {
                      FUN_015d6ff8();
                      in_stack_00000008 = FUN_02a4b568();
                      thunk_FUN_01851c08(PTR_DAT_037f6f10);
                      FUN_015d6960();
                      uVar8 = FUN_02b390d4(&stack0x00000008,0);
                      puVar11 = PTR_DAT_0380bbe0;
                      goto LAB_02c27c00;
                    }
                    iVar17 = iVar17 + 1;
                    iStack000000000000000c = iVar17;
                    goto LAB_02c276b4;
                  }
                  iStack000000000000000c = iVar16 + 1;
                  uVar8 = FUN_02c27170();
                  if (lVar9 == 0) goto LAB_02c279c4;
                  lVar14 = *(long *)(lVar9 + 0x10);
                  lVar15 = *(long *)PTR_DAT_0380bb70;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_02c279c4;
                  uVar3 = *(uint *)(lVar9 + 0x18);
                  if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
                    thunk_FUN_0188fd20();
                  }
                  else {
                    FUN_0270a444(lVar9,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar16 = iStack000000000000000c;
                  FUN_02c28018(iStack000000000000000c);
                  sVar6 = FUN_02a4b568();
                  if (sVar6 == 0x5d) {
                    iStack000000000000000c = iVar16 + 1;
                    goto LAB_02c27820;
                  }
                  FUN_015d6ff8();
                  in_stack_00000008 = FUN_02a4b568();
                  thunk_FUN_01851c08(PTR_DAT_037f6f10);
                  FUN_015d6960();
                  uVar8 = FUN_02b390d4(&stack0x00000008,0);
                  puVar11 = PTR_DAT_0380bbf0;
LAB_02c27c00:
                  uVar12 = thunk_FUN_01851c08(puVar11);
                  uVar8 = FUN_02a43498(uVar12,uVar8,0);
                  goto LAB_02c27c10;
                }
                thunk_FUN_01851c08(PTR_DAT_037f87a8);
                uVar8 = thunk_FUN_01861bbc();
                puVar11 = PTR_DAT_0380bc10;
              }
            }
            else {
              thunk_FUN_01851c08(PTR_DAT_037f87a8);
              uVar8 = thunk_FUN_01861bbc();
              puVar11 = PTR_DAT_0380bbd8;
            }
          }
          else {
            thunk_FUN_01851c08(PTR_DAT_037f87a8);
            uVar8 = thunk_FUN_01861bbc();
            puVar11 = PTR_DAT_0380bbd0;
          }
          goto LAB_02c27cbc;
        }
        if (uVar5 != 0x5d) goto LAB_02c27a30;
        if ((unaff_w22 & 1) == 0) goto code_r0x02c278f0;
        goto LAB_02c2799c;
      }
      if ((unaff_w22 & unaff_w23 & 1) != 0) {
        iVar16 = *(int *)(unaff_x20 + 0x10);
        if (iVar16 <= iVar17) goto LAB_02c27958;
        goto LAB_02c27924;
      }
      if ((unaff_w22 & 1) != 0) goto LAB_02c2799c;
      if ((unaff_w23 & 1) != 0) {
        lVar9 = FUN_02a53f68();
        if ((lVar9 == 0) || (uVar8 = FUN_02a543c0(lVar9,0), lVar7 == 0)) goto LAB_02c279c4;
        *puVar1 = uVar8;
        thunk_FUN_0188fd20(puVar1,uVar8);
        iVar17 = *(int *)(unaff_x20 + 0x10);
      }
    }
LAB_02c27670:
    iVar17 = iVar17 + 1;
    iStack000000000000000c = iVar17;
    if (*(int *)(unaff_x20 + 0x10) <= iVar17) goto LAB_02c2799c;
    goto LAB_02c273b0;
  }
LAB_02c2799c:
  *unaff_x19 = iVar17;
  return lVar7;
LAB_02c27874:
  if ((iVar16 <= iVar17) || (sVar6 = FUN_02a4b568(), sVar6 != 0x5d)) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar11 = PTR_DAT_0380bc00;
    goto LAB_02c27cbc;
  }
  *(long *)(lVar7 + 0x28) = lVar9;
  thunk_FUN_0188fd20((long *)(lVar7 + 0x28),lVar9);
  goto LAB_02c27670;
  while( true ) {
    iVar16 = *(int *)(unaff_x20 + 0x10);
    iVar17 = iVar17 + 1;
    if (iVar16 <= iVar17) break;
LAB_02c27924:
    sVar6 = FUN_02a4b568();
    if (sVar6 == 0x5d) {
      iVar16 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_02c27958:
  if (iVar16 <= iVar17) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar12 = thunk_FUN_01851c08(PTR_DAT_0380bc18);
    System_Threading_Tasks_Task__Finish(uVar8,uVar12,0);
    goto LAB_02c27ce4;
  }
  lVar9 = FUN_02a51d10();
  if ((lVar9 == 0) || (uVar8 = FUN_02a543c0(lVar9,0), lVar7 == 0)) goto LAB_02c279c4;
  *puVar1 = uVar8;
  thunk_FUN_0188fd20(puVar1,uVar8);
  goto LAB_02c2799c;
code_r0x02c278f0:
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar8 = thunk_FUN_01861bbc();
  puVar11 = PTR_DAT_0380bb90;
LAB_02c27cbc:
  uVar12 = thunk_FUN_01851c08(puVar11);
  uVar13 = thunk_FUN_01851c08(PTR_DAT_03804108);
  FUN_02b3cc64(uVar8,uVar12,uVar13,0);
LAB_02c27ce4:
  uVar12 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar8,uVar12);
}


