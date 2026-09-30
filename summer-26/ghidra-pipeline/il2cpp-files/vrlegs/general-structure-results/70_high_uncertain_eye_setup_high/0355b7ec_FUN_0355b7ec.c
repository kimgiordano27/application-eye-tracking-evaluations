/*
FUNCTION_NAME: FUN_0355b7ec
ENTRY_POINT: 0355b7ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355b7ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 0355b680 with catch @ 0355b7ec */
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412df4e & 1) == 0) {
                    /* try { // try from 0355b80c to 0365b80f has its CatchHandler @ 0355b82c */
                    /* try { // try from 0355b810 to 0365b833 has its CatchHandler @ 0355b444 */
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df4e = 1;
  }
  lVar3 = *(long *)(param_1 + 0x110);
                    /* catch() { ... } // from try @ 0355b80c with catch @ 0355b82c */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar3 != 0) {
    uVar2 = FUN_03699d3c(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 != 0) {
      FUN_0369a6dc(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf8),0);
      if (*(long *)(param_1 + 0x110) != 0) {
        FUN_0369a720(*(long *)(param_1 + 0x110),
                     *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x100),0);
        if (*(long *)(param_1 + 0x110) != 0) {
          FUN_0369a720(*(long *)(param_1 + 0x110),
                       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x108),0);
          *(undefined1 *)(param_1 + 0x307) = 1;
          FUN_0355b8e4(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


