/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05653d88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 unaff_w22;
  long *unaff_x29;
  
  puVar1 = System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* try { // try from 05653db4 to 05753dbf has its CatchHandler @ 05653eac */
  uVar2 = FUN_05653df0(unaff_w22);
                    /* try { // try from 05653dcc to 05753eab has its CatchHandler @ 05653eb0 */
  FUN_055efebc(uVar2,*(undefined8 *)puVar1,0,0);
  return;
}


