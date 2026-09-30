/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 033c52dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetColorScaleAndOffset(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  
  sVar4 = FUN_03271744(param_1,param_2,0);
  if ((sVar4 == 0x2d) || (sVar4 = FUN_03271744(), sVar4 == 0x2b)) {
    puVar3 = StringLiteral_1148;
                    /* try { // try from 033c5314 to 034c532f has its CatchHandler @ 033c5458 */
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c59f4();
    if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
                    /* try { // try from 033c5344 to 034c53ab has its CatchHandler @ 033c5450 */
      thunk_FUN_01dc4f30(*(long *)StringLiteral_1369);
    }
    FUN_03366114(0);
    if (*(int *)(*(long *)StringLiteral_1060 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03295ca4();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar6 = FUN_033c5ab8();
    *unaff_x19 = uVar6;
                    /* try { // try from 033c53ac to 034c541b has its CatchHandler @ 033c505c */
    thunk_FUN_01e10808();
  }
  else {
                    /* try { // try from 033c5518 to 034c551b has its CatchHandler @ 033c5538 */
                    /* try { // try from 033c5528 to 034c554f has its CatchHandler @ 033c5564 */
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
                    /* catch() { ... } // from try @ 033c5478 with catch @ 033c5530 */
    }
                    /* catch() { ... } // from try @ 033c5518 with catch @ 033c5538 */
    lVar7 = FUN_0327baac();
                    /* try { // try from 033c5550 to 034c555b has its CatchHandler @ 033c505c */
    lVar8 = FUN_033c43e0();
                    /* try { // try from 033c555c to 034c5563 has its CatchHandler @ 033c5564 */
    if ((lVar8 == 0) || (lVar7 == 0)) {
LAB_033c56b8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
                    /* catch() { ... } // from try @ 033c5494 with catch @ 033c5564
                       catch() { ... } // from try @ 033c5528 with catch @ 033c5564
                       catch() { ... } // from try @ 033c555c with catch @ 033c5564 */
    if (0 < (int)uVar2) {
      lVar1 = *(long *)(lVar8 + 0x10);
      lVar8 = *(long *)(lVar8 + 0x18);
      uVar12 = 0;
LAB_033c5584:
      if (uVar12 < uVar2) {
        plVar11 = (long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
        if (*plVar11 != 0) {
          lVar9 = FUN_0327d400(*plVar11,0);
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_033c56bc;
          *plVar11 = lVar9;
          thunk_FUN_01e10808(plVar11,lVar9);
          if (lVar8 != 0) {
            if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
LAB_033c53ec:
              FUN_033c5988();
              return 0;
            }
            uVar13 = 0;
            uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if ((uVar10 <= uVar13) || (*(uint *)(lVar7 + 0x18) <= uVar12)) goto LAB_033c56bc;
              lVar9 = *(long *)(lVar8 + 0x20 + uVar13 * 8);
              if ((unaff_x21 & 1) == 0) {
                if (lVar9 == 0) break;
                uVar10 = FUN_03278c78(lVar9,*plVar11,0);
                if ((uVar10 & 1) != 0) goto LAB_033c5630;
              }
              else {
                iVar5 = FUN_03277cf0(lVar9,*plVar11,5,0);
                if (iVar5 == 0) goto LAB_033c5630;
              }
              uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar13 = uVar13 + 1;
              if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar13) goto LAB_033c53ec;
            } while( true );
          }
        }
        goto LAB_033c56b8;
      }
      goto LAB_033c56bc;
    }
LAB_033c5680:
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar6 = FUN_033c5fc4();
    *unaff_x19 = uVar6;
    thunk_FUN_01e10808();
  }
  return 1;
LAB_033c5630:
  if (lVar1 == 0) goto LAB_033c56b8;
  if ((uint)uVar13 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar12 = uVar12 + 1;
    if ((int)uVar2 <= (int)uVar12) goto LAB_033c5680;
    goto LAB_033c5584;
  }
LAB_033c56bc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


