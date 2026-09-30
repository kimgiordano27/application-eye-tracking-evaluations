/*
FUNCTION_NAME: OVRPlugin.OVRP_1_52_0$$.cctor
ENTRY_POINT: 074aba24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_52_0___cctor(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long unaff_x23;
  ulong uVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(unaff_x23 + 0x2f0) = param_2;
                    /* try { // try from 074aba28 to 075aba3b has its CatchHandler @ 074abb10 */
  if (unaff_x20 == 0) {
    uVar2 = (*param_1)();
                    /* catch() { ... } // from try @ 074ab7c4 with catch @ 074aba3c
                       try { // try from 074aba3c to 075aba53 has its CatchHandler @ 074ab6bc */
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = malloc(uVar4 * 8 + 8);
    puVar1[uVar4] = 0;
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(unaff_x20 + 0x20);
      puVar5 = puVar1;
      do {
        uVar2 = thunk_FUN_03d2f51c(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar2;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    uVar2 = (**(code **)(unaff_x23 + 0x2f0))();
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar3 = puVar1;
      do {
        thunk_FUN_03d2f510(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    thunk_FUN_03d2f510(puVar1);
  }
                    /* try { // try from 074aba54 to 075aba57 has its CatchHandler @ 074aba7c */
                    /* try { // try from 074aba58 to 075aba8b has its CatchHandler @ 074ab6bc */
  return uVar2;
}


