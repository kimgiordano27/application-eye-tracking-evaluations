/*
FUNCTION_NAME: FUN_05eb9570
ENTRY_POINT: 05eb9570
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


void FUN_05eb9570(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  if ((DAT_06a7d2fb & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_06a7d2fb = 1;
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar2 = (long *)FUN_04ef45ec(0);
    if (plVar2 == (long *)0x0) goto LAB_05eb9804;
    param_3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
  }
  plVar2 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,4);
  if (DAT_06a7d310 == (code *)0x0) {
    DAT_06a7d310 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_left()");
  }
  local_34 = (*DAT_06a7d310)(param_1);
  lVar3 = FUN_04f2e83c(&local_34,param_2,param_3,0);
  if (plVar2 == (long *)0x0) {
LAB_05eb9804:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_05eb97f8:
    uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    if (DAT_06a7d320 == (code *)0x0) {
      DAT_06a7d320 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_right()");
    }
    local_34 = (*DAT_06a7d320)(param_1);
    lVar3 = FUN_04f2e83c(&local_34,param_2,param_3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_05eb97f8;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      if (DAT_06a7d330 == (code *)0x0) {
        DAT_06a7d330 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_top()");
      }
      local_34 = (*DAT_06a7d330)(param_1);
      lVar3 = FUN_04f2e83c(&local_34,param_2,param_3,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_05eb97f8;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        if (DAT_06a7d340 == (code *)0x0) {
          DAT_06a7d340 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_bottom()");
        }
        local_34 = (*DAT_06a7d340)(param_1);
        lVar3 = FUN_04f2e83c(&local_34,param_2,param_3,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_05eb97f8;
        puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          FUN_05f5cc4c(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


