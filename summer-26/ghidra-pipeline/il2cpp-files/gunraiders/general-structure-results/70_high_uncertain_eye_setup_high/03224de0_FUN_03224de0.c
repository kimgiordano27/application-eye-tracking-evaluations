/*
FUNCTION_NAME: FUN_03224de0
ENTRY_POINT: 03224de0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_03224de0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 03224dec to 03324dfb has its CatchHandler @ 03224dfc */
  if ((DAT_0453286c & 1) == 0) {
                    /* catch() { ... } // from try @ 03224d84 with catch @ 03224dfc
                       catch() { ... } // from try @ 03224dec with catch @ 03224dfc */
                    /* try { // try from 03224e00 to 03324e03 has its CatchHandler @ 03224e0c */
    FUN_01c5d288(OVRPlugin_OVRP_1_62_0_TypeInfo);
                    /* try { // try from 03224e04 to 03324e0f has its CatchHandler @ 03224840 */
                    /* catch() { ... } // from try @ 03224d10 with catch @ 03224e0c
                       catch() { ... } // from try @ 03224e00 with catch @ 03224e0c */
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(PTR_DAT_04231e50);
    FUN_01c5d288(System_TimeZoneInfo_TransitionTime_TypeInfo);
    DAT_0453286c = 1;
  }
  plVar2 = (long *)FUN_033091c4(param_1,0);
  puVar1 = PTR_DAT_04230aa8;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  uVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                    /* try { // try from 03224e78 to 03324ff7 has its CatchHandler @ 03224e78
                       catch() { ... } // from try @ 03224e78 with catch @ 03224e78
                       catch() { ... } // from try @ 0322511c with catch @ 03224e78
                       catch() { ... } // from try @ 03225268 with catch @ 03224e78
                       catch() { ... } // from try @ 032253bc with catch @ 03224e78
                       catch() { ... } // from try @ 032253f8 with catch @ 03224e78
                       catch() { ... } // from try @ 03225470 with catch @ 03224e78
                       catch() { ... } // from try @ 03225498 with catch @ 03224e78 */
  lVar5 = FUN_03152fb8(uVar3,*(undefined8 *)puVar1,uVar4,0);
  if ((param_1[0x12] != 0) && (*(int *)(param_1[0x12] + 0x10) != 0)) {
    uVar3 = FUN_03317620(0);
    uVar4 = FUN_03131f18(*(undefined8 *)System_TimeZoneInfo_TransitionTime_TypeInfo,param_1[0x12],0)
    ;
    lVar5 = FUN_03152fb8(lVar5,uVar3,uVar4,0);
  }
  puVar1 = OVRPlugin_OVRP_1_62_0_TypeInfo;
  plVar2 = (long *)param_1[5];
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    lVar5 = FUN_03152fb8(lVar5,*(undefined8 *)puVar1,uVar3,0);
  }
  lVar6 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar6 != 0) {
    uVar3 = FUN_03317620(0);
    uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    lVar5 = FUN_03152fb8(lVar5,uVar3,uVar4,0);
  }
  if (param_1[0x13] != 0) {
    lVar6 = *(long *)PTR_DAT_04231e50;
    if (lVar5 != 0) {
      lVar6 = lVar5;
    }
    uVar3 = FUN_03317620(0);
    uVar3 = FUN_03146988(lVar6,uVar3,0);
    uVar4 = FUN_03317620(0);
    uVar3 = FUN_03146988(uVar3,uVar4,0);
    lVar5 = FUN_03146988(uVar3,param_1[0x13],0);
    return lVar5;
  }
  return lVar5;
}


