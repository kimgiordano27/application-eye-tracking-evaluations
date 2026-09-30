/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 027f2298
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x027f249c) */
/* WARNING: Removing unreachable block (ram,0x027f22a4) */
/* WARNING: Removing unreachable block (ram,0x027f22b0) */

byte OVRPlugin__get_localDimmingSupported(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  int iStack00000000000000e4;
  byte bStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000138;
  
  iStack00000000000000e4 = 0;
  bVar1 = FUN_027f2528(*(undefined8 *)(unaff_x19 + 0x90));
  if ((bVar1 & 1) == 0) {
    iStack00000000000000e4 = 8;
  }
  else {
    iStack00000000000000e4 = 0;
  }
                    /* try { // try from 027f22dc to 028f22fb has its CatchHandler @ 027f2428 */
  if (iStack00000000000000e4 == 0) {
    bVar1 = FUN_027e971c(*(undefined8 *)(unaff_x19 + 0x90));
    if ((bVar1 & 1) == 0) {
      iStack00000000000000e4 = 8;
    }
    else {
      iStack00000000000000e4 = 0;
    }
                    /* try { // try from 027f231c to 028f2323 has its CatchHandler @ 027f2420 */
    if (iStack00000000000000e4 == 0) {
      bStack0000000000000114 = 1;
      goto LAB_027f237c;
    }
  }
  if (iStack00000000000000e4 != 8) {
    return in_stack_00000138._7_1_;
  }
                    /* try { // try from 027f2340 to 028f2343 has its CatchHandler @ 027f2414 */
                    /* try { // try from 027f2344 to 028f234f has its CatchHandler @ 027f2418 */
                    /* try { // try from 027f2360 to 028f2393 has its CatchHandler @ 027f242c */
  bStack0000000000000114 =
       FUN_027ef264(*(undefined8 *)(unaff_x19 + 0x90),in_stack_00000120._4_4_,
                    *(undefined8 *)(unaff_x19 + 0x98));
  bStack0000000000000114 = bStack0000000000000114 & 1;
LAB_027f237c:
  bStack0000000000000054 = FUN_025bb184(0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    iStack00000000000000e4 = 9;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
    FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
    uVar3 = FUN_027f8e00(0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      iStack00000000000000e4 = 10;
    }
    else {
      iStack00000000000000e4 = 0;
    }
    if (iStack00000000000000e4 == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      FUN_018748a8(lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      FUN_018748a8(uVar3);
      uStack000000000000002c = FUN_025ca734(uVar3,0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
      FUN_018748a8(uVar3);
      uStack000000000000001c = OVRPlugin__SetControllerLocalizedVibration(uVar3);
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_025bb2ec(uStack000000000000002c,uStack000000000000001c,uVar2,0);
    }
    else {
      if (iStack00000000000000e4 != 10) {
        return in_stack_00000138._7_1_;
      }
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e20);
      uVar3 = FUN_027f8db0(0);
      FUN_018748a8(uVar3);
      uStack000000000000000c = FUN_025ca734(uVar3,0);
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_025bb2ec(uStack000000000000000c,0,uVar2,0);
    }
  }
  else if (iStack00000000000000e4 != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


