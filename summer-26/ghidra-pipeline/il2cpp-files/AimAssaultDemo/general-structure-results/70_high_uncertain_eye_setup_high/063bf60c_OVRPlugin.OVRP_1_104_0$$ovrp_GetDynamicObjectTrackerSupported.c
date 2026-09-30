/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 063bf60c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
                    /* try { // try from 063bf614 to 064bf617 has its CatchHandler @ 063bf624 */
  if ((DAT_0825c822 & 1) == 0) {
                    /* catch() { ... } // from try @ 063bf614 with catch @ 063bf624 */
    FUN_0373b518(PTR_DAT_07d889a0);
                    /* try { // try from 063bf630 to 064bf63b has its CatchHandler @ 063bf650 */
    DAT_0825c822 = 1;
  }
  puVar1 = PTR_DAT_07d889a0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* try { // try from 063bf63c to 064bf647 has its CatchHandler @ 063bf34c */
                    /* try { // try from 063bf648 to 064bf64f has its CatchHandler @ 063bf650 */
  iVar2 = FUN_0625b654(param_1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063bf630 with catch @ 063bf650
                       catch(type#2 @ 00000000) { ... } // from try @ 063bf648 with catch @ 063bf650
                        */
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_0625b6b4(param_1,iVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar1);
      }
      iVar3 = FUN_06163524(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_0625b654(param_1,0);
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_0616245c(iVar2,0);
  iVar2 = FUN_0625b654(param_1,0);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_0625b6b4(param_1,iVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar1);
      }
      FUN_06163ba4(uVar6,uVar8,0,0);
      lVar7 = FUN_0628e72c(uVar8,0);
      uVar8 = FUN_0625b6b4(param_1,iVar2,0);
      iVar4 = FUN_06163524(uVar8,0);
      uVar8 = FUN_0628e720(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_0625b654(param_1,0);
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


