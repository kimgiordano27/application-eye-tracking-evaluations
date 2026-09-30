/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 01db1b88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(ulong param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a468);
    FUN_00fdc2e4(PTR_DAT_0235a438);
    *(undefined1 *)(unaff_x21 + 0x9e2) = 1;
  }
  *unaff_x20 = 0;
  thunk_FUN_0106e12c();
  *unaff_x19 = 0;
  if ((unaff_x22 != 0) && (lVar5 = *(long *)(unaff_x22 + 0x18), lVar5 != 0)) {
    FUN_01db1d38(lVar5);
    if (*unaff_x20 != 0) {
      return;
    }
    plVar6 = (long *)(param_2 + 0x18);
    lVar9 = *plVar6;
    while (thunk_FUN_00ffe618(), lVar9 != 0) {
      uVar3 = FUN_01db2054(lVar9);
      if ((((uVar3 & 1) != 0) ||
          (lVar10 = *(long *)(lVar9 + 0x20), thunk_FUN_00ffe618(), lVar10 == 0)) ||
         (uVar3 = FUN_01db21a8(lVar9), (uVar3 & 1) == 0)) {
        puVar1 = PTR_DAT_0235a438;
        if (*unaff_x20 != 0) {
          return;
        }
        lVar9 = *(long *)PTR_DAT_0235a438;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar9 = *(long *)puVar1;
        }
        if (((**(long **)(lVar9 + 0xb8) != 0) &&
            (lVar9 = FUN_01a36cc4(**(long **)(lVar9 + 0xb8),*(undefined8 *)PTR_DAT_0235a468),
            lVar9 != 0)) && (plVar6 = *(long **)(unaff_x22 + 0x20), plVar6 != (long *)0x0)) {
          iVar2 = (**(code **)(*plVar6 + 0x1a8))
                            (plVar6,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plVar6 + 0x1b0));
          uVar3 = *(ulong *)(lVar9 + 0x18);
          uVar7 = (uint)uVar3;
          if ((int)uVar7 < 1) {
            return;
          }
          iVar8 = 0;
          if (uVar7 != 0) {
            iVar8 = iVar2 / (int)uVar7;
          }
          uVar4 = iVar2 - iVar8 * uVar7;
          if (uVar4 < uVar7) {
            do {
              iVar2 = iVar2 + 1;
              lVar10 = *(long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
              thunk_FUN_00ffe618();
              iVar8 = (int)uVar3;
              if ((lVar10 == 0) || (lVar10 == lVar5)) {
                if (iVar8 < 2) {
                  return;
                }
              }
              else {
                uVar3 = FUN_01db26f0(lVar10);
                if (iVar8 < 2) {
                  return;
                }
                if ((uVar3 & 1) != 0) {
                  return;
                }
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              uVar3 = (ulong)(iVar8 - 1);
              iVar8 = 0;
              if (uVar7 != 0) {
                iVar8 = iVar2 / (int)uVar7;
              }
              uVar4 = iVar2 - iVar8 * uVar7;
            } while (uVar4 < uVar7);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        break;
      }
      thunk_FUN_00ffe618();
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      thunk_FUN_00ffe618();
      FUN_00ff754c(plVar6,uVar11,lVar9);
      lVar9 = *plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


