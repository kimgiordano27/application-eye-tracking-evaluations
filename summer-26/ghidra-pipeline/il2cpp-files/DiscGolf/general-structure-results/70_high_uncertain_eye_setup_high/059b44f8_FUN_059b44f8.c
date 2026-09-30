/*
FUNCTION_NAME: FUN_059b44f8
ENTRY_POINT: 059b44f8
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


ushort FUN_059b44f8(long param_1)

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
  
  if ((DAT_06dc1510 & 1) == 0) {
                    /* try { // try from 059b4518 to 05ab451b has its CatchHandler @ 059b453c */
    FUN_02d965b8(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcc60);
                    /* try { // try from 059b452c to 05ab452f has its CatchHandler @ 059b4548 */
                    /* try { // try from 059b4530 to 05ab4533 has its CatchHandler @ 059b4540 */
    FUN_02d965b8(PTR_DAT_06a0e698);
                    /* try { // try from 059b4538 to 05ab453b has its CatchHandler @ 059b4544 */
                    /* catch() { ... } // from try @ 059b4518 with catch @ 059b453c
                       try { // try from 059b453c to 05ab4563 has its CatchHandler @ 059b4338 */
                    /* catch() { ... } // from try @ 059b4530 with catch @ 059b4540 */
    FUN_02d965b8(OVRPlugin_OVRP_1_19_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b4538 with catch @ 059b4544 */
                    /* catch() { ... } // from try @ 059b452c with catch @ 059b4548 */
                    /* catch() { ... } // from try @ 059b4488 with catch @ 059b454c */
    FUN_02d965b8(OVRPlugin_OVRP_1_76_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b4424 with catch @ 059b4550 */
    FUN_02d965b8(OVRPlugin_OVRP_1_17_0_TypeInfo);
    DAT_06dc1510 = 1;
  }
                    /* try { // try from 059b4564 to 05ab4567 has its CatchHandler @ 059b484c */
                    /* try { // try from 059b4568 to 05ab4657 has its CatchHandler @ 059b4338 */
  if (*(char *)(param_1 + 0x1e) == '\0') {
    lVar3 = FUN_059c0660(param_1);
    puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
    lVar5 = *(long *)OVRPlugin_OVRP_1_17_0_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[3];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
      FUN_04462620(lVar7,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar4 = lVar7;
      LeanTween__value(plVar4,lVar7);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = FUN_03c83e78(lVar3,lVar7,*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
    local_24[0] = 0;
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_0432a748(local_24,1,*(undefined8 *)PTR_DAT_069fcc60);
      uVar2 = local_24[0];
    }
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x1e);
  }
                    /* try { // try from 059b4658 to 05ab467f has its CatchHandler @ 059b4874 */
  return uVar2;
}


