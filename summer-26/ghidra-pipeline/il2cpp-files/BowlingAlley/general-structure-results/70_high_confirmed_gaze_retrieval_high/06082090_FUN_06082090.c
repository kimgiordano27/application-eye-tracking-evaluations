/*
FUNCTION_NAME: FUN_06082090
ENTRY_POINT: 06082090
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose
*/


undefined8 FUN_06082090(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = System_Func<FocusOutEvent>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo;
  while( true ) {
    if ((DAT_076dd403 & 1) == 0) {
      thunk_FUN_032e1da0(puVar2);
      thunk_FUN_032e1da0(puVar3);
      thunk_FUN_032e1da0(puVar4);
      DAT_076dd403 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_060821f8(param_2);
    if (((uVar5 & 1) != 0) || (plVar6 = *(long **)(param_1 + 0x90), plVar6 == (long *)0x0)) break;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x310))
    ;
    if (plVar6 == (long *)0x0) {
      uVar7 = FUN_06012848(param_2,0);
      uVar8 = thunk_FUN_032e1da0(System_Func<Color,_Color>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar7,uVar8);
    }
    lVar9 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar6);
    }
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_0606a570(lVar9,plVar6,0);
    do {
      lVar10 = lVar9;
      if (lVar10 == 0) goto LAB_060821c4;
      lVar9 = *(long *)(lVar10 + 0x18);
    } while (*(long *)(lVar10 + 0x18) != 0);
    param_2 = *(undefined8 *)(lVar10 + 0x10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar9 = FUN_06081fbc(param_2);
  if (lVar9 != 0) {
    return *(undefined8 *)(lVar9 + 0x18);
  }
LAB_060821c4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


