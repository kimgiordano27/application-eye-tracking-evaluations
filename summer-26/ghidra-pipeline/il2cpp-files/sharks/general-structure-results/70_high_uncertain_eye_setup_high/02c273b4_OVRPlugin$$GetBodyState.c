/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 02c273b4
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int unaff_w25;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
                    /* try { // try from 02c273b4 to 02d273c3 has its CatchHandler @ 02c27450 */
    uVar4 = FUN_02a4b568();
                    /* try { // try from 02c273c4 to 02d2743f has its CatchHandler @ 02c27294 */
    if (uVar4 < 0x2b) {
      if (uVar4 == 0x26) {
        if (unaff_x21 == 0) goto LAB_02c279c4;
        if (*(char *)(unaff_x21 + 0x38) != '\0') {
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar8 = thunk_FUN_01861bbc();
          puVar9 = PTR_DAT_0380bbc8;
          goto LAB_02c27cbc;
        }
        *(undefined1 *)(unaff_x21 + 0x38) = 1;
      }
      else {
        if (uVar4 != 0x2a) {
LAB_02c27a30:
          FUN_015d6ff8();
          uStack0000000000000008 = FUN_02a4b568();
          thunk_FUN_01851c08(PTR_DAT_037f6f10);
          FUN_015d6960();
          uVar8 = FUN_02b390d4(&stack0x00000008,0);
          uVar10 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
          uVar11 = thunk_FUN_01851c08(PTR_DAT_0380bba8);
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bbb0);
          uVar8 = FUN_02a506f0(uVar11,uVar8,uVar7,uVar10,0);
LAB_02c27c10:
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar10 = thunk_FUN_01861bbc();
          uVar11 = thunk_FUN_01851c08(PTR_DAT_03804108);
          FUN_02b3cc64(uVar10,uVar8,uVar11,0);
          uVar8 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar10,uVar8);
        }
        if (unaff_x21 == 0) goto LAB_02c279c4;
        if (*(char *)(unaff_x21 + 0x38) != '\0') {
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar8 = thunk_FUN_01861bbc();
          puVar9 = PTR_DAT_0380bbc0;
          goto LAB_02c27cbc;
        }
        if (unaff_w25 + 1 < *(int *)(unaff_x20 + 0x10)) {
          iVar16 = 0;
          do {
            iVar14 = iVar16;
            iVar15 = unaff_w25 + iVar14 + 1;
            sVar5 = FUN_02a4b568();
            if (sVar5 != 0x2a) {
              iVar16 = iVar14 + 1;
              unaff_w25 = unaff_w25 + iVar14;
              goto LAB_02c275f4;
            }
            iVar1 = unaff_w25 + iVar14 + 1;
            iVar16 = iVar14 + 1;
            iStack000000000000000c = iVar15;
          } while (iVar1 + 1 < *(int *)(unaff_x20 + 0x10));
          iVar16 = iVar14 + 2;
          unaff_w25 = iVar1;
                    /* try { // try from 02c27440 to 02d27443 has its CatchHandler @ 02c27454 */
                    /* try { // try from 02c27444 to 02d2746b has its CatchHandler @ 02c27294 */
        }
        else {
          iVar16 = 1;
        }
LAB_02c275f4:
                    /* try { // try from 02c275fc to 02d2760b has its CatchHandler @ 02c2773c */
        lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb88);
        *(int *)(lVar6 + 0x10) = iVar16;
                    /* try { // try from 02c2760c to 02d2772b has its CatchHandler @ 02c274bc */
