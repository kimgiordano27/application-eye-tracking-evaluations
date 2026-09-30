/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerRef$$TryGetPointerPose
ENTRY_POINT: 0794ee84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose
*/


void Oculus_Interaction_Input_ControllerRef__TryGetPointerPose(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x21;
  long *plVar4;
  long unaff_x22;
  long in_stack_00000088;
  
  plVar4 = *(long **)(unaff_x21 + 0xb98);
  lVar1 = *(long *)(*plVar4 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_0794f0f8:
    if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_0794f10c;
  }
  FUN_07966830();
  *(undefined1 *)(unaff_x19 + 4) = 0;
  *(undefined4 *)(unaff_x19 + 0x30) = 1;
  *(undefined4 *)(unaff_x19 + 0x33) = 1;
  FUN_07950438();
  FUN_07950554();
  if (*(char *)((long)unaff_x19 + 0x2a9) == '\0') {
    FUN_079506e4();
  }
  else {
    FUN_07950580();
  }
  FUN_079507cc();
  FUN_0795082c();
  FUN_0795088c();
  FUN_079508ec();
  (**(code **)(*unaff_x19 + 0x1a8))();
  if (((*(uint *)(unaff_x19 + 0x52) & 0xfffffffe) == 4) &&
     (uVar2 = FUN_079509c4(), (uVar2 & 1) != 0)) {
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb840);
    FUN_0795d738();
    unaff_x19[0x29] = lVar1;
    thunk_FUN_040ec700(unaff_x19 + 0x29,lVar1);
    unaff_x19[0x2a] = lVar1;
    plVar3 = unaff_x19 + 0x2a;
  }
  else {
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb838);
    thunk_FUN_0795d504();
    plVar3 = unaff_x19 + 0x29;
    unaff_x19[0x29] = lVar1;
  }
  thunk_FUN_040ec700(plVar3,lVar1);
  if ((*(uint *)(unaff_x19 + 0x52) & 0xfffffffe) == 4) {
    uVar2 = FUN_079509c4();
    if ((uVar2 & 1) == 0) {
      if ((char)unaff_x19[0x15] == '\0') {
        lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb860);
        FUN_0794386c();
      }
      else {
        lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb858);
        Oculus_Interaction_Body_Input_Body__get_IsHighConfidence();
      }
    }
    else {
      if ((char)unaff_x19[0x15] == '\0') {
        lVar1 = *(long *)(*plVar4 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_0794f0f8;
        if (*(char *)(**(long **)(lVar1 + 0xb8) + 0x130) == '\0') {
          lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb870);
          FUN_07943ad4();
          goto LAB_0794f0e4;
        }
      }
      lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092eb868);
      FUN_0794453c();
    }
LAB_0794f0e4:
    unaff_x19[0x2f] = lVar1;
    thunk_FUN_040ec700(unaff_x19 + 0x2f,lVar1);
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x53) = 2;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
    return;
  }
LAB_0794f10c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


