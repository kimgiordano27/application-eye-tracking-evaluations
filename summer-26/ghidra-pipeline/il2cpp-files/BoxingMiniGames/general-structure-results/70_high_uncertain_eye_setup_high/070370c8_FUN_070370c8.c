/*
FUNCTION_NAME: FUN_070370c8
ENTRY_POINT: 070370c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_070370c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_78_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_6_0_TypeInfo;
  if ((DAT_07eebdfd & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_03642964(Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo);
    FUN_03642964(PTR_DAT_07a1b558);
                    /* try { // try from 0703714c to 071371bb has its CatchHandler @ 0703714c
                       catch() { ... } // from try @ 0703714c with catch @ 0703714c
                       catch() { ... } // from try @ 070371c8 with catch @ 0703714c
                       catch() { ... } // from try @ 070371ec with catch @ 0703714c
                       catch() { ... } // from try @ 0703720c with catch @ 0703714c
                       catch() { ... } // from try @ 07037230 with catch @ 0703714c */
    DAT_07eebdfd = 1;
  }
  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_055fa8e8(uVar5,*(undefined8 *)puVar4);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar5;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar5);
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar6,0);
  puVar2 = Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo;
  puVar1 = PTR_DAT_07a1b558;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_07a1b558;
    thunk_FUN_036b7ad0();
                    /* try { // try from 070371bc to 071371c7 has its CatchHandler @ 070371ec */
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                    /* try { // try from 070371c8 to 071371e7 has its CatchHandler @ 0703714c */
    FUN_06ea9e10(uVar5,*(undefined8 *)puVar1,0);
    *(undefined8 *)(lVar6 + 0x18) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x18),uVar5);
                    /* try { // try from 070371e8 to 071371eb has its CatchHandler @ 070371ec */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070371bc with catch @ 070371ec
                       catch(type#1 @ 07542bc8) { ... } // from try @ 070371e8 with catch @ 070371ec
                       try { // try from 070371ec to 07137207 has its CatchHandler @ 0703714c */
    plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar7 = lVar6;
    thunk_FUN_036b7ad0(plVar7,lVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


