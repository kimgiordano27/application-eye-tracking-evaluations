/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 0696c560
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose
               (undefined4 param_1,float param_2,float param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  float fVar2;
  
  fVar2 = (float)FUN_07d22ae4(param_4,0);
  if (DAT_08974e24 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e24 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* catch() { ... } // from try @ 0696c530 with catch @ 0696c5cc */
                    /* try { // try from 0696c5d0 to 06a6c5d7 has its CatchHandler @ 0696c5e0 */
                    /* try { // try from 0696c5d8 to 06a6c5e3 has its CatchHandler @ 0696b384 */
                    /* catch() { ... } // from try @ 0696c5d0 with catch @ 0696c5e0 */
                    /* try { // try from 0696c5e4 to 06a6c7b7 has its CatchHandler @ 0696c5e4
                       catch() { ... } // from try @ 0696c5e4 with catch @ 0696c5e4
                       catch() { ... } // from try @ 0696c8cc with catch @ 0696c5e4
                       catch() { ... } // from try @ 0696ca2c with catch @ 0696c5e4
                       catch() { ... } // from try @ 0696cb64 with catch @ 0696c5e4 */
  if ((*(float *)(unaff_x19 + 0x30) <
       SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) * 100.0) &&
     (uVar1 = FUN_0696c61c(), (uVar1 & 1) != 0)) {
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x50));
    *(undefined4 *)(unaff_x19 + 0x58) = param_1;
  }
  return;
}


