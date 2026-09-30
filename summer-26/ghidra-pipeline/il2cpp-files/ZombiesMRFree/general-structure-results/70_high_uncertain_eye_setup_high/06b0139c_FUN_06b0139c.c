/*
FUNCTION_NAME: FUN_06b0139c
ENTRY_POINT: 06b0139c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06b0139c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
                    /* try { // try from 06b013ac to 06c013d3 has its CatchHandler @ 06b0170c */
  if ((DAT_073ab3a4 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(PTR_DAT_06f9baa8);
    FUN_02fe925c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    DAT_073ab3a4 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  plVar4 = (long *)FUN_06a33718(param_1,0);
  puVar1 = PTR_DAT_06f6d618;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 06b01408 to 06c0142f has its CatchHandler @ 06b01708 */
    lVar5 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
    }
                    /* try { // try from 06b01434 to 06c0143b has its CatchHandler @ 06b01700 */
    uVar6 = FUN_068f9b78(lVar5,0,0);
    puVar2 = PTR_DAT_06f9baa8;
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 06b01448 to 06c0144f has its CatchHandler @ 06b016f0 */
      lVar5 = *(long *)PTR_DAT_06f9baa8;
                    /* try { // try from 06b01454 to 06c0145b has its CatchHandler @ 06b01704 */
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
                    /* try { // try from 06b01460 to 06c0146b has its CatchHandler @ 06b016f4 */
        lVar5 = *(long *)puVar2;
      }
      lVar5 = FUN_068cee40(**(undefined8 **)(lVar5 + 0xb8),0);
                    /* try { // try from 06b01474 to 06c0147f has its CatchHandler @ 06b016e8 */
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* try { // try from 06b01488 to 06c01493 has its CatchHandler @ 06b016ec */
        thunk_FUN_02fdcff0(lVar7);
      }
      uVar3 = FUN_068f8810(lVar5,0,0);
                    /* try { // try from 06b0149c to 06c014ab has its CatchHandler @ 06b016dc */
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                    /* try { // try from 06b014b4 to 06c014c3 has its CatchHandler @ 06b016d8 */
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
      }
                    /* try { // try from 06b014c4 to 06c016bf has its CatchHandler @ 06b01270 */
      FUN_068be444(uVar3 & 1,*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo,0);
      uVar6 = FUN_068f8810(lVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) goto LAB_06b01530;
        uVar3 = FUN_068fd700(lVar5,0);
        FUN_068fd73c(lVar5,uVar3 | 4,0);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_06a40124(*(long *)(param_1 + 0x28),lVar5,0);
      return;
    }
  }
LAB_06b01530:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