LAB_02c27668:
        FUN_02c27e68();
      }
    }
    else {
      if (uVar4 != 0x2c) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c273b4 with catch @ 02c27450
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c27398 with catch @ 02c27454
                       catch(type#1 @ 0361ba68) { ... } // from try @ 02c27440 with catch @ 02c27454
                        */
        if (uVar4 == 0x5b) {
          if (unaff_x21 == 0) goto LAB_02c279c4;
          if (*(char *)(unaff_x21 + 0x38) == '\0') {
            iStack000000000000000c = unaff_w25 + 1;
                    /* try { // try from 02c2746c to 02d2746f has its CatchHandler @ 02c27480 */
            if (iStack000000000000000c < *(int *)(unaff_x20 + 0x10)) {
                    /* catch() { ... } // from try @ 02c2746c with catch @ 02c27480 */
              FUN_02c27f68();
              unaff_w25 = iStack000000000000000c;
                    /* try { // try from 02c27494 to 02d2749f has its CatchHandler @ 02c274b4 */
              sVar5 = FUN_02a4b568();
                    /* try { // try from 02c274a0 to 02d274ab has its CatchHandler @ 02c27294 */
                    /* try { // try from 02c274ac to 02d274b3 has its CatchHandler @ 02c274b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c27494 with catch @ 02c274b4
                       catch(type#2 @ 00000000) { ... } // from try @ 02c274ac with catch @ 02c274b4
                        */
                    /* try { // try from 02c274bc to 02d275df has its CatchHandler @ 02c274bc
                       catch() { ... } // from try @ 02c274bc with catch @ 02c274bc
                       catch() { ... } // from try @ 02c2760c with catch @ 02c274bc
                       catch() { ... } // from try @ 02c27730 with catch @ 02c274bc
                       catch() { ... } // from try @ 02c2778c with catch @ 02c274bc */
              if (((sVar5 == 0x2c) || (sVar5 = FUN_02a4b568(), sVar5 == 0x2a)) ||
                 (sVar5 = FUN_02a4b568(), sVar5 == 0x5d)) {
                iVar16 = *(int *)(unaff_x20 + 0x10);
                if (unaff_w25 < iVar16) {
                  bVar3 = false;
                  iVar15 = 1;
                  do {
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x5d) {
                      iVar16 = *(int *)(unaff_x20 + 0x10);
                      break;
                    }
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x2a) {
                      if (bVar3) {
                        thunk_FUN_01851c08(PTR_DAT_037f87a8);
                        uVar8 = thunk_FUN_01861bbc();
                        puVar9 = PTR_DAT_0380bb98;
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
                        uVar8 = FUN_02b390d4(&stack0x00000008,0);
                        puVar9 = PTR_DAT_0380bba0;
LAB_02c27c00:
                        uVar10 = thunk_FUN_01851c08(puVar9);
                        uVar8 = FUN_02a43498(uVar10,uVar8,0);
                        goto LAB_02c27c10;
                      }
                      iVar15 = iVar15 + 1;
                    }
                    iStack000000000000000c = unaff_w25 + 1;
                    FUN_02c27f68();
                    iVar16 = *(int *)(unaff_x20 + 0x10);
                    unaff_w25 = iStack000000000000000c;
                  } while (iStack000000000000000c < iVar16);
                }
                else {
                    /* try { // try from 02c275e0 to 02d275eb has its CatchHandler @ 02c27740 */
                  bVar3 = false;
                  iVar15 = 1;
                }
                if ((unaff_w25 < iVar16) && (sVar5 = FUN_02a4b568(), sVar5 == 0x5d)) {
                  if (iVar15 < 2 || bVar3 != true) {
                    lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb68);
                    *(int *)(lVar6 + 0x10) = iVar15;
                    *(bool *)(lVar6 + 0x14) = bVar3;
                    goto LAB_02c27668;
                  }
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar9 = PTR_DAT_0380bbe8;
                }
                else {
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar9 = PTR_DAT_0380bbb8;
                }
              }
              else {
                lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bb80);
                FUN_02709c10(lVar6,*(undefined8 *)PTR_DAT_0380bb78);
                if (*(long *)(unaff_x21 + 0x30) == 0) {
                  while (iVar16 = *(int *)(unaff_x20 + 0x10), unaff_w25 < iVar16) {
                    FUN_02c27f68();
                    iVar16 = iStack000000000000000c;
                    sVar5 = FUN_02a4b568();
                    if (sVar5 == 0x5b) {
                      iStack000000000000000c = iVar16 + 1;
                      uVar8 = FUN_02c27170();
                      if (lVar6 == 0) goto LAB_02c279c4;
                      lVar12 = *(long *)(lVar6 + 0x10);
                      lVar13 = *(long *)PTR_DAT_0380bb70;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_02c279c4;
                    /* try { // try from 02c2772c to 02d2772f has its CatchHandler @ 02c27740 */
                      uVar2 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 02c27730 to 02d27757 has its CatchHandler @ 02c274bc */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c275fc with catch @ 02c2773c
                        */
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c275e0 with catch @ 02c27740
                       catch(type#1 @ 0361ba68) { ... } // from try @ 02c2772c with catch @ 02c27740
                        */
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                        thunk_FUN_0188fd20();
                      }
                      else {
                    /* try { // try from 02c277bc to 02d277c3 has its CatchHandler @ 02c277d8 */
                    /* try { // try from 02c277c4 to 02d277ef has its CatchHandler @ 02c277a4 */
                        FUN_0270a444(lVar6,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar16 = iStack000000000000000c;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c277bc with catch @ 02c277d8
                        */
                      FUN_02c28018(iStack000000000000000c);
                      sVar5 = FUN_02a4b568();
                    /* try { // try from 02c277f0 to 02d277f3 has its CatchHandler @ 02c27820 */
                    /* try { // try from 02c277f4 to 02d27823 has its CatchHandler @ 02c277a4 */
                      if (sVar5 != 0x5d) {
                        FUN_015d6ff8();
                        uStack0000000000000008 = FUN_02a4b568();
                        thunk_FUN_01851c08(PTR_DAT_037f6f10);
                        FUN_015d6960();
                        uVar8 = FUN_02b390d4(&stack0x00000008,0);
                        puVar9 = PTR_DAT_0380bbf0;
                        goto LAB_02c27c00;
                      }
                      iStack000000000000000c = iVar16 + 1;
                    }
                    else {
                    /* try { // try from 02c27758 to 02d2775b has its CatchHandler @ 02c2776c */
                      uVar8 = FUN_02c27170();
                    /* catch() { ... } // from try @ 02c27758 with catch @ 02c2776c */
                      if (lVar6 == 0) goto LAB_02c279c4;
                      lVar12 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 02c27780 to 02d2778b has its CatchHandler @ 02c277a0 */
                      lVar13 = *(long *)PTR_DAT_0380bb70;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    /* try { // try from 02c2778c to 02d27797 has its CatchHandler @ 02c274bc */
                      if (lVar12 == 0) goto LAB_02c279c4;
                      uVar2 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 02c27798 to 02d2779f has its CatchHandler @ 02c277a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c27780 with catch @ 02c277a0
                       catch(type#2 @ 00000000) { ... } // from try @ 02c27798 with catch @ 02c277a0
                        */
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    /* catch() { ... } // from try @ 02c277c4 with catch @ 02c277a4
                       catch() { ... } // from try @ 02c277f4 with catch @ 02c277a4
                       catch() { ... } // from try @ 02c27830 with catch @ 02c277a4 */
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                        thunk_FUN_0188fd20();
                      }
                      else {
                        FUN_0270a444(lVar6,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    /* catch() { ... } // from try @ 02c277f0 with catch @ 02c27820 */
                    unaff_w25 = iStack000000000000000c;
                    /* try { // try from 02c27824 to 02d2782f has its CatchHandler @ 02c27844 */
                    FUN_02c28018(iStack000000000000000c);
                    /* try { // try from 02c27830 to 02d2783b has its CatchHandler @ 02c277a4 */
                    sVar5 = FUN_02a4b568();
                    /* try { // try from 02c2783c to 02d27843 has its CatchHandler @ 02c27844 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c27824 with catch @ 02c27844
                       catch(type#2 @ 00000000) { ... } // from try @ 02c2783c with catch @ 02c27844
                        */
                    if (sVar5 == 0x5d) {
                      iVar16 = *(int *)(unaff_x20 + 0x10);
                      break;
                    }
                    sVar5 = FUN_02a4b568();
                    if (sVar5 != 0x2c) {
                      FUN_015d6ff8();
                      uStack0000000000000008 = FUN_02a4b568();
                      thunk_FUN_01851c08(PTR_DAT_037f6f10);
                      FUN_015d6960();
                      uVar8 = FUN_02b390d4(&stack0x00000008,0);
                      puVar9 = PTR_DAT_0380bbe0;
                      goto LAB_02c27c00;
                    }
                    unaff_w25 = unaff_w25 + 1;
                    iStack000000000000000c = unaff_w25;
                  }
                  if ((unaff_w25 < iVar16) && (sVar5 = FUN_02a4b568(), sVar5 == 0x5d)) {
                    *in_stack_00000000 = lVar6;
                    thunk_FUN_0188fd20(in_stack_00000000,lVar6);
                    goto LAB_02c27670;
                  }
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar9 = PTR_DAT_0380bc00;
                }
                else {
                  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                  uVar8 = thunk_FUN_01861bbc();
                  puVar9 = PTR_DAT_0380bc10;
                }
              }
            }
            else {
              thunk_FUN_01851c08(PTR_DAT_037f87a8);
              uVar8 = thunk_FUN_01861bbc();
              puVar9 = PTR_DAT_0380bbd8;
            }
          }
          else {
            thunk_FUN_01851c08(PTR_DAT_037f87a8);
            uVar8 = thunk_FUN_01861bbc();
            puVar9 = PTR_DAT_0380bbd0;
          }
        }
        else {
          if (uVar4 != 0x5d) goto LAB_02c27a30;
          if ((unaff_x22 & 1) != 0) break;
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar8 = thunk_FUN_01861bbc();
          puVar9 = PTR_DAT_0380bb90;
        }
LAB_02c27cbc:
        uVar10 = thunk_FUN_01851c08(puVar9);
        uVar11 = thunk_FUN_01851c08(PTR_DAT_03804108);
        FUN_02b3cc64(uVar8,uVar10,uVar11,0);
        goto LAB_02c27ce4;
      }
      if ((unaff_x28 & 1) != 0) {
        iVar16 = *(int *)(unaff_x20 + 0x10);
        if (unaff_w25 < iVar16) goto LAB_02c27924;
        goto LAB_02c27958;
      }
      if ((unaff_x22 & 1) != 0) break;
      if ((unaff_x23 & 1) != 0) {
        lVar6 = FUN_02a53f68();
        if ((lVar6 == 0) || (uVar8 = FUN_02a543c0(lVar6,0), unaff_x21 == 0)) goto LAB_02c279c4;
        *unaff_x29 = uVar8;
        thunk_FUN_0188fd20();
        unaff_w25 = *(int *)(unaff_x20 + 0x10);
      }
    }
LAB_02c27670:
    unaff_w25 = unaff_w25 + 1;
    iStack000000000000000c = unaff_w25;
  } while (unaff_w25 < *(int *)(unaff_x20 + 0x10));
  goto LAB_02c2799c;
  while( true ) {
    iVar16 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = unaff_w25 + 1;
    if (iVar16 <= unaff_w25) break;
LAB_02c27924:
    sVar5 = FUN_02a4b568();
    if (sVar5 == 0x5d) {
      iVar16 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_02c27958:
  if (iVar16 <= unaff_w25) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bc18);
    System_Threading_Tasks_Task__Finish(uVar8,uVar10,0);
LAB_02c27ce4:
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bbf8);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar10);
  }
  lVar6 = FUN_02a51d10();
  if ((lVar6 == 0) || (uVar8 = FUN_02a543c0(lVar6,0), unaff_x21 == 0)) {
LAB_02c279c4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  *unaff_x29 = uVar8;
  thunk_FUN_0188fd20();
LAB_02c2799c:
  *unaff_x19 = unaff_w25;
  return;
}


