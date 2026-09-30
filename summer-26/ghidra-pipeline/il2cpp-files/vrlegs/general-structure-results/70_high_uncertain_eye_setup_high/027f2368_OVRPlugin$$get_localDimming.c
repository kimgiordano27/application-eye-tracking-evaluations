/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 027f2368
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x027f249c) */

byte OVRPlugin__get_localDimming(byte param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  byte bStack0000000000000064;
  int iStack00000000000000e4;
  byte bStack0000000000000114;
  undefined8 in_stack_00000138;
  
  bStack0000000000000064 = param_1 & 1;
  bStack0000000000000114 = bStack0000000000000064;
  bStack0000000000000054 = FUN_025bb184(0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    iStack00000000000000e4 = 9;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
                    /* try { // try from 027f23bc to 028f240b has its CatchHandler @ 027f2160 */
    FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
    uVar2 = FUN_027f8e00(0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      iStack00000000000000e4 = 10;
    }
    else {
      iStack00000000000000e4 = 0;
    }
    if (iStack00000000000000e4 == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f2344 with catch @ 027f2418
                        */
      lVar3 = *(long *)(unaff_x19 + 0x68);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f23b8 with catch @ 027f241c
                       catch(type#1 @ 03abd138) { ... } // from try @ 027f2410 with catch @ 027f241c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f231c with catch @ 027f2420
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f240c with catch @ 027f2424
                        */
      FUN_018748a8(lVar3);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f22dc with catch @ 027f2428
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027f2360 with catch @ 027f242c
                        */
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      FUN_018748a8(uVar2);
                    /* try { // try from 027f2444 to 028f2447 has its CatchHandler @ 027f2458 */
      uStack000000000000002c = FUN_025ca734(uVar2,0);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
      FUN_018748a8(uVar2);
      uStack000000000000001c = OVRPlugin__SetControllerLocalizedVibration(uVar2);
      uVar1 = OVRPlugin__SetControllerLocalizedVibration(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_025bb2ec(uStack000000000000002c,uStack000000000000001c,uVar1,0);
    }
    else {
                    /* try { // try from 027f240c to 028f240f has its CatchHandler @ 027f2424 */
                    /* try { // try from 027f2410 to 028f2413 has its CatchHandler @ 027f241c */
      if (iStack00000000000000e4 != 10) {
        return in_stack_00000138._7_1_;
      }
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e20);
      uVar2 = FUN_027f8db0(0);
      FUN_018748a8(uVar2);
      uStack000000000000000c = FUN_025ca734(uVar2,0);
      uVar1 = OVRPlugin__SetControllerLocalizedVibration(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_025bb2ec(uStack000000000000000c,0,uVar1,0);
    }
  }
  else if (iStack00000000000000e4 != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


