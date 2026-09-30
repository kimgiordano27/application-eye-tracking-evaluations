/*
FUNCTION_NAME: FUN_06550374
ENTRY_POINT: 06550374
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065507b8) */

undefined1  [16] FUN_06550374(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  bool bVar16;
  
                    /* try { // try from 06550388 to 066503a7 has its CatchHandler @ 06550600 */
  if ((DAT_071ce642 & 1) == 0) {
                    /* try { // try from 065503b0 to 066503b7 has its CatchHandler @ 06550594 */
    FUN_02f07e70(PTR_DAT_06d02200);
    FUN_02f07e70(PTR_DAT_06d04128);
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d02048);
                    /* try { // try from 065503d8 to 066503df has its CatchHandler @ 065505a8 */
    FUN_02f07e70(PTR_DAT_06d06310);
    FUN_02f07e70(PTR_DAT_06d061a0);
    FUN_02f07e70(PTR_DAT_06d3b2f0);
                    /* try { // try from 06550400 to 0665041f has its CatchHandler @ 065505b8 */
    FUN_02f07e70(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38e50);
    FUN_02f07e70(PTR_DAT_06d38e18);
    DAT_071ce642 = 1;
  }
  puVar5 = PTR_DAT_06d3b2f0;
  puVar3 = PTR_DAT_06d02200;
                    /* try { // try from 06550434 to 0665043b has its CatchHandler @ 065505a0 */
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar12 == 0)) goto LAB_065507b0;
  if (*(char *)(lVar12 + 0x41) != '\0') {
                    /* try { // try from 06550450 to 0665045f has its CatchHandler @ 065505c4 */
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_0556b3b0(param_2,0);
                    /* try { // try from 06550470 to 06650473 has its CatchHandler @ 065505e4 */
    lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                    /* try { // try from 06550480 to 06650493 has its CatchHandler @ 0655060c */
    FUN_065508ac(lVar12,uVar6);
    goto LAB_06550760;
  }
  if (*(int *)(*(long *)PTR_DAT_06d38e50 + 0xe0) == 0) {
                    /* try { // try from 065504a0 to 066504ab has its CatchHandler @ 06550608 */
    thunk_FUN_02f12b58();
  }
  lVar12 = FUN_03bdc6e0(param_4,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
  if (lVar12 != 0) {
                    /* try { // try from 065504c0 to 066504cb has its CatchHandler @ 06550604 */
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
                    /* try { // try from 065504cc to 0665053b has its CatchHandler @ 0654f770 */
    uVar7 = FUN_0556b3b0(param_2,0);
    plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d06310);
    FUN_05473914(plVar8,0);
    if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = FUN_05636f0c(param_4,0);
    if (lVar12 != 0) {
      plVar9 = (long *)FUN_05627ba8(lVar12,0);
      puVar4 = PTR_DAT_06d061a0;
      puVar2 = PTR_DAT_06d02048;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
                    /* try { // try from 0655053c to 06650543 has its CatchHandler @ 06550654 */
                    /* try { // try from 06550544 to 0665054b has its CatchHandler @ 06550650 */
      bVar16 = true;
      do {
        lVar13 = *plVar9;
                    /* try { // try from 0655054c to 0665054f has its CatchHandler @ 06550658 */
        lVar12 = *(long *)puVar2;
                    /* try { // try from 06550550 to 06650553 has its CatchHandler @ 06550644 */
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 06550554 to 06650557 has its CatchHandler @ 06550640 */
        if (uVar14 != 0) {
                    /* try { // try from 06550558 to 0665055f has its CatchHandler @ 0655064c */
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
                    /* try { // try from 06550560 to 06650563 has its CatchHandler @ 06550658 */
                    /* try { // try from 06550564 to 06650567 has its CatchHandler @ 06550638 */
                    /* try { // try from 06550568 to 0665056b has its CatchHandler @ 06550634 */
            if (*(long *)(piVar15 + -2) == lVar12) {
                    /* try { // try from 06550588 to 0665058b has its CatchHandler @ 065505d0 */
                    /* catch() { ... } // from try @ 0654fdd0 with catch @ 0655058c
                       try { // try from 0655058c to 0665067b has its CatchHandler @ 0654f770 */
                    /* catch() { ... } // from try @ 0654fd8c with catch @ 06550590 */
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06550594;
            }
                    /* try { // try from 0655056c to 0665056f has its CatchHandler @ 06550630 */
            uVar14 = uVar14 - 1;
                    /* try { // try from 06550570 to 06650573 has its CatchHandler @ 0655062c */
            piVar15 = piVar15 + 4;
                    /* try { // try from 06550574 to 06650577 has its CatchHandler @ 065505f4 */
          } while (uVar14 != 0);
        }
                    /* try { // try from 06550578 to 0665057b has its CatchHandler @ 0654f770 */
                    /* try { // try from 0655057c to 0665057f has its CatchHandler @ 065505e8 */
                    /* try { // try from 06550580 to 06650583 has its CatchHandler @ 065505dc */
        puVar10 = (undefined8 *)FUN_02eea86c(plVar9,lVar12,0);
                    /* try { // try from 06550584 to 06650587 has its CatchHandler @ 065505d8 */
LAB_06550594:
                    /* catch() { ... } // from try @ 065503b0 with catch @ 06550594 */
                    /* catch() { ... } // from try @ 0654ffa4 with catch @ 06550598 */
                    /* catch() { ... } // from try @ 06550060 with catch @ 0655059c */
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar1 = PTR_DAT_06d01f60;
                    /* catch() { ... } // from try @ 06550434 with catch @ 065505a0 */
        if ((uVar14 & 1) == 0) {
                    /* try { // try from 0655067c to 0665067f has its CatchHandler @ 065506a8 */
                    /* try { // try from 06550680 to 066506b7 has its CatchHandler @ 0654f770 */
          plVar9 = (long *)thunk_FUN_02ef170c(plVar9,*(undefined8 *)PTR_DAT_06d01f60);
          if (plVar9 == (long *)0x0) goto LAB_0655071c;
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 == 0) goto LAB_065506c8;
                    /* catch() { ... } // from try @ 0655067c with catch @ 065506a8 */
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_065506b0;
        }
                    /* catch() { ... } // from try @ 0654ff20 with catch @ 065505a4 */
        lVar13 = *plVar9;
                    /* catch() { ... } // from try @ 0654ff48 with catch @ 065505a8
                       catch() { ... } // from try @ 06550004 with catch @ 065505a8
                       catch() { ... } // from try @ 065503d8 with catch @ 065505a8 */
        lVar12 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 0654fd54 with catch @ 065505ac */
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* catch() { ... } // from try @ 0654ff70 with catch @ 065505b0 */
        if (uVar14 != 0) {
                    /* catch() { ... } // from try @ 0655002c with catch @ 065505b4 */
                    /* catch() { ... } // from try @ 06550400 with catch @ 065505b8 */
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 06550328 with catch @ 065505bc */
                    /* catch() { ... } // from try @ 06550370 with catch @ 065505c0 */
                    /* catch() { ... } // from try @ 06550450 with catch @ 065505c4 */
            if (*(long *)(piVar15 + -2) == lVar12) {
                    /* catch() { ... } // from try @ 06550470 with catch @ 065505e4 */
                    /* catch() { ... } // from try @ 0655057c with catch @ 065505e8 */
                    /* catch() { ... } // from try @ 0654fe78 with catch @ 065505ec */
                    /* catch() { ... } // from try @ 0654ffb8 with catch @ 065505f0 */
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_065505f4;
            }
                    /* catch() { ... } // from try @ 065500ac with catch @ 065505c8 */
            uVar14 = uVar14 - 1;
                    /* catch() { ... } // from try @ 06550094 with catch @ 065505cc */
            piVar15 = piVar15 + 4;
                    /* catch() { ... } // from try @ 06550588 with catch @ 065505d0 */
          } while (uVar14 != 0);
        }
                    /* catch() { ... } // from try @ 0654fd34 with catch @ 065505d4 */
                    /* catch() { ... } // from try @ 06550584 with catch @ 065505d8 */
                    /* catch() { ... } // from try @ 06550580 with catch @ 065505dc */
        puVar10 = (undefined8 *)FUN_02eea86c(plVar9,lVar12,1);
                    /* catch() { ... } // from try @ 06550078 with catch @ 065505e0 */
