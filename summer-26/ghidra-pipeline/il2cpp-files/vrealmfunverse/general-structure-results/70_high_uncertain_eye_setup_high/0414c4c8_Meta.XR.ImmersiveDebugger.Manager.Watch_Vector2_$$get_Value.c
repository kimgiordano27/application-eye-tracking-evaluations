/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 0414c4c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(void)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  int *piVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar6);
  }
  lVar6 = thunk_FUN_02b79548();
  if (lVar6 != 0) {
    FUN_0414c19c();
    return;
  }
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 == (long *)0x0) {
    FUN_04d9c940();
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
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
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar6 = *(long *)(piVar2 + 0xe);
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


