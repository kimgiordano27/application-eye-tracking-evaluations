/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 01ed57b0
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  
  plVar2 = (long *)thunk_FUN_01861ac0();
  if (plVar2 == (long *)0x0) {
    FUN_02befb64();
  }
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = *(uint *)(lVar6 + 0x20);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar7 = 0;
    lVar8 = lVar6 + 0x38;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (-1 < *(int *)(lVar8 + -0x18)) {
        lVar3 = thunk_FUN_018617ec(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5,0);
        }
        if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        plVar2[(long)(int)unaff_w19 + 4] = lVar3;
        thunk_FUN_0188fd20(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (uVar1 != uVar7);
  }
  return;
}


