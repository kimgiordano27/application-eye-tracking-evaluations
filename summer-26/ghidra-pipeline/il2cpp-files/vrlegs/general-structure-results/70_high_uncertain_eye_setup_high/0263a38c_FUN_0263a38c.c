/*
FUNCTION_NAME: FUN_0263a38c
ENTRY_POINT: 0263a38c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0263aa94) */

void FUN_0263a38c(long *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  char local_64 [4];
  
                    /* try { // try from 0263a3ac to 0273a3bb has its CatchHandler @ 0263a790 */
  if ((DAT_04124052 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2168);
    FUN_01ab69ac(PTR_DAT_03cf2170);
                    /* try { // try from 0263a3d4 to 0273a3f7 has its CatchHandler @ 0263a7a4 */
    FUN_01ab69ac(PTR_DAT_03cf2360);
    FUN_01ab69ac(PTR_DAT_03cd85f0);
    FUN_01ab69ac(PTR_DAT_03cf29d8);
    FUN_01ab69ac(PTR_DAT_03cbec50);
    DAT_04124052 = 1;
  }
  puVar3 = PTR_DAT_03cf29d8;
                    /* try { // try from 0263a40c to 0273a423 has its CatchHandler @ 0263a7b8 */
  if (param_1 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar10 = thunk_FUN_01a89e68();
    uVar20 = thunk_FUN_01a6ca08(PTR_DAT_03cf29f8);
    FUN_026a44fc(uVar10,uVar20,0);
    uVar20 = thunk_FUN_01a6ca08(PTR_DAT_03cf29f0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,uVar20);
  }
  if ((param_2 & 1) != 0) {
    plVar8 = (long *)thunk_FUN_01a89d6c(param_1,*(undefined8 *)PTR_DAT_03cf29d8);
    if (plVar8 == (long *)0x0) {
      FUN_018748a8(param_1);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cf2360);
      uVar10 = FUN_018856b8(0,uVar10,param_1);
      uVar20 = thunk_FUN_01a6ca08(PTR_DAT_03cf2a00);
      uVar10 = FUN_025b4d3c(uVar20,uVar10,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cf2180);
      uVar20 = thunk_FUN_01a89e68();
      FUN_026202e0(uVar20,uVar10);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cf29f0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar20,uVar10);
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 0263a43c to 0273a453 has its CatchHandler @ 0263a7b4 */
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0263a47c;
        }
                    /* try { // try from 0263a454 to 0273a473 has its CatchHandler @ 0263a7a0 */
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar3,0);
LAB_0263a47c:
    (*(code *)*puVar9)(plVar8,1,puVar9[1]);
  }
  puVar3 = PTR_DAT_03cf2168;
                    /* try { // try from 0263a490 to 0273a493 has its CatchHandler @ 0263a780 */
                    /* try { // try from 0263a494 to 0273a4a3 has its CatchHandler @ 0263a79c */
  lVar13 = *(long *)PTR_DAT_03cf2168;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar3;
  }
  plVar8 = (long *)**(long **)(lVar13 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar10 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
  local_64[0] = '\0';
  FUN_027e0bd8(uVar10,local_64,0);
  puVar5 = PTR_DAT_03cf2360;
  puVar2 = PTR_DAT_03cbec50;
                    /* try { // try from 0263a4e0 to 0273a4f7 has its CatchHandler @ 0263a804 */
  iVar18 = 0;
  iVar17 = -1;
  do {
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *(long *)puVar3;
    }
                    /* try { // try from 0263a508 to 0273a50b has its CatchHandler @ 0263a798 */
    plVar8 = (long *)**(long **)(lVar13 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    puVar4 = PTR_DAT_03cf2170;
                    /* try { // try from 0263a528 to 0273a543 has its CatchHandler @ 0263a78c */
    if (iVar6 <= iVar18) {
                    /* catch() { ... } // from try @ 0263a490 with catch @ 0263a780 */
      lVar13 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 0263a774 with catch @ 0263a784 */
                    /* catch() { ... } // from try @ 0263a770 with catch @ 0263a788 */
                    /* catch() { ... } // from try @ 0263a528 with catch @ 0263a78c */
                    /* catch() { ... } // from try @ 0263a3ac with catch @ 0263a790 */
                    /* catch() { ... } // from try @ 0263a67c with catch @ 0263a794 */
      if (iVar17 == -1) {
                    /* catch() { ... } // from try @ 0263a764 with catch @ 0263a7cc */
        if (*(int *)(lVar13 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0263a31c with catch @ 0263a7d0 */
          thunk_FUN_01a58e78();
                    /* catch() { ... } // from try @ 0263a30c with catch @ 0263a7d4 */
          lVar13 = *(long *)puVar3;
        }
                    /* catch() { ... } // from try @ 0263a5c8 with catch @ 0263a7d8 */
                    /* catch() { ... } // from try @ 0263a58c with catch @ 0263a7dc */
        plVar8 = (long *)**(long **)(lVar13 + 0xb8);
                    /* catch() { ... } // from try @ 0263a35c with catch @ 0263a7e0 */
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* catch() { ... } // from try @ 0263a758 with catch @ 0263a7e4 */
                    /* catch() { ... } // from try @ 0263a21c with catch @ 0263a7e8 */
                    /* catch() { ... } // from try @ 0263a280 with catch @ 0263a7ec
                       catch() { ... } // from try @ 0263a760 with catch @ 0263a7ec */
                    /* catch() { ... } // from try @ 0263a750 with catch @ 0263a7f0 */
                    /* catch() { ... } // from try @ 0263a360 with catch @ 0263a7f4 */
        (**(code **)(*plVar8 + 0x308))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x310));
      }
      else {
                    /* catch() { ... } // from try @ 0263a508 with catch @ 0263a798
                       catch() { ... } // from try @ 0263a778 with catch @ 0263a798 */
        if (*(int *)(lVar13 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0263a494 with catch @ 0263a79c */
          thunk_FUN_01a58e78();
                    /* catch() { ... } // from try @ 0263a454 with catch @ 0263a7a0 */
          lVar13 = *(long *)puVar3;
        }
                    /* catch() { ... } // from try @ 0263a3d4 with catch @ 0263a7a4 */
                    /* catch() { ... } // from try @ 0263a6d8 with catch @ 0263a7a8 */
        plVar8 = (long *)**(long **)(lVar13 + 0xb8);
                    /* catch() { ... } // from try @ 0263a654 with catch @ 0263a7ac */
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* catch() { ... } // from try @ 0263a76c with catch @ 0263a7b0 */
                    /* catch() { ... } // from try @ 0263a43c with catch @ 0263a7b4 */
                    /* catch() { ... } // from try @ 0263a40c with catch @ 0263a7b8 */
                    /* catch() { ... } // from try @ 0263a640 with catch @ 0263a7bc */
                    /* catch() { ... } // from try @ 0263a604 with catch @ 0263a7c0 */
                    /* catch() { ... } // from try @ 0263a768 with catch @ 0263a7c4 */
        (**(code **)(*plVar8 + 0x3a8))(plVar8,iVar17,param_1,*(undefined8 *)(*plVar8 + 0x3b0));
                    /* catch() { ... } // from try @ 0263a698 with catch @ 0263a7c8 */
      }
                    /* catch() { ... } // from try @ 0263a150 with catch @ 0263a7f8
                       catch() { ... } // from try @ 0263a754 with catch @ 0263a7f8 */
                    /* catch() { ... } // from try @ 0263a194 with catch @ 0263a7fc
                       catch() { ... } // from try @ 0263a75c with catch @ 0263a7fc */
                    /* catch() { ... } // from try @ 0263a124 with catch @ 0263a800 */
      plVar8 = (long *)thunk_FUN_01a89d6c(param_1,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 0263a0f4 with catch @ 0263a804
                       catch() { ... } // from try @ 0263a4e0 with catch @ 0263a804
                       catch() { ... } // from try @ 0263a568 with catch @ 0263a804
                       catch() { ... } // from try @ 0263a5a4 with catch @ 0263a804
                       catch() { ... } // from try @ 0263a5e0 with catch @ 0263a804
                       catch() { ... } // from try @ 0263a61c with catch @ 0263a804
                       catch() { ... } // from try @ 0263a6ec with catch @ 0263a804 */
      if (plVar8 == (long *)0x0) goto LAB_0263a924;
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
                    /* try { // try from 0263a818 to 0273a81b has its CatchHandler @ 0263a834 */
        thunk_FUN_01a58e78();
                    /* try { // try from 0263a81c to 0273a863 has its CatchHandler @ 02639f98 */
        lVar13 = *(long *)puVar3;
      }
      plVar19 = *(long **)(*(long *)(lVar13 + 0xb8) + 0x20);
      plVar12 = (long *)thunk_FUN_01a5dd74(param_1,0);
                    /* catch() { ... } // from try @ 0263a818 with catch @ 0263a834 */
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar13 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_0263a884;
                    /* try { // try from 0263a864 to 0273a86f has its CatchHandler @ 0263a870 */
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *(long *)puVar3;
    }
    plVar8 = (long *)**(long **)(lVar13 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar13 = (**(code **)(*plVar8 + 0x2e8))(plVar8,iVar18,*(undefined8 *)(*plVar8 + 0x2f0));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 0263a568 to 0273a57f has its CatchHandler @ 0263a804 */
    uVar20 = *(undefined8 *)puVar5;
    plVar8 = (long *)thunk_FUN_01a89d6c(lVar13,uVar20);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar13,uVar20);
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 0263a58c to 0273a58f has its CatchHandler @ 0263a7dc */
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                    /* try { // try from 0263a5c8 to 0273a5cb has its CatchHandler @ 0263a7d8 */
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0263a5cc;
        }
                    /* try { // try from 0263a5a4 to 0273a5bb has its CatchHandler @ 0263a804 */
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar5,0);
LAB_0263a5cc:
    uVar20 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar13 = *param_1;
                    /* try { // try from 0263a5e0 to 0273a5f7 has its CatchHandler @ 0263a804 */
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                    /* try { // try from 0263a61c to 0273a633 has its CatchHandler @ 0263a804 */
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0263a628;
        }
        uVar15 = uVar15 - 1;
                    /* try { // try from 0263a604 to 0273a607 has its CatchHandler @ 0263a7c0 */
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(param_1,*(long *)puVar5,0);
LAB_0263a628:
    uVar11 = (*(code *)*puVar9)(param_1,puVar9[1]);
                    /* try { // try from 0263a640 to 0273a643 has its CatchHandler @ 0263a7bc */
    uVar15 = thunk_FUN_025bd1c0(uVar20,uVar11,0);
    if ((uVar15 & 1) != 0) {
      lVar13 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 0263a654 to 0273a65f has its CatchHandler @ 0263a7ac */
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0263a694;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
                    /* try { // try from 0263a67c to 0273a683 has its CatchHandler @ 0263a794 */
      puVar9 = (undefined8 *)FUN_01a472ec(param_1,*(long *)puVar5,0);
LAB_0263a694:
                    /* try { // try from 0263a698 to 0273a6cb has its CatchHandler @ 0263a7c8 */
      uVar20 = (*(code *)*puVar9)(param_1,puVar9[1]);
      uVar15 = FUN_025bd4ac(uVar20,*(undefined8 *)puVar2,0);
      if ((uVar15 & 1) != 0) goto LAB_0263a974;
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0263a700;
        }
        uVar15 = uVar15 - 1;
                    /* try { // try from 0263a6d8 to 0273a6db has its CatchHandler @ 0263a7a8 */
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar5,1);
                    /* try { // try from 0263a6ec to 0273a6ef has its CatchHandler @ 0263a804 */
