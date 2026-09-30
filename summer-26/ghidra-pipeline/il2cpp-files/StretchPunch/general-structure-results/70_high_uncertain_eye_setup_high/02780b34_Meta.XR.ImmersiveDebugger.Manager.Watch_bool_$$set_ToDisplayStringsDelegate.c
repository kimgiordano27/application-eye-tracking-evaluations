/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 02780b34
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__set_ToDisplayStringsDelegate
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x23;
  ulong uVar10;
  
  if ((*(byte *)(unaff_x23 + 0x1d0) & 1) == 0) {
    FUN_01d7d918(StringLiteral_887);
    *(undefined1 *)(unaff_x23 + 0x1d0) = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar2 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar2 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar2 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar3 = FUN_033aadfc(param_2,0);
  if (uVar3 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc(param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = FUN_02a6fd10(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - param_3) < iVar4) {
      FUN_033b2d60(5,0);
    }
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8(lVar9);
    }
    lVar9 = thunk_FUN_01de26bc(param_2,lVar9);
    if (lVar9 != 0) {
      FUN_0278088c(param_1,lVar9,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
      return;
    }
    plVar5 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar5 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      uVar3 = *(uint *)(lVar9 + 0x20);
      if (0 < (int)uVar3) {
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar10 = 0;
        lVar1 = lVar9;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < *(int *)(lVar1 + 0x20)) {
            lVar6 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40));
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
              uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar8,0);
            }
            if (*(uint *)(plVar5 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar5[(long)(int)param_3 + 4] = lVar6;
            thunk_FUN_01e10808(plVar5 + (long)(int)param_3 + 4,lVar6);
            param_3 = param_3 + 1;
          }
          uVar10 = uVar10 + 1;
          lVar1 = lVar1 + 0x38;
        } while (uVar3 != uVar10);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


