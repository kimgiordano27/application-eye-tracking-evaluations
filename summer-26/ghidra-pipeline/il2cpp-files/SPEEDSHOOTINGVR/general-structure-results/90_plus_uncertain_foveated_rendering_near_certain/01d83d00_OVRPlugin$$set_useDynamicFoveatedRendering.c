/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 01d83d00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
                    /* try { // try from 01d83d04 to 01e83d07 has its CatchHandler @ 01d84360 */
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x780));
  *(undefined1 *)(unaff_x20 + 0x7f2) = 1;
  lVar1 = FUN_00fcdc78();
                    /* try { // try from 01d83d1c to 01e83d1f has its CatchHandler @ 01d8433c */
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_02352780;
    lVar2 = thunk_FUN_0103ffe0(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar1,uVar3);
    }
  }
                    /* try { // try from 01d83d3c to 01e83d5b has its CatchHandler @ 01d84378 */
  return;
}


