/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 063b18f4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int iVar6;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  
  while( true ) {
                    /* try { // try from 063b18f8 to 064b1903 has its CatchHandler @ 063b141c */
    FUN_060cde14(unaff_x21,param_2,0,param_4,0);
                    /* try { // try from 063b1904 to 064b190b has its CatchHandler @ 063b190c */
    iVar6 = 0;
                    /* catch() { ... } // from try @ 063b1860 with catch @ 063b190c
                       catch() { ... } // from try @ 063b18e4 with catch @ 063b190c
                       catch() { ... } // from try @ 063b1904 with catch @ 063b190c */
    if ((int)unaff_w23 < unaff_w24) {
      iVar6 = unaff_w29 + ~unaff_w23;
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x88),unaff_w25,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar6,0);
    }
    unaff_w27 = unaff_w22 + unaff_w27;
    if (unaff_w20 <= unaff_w27) {
                    /* WARNING: Could not recover jumptable at 0x063b1964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      return;
    }
    plVar3 = *(long **)(unaff_x19 + 0x78);
    if (plVar3 == (long *)0x0) goto LAB_063b19f4;
    iVar1 = unaff_w28 - iVar6;
    if (unaff_w20 - unaff_w27 <= unaff_w28 - iVar6) {
      iVar1 = unaff_w20 - unaff_w27;
    }
    unaff_w22 = (**(code **)(*plVar3 + 0x2b8))
                          (plVar3,*(undefined8 *)(unaff_x19 + 0x88),iVar6,iVar1,
                           *(undefined8 *)(*plVar3 + 0x2c0));
    if (unaff_w22 == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ef30);
      uVar4 = thunk_FUN_037788cc();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07dad548);
      FUN_061f127c(uVar4,uVar5,0);
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db70b0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar5);
    }
    unaff_w29 = unaff_w22 + iVar6;
    if (unaff_w29 == unaff_w20) break;
    unaff_w24 = unaff_w29 + -1;
    unaff_w23 = FUN_063b1754();
    if (unaff_x21 == (long *)0x0) {
      unaff_x21 = (long *)thunk_FUN_037788cc(*unaff_x26);
      FUN_060cc794(unaff_x21,unaff_w20,0);
    }
    plVar3 = (long *)FUN_060dca3c(0);
    if (plVar3 == (long *)0x0) goto LAB_063b19f4;
    unaff_w25 = unaff_w23 + 1;
    param_4 = (**(code **)(*plVar3 + 0x2e8))
                        (plVar3,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w25,
                         *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar3 + 0x2f0));
    if (unaff_x21 == (long *)0x0) goto LAB_063b19f4;
    param_2 = *(undefined8 *)(unaff_x19 + 0x90);
    param_4 = param_4 & 0xffffffff;
  }
  plVar3 = (long *)FUN_060dca3c(0);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x2e8))
                      (plVar3,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w20,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar3 + 0x2f0));
    FUN_060c7254(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar2,0);
    return;
  }
LAB_063b19f4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


