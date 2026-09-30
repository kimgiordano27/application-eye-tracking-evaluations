/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 02782aec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_ToDisplayStringsDelegate
               (undefined8 param_1)

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
  
  iVar2 = FUN_033aadfc(param_1,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    iVar3 = FUN_02a7f9e0(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar7);
    }
    lVar7 = thunk_FUN_01de26bc();
    if (lVar7 != 0) {
      FUN_02782800();
      return;
    }
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x20);
      if (0 < (int)uVar1) {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = 0;
        plVar10 = (long *)(lVar7 + 0x38);
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < (int)plVar10[-3]) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar8 = *plVar10;
            if ((lVar8 != 0) &&
               (lVar5 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar6,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar8;
            thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar8);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 4;
        } while (uVar1 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


