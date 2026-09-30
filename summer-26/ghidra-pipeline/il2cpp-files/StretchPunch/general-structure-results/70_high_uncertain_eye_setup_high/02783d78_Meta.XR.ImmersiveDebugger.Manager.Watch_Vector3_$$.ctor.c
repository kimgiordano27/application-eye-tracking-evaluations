/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 02783d78
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint unaff_w19;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  lVar2 = thunk_FUN_01de26bc();
  if (lVar2 != 0) {
    FUN_02783a30();
    return;
  }
  plVar3 = (long *)thunk_FUN_01de26bc();
  if (plVar3 == (long *)0x0) {
    FUN_033b3618();
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar7 = 0;
    plVar8 = (long *)(lVar2 + 0x40);
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)plVar8[-4]) {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar6 = *plVar8;
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar5,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar6;
        thunk_FUN_01e10808(plVar3 + (long)(int)unaff_w19 + 4,lVar6);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 5;
    } while (uVar1 != uVar7);
  }
  return;
}


