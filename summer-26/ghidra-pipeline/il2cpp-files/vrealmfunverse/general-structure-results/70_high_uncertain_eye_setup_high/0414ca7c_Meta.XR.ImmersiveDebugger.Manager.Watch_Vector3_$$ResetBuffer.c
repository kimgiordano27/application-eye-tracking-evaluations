/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ResetBuffer
ENTRY_POINT: 0414ca7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ResetBuffer(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w19;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  long *plVar10;
  
  Oculus_Interaction_SecondaryInteractorConnection__Start(6,0);
  uVar1 = FUN_04d941cc();
  if (uVar1 < unaff_w19) {
    FUN_04d9c908(0);
  }
  iVar2 = FUN_04d941cc();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    iVar3 = FUN_0462f080(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar3) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar7);
    }
    lVar7 = thunk_FUN_02b79548();
    if (lVar7 != 0) {
      FUN_0414c7bc();
      return;
    }
    plVar4 = (long *)thunk_FUN_02b79548();
    if (plVar4 == (long *)0x0) {
      FUN_04d9c940();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x20);
      if (0 < (int)uVar1) {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar9 = 0;
        plVar10 = (long *)(lVar7 + 0x30);
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < (int)plVar10[-2]) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar8 = *plVar10;
            if ((lVar8 != 0) &&
               (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar6,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar8;
            thunk_FUN_02bb0e9c(plVar4 + (long)(int)unaff_w19 + 4,lVar8);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 3;
        } while (uVar1 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


