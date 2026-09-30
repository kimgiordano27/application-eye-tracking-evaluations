/*
FUNCTION_NAME: FUN_05ecc490
ENTRY_POINT: 05ecc490
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


void FUN_05ecc490(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_06a7dfb0 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_FaceTrackingDataSource___TypeInfo);
                    /* try { // try from 05ecc4e0 to 05fcc50f has its CatchHandler @ 05ecc59c */
    DAT_06a7dfb0 = '\x01';
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar1 = (long *)FUN_04ef45ec(0);
    if (plVar1 == (long *)0x0) goto LAB_05ecc5e4;
    param_3 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
  }
  plVar1 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  lVar2 = FUN_05ecc5f4(param_1,param_2,param_3,0);
  if (plVar1 == (long *)0x0) {
LAB_05ecc5e4:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_05ecc5e8:
    uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    lVar2 = FUN_05ecc5f4(param_1 + 0xc,param_2,param_3,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_05ecc5e8;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      FUN_05f5cc4c(*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo,plVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


