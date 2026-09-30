/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 033698a8
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


void OVRManager__set_useDynamicFixedFoveatedRendering(void)

{
  long *unaff_x19;
  long *unaff_x20;
  
  if ((unaff_x20 != (long *)0x0) &&
     (*unaff_x20 == *(long *)UnityEngine_ISubsystemDescriptor_TypeInfo)) {
    thunk_FUN_01c49834();
                    /* WARNING: Could not recover jumptable at 0x03369a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x3b8))();
    return;
  }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03369798 with catch @ 033698cc
                        */
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 033697e4 with catch @ 033698d8
                        */
    thunk_FUN_01c1d1e8();
  }
  FUN_03295500(0);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03369758 with catch @ 033698e4
                        */
  if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
                    /* try { // try from 033698fc to 03469913 has its CatchHandler @ 03369940 */
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
  }
  FUN_03253e3c();
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x3a8))();
  return;
}


