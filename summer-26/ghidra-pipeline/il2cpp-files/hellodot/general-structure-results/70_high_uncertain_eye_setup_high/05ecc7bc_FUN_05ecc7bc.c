/*
FUNCTION_NAME: FUN_05ecc7bc
ENTRY_POINT: 05ecc7bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ecc7bc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (DAT_06a7dfb2 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_SpaceComponentType___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df5d8);
                    /* try { // try from 05ecc814 to 05fcc843 has its CatchHandler @ 05ecc894 */
    DAT_06a7dfb2 = '\x01';
  }
  uVar1 = FUN_04db9688(param_2,0);
  uVar5 = *(undefined8 *)PTR_DAT_065df5d8;
  if ((uVar1 & 1) == 0) {
    uVar5 = param_2;
  }
  if (param_3 == 0) {
                    /* try { // try from 05ecc844 to 05fcc883 has its CatchHandler @ 05ecc608 */
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar2 = (long *)FUN_04ef45ec(0);
    if (plVar2 == (long *)0x0) goto LAB_05ecc934;
    param_3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
  }
  plVar2 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  lVar3 = FUN_03c8b08c(param_1,uVar5,param_3,0);
  if (plVar2 == (long *)0x0) {
LAB_05ecc934:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_05ecc938:
    uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    lVar3 = FUN_04f43658(param_1 + 0xc,uVar5,param_3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_05ecc938;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      FUN_05f5cc4c(*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo,plVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


