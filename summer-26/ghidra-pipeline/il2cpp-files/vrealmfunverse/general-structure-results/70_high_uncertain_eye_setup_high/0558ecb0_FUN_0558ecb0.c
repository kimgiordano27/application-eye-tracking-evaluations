/*
FUNCTION_NAME: FUN_0558ecb0
ENTRY_POINT: 0558ecb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0558ecb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 0558ecb8 to 0568ecbb has its CatchHandler @ 0558f330 */
                    /* try { // try from 0558ecc4 to 0568eccf has its CatchHandler @ 0558f340 */
  if ((DAT_066d1704 & 1) == 0) {
    FUN_02b3c81c(
                OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                );
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_066d1704 = 1;
  }
                    /* try { // try from 0558ece8 to 0568ecfb has its CatchHandler @ 0558f368 */
  puVar2 = 
  OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo;
  lVar3 = FUN_0558eda0(param_1);
  puVar1 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  if (lVar3 == 0) {
    FUN_02b3c908(*(undefined8 *)puVar2,0);
    return;
  }
                    /* try { // try from 0558ed08 to 0568ed2f has its CatchHandler @ 0558f364 */
  plVar4 = (long *)FUN_0558eda0(param_1);
  uVar6 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
                    /* try { // try from 0558ed38 to 0568ed3f has its CatchHandler @ 0558f3c8 */
  uVar6 = FUN_04d8a7b0(uVar6,0);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 0558ed4c to 0568ed53 has its CatchHandler @ 0558f388 */
    lVar3 = (**(code **)(*plVar4 + 0x428))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x430));
    if (lVar3 != 0) {
                    /* try { // try from 0558ed5c to 0568ed6b has its CatchHandler @ 0558f380 */
      uVar6 = *(undefined8 *)puVar2;
      lVar5 = thunk_FUN_02b79548(lVar3,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar3,uVar6);
      }
    }
                    /* try { // try from 0558ed78 to 0568ed7b has its CatchHandler @ 0558f37c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0558ed90 to 0568ed9b has its CatchHandler @ 0558f3f4 */
  FUN_02b3cac4();
}


