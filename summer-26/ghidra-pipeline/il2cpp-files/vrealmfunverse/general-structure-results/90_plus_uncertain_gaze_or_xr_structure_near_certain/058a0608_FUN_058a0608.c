/*
FUNCTION_NAME: FUN_058a0608
ENTRY_POINT: 058a0608
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_058a0608(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
                    /* catch() { ... } // from try @ 058a0218 with catch @ 058a0608 */
                    /* catch() { ... } // from try @ 058a011c with catch @ 058a060c */
                    /* catch() { ... } // from try @ 058a05a0 with catch @ 058a0610 */
                    /* catch() { ... } // from try @ 058a0494 with catch @ 058a0614
                       catch() { ... } // from try @ 058a05bc with catch @ 058a0614 */
                    /* catch() { ... } // from try @ 058a059c with catch @ 058a0618 */
                    /* catch() { ... } // from try @ 058a02ac with catch @ 058a061c
                       catch() { ... } // from try @ 058a05ac with catch @ 058a061c */
                    /* catch() { ... } // from try @ 058a0094 with catch @ 058a0620 */
                    /* catch() { ... } // from try @ 058a0078 with catch @ 058a0624 */
                    /* catch() { ... } // from try @ 058a0598 with catch @ 058a0628 */
  if ((DAT_066d318a & 1) == 0) {
                    /* catch() { ... } // from try @ 058a0594 with catch @ 058a062c */
                    /* catch() { ... } // from try @ 058a0100 with catch @ 058a0630
                       catch() { ... } // from try @ 058a05a8 with catch @ 058a0630 */
    FUN_02b3c81c(Method_OVRResult<OVRAnchor_SaveResult>_get_Status__);
    FUN_02b3c81c(Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    FUN_02b3c81c(Method_OVRResult<OVRAnchor_ShareResult>_FromFailure__);
    FUN_02b3c81c(Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
    FUN_02b3c81c(Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
    FUN_02b3c81c(Method_OVRResult<OVRColocationSession_Result>_From__);
    FUN_02b3c81c(Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    FUN_02b3c81c(Method_OVRResult<OVRPlugin_Result>_From__);
    FUN_02b3c81c(Method_OVRResult<OVRPlugin_Result>_get_Status__);
    FUN_02b3c81c(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    DAT_066d318a = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0463c1c4(*(long *)(param_1 + 0x28),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_058af6d8(*(long *)(param_1 + 0x10),0);
      if (*(char *)(param_1 + 0x70) == '\0') {
        return;
      }
      FUN_03ab25ac(param_1 + 0x18,
                   *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_get_Status__);
      puVar7 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
      puVar6 = Method_OVRResult<OVRPlugin_Result>_get_Status__;
      puVar5 = Method_OVRResult<OVRPlugin_Result>_From__;
      puVar4 = Method_OVRResult<OVRColocationSession_Result>_From__;
      puVar3 = Method_OVRResult<OVRAnchor_ShareResult>_get_Success__;
      puVar2 = Method_OVRResult<OVRAnchor_ShareResult>_get_Status__;
      puVar1 = Method_OVRResult<OVRAnchor_ShareResult>_FromFailure__;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_04447da0(*(long *)(param_1 + 0x20),
                     *(undefined8 *)Method_OVRResult<OVRAnchor_SaveResult>_get_Status__);
        FUN_03ab360c(param_1 + 0x30,*(undefined8 *)puVar6);
        FUN_03ab3e30(param_1 + 0x38,*(undefined8 *)puVar7);
        FUN_03ab2de8(param_1 + 0x40,*(undefined8 *)puVar5);
        FUN_03ab466c(param_1 + 0x58,*(undefined8 *)puVar4);
        FUN_03ab1d98(param_1 + 0x60,*(undefined8 *)puVar2);
        FUN_03ab76dc(param_1 + 0x68,*(undefined8 *)puVar1);
        FUN_03ab5684(param_1 + 0x48,*(undefined8 *)puVar3);
        FUN_03ab5684(param_1 + 0x50,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


