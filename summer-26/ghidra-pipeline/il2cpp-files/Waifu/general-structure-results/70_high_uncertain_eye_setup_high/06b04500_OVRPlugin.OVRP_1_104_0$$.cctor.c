/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$.cctor
ENTRY_POINT: 06b04500
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


undefined8 OVRPlugin_OVRP_1_104_0___cctor(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  undefined8 *puVar2;
  code *unaff_x23;
  long unaff_x24;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (unaff_x23 == (code *)0x0) {
                    /* try { // try from 06b045a4 to 06c045ab has its CatchHandler @ 06b04624 */
    unaff_x23 = (code *)FUN_03398d30();
    *(code **)(unaff_x24 + 0xc60) = unaff_x23;
  }
  if (param_2 == 0) {
    uVar1 = (*unaff_x23)(param_1,0,param_3);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x18);
    __ptr = malloc(uVar3 * 8 + 8);
    __ptr[uVar3] = 0;
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffffffff;
      puVar2 = (undefined8 *)(param_2 + 0x20);
      puVar4 = __ptr;
      do {
        uVar1 = FUN_03399068(*puVar2);
        uVar3 = uVar3 - 1;
        *puVar4 = uVar1;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
      unaff_x23 = *(code **)(unaff_x24 + 0xc60);
    }
    uVar1 = (*unaff_x23)(param_1,__ptr,param_3);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar3 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar2 = __ptr;
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        uVar3 = uVar3 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (uVar3 != 0);
    }
    free(__ptr);
  }
  return uVar1;
}


