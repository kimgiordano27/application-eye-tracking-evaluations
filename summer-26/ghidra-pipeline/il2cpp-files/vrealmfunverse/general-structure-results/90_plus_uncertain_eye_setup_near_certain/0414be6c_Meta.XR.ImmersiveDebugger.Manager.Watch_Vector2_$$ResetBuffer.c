/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 0414be6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 145
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(void)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int *piVar7;
  ulong uVar8;
  undefined8 in_stack_00000008;
  
  Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar6);
  }
  lVar6 = thunk_FUN_02b79548();
  if (lVar6 != 0) {
    FUN_0414bb60();
    return;
  }
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 == (long *)0x0) {
    FUN_04d9c940();
  }
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x20);
    if (0 < (int)uVar1) {
      piVar7 = *(int **)(lVar6 + 0x18);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = 0;
      piVar2 = piVar7;
      do {
        if ((uint)piVar7[6] <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (-1 < piVar2[8]) {
          in_stack_00000008._4_4_ = piVar2[0xe];
          lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                             (long)&stack0x00000008 + 4);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar3[(long)(int)unaff_w19 + 4] = lVar6;
          thunk_FUN_02bb0e9c(plVar3 + (long)(int)unaff_w19 + 4,lVar6);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar8 = uVar8 + 1;
        piVar2 = piVar2 + 8;
      } while (uVar1 != uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


