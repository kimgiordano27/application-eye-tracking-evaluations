/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 045de88c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x26;
  long in_stack_00000008;
  
  uVar2 = FUN_04c8d044(param_2,**(undefined8 **)(param_1 + 0x978));
  if (in_stack_00000008 != 0) {
    iVar3 = FUN_04c8d044(in_stack_00000008,*(undefined8 *)PTR_DAT_06322680,0);
    puVar1 = PTR_DAT_06312310;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar8 = FUN_04d8a7b0(uVar8,0);
    if (in_stack_00000008 != 0) {
      lVar4 = FUN_04c8ae78(in_stack_00000008,*(undefined8 *)PTR_DAT_06322688,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02b79548(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar4,lVar9);
        }
      }
      lVar9 = *(long *)(unaff_x20 + 0x20);
      *(long *)(unaff_x19 + 0x30) = lVar5;
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02b79548(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar4,lVar9);
        }
      }
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x30),lVar5);
      if (iVar3 == 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        FUN_045de224();
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar8 = FUN_04d8a7b0(uVar8,0);
        if (in_stack_00000008 == 0) goto LAB_045deb40;
        lVar4 = FUN_04c8ae78(in_stack_00000008,*(undefined8 *)PTR_DAT_06322690,uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02b76218(lVar9);
        }
        if (lVar4 == 0) {
          Oculus_Interaction_MicroGestureUnityEventWrapper__get_WhenSwipeDown(0x10,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = thunk_FUN_02b79548(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar4,lVar9);
        }
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar7 = 0;
          uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            FUN_045de304();
            uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
      lVar4 = *unaff_x26;
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar4 = FUN_04d21d2c(0);
      if (lVar4 != 0) {
        FUN_0430a470();
        return;
      }
    }
  }
LAB_045deb40:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


