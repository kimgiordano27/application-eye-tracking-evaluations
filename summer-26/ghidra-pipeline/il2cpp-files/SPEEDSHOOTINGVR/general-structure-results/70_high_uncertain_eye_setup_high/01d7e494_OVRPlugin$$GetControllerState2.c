/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 01d7e494
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState2(void)

{
  ulong uVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 *unaff_x27;
  
  FUN_01ca0f60();
  FUN_01ca1298();
  FUN_01d5e86c(*unaff_x27,0);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e430 with catch @ 01d7e4cc
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e450 with catch @ 01d7e4d0
                        */
  FUN_01c9fb7c();
                    /* try { // try from 01d7e4e8 to 01e7e4eb has its CatchHandler @ 01d7e4fc */
  if ((*(long *)(unaff_x22 + 0x70) != 0) &&
     (uVar1 = FUN_01c9f9e4(*(long *)(unaff_x22 + 0x70),0), (uVar1 & 1) != 0)) {
                    /* catch() { ... } // from try @ 01d7e4e8 with catch @ 01d7e4fc */
                    /* try { // try from 01d7e508 to 01e7e513 has its CatchHandler @ 01d7e528 */
                    /* try { // try from 01d7e514 to 01e7e51f has its CatchHandler @ 01d7e390 */
    uVar2 = *(undefined8 *)PTR_DAT_02352ac8;
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
                    /* try { // try from 01d7e520 to 01e7e527 has its CatchHandler @ 01d7e528 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d7e508 with catch @ 01d7e528
                       catch(type#2 @ 00000000) { ... } // from try @ 01d7e520 with catch @ 01d7e528
                        */
    FUN_01d5e86c(uVar2,0);
    FUN_01c9fb7c();
    if (*(long *)(unaff_x22 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    System_WeakReference__GetObjectData();
  }
  return;
}


