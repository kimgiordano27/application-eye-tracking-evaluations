/*
FUNCTION_NAME: OVRPlugin.OVRP_1_50_0$$.cctor
ENTRY_POINT: 063b8174
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


void OVRPlugin_OVRP_1_50_0___cctor
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float unaff_s10;
  
  uVar2 = FUN_07599c38();
  *(undefined4 *)(unaff_x19 + 0x98) = uVar2;
  *(float *)(unaff_x19 + 0x9c) = param_2;
  *(undefined4 *)(unaff_x19 + 0xa0) = param_3;
  *(undefined4 *)(unaff_x19 + 0xa4) = param_4;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    fVar3 = (float)FUN_075ba4b0(*(long *)(unaff_x19 + 0x90),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_075ba4b0(*(long *)(unaff_x19 + 0x90),0);
      param_2 = param_2 * unaff_s10;
      fVar4 = *(float *)(unaff_x19 + 0x24) * unaff_s10;
                    /* try { // try from 063b81b8 to 064b82ab has its CatchHandler @ 063b81b8
                       catch() { ... } // from try @ 063b81b8 with catch @ 063b81b8
                       catch() { ... } // from try @ 063b82b8 with catch @ 063b81b8
                       catch() { ... } // from try @ 063b831c with catch @ 063b81b8
                       catch() { ... } // from try @ 063b8368 with catch @ 063b81b8
                       catch() { ... } // from try @ 063b8480 with catch @ 063b81b8 */
      uVar2 = FUN_07599c38(fVar3 * unaff_s10,0);
      lVar1 = *(long *)(unaff_x19 + 0x90);
      *(undefined4 *)(unaff_x19 + 0xa8) = uVar2;
      *(float *)(unaff_x19 + 0xac) = param_2;
      *(float *)(unaff_x19 + 0xb0) = fVar4;
      *(undefined4 *)(unaff_x19 + 0xb4) = param_4;
      FUN_07599a90(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0x9c),
                   *(undefined4 *)(unaff_x19 + 0xa0),*(undefined4 *)(unaff_x19 + 0xa4),0);
      if (lVar1 != 0) {
        FUN_075ba5a4(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


