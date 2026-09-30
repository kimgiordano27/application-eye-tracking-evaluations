/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 06035594
PROGRAM: vandalizer-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6,float param_7,float param_8,long param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 0603557c with catch @ 060355a0 */
  param_8 = param_8 + (1.0 - param_6) * param_7;
  *(float *)(param_1 + 0x14) = param_8;
  *(float *)(param_1 + 0x18) = param_8;
                    /* try { // try from 060355a8 to 061355af has its CatchHandler @ 060355c4 */
  lVar1 = *(long *)(param_9 + 0x28);
  if (lVar1 != 0) {
                    /* try { // try from 060355b0 to 061355bb has its CatchHandler @ 060351d8 */
                    /* try { // try from 060355bc to 061355c3 has its CatchHandler @ 060355c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060355a8 with catch @ 060355c4
                       catch(type#2 @ 00000000) { ... } // from try @ 060355bc with catch @ 060355c4
                        */
    fVar2 = 1.0 / ((1.0 / ((*(float *)(param_9 + 0x14) + ABS(param_8) * *(float *)(param_9 + 0x18))
                          * param_3)) / param_5 + 1.0);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar3 = *(float *)(lVar1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar1 + 0x10) = 0;
      *(float *)(lVar1 + 0x18) = param_2;
      fVar3 = param_2;
    }
    fVar2 = fVar2 * param_2 + (1.0 - fVar2) * fVar3;
    *(float *)(lVar1 + 0x14) = fVar2;
    *(float *)(lVar1 + 0x18) = fVar2;
    *(float *)(param_9 + 0x10) = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


