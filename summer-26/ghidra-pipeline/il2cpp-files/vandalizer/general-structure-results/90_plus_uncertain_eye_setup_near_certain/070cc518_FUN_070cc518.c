/*
FUNCTION_NAME: FUN_070cc518
ENTRY_POINT: 070cc518
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_070cc518(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_075da9d8;
                    /* try { // try from 070cc520 to 071cc523 has its CatchHandler @ 070cc544 */
                    /* try { // try from 070cc524 to 071cc54b has its CatchHandler @ 070cb4a0 */
  if ((DAT_07a5a977 & 1) == 0) {
                    /* catch() { ... } // from try @ 070cc520 with catch @ 070cc544 */
    FUN_031f20f4(OVRPlugin_OVRP_1_128_0_TypeInfo);
                    /* try { // try from 070cc54c to 071cc553 has its CatchHandler @ 070cc568 */
    FUN_031f20f4(PTR_DAT_075da9c0);
                    /* try { // try from 070cc554 to 071cc55f has its CatchHandler @ 070cb4a0 */
    FUN_031f20f4(OVRPlugin_OVRP_1_129_0_TypeInfo);
                    /* try { // try from 070cc560 to 071cc567 has its CatchHandler @ 070cc568 */
                    /* catch() { ... } // from try @ 070cc54c with catch @ 070cc568
                       catch() { ... } // from try @ 070cc560 with catch @ 070cc568 */
    FUN_031f20f4(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_031f20f4(PTR_DAT_075da9d8);
    FUN_031f20f4(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_124_0_TypeInfo);
    DAT_07a5a977 = 1;
  }
  lVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_0700bc48(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo;
    thunk_FUN_0329bf60();
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(long *)(param_1 + 0x88) = lVar3;
    thunk_FUN_0329bf60((long *)(param_1 + 0x88),lVar3);
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_0700bc48(lVar3,0);
    puVar2 = OVRPlugin_OVRP_1_12_0_TypeInfo;
    puVar1 = OVRPlugin_OVRP_1_129_0_TypeInfo;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo;
      thunk_FUN_0329bf60();
      *(undefined4 *)(lVar3 + 0x40) = 100;
      *(long *)(param_1 + 0x90) = lVar3;
      thunk_FUN_0329bf60((long *)(param_1 + 0x90),lVar3);
      lVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_0525baec(lVar3,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_124_0_TypeInfo;
        thunk_FUN_0329bf60();
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(long *)(param_1 + 0x98) = lVar3;
        thunk_FUN_0329bf60((long *)(param_1 + 0x98),lVar3);
        FUN_06fd0ab0(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


