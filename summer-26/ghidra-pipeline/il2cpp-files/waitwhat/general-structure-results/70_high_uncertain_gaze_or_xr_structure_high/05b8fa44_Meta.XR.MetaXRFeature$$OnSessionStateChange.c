/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05b8fa44
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(void)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_070c1b68 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 05b8fa74 to 05c8fa77 has its CatchHandler @ 05b8fc30 */
                    /* try { // try from 05b8fa78 to 05c8fa83 has its CatchHandler @ 05b8fbe0 */
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_070c1b68)
    {
      plVar2 = (long *)0x0;
    }
  }
  *(long **)(unaff_x20 + 0x20) = plVar2;
  *(long **)(unaff_x20 + 0x28) = unaff_x19;
  return;
}


