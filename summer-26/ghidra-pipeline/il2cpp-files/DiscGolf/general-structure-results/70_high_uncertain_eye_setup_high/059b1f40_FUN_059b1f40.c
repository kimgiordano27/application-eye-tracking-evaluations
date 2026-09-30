/*
FUNCTION_NAME: FUN_059b1f40
ENTRY_POINT: 059b1f40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_9
*/


ushort FUN_059b1f40(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ushort local_24 [2];
  
  if ((DAT_06dc150d & 1) == 0) {
                    /* try { // try from 059b1f5c to 05ab1fbf has its CatchHandler @ 059b20a4 */
    FUN_02d965b8(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcc60);
    FUN_02d965b8(PTR_DAT_06a0e698);
    FUN_02d965b8(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_17_0_TypeInfo);
    DAT_06dc150d = 1;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
                    /* try { // try from 059b1fc0 to 05ab2063 has its CatchHandler @ 059b1bac */
    lVar3 = FUN_059c0660(param_1);
    puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
    lVar5 = *(long *)OVRPlugin_OVRP_1_17_0_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[2];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
      FUN_04462620(lVar7,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar7;
      LeanTween__value(plVar4,lVar7);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 059b1f5c with catch @ 059b20a4 */
      FUN_02d96860();
    }
                    /* try { // try from 059b2064 to 05ab206b has its CatchHandler @ 059b20f8 */
                    /* try { // try from 059b206c to 05ab206f has its CatchHandler @ 059b20e8 */
    lVar3 = FUN_03c83e78(lVar3,lVar7,*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
                    /* try { // try from 059b2070 to 05ab2073 has its CatchHandler @ 059b20e4 */
    local_24[0] = 0;
                    /* try { // try from 059b2074 to 05ab2077 has its CatchHandler @ 059b20a8 */
    uVar2 = 0;
    if (lVar3 != 0) {
                    /* try { // try from 059b2078 to 05ab207b has its CatchHandler @ 059b209c */
                    /* try { // try from 059b207c to 05ab207f has its CatchHandler @ 059b2098 */
                    /* try { // try from 059b2080 to 05ab2083 has its CatchHandler @ 059b20a8 */
                    /* try { // try from 059b2084 to 05ab20c3 has its CatchHandler @ 059b1bac */
      FUN_0432a748(local_24,1,*(undefined8 *)PTR_DAT_069fcc60);
      uVar2 = local_24[0];
    }
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x20);
  }
                    /* catch() { ... } // from try @ 059b207c with catch @ 059b2098 */
                    /* catch() { ... } // from try @ 059b2078 with catch @ 059b209c */
                    /* catch() { ... } // from try @ 059b1ef8 with catch @ 059b20a0 */
  return uVar2;
}


