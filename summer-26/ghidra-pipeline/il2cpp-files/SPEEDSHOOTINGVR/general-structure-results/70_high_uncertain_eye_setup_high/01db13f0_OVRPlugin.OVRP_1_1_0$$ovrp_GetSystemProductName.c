/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemProductName
ENTRY_POINT: 01db13f0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db15b8) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemProductName(void)

{
  uint uVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  long lVar7;
  uint unaff_w23;
  long *plVar8;
  long *unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  ulong uVar9;
  char in_stack_00000008;
  
  if (in_NG == in_OV) {
                    /* catch() { ... } // from try @ 01db13ac with catch @ 01db13f8
                       catch() { ... } // from try @ 01db13e4 with catch @ 01db13f8 */
    plVar6 = (long *)(unaff_x19 + 0x10);
    lVar7 = *plVar6;
                    /* try { // try from 01db13fc to 01eb13ff has its CatchHandler @ 01db1478 */
    thunk_FUN_00ffe618();
                    /* try { // try from 01db1400 to 01eb141f has its CatchHandler @ 01db1188 */
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01db1268 with catch @ 01db1404
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01db1254 with catch @ 01db1408
                        */
    plVar3 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a448,*(int *)(lVar7 + 0x18) << 1);
                    /* try { // try from 01db1420 to 01eb1437 has its CatchHandler @ 01db1468 */
    uVar9 = 0;
    plVar8 = plVar3 + 4;
    while( true ) {
      lVar7 = *plVar6;
      thunk_FUN_00ffe618();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* try { // try from 01db1438 to 01eb1457 has its CatchHandler @ 01db1188 */
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar9) break;
      lVar7 = *plVar6;
      thunk_FUN_00ffe618();
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* try { // try from 01db1458 to 01eb1467 has its CatchHandler @ 01db1468 */
      uVar1 = uVar1 & unaff_w27 + (int)uVar9;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
                    /* catch() { ... } // from try @ 01db1420 with catch @ 01db1468
                       catch() { ... } // from try @ 01db1458 with catch @ 01db1468 */
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* try { // try from 01db146c to 01eb146f has its CatchHandler @ 01db1478 */
                    /* try { // try from 01db1470 to 01eb147b has its CatchHandler @ 01db1188 */
      lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_0103ffe0(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar5,0);
      }
      if (*(uint *)(plVar3 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *plVar8 = lVar7;
      thunk_FUN_0106e12c(plVar8,lVar7);
      uVar9 = uVar9 + 1;
      plVar8 = plVar8 + 1;
    }
    thunk_FUN_00ffe618();
    *plVar6 = (long)plVar3;
    thunk_FUN_0106e12c(plVar6,plVar3);
    thunk_FUN_00ffe618();
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    thunk_FUN_00ffe618();
    iVar2 = *(int *)(unaff_x19 + 0x18);
    *(uint *)(unaff_x19 + 0x20) = unaff_w26;
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x18) = iVar2 << 1 | 1;
    unaff_w23 = unaff_w26;
  }
  lVar7 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  thunk_FUN_00ffe618();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = uVar1 & unaff_w23;
  if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  thunk_FUN_00ffe618();
  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
  thunk_FUN_0106e12c();
  thunk_FUN_00ffe618();
  *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
  if (in_stack_00000008 != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dad12c(unaff_x19 + 0x24,0);
  }
  return;
}


