/*
FUNCTION_NAME: FUN_05508b70
ENTRY_POINT: 05508b70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05508b70(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((DAT_06bbf575 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_106_0_TypeInfo);
                    /* try { // try from 05508b9c to 05608ba3 has its CatchHandler @ 05509840 */
    DAT_06bbf575 = 1;
  }
  if (param_2 != (long *)0x0) {
                    /* try { // try from 05508bac to 05608bcf has its CatchHandler @ 055098f0 */
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_106_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_106_0_TypeInfo)) {
      uVar2 = FUN_054dfdb0(param_2,0);
                    /* try { // try from 05508be8 to 05608c0b has its CatchHandler @ 055098c0 */
      FUN_05508c0c(param_1,uVar2,param_2[2],param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


