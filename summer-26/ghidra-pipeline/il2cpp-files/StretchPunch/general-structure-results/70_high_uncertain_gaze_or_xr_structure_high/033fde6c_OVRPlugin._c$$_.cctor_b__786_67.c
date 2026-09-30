/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_67
ENTRY_POINT: 033fde6c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_8;functionality_possible_biometrics_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033fde00) */
/* WARNING: Removing unreachable block (ram,0x033fdeb8) */

void OVRPlugin_<>c__<_cctor>b__786_67(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool in_ZR;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  uint unaff_w23;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  if (!in_ZR) {
    if (cStack000000000000000c != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0();
  }
  plVar10 = (long *)__cxa_begin_catch();
  lVar12 = *plVar10;
  __cxa_end_catch();
  if (cStack000000000000000c != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,1);
  }
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68(lVar12);
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  thunk_FUN_01da0934();
  iVar2 = *(int *)(unaff_x19 + 0x18);
  thunk_FUN_01da0934();
  if ((int)unaff_w23 < iVar2 + iVar1) {
    lVar12 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar3 = uVar3 & unaff_w23;
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
    *puVar11 = unaff_x20;
    thunk_FUN_01e10808(puVar11);
    thunk_FUN_01da0934();
    *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
  }
  else {
    cStack0000000000000008 = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    /* try { // try from 033fdc00 to 034fdc1f has its CatchHandler @ 033fdc6c */
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc(unaff_x19 + 0x24,&stack0x00000008);
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_01da0934();
    iVar2 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01da0934();
    iVar4 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_01da0934();
    iVar5 = *(int *)(unaff_x19 + 0x18);
                    /* try { // try from 033fdc2c to 034fdc33 has its CatchHandler @ 033fdc64 */
    thunk_FUN_01da0934();
    uVar3 = iVar2 - iVar4;
    if (iVar5 <= (int)uVar3) {
                    /* try { // try from 033fdc3c to 034fdc4b has its CatchHandler @ 033fdc70 */
      plVar10 = (long *)(unaff_x19 + 0x10);
      lVar12 = *plVar10;
      thunk_FUN_01da0934();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
                    /* try { // try from 033fdc4c to 034fdc87 has its CatchHandler @ 033fdb34 */
      plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_9534,*(int *)(lVar12 + 0x18) << 1);
      uVar14 = 0;
      plVar13 = plVar7 + 4;
      while( true ) {
        lVar12 = *plVar10;
        thunk_FUN_01da0934();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) break;
        lVar12 = *plVar10;
        thunk_FUN_01da0934();
        uVar6 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_01da0934();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar6 = uVar6 & iVar1 + (int)uVar14;
        if (*(uint *)(lVar12 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar12 = *(long *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
        if ((lVar12 != 0) &&
           (lVar8 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        *plVar13 = lVar12;
        thunk_FUN_01e10808(plVar13,lVar12);
        uVar14 = uVar14 + 1;
        plVar13 = plVar13 + 1;
      }
      thunk_FUN_01da0934();
      *plVar10 = (long)plVar7;
      thunk_FUN_01e10808(plVar10,plVar7);
      thunk_FUN_01da0934();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_01da0934();
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar3;
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(uint *)(unaff_x19 + 0x18) = iVar1 << 1 | 1;
      unaff_w23 = uVar3;
    }
    lVar12 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar3 = uVar3 & unaff_w23;
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    *(undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01e10808();
    thunk_FUN_01da0934();
    *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
    if (cStack0000000000000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
    }
  }
  return;
}


