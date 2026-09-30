/*
FUNCTION_NAME: FUN_0358026c
ENTRY_POINT: 0358026c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_0358026c(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  puVar3 = PTR_DAT_03cbdf88;
                    /* try { // try from 03580278 to 03680283 has its CatchHandler @ 0357fe84 */
                    /* try { // try from 03580284 to 0368028b has its CatchHandler @ 0358028c */
                    /* catch() { ... } // from try @ 0358020c with catch @ 0358028c
                       catch() { ... } // from try @ 03580254 with catch @ 0358028c
                       catch() { ... } // from try @ 03580284 with catch @ 0358028c */
  if ((DAT_0412e059 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e059 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(param_2,0,0);
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  uVar6 = 0;
  if ((uVar5 & 1) == 0) {
    cVar1 = *(char *)(param_1 + 0x300);
    cVar2 = *(char *)(param_1 + 0x26a);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(0);
    }
    uVar6 = FUN_035993e8(param_2,cVar1 != '\0',cVar2 != '\0',0);
    *(undefined4 *)(param_1 + 0x618) = uVar6;
    bVar4 = FUN_0359924c(*(undefined8 *)(param_1 + 0x110),0);
    *(byte *)(param_1 + 0x307) = bVar4 & 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar4 = FUN_03699d3c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30),0);
    uVar6 = *(undefined4 *)(param_1 + 0x618);
    *(byte *)(param_1 + 0x108) = bVar4 & 1;
  }
  return uVar6;
}


