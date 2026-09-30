/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 074584f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(undefined4 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  
  if (unaff_x20 != 0) {
    *(undefined4 *)(unaff_x20 + 0xb0) = param_1;
    if (*(long *)(unaff_x21 + 0x20) != 0) {
                    /* try { // try from 0745850c to 0755850f has its CatchHandler @ 0745870c */
                    /* try { // try from 07458510 to 0755851f has its CatchHandler @ 07458768 */
      *(bool *)(*(long *)(unaff_x21 + 0x20) + 0xa8) = DAT_019143b8 < *(float *)(unaff_x21 + 0x50);
      lVar1 = *(long *)(unaff_x21 + 0x48);
      if (lVar1 != 0) {
        fVar2 = (float)(**(code **)(lVar1 + 0x18))
                                 (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        *(float *)(unaff_x19 + 0x34) = fVar2 - *(float *)(unaff_x19 + 0x30);
                    /* try { // try from 07458544 to 07558547 has its CatchHandler @ 07458734 */
        if (*(long *)(unaff_x21 + 0x20) != 0) {
          FUN_07457eb4();
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),0);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07458590 to 07558597 has its CatchHandler @ 07458718 */
  FUN_03d2d548();
}


