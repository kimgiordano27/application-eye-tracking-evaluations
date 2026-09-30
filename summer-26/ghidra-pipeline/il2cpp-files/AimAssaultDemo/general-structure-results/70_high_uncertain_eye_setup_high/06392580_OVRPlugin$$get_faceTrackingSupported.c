/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingSupported
ENTRY_POINT: 06392580
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


void OVRPlugin__get_faceTrackingSupported(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  
  thunk_FUN_03798b70();
  uVar1 = FUN_061d52c8(0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
  lVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
    lVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
    uVar9 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_037a15ac(PTR_DAT_07d93278);
    lVar2 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6590);
    FUN_044a4918(lVar2,uVar9,uVar5,0);
    lVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
    *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar2;
    lVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
    thunk_FUN_037aeb94(*(long *)(lVar6 + 0xb8) + 8,lVar2);
  }
  else {
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
  }
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d93288);
  uVar8 = FUN_03f6a6a8(uVar8,lVar2,uVar5);
  uVar8 = FUN_060c2498(uVar3,uVar8,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = (long *)thunk_FUN_0374b7cc();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  uVar1 = FUN_06334b04(uVar4,uVar1,uVar8,uVar3,0);
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar8 = thunk_FUN_037788cc();
  FUN_062d6d20(uVar8,uVar1,0);
  uVar1 = thunk_FUN_037a15ac(PTR_DAT_07db6598);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar8,uVar1);
}


