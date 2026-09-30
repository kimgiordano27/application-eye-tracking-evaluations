/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Value
ENTRY_POINT: 02783d44
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Value(int param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  int unaff_w23;
  ulong uVar7;
  long *plVar8;
  
  if ((int)(unaff_w23 - unaff_w19) < param_1) {
    FUN_033b2d60(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar5);
  }
  lVar5 = thunk_FUN_01de26bc();
  if (lVar5 != 0) {
    FUN_02783a30();
    return;
  }
  plVar2 = (long *)thunk_FUN_01de26bc();
  if (plVar2 == (long *)0x0) {
    FUN_033b3618();
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(lVar5 + 0x20);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(lVar5 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar7 = 0;
    plVar8 = (long *)(lVar5 + 0x40);
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)plVar8[-4]) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar6 = *plVar8;
        if ((lVar6 != 0) &&
           (lVar3 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar4,0);
        }
        if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar2[(long)(int)unaff_w19 + 4] = lVar6;
        thunk_FUN_01e10808(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 5;
    } while (uVar1 != uVar7);
  }
  return;
}


