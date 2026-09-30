/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationSupported
ENTRY_POINT: 063b188c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationSupported(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w24;
  int iVar7;
  undefined8 *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  
  while( true ) {
                    /* catch() { ... } // from try @ 063b164c with catch @ 063b188c */
                    /* catch() { ... } // from try @ 063b1798 with catch @ 063b1890 */
                    /* catch() { ... } // from try @ 063b1644 with catch @ 063b1894 */
    uVar2 = FUN_063b1754();
                    /* catch() { ... } // from try @ 063b162c with catch @ 063b1898 */
                    /* catch() { ... } // from try @ 063b1790 with catch @ 063b189c */
    if (unaff_x21 == (long *)0x0) {
                    /* catch() { ... } // from try @ 063b1680 with catch @ 063b18a0 */
                    /* catch() { ... } // from try @ 063b1794 with catch @ 063b18a4
                       catch() { ... } // from try @ 063b179c with catch @ 063b18a4 */
      unaff_x21 = (long *)thunk_FUN_037788cc(*unaff_x26);
      FUN_060cc794(unaff_x21,unaff_w20,0);
    }
                    /* try { // try from 063b18bc to 064b18bf has its CatchHandler @ 063b18cc */
    plVar4 = (long *)FUN_060dca3c(0);
    if (plVar4 == (long *)0x0) goto LAB_063b19f4;
                    /* catch() { ... } // from try @ 063b18bc with catch @ 063b18cc */
                    /* try { // try from 063b18e4 to 064b18f7 has its CatchHandler @ 063b190c */
    uVar3 = (**(code **)(*plVar4 + 0x2e8))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0x88),0,uVar2 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar4 + 0x2f0));
    if (unaff_x21 == (long *)0x0) goto LAB_063b19f4;
    FUN_060cde14(unaff_x21,*(undefined8 *)(unaff_x19 + 0x90),0,uVar3,0);
    iVar7 = 0;
    if ((int)uVar2 < unaff_w24) {
      iVar7 = unaff_w29 + ~uVar2;
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x88),uVar2 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar7,0);
    }
    unaff_w27 = unaff_w22 + unaff_w27;
    if (unaff_w20 <= unaff_w27) {
                    /* WARNING: Could not recover jumptable at 0x063b1964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x78);
    if (plVar4 == (long *)0x0) goto LAB_063b19f4;
    iVar1 = unaff_w28 - iVar7;
    if (unaff_w20 - unaff_w27 <= unaff_w28 - iVar7) {
      iVar1 = unaff_w20 - unaff_w27;
    }
    unaff_w22 = (**(code **)(*plVar4 + 0x2b8))
                          (plVar4,*(undefined8 *)(unaff_x19 + 0x88),iVar7,iVar1,
                           *(undefined8 *)(*plVar4 + 0x2c0));
    if (unaff_w22 == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ef30);
      uVar5 = thunk_FUN_037788cc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07dad548);
      FUN_061f127c(uVar5,uVar6,0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db70b0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar6);
    }
    unaff_w29 = unaff_w22 + iVar7;
    if (unaff_w29 == unaff_w20) break;
    unaff_w24 = unaff_w29 + -1;
  }
  plVar4 = (long *)FUN_060dca3c(0);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x2e8))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w20,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar4 + 0x2f0));
    FUN_060c7254(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar3,0);
    return;
  }
LAB_063b19f4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


