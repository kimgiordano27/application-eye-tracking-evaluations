/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 03369660
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = PTR_DAT_04230358;
                    /* try { // try from 03369670 to 03469687 has its CatchHandler @ 033696b8 */
  if (*unaff_x20 != *(long *)PTR_DAT_04230358) {
                    /* try { // try from 03369688 to 034696a7 has its CatchHandler @ 03369644 */
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
                    /* try { // try from 033696a8 to 034696b7 has its CatchHandler @ 033696b8 */
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    FUN_03252aa8();
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x2f8))();
    return;
  }
  thunk_FUN_01c49834();
  thunk_FUN_01c49334(*(undefined8 *)puVar1);
  (**(code **)(*unaff_x19 + 0x518))();
  return;
}


