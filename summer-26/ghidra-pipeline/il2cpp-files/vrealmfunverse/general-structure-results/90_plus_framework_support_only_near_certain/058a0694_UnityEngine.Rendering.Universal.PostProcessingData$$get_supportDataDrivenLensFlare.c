/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessingData$$get_supportDataDrivenLensFlare
ENTRY_POINT: 058a0694
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_Rendering_Universal_PostProcessingData__get_supportDataDrivenLensFlare(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_OVRResult<OVRPlugin_Result>_get_Success__);
  *(undefined1 *)(unaff_x20 + 0x18a) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 058a06c0 to 059a06cf has its CatchHandler @ 058a06d0 */
    FUN_0463c1c4(*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 058a0660 with catch @ 058a06d0
                       catch() { ... } // from try @ 058a06c0 with catch @ 058a06d0 */
      FUN_058af6d8(*(long *)(unaff_x19 + 0x10),0);
                    /* try { // try from 058a06d4 to 059a06d7 has its CatchHandler @ 058a0778 */
                    /* try { // try from 058a06d8 to 059a071f has its CatchHandler @ 0589fe74 */
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        return;
      }
                    /* catch() { ... } // from try @ 058a0424 with catch @ 058a06e0 */
                    /* catch() { ... } // from try @ 058a0584 with catch @ 058a06e4 */
                    /* catch() { ... } // from try @ 058a0580 with catch @ 058a06e8 */
                    /* catch() { ... } // from try @ 058a057c with catch @ 058a06ec */
      FUN_03ab25ac(unaff_x19 + 0x18,
                   *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_get_Status__);
      puVar7 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
      puVar6 = Method_OVRResult<OVRPlugin_Result>_get_Status__;
      puVar5 = Method_OVRResult<OVRPlugin_Result>_From__;
      puVar4 = Method_OVRResult<OVRColocationSession_Result>_From__;
      puVar3 = Method_OVRResult<OVRAnchor_ShareResult>_get_Success__;
      puVar2 = Method_OVRResult<OVRAnchor_ShareResult>_get_Status__;
      puVar1 = Method_OVRResult<OVRAnchor_ShareResult>_FromFailure__;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_04447da0(*(long *)(unaff_x19 + 0x20),
                     *(undefined8 *)Method_OVRResult<OVRAnchor_SaveResult>_get_Status__);
        FUN_03ab360c(unaff_x19 + 0x30,*(undefined8 *)puVar6);
        FUN_03ab3e30(unaff_x19 + 0x38,*(undefined8 *)puVar7);
        FUN_03ab2de8(unaff_x19 + 0x40,*(undefined8 *)puVar5);
        FUN_03ab466c(unaff_x19 + 0x58,*(undefined8 *)puVar4);
        FUN_03ab1d98(unaff_x19 + 0x60,*(undefined8 *)puVar2);
        FUN_03ab76dc(unaff_x19 + 0x68,*(undefined8 *)puVar1);
        FUN_03ab5684(unaff_x19 + 0x48,*(undefined8 *)puVar3);
        FUN_03ab5684(unaff_x19 + 0x50,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


