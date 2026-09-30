/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$.ctor
ENTRY_POINT: 08a399e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate___ctor
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar1;
  long unaff_x23;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xce8);
  puVar2 = *(undefined8 **)(unaff_x23 + 0xcf0);
  if ((*(byte *)(unaff_x21 + 0x3b6) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac52cf0);
    FUN_04947ee4(PTR_DAT_0ac52ce8);
                    /* try { // try from 08a39a1c to 08b39a23 has its CatchHandler @ 08a39ae0 */
    *(undefined1 *)(unaff_x21 + 0x3b6) = 1;
  }
                    /* try { // try from 08a39a28 to 08b39a33 has its CatchHandler @ 08a39adc */
                    /* try { // try from 08a39a3c to 08b39a3f has its CatchHandler @ 08a39aec */
                    /* try { // try from 08a39a40 to 08b39ac7 has its CatchHandler @ 08a3984c */
  FUN_05a93c34(param_1,*puVar1,param_2,0,*puVar2);
  return;
}


