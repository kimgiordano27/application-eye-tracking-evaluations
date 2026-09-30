/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$.cctor
ENTRY_POINT: 06b045c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_105_0___cctor(undefined8 param_1,undefined8 param_2)

{
  undefined8 *__ptr;
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long unaff_x24;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000028 = 0x18;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)FUN_03398d30();
  *(code **)(unaff_x24 + 0xc60) = pcVar1;
  if (unaff_x20 == 0) {
    uVar2 = (*pcVar1)();
                    /* try { // try from 06b04600 to 06c04603 has its CatchHandler @ 06b04618 */
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
    __ptr = malloc(uVar4 * 8 + 8);
    __ptr[uVar4] = 0;
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(unaff_x20 + 0x20);
      puVar5 = __ptr;
      do {
        uVar2 = FUN_03399068(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar2;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
      pcVar1 = *(code **)(unaff_x24 + 0xc60);
    }
    uVar2 = (*pcVar1)();
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar3 = __ptr;
      do {
        if ((void *)*puVar3 != (void *)0x0) {
          free((void *)*puVar3);
        }
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    free(__ptr);
  }
                    /* try { // try from 06b04604 to 06c04607 has its CatchHandler @ 06b04614 */
                    /* try { // try from 06b04608 to 06c0460b has its CatchHandler @ 06b04610 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b04510 with catch @ 06b0460c
                       try { // try from 06b0460c to 06c04637 has its CatchHandler @ 06b043b8 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b04608 with catch @ 06b04610
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b04604 with catch @ 06b04614
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b04600 with catch @ 06b04618
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b044d8 with catch @ 06b0461c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b044f4 with catch @ 06b04620
                        */
  return uVar2;
}


