/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_59
ENTRY_POINT: 033fdb0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fde00) */
/* WARNING: Removing unreachable block (ram,0x033fddf4) */

void OVRPlugin_<>c__<_cctor>b__786_59(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long *unaff_x25;
  ulong uVar15;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  uVar13 = 0x7fffffff;
                    /* catch() { ... } // from try @ 033fdad8 with catch @ 033fdb10 */
                    /* try { // try from 033fdb14 to 034fdb1b has its CatchHandler @ 033fdb30 */
  if (unaff_w21 == 0x7fffffff) {
    uVar13 = *(uint *)(unaff_x19 + 0x1c);
                    /* try { // try from 033fdb1c to 034fdb27 has its CatchHandler @ 033fda04 */
    thunk_FUN_01da0934();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
                    /* try { // try from 033fdb28 to 034fdb2f has its CatchHandler @ 033fdb30 */
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(unaff_x19 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033fdb14 with catch @ 033fdb30
                       catch(type#2 @ 00000000) { ... } // from try @ 033fdb28 with catch @ 033fdb30
                        */
                    /* try { // try from 033fdb34 to 034fdbbf has its CatchHandler @ 033fdb34
                       catch() { ... } // from try @ 033fdb34 with catch @ 033fdb34
                       catch() { ... } // from try @ 033fdc4c with catch @ 033fdb34
                       catch() { ... } // from try @ 033fdca0 with catch @ 033fdb34
                       catch() { ... } // from try @ 033fde20 with catch @ 033fdb34
                       catch() { ... } // from try @ 033fde2c with catch @ 033fdb34 */
    *(uint *)(unaff_x19 + 0x1c) = uVar1 & uVar13;
    thunk_FUN_01da0934();
    uVar13 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    uVar13 = uVar13 & uVar2;
    thunk_FUN_01da0934();
    *(uint *)(unaff_x19 + 0x20) = uVar13;
  }
  if (cStack000000000000000c != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,1);
  }
  iVar3 = *(int *)(unaff_x19 + 0x1c);
  thunk_FUN_01da0934();
  iVar4 = *(int *)(unaff_x19 + 0x18);
  thunk_FUN_01da0934();
  if ((int)uVar13 < iVar4 + iVar3) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = uVar1 & uVar13;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
    *puVar11 = unaff_x20;
    thunk_FUN_01e10808(puVar11);
    thunk_FUN_01da0934();
    *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
  }
  else {
    cStack0000000000000008 = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc(unaff_x19 + 0x24,&stack0x00000008);
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_01da0934();
    iVar4 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01da0934();
    iVar5 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_01da0934();
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    uVar1 = iVar4 - iVar5;
    if (iVar6 <= (int)uVar1) {
      plVar12 = (long *)(unaff_x19 + 0x10);
      lVar10 = *plVar12;
      thunk_FUN_01da0934();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_9534,*(int *)(lVar10 + 0x18) << 1);
      uVar15 = 0;
      plVar14 = plVar7 + 4;
      while( true ) {
        lVar10 = *plVar12;
        thunk_FUN_01da0934();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar15) break;
        lVar10 = *plVar12;
        thunk_FUN_01da0934();
        uVar13 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_01da0934();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar13 = uVar13 & iVar3 + (int)uVar15;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        *plVar14 = lVar10;
        thunk_FUN_01e10808(plVar14,lVar10);
        uVar15 = uVar15 + 1;
        plVar14 = plVar14 + 1;
      }
      thunk_FUN_01da0934();
      *plVar12 = (long)plVar7;
      thunk_FUN_01e10808(plVar12,plVar7);
      thunk_FUN_01da0934();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_01da0934();
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar1;
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(uint *)(unaff_x19 + 0x18) = iVar3 << 1 | 1;
      uVar13 = uVar1;
    }
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = uVar1 & uVar13;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01e10808();
    thunk_FUN_01da0934();
    *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
    if (cStack0000000000000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
    }
  }
  return;
}


