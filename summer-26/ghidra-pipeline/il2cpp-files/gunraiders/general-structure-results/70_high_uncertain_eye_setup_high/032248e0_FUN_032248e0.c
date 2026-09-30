/*
FUNCTION_NAME: FUN_032248e0
ENTRY_POINT: 032248e0
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


long FUN_032248e0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_04532866 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(PTR_DAT_04231e50);
    FUN_01c5d288(System_TimeZoneInfo_TransitionTime_TypeInfo);
    DAT_04532866 = 1;
  }
                    /* try { // try from 03224930 to 03324933 has its CatchHandler @ 03224c94 */
  plVar2 = (long *)FUN_033091c4(param_1,0);
  puVar1 = PTR_DAT_04230aa8;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  uVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  lVar5 = FUN_03152fb8(uVar3,*(undefined8 *)puVar1,uVar4,0);
                    /* try { // try from 03224980 to 0332498b has its CatchHandler @ 03224d60 */
  if ((param_1[0x12] != 0) && (*(int *)(param_1[0x12] + 0x10) != 0)) {
    uVar3 = FUN_03317620(0);
                    /* try { // try from 032249b4 to 033249b7 has its CatchHandler @ 03224d58 */
    uVar4 = FUN_03131f18(*(undefined8 *)System_TimeZoneInfo_TransitionTime_TypeInfo,param_1[0x12],0)
    ;
    lVar5 = FUN_03152fb8(lVar5,uVar3,uVar4,0);
  }
  puVar1 = OVRPlugin_OVRP_1_62_0_TypeInfo;
  plVar2 = (long *)param_1[5];
                    /* try { // try from 032249d4 to 033249e7 has its CatchHandler @ 03224d5c */
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
                    /* try { // try from 032249ec to 033249f7 has its CatchHandler @ 03224d68 */
                    /* try { // try from 032249fc to 033249ff has its CatchHandler @ 03224d64 */
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


