/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_80
ENTRY_POINT: 033fe404
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_<>c__<_cctor>b__786_80(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  long unaff_x23;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  thunk_FUN_01e10808();
  *unaff_x19 = 0;
  if ((unaff_x22 != 0) && (lVar5 = *(long *)(unaff_x22 + 0x18), lVar5 != 0)) {
    FUN_033fe580(lVar5);
    if (*unaff_x20 != 0) {
      return;
    }
    plVar6 = (long *)(unaff_x23 + 0x18);
    lVar9 = *plVar6;
    while (thunk_FUN_01da0934(), lVar9 != 0) {
      uVar3 = FUN_033fe8a0(lVar9);
      if ((((uVar3 & 1) != 0) ||
          (lVar10 = *(long *)(lVar9 + 0x20), thunk_FUN_01da0934(), lVar10 == 0)) ||
         (uVar3 = FUN_033fe9f8(lVar9), (uVar3 & 1) == 0)) {
        puVar1 = StringLiteral_9532;
        if (*unaff_x20 != 0) {
          return;
        }
        lVar9 = *(long *)StringLiteral_9532;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar9 = *(long *)puVar1;
        }
        if (((**(long **)(lVar9 + 0xb8) != 0) &&
            (lVar9 = FUN_026799f0(**(long **)(lVar9 + 0xb8),*(undefined8 *)StringLiteral_9536),
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
              thunk_FUN_01da0934();
              iVar8 = (int)uVar3;
              if ((lVar10 == 0) || (lVar10 == lVar5)) {
                if (iVar8 < 2) {
                  return;
                }
              }
              else {
                uVar3 = OVRPlugin_<>c__<_cctor>b__786_106(lVar10);
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
          FUN_01d7db78();
        }
        break;
      }
      thunk_FUN_01da0934();
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      thunk_FUN_01da0934();
      FUN_01d996c0(plVar6,uVar11,lVar9);
      lVar9 = *plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


