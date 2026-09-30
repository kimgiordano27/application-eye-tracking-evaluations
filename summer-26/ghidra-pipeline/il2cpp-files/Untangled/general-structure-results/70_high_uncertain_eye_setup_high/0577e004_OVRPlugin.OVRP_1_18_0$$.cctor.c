/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$.cctor
ENTRY_POINT: 0577e004
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_18_0___cctor(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long unaff_x23;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_02ef1ac4();
    *(code **)(unaff_x23 + 0x2b8) = param_1;
  }
  if (unaff_x20 == 0) {
    uVar2 = (*param_1)(param_2,0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
                    /* try { // try from 0577e018 to 0587e02f has its CatchHandler @ 0577e070 */
    puVar1 = malloc(uVar4 * 8 + 8);
    puVar1[uVar4] = 0;
    if (0 < (int)uVar4) {
                    /* try { // try from 0577e030 to 0587e05f has its CatchHandler @ 0577dfd8 */
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(unaff_x20 + 0x20);
      puVar5 = puVar1;
      do {
        uVar2 = thunk_FUN_02ef1de4(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar2;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
                    /* try { // try from 0577e060 to 0587e06f has its CatchHandler @ 0577e070 */
    uVar2 = (**(code **)(unaff_x23 + 0x2b8))(param_2,puVar1);
                    /* catch() { ... } // from try @ 0577e018 with catch @ 0577e070
                       catch() { ... } // from try @ 0577e060 with catch @ 0577e070 */
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
                    /* try { // try from 0577e074 to 0587e077 has its CatchHandler @ 0577e080 */
      uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
                    /* try { // try from 0577e078 to 0587e083 has its CatchHandler @ 0577dfd8 */
      puVar3 = puVar1;
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0577e074 with catch @ 0577e080
                        */
        thunk_FUN_02ef1dd8(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    thunk_FUN_02ef1dd8(puVar1);
  }
  return uVar2;
}