LAB_0263a700:
    iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar13 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
                    /* try { // try from 0263a720 to 0273a73b has its CatchHandler @ 0263a77c */
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                    /* try { // try from 0263a750 to 0273a753 has its CatchHandler @ 0263a7f0 */
                    /* try { // try from 0263a754 to 0273a757 has its CatchHandler @ 0263a7f8 */
                    /* try { // try from 0263a758 to 0273a75b has its CatchHandler @ 0263a7e4 */
                    /* try { // try from 0263a75c to 0273a75f has its CatchHandler @ 0263a7fc */
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0263a760;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(param_1,*(long *)puVar5,1);
LAB_0263a760:
                    /* try { // try from 0263a760 to 0273a763 has its CatchHandler @ 0263a7ec */
                    /* try { // try from 0263a764 to 0273a767 has its CatchHandler @ 0263a7cc */
                    /* try { // try from 0263a768 to 0273a76b has its CatchHandler @ 0263a7c4 */
    iVar7 = (*(code *)*puVar9)(param_1,puVar9[1]);
                    /* try { // try from 0263a76c to 0273a76f has its CatchHandler @ 0263a7b0 */
                    /* try { // try from 0263a770 to 0273a773 has its CatchHandler @ 0263a788 */
    iVar1 = iVar18;
                    /* try { // try from 0263a774 to 0273a777 has its CatchHandler @ 0263a784 */
    if (iVar7 <= iVar6 || iVar17 != -1) {
      iVar1 = iVar17;
    }
                    /* try { // try from 0263a778 to 0273a77b has its CatchHandler @ 0263a798 */
    iVar18 = iVar18 + 1;
    iVar17 = iVar1;
                    /* catch() { ... } // from try @ 0263a720 with catch @ 0263a77c
                       try { // try from 0263a77c to 0273a817 has its CatchHandler @ 02639f98 */
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
                    /* catch() { ... } // from try @ 0263a864 with catch @ 0263a870 */
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03cd85f0) {
      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
      goto LAB_0263a8a4;
    }
  }
LAB_0263a884:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar19,*(long *)PTR_DAT_03cd85f0,3);
LAB_0263a8a4:
  uVar15 = (*(code *)*puVar9)(plVar19,uVar20,puVar9[1]);
  if ((uVar15 & 1) != 0) {
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0263a910;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar13,1);
LAB_0263a910:
    (*(code *)*puVar9)(plVar8,0,puVar9[1]);
  }
LAB_0263a924:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return;
LAB_0263a974:
  lVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cf2360);
  lVar14 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar13) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0263a9cc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar13,0);
LAB_0263a9cc:
  uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  uVar20 = thunk_FUN_01a6ca08(PTR_DAT_03cf29e0);
  uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cf29e8);
  uVar10 = FUN_025bdc88(uVar20,uVar10,uVar11,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cf2180);
  uVar20 = thunk_FUN_01a89e68();
  FUN_0277b8e0(uVar20,uVar10,0);
  uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cf29f0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar20,uVar10);
}


