/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 0414bdbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 152
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int *piVar9;
  ulong uVar10;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  
  FUN_02b3c81c(PTR_DAT_06313048);
  *(undefined1 *)(unaff_x23 + 0x549) = 1;
  in_stack_00000018 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(3,0);
  }
  iVar2 = thunk_FUN_02b4ba0c();
  if (iVar2 != 1) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(7,0);
  }
  iVar2 = thunk_FUN_02b4b9cc();
  if (iVar2 != 0) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(6,0);
  }
  uVar3 = FUN_04d941cc();
  if (uVar3 < unaff_w19) {
    FUN_04d9c908(0);
  }
  iVar2 = FUN_04d941cc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar4 = FUN_046280c0(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar4) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar8);
    }
    lVar8 = thunk_FUN_02b79548();
    if (lVar8 != 0) {
      FUN_0414bb60();
      return;
    }
    plVar5 = (long *)thunk_FUN_02b79548();
    if (plVar5 == (long *)0x0) {
      FUN_04d9c940();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar3 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar3) {
        piVar9 = *(int **)(lVar8 + 0x18);
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar10 = 0;
        piVar1 = piVar9;
        do {
          if ((uint)piVar9[6] <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < piVar1[8]) {
            in_stack_00000008._4_4_ = piVar1[0xe];
            lVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40)
                               ,(long)&stack0x00000008 + 4);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar7,0);
            }
            if (*(uint *)(plVar5 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar5[(long)(int)unaff_w19 + 4] = lVar8;
            thunk_FUN_02bb0e9c(plVar5 + (long)(int)unaff_w19 + 4,lVar8);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar10 = uVar10 + 1;
          piVar1 = piVar1 + 8;
        } while (uVar3 != uVar10);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


