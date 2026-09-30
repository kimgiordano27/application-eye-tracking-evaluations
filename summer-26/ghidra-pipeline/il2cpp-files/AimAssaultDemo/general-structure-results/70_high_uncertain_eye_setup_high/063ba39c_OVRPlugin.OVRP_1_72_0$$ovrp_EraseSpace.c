/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EraseSpace
ENTRY_POINT: 063ba39c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,long param_5)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float unaff_s10;
  float fVar4;
  
  *(undefined4 *)(unaff_x19 + 0x98) = param_1;
  *(undefined4 *)(unaff_x19 + 0x9c) = param_2;
  *(float *)(unaff_x19 + 0xa0) = param_3;
  *(undefined4 *)(unaff_x19 + 0xa4) = param_4;
  if (param_5 != 0) {
                    /* catch() { ... } // from try @ 063ba398 with catch @ 063ba3a8 */
    fVar2 = (float)FUN_075ba3c0(param_5,0);
                    /* try { // try from 063ba3b4 to 064ba3bf has its CatchHandler @ 063ba3d4 */
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      fVar4 = *(float *)(unaff_x19 + 0x24);
                    /* try { // try from 063ba3c0 to 064ba3cb has its CatchHandler @ 063ba190 */
      FUN_075ba3c0(*(long *)(unaff_x19 + 0x90),0);
                    /* try { // try from 063ba3cc to 064ba3d3 has its CatchHandler @ 063ba3d4 */
      fVar4 = fVar4 * unaff_s10;
      param_3 = param_3 * unaff_s10;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063ba3b4 with catch @ 063ba3d4
                       catch(type#2 @ 00000000) { ... } // from try @ 063ba3cc with catch @ 063ba3d4
                        */
      uVar3 = FUN_07599c38(fVar2 * unaff_s10,0);
      lVar1 = *(long *)(unaff_x19 + 0x90);
      *(undefined4 *)(unaff_x19 + 0xa8) = uVar3;
      *(float *)(unaff_x19 + 0xac) = fVar4;
      *(float *)(unaff_x19 + 0xb0) = param_3;
      *(undefined4 *)(unaff_x19 + 0xb4) = param_4;
      FUN_07599a90(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0x9c),
                   *(undefined4 *)(unaff_x19 + 0xa0),*(undefined4 *)(unaff_x19 + 0xa4),0);
      if (lVar1 != 0) {
        FUN_075ba420(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


