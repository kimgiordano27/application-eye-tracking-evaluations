/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 06395508
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSpaceComponentStatus(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  ushort unaff_w21;
  ushort uStack000000000000000c;
  
  uStack000000000000000c = unaff_w21;
code_r0x06395508:
                    /* try { // try from 06395510 to 06495513 has its CatchHandler @ 06395558 */
  if (uStack000000000000000c == 0x2f) goto LAB_06395560;
  bVar3 = uStack000000000000000c == 0x5c;
LAB_0639551c:
                    /* try { // try from 06395520 to 06495527 has its CatchHandler @ 06395554 */
  if (!bVar3) {
LAB_06395614:
    FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
    uVar5 = FUN_0619e108(&stack0x0000000c,0);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6730);
    uVar5 = System_Convert__ToInt32(uVar6,uVar5,0);
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar6 = thunk_FUN_037788cc();
    FUN_062d6d20(uVar6,uVar5,0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6728);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,uVar5);
  }
LAB_06395560:
  if (unaff_x20 == (long *)0x0) {
LAB_06395604:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* try { // try from 0639556c to 0649558b has its CatchHandler @ 063955a0 */
  FUN_060cef34();
                    /* catch() { ... } // from try @ 06395540 with catch @ 06395574 */
  *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
  do {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_06395610:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* try { // try from 0639558c to 06495597 has its CatchHandler @ 06394cf8 */
    if (*(int *)(lVar4 + 0x10) <= *(int *)(unaff_x19 + 0x20)) {
                    /* try { // try from 06395598 to 0649559f has its CatchHandler @ 063955a0 */
                    /* catch() { ... } // from try @ 0639556c with catch @ 063955a0
                       catch() { ... } // from try @ 06395598 with catch @ 063955a0 */
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar5 = thunk_FUN_037788cc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6720);
      FUN_062d6d20(uVar5,uVar6,0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6728);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar6);
    }
    uStack000000000000000c = FUN_060bb390(lVar4,*(int *)(unaff_x19 + 0x20),0);
    if (uStack000000000000000c == 0x5c) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_06395604;
      iVar2 = *(int *)(lVar4 + 0x10);
      iVar1 = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x20) = iVar1;
      if (iVar1 < iVar2) break;
    }
    else {
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      if (uStack000000000000000c == 0x27) {
        if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06395600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        goto LAB_06395610;
      }
    }
    if (unaff_x20 == (long *)0x0) goto LAB_06395604;
    FUN_060cef34();
  } while( true );
  uStack000000000000000c = FUN_060bb390(lVar4,iVar1,0);
  if (0x5c < uStack000000000000000c) {
    if (uStack000000000000000c < 0x67) {
      if ((uStack000000000000000c != 0x62) && (uStack000000000000000c != 0x66)) goto LAB_06395614;
    }
    else {
                    /* try { // try from 06395528 to 0649553f has its CatchHandler @ 06394cf8 */
                    /* try { // try from 06395540 to 06495543 has its CatchHandler @ 06395574 */
      if (((uStack000000000000000c != 0x6e) && (uStack000000000000000c != 0x72)) &&
         (uStack000000000000000c != 0x74)) goto LAB_06395614;
    }
    goto LAB_06395560;
  }
  if (0x27 < uStack000000000000000c) goto code_r0x06395508;
  if (uStack000000000000000c == 0x22) goto LAB_06395560;
  bVar3 = uStack000000000000000c == 0x27;
  goto LAB_0639551c;
}


