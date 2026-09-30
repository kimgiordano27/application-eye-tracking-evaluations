/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 045de8f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  FUN_04d8a7b0(param_1,0);
  if (unaff_x23 != 0) {
    lVar1 = FUN_04c8ae78();
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_02b79548(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar1,lVar6);
      }
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_02b79548(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar1,lVar6);
      }
    }
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      FUN_045de224();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(uVar4,0);
      if (in_stack_00000008 == 0) goto LAB_045deb40;
      lVar1 = FUN_04c8ae78(in_stack_00000008,*(undefined8 *)PTR_DAT_06322690,uVar4,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      if (lVar1 == 0) {
        Oculus_Interaction_MicroGestureUnityEventWrapper__get_WhenSwipeDown(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = thunk_FUN_02b79548(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar1,lVar6);
      }
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar5 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          FUN_045de304();
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
    }
    lVar1 = *unaff_x26;
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar1 = FUN_04d21d2c(0);
    if (lVar1 != 0) {
      FUN_0430a470();
      return;
    }
  }
LAB_045deb40:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


