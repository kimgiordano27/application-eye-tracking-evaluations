/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryStatus
ENTRY_POINT: 01db1258
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db15b8) */
/* WARNING: Removing unreachable block (ram,0x01db15ac) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  char in_stack_00000008;
  char cStack000000000000000c;
  
  FUN_00fdc2e4(PTR_DAT_0235a448);
                    /* try { // try from 01db1268 to 01eb126f has its CatchHandler @ 01db1404 */
  FUN_00fdc2e4(PTR_DAT_0235a210);
                    /* try { // try from 01db1270 to 01eb12ab has its CatchHandler @ 01db1188 */
  *(undefined1 *)(unaff_x21 + 0x9e5) = 1;
  puVar7 = PTR_DAT_0235a210;
  cStack000000000000000c = '\0';
  in_stack_00000008 = 0;
  uVar14 = *(uint *)(unaff_x19 + 0x20);
  thunk_FUN_00ffe618();
  if (uVar14 == 0x7fffffff) {
    cStack000000000000000c = '\0';
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    /* try { // try from 01db12ac to 01eb12b7 has its CatchHandler @ 01db1394 */
      thunk_FUN_01022c14();
    }
                    /* try { // try from 01db12b8 to 01eb13ab has its CatchHandler @ 01db1188 */
    FUN_01dac6f8(unaff_x19 + 0x24,&stack0x0000000c);
    iVar1 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_00ffe618();
    uVar14 = 0x7fffffff;
    if (iVar1 == 0x7fffffff) {
      uVar14 = *(uint *)(unaff_x19 + 0x1c);
      thunk_FUN_00ffe618();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      uVar3 = *(uint *)(unaff_x19 + 0x20);
      *(uint *)(unaff_x19 + 0x1c) = uVar2 & uVar14;
      thunk_FUN_00ffe618();
      uVar14 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      uVar14 = uVar14 & uVar3;
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x20) = uVar14;
    }
    if (cStack000000000000000c != '\0') {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x19 + 0x24,1);
    }
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  thunk_FUN_00ffe618();
  iVar4 = *(int *)(unaff_x19 + 0x18);
  thunk_FUN_00ffe618();
  if ((int)uVar14 < iVar4 + iVar1) {
    lVar11 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = uVar2 & uVar14;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    *puVar12 = unaff_x20;
    thunk_FUN_0106e12c(puVar12);
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = uVar14 + 1;
  }
  else {
    in_stack_00000008 = '\0';
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dac6f8(unaff_x19 + 0x24,&stack0x00000008);
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar4 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_00ffe618();
    iVar5 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    uVar2 = iVar4 - iVar5;
    if (iVar6 <= (int)uVar2) {
      plVar13 = (long *)(unaff_x19 + 0x10);
      lVar11 = *plVar13;
      thunk_FUN_00ffe618();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar8 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a448,*(int *)(lVar11 + 0x18) << 1);
      uVar16 = 0;
      plVar15 = plVar8 + 4;
      while( true ) {
        lVar11 = *plVar13;
        thunk_FUN_00ffe618();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar16) break;
        lVar11 = *plVar13;
        thunk_FUN_00ffe618();
        uVar14 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar14 = uVar14 & iVar1 + (int)uVar16;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar11 = *(long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_0103ffe0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar10,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *plVar15 = lVar11;
        thunk_FUN_0106e12c(plVar15,lVar11);
        uVar16 = uVar16 + 1;
        plVar15 = plVar15 + 1;
      }
      thunk_FUN_00ffe618();
      *plVar13 = (long)plVar8;
      thunk_FUN_0106e12c(plVar13,plVar8);
      thunk_FUN_00ffe618();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_00ffe618();
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar2;
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x18) = iVar1 << 1 | 1;
      uVar14 = uVar2;
    }
    lVar11 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = uVar2 & uVar14;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    thunk_FUN_0106e12c();
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = uVar14 + 1;
    if (in_stack_00000008 != '\0') {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x19 + 0x24,0);
    }
  }
  return;
}