LAB_065505f4:
                    /* catch() { ... } // from try @ 06550574 with catch @ 065505f4 */
                    /* catch() { ... } // from try @ 0654fec0 with catch @ 065505f8 */
                    /* catch() { ... } // from try @ 0655033c with catch @ 065505fc */
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* catch() { ... } // from try @ 06550388 with catch @ 06550600 */
                    /* catch() { ... } // from try @ 065504c0 with catch @ 06550604 */
                    /* catch() { ... } // from try @ 065504a0 with catch @ 06550608 */
                    /* catch() { ... } // from try @ 06550480 with catch @ 0655060c */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 065500c0 with catch @ 06550610 */
          thunk_FUN_02f12b58();
        }
                    /* catch() { ... } // from try @ 0654fed0 with catch @ 06550614 */
                    /* catch() { ... } // from try @ 0654fef4 with catch @ 06550618 */
                    /* catch() { ... } // from try @ 0654fd18 with catch @ 0655061c */
        uVar14 = FUN_0556b3b0(plVar11,0);
                    /* catch() { ... } // from try @ 0654fd04 with catch @ 06550620 */
                    /* catch() { ... } // from try @ 0654fe04 with catch @ 06550624 */
                    /* catch() { ... } // from try @ 0654fe28 with catch @ 06550628 */
                    /* catch() { ... } // from try @ 06550570 with catch @ 0655062c */
        if ((uVar14 != 0) && ((uVar14 & uVar7) == uVar14)) {
                    /* catch() { ... } // from try @ 0655056c with catch @ 06550630 */
          if (!bVar16) {
                    /* catch() { ... } // from try @ 06550568 with catch @ 06550634 */
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
                    /* catch() { ... } // from try @ 06550564 with catch @ 06550638 */
                    /* catch() { ... } // from try @ 065501f4 with catch @ 0655063c
                       catch() { ... } // from try @ 065502c8 with catch @ 0655063c */
                    /* catch() { ... } // from try @ 06550554 with catch @ 06550640 */
                    /* catch() { ... } // from try @ 06550550 with catch @ 06550644 */
            FUN_0546ced8(plVar8,*(undefined8 *)puVar4,0);
          }
                    /* catch() { ... } // from try @ 06550298 with catch @ 06550648
                       catch() { ... } // from try @ 065502fc with catch @ 06550648 */
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
                    /* catch() { ... } // from try @ 06550558 with catch @ 0655064c */
                    /* catch() { ... } // from try @ 06550544 with catch @ 06550650 */
                    /* catch() { ... } // from try @ 0655053c with catch @ 06550654 */
                    /* catch() { ... } // from try @ 0655054c with catch @ 06550658
                       catch() { ... } // from try @ 06550560 with catch @ 06550658 */
          uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    /* catch() { ... } // from try @ 06550118 with catch @ 0655065c */
                    /* catch() { ... } // from try @ 065500f0 with catch @ 06550660 */
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0(uVar6,uVar6);
          }
          FUN_0546ced8(plVar8,uVar6,0);
          bVar16 = false;
        }
      } while( true );
    }
    goto LAB_065507b0;
  }
  if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_056358c0(param_4,param_2,0);
  goto LAB_06550734;
  while( true ) {
    uVar7 = uVar7 - 1;
                    /* try { // try from 065506c0 to 066506cb has its CatchHandler @ 0654f770 */
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_065506b0:
                    /* try { // try from 065506b8 to 066506bf has its CatchHandler @ 065506d4 */
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06550710;
    }
  }
LAB_065506c8:
                    /* try { // try from 065506cc to 066506d3 has its CatchHandler @ 065506d4 */
  puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 065506b8 with catch @ 065506d4
                       catch() { ... } // from try @ 065506cc with catch @ 065506d4 */
LAB_06550710:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0655071c:
  if (plVar8 == (long *)0x0) {
LAB_065507b0:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
LAB_06550734:
  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_05645a04(lVar12,0);
  *(undefined8 *)(lVar12 + 0x10) = uVar6;
  thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x10),uVar6);
LAB_06550760:
  puVar3 = PTR_DAT_06d38e18;
  *param_3 = lVar12;
  thunk_FUN_02f411dc(param_3,lVar12);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar12 = *(long *)puVar3;
  }
  return *(undefined1 (*) [16])(*(long *)(lVar12 + 0xb8) + 8);
}


