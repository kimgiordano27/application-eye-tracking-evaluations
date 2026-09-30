/*
FUNCTION_NAME: FUN_05eccf7c
ENTRY_POINT: 05eccf7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 125
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void FUN_05eccf7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_34;
  
  if (DAT_06a7dfb9 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_06a7dfb9 = '\x01';
  }
  if (param_3 == 0) {
                    /* try { // try from 05eccfdc to 05fcd00b has its CatchHandler @ 05ecd194 */
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar1 = (long *)FUN_04ef45ec(0);
    if (plVar1 == (long *)0x0) goto LAB_05ecd218;
    param_3 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
  }
  plVar1 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,4);
  if (DAT_06a7d310 == (code *)0x0) {
    DAT_06a7d310 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_left()");
  }
  local_34 = (*DAT_06a7d310)(param_1);
  lVar2 = FUN_04f2e83c(&local_34,param_2,param_3,0);
  if (plVar1 == (long *)0x0) {
LAB_05ecd218:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_05ecd20c:
    uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    if (DAT_06a7d320 == (code *)0x0) {
      DAT_06a7d320 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_right()");
    }
    local_34 = (*DAT_06a7d320)(param_1);
    lVar2 = FUN_04f2e83c(&local_34,param_2,param_3,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_05ecd20c;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      if (DAT_06a7d330 == (code *)0x0) {
        DAT_06a7d330 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_top()");
      }
      local_34 = (*DAT_06a7d330)(param_1);
      lVar2 = FUN_04f2e83c(&local_34,param_2,param_3,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_05ecd20c;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        if (DAT_06a7d340 == (code *)0x0) {
          DAT_06a7d340 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_bottom()");
        }
        local_34 = (*DAT_06a7d340)(param_1);
        lVar2 = FUN_04f2e83c(&local_34,param_2,param_3,0);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_05ecd20c;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar2;
          FUN_05f5cc4c(*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,plVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


