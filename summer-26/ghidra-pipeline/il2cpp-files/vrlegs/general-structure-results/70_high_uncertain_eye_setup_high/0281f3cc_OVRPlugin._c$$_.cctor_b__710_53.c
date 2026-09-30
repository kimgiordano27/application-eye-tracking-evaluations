/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_53
ENTRY_POINT: 0281f3cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__710_53(long param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  puVar6 = PTR_DAT_03cfe788;
  if ((DAT_041253ad & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfe788);
    DAT_041253ad = 1;
  }
  uVar11 = *param_2;
  piVar2 = (int *)(param_1 + 0xc);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_0281f324(param_1,uVar11,piVar2);
  if (((uVar7 & 1) != 0) && (*piVar2 < 0x19)) {
    lVar8 = *(long *)puVar6;
    uVar11 = *param_2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar6;
    }
    uVar7 = FUN_0281f14c(param_1,*(int *)(*(long *)(lVar8 + 0xb8) + 0x20) + uVar11,0x3a);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)puVar6;
      uVar11 = *param_2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar6;
      }
      piVar3 = (int *)(param_1 + 0x10);
      uVar7 = FUN_0281f324(param_1,*(int *)(*(long *)(lVar8 + 0xb8) + 0x24) + uVar11,piVar3);
      if (((uVar7 & 1) != 0) && (*piVar3 < 0x3c)) {
        lVar8 = *(long *)puVar6;
        uVar11 = *param_2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar6;
        }
        uVar7 = FUN_0281f14c(param_1,*(int *)(*(long *)(lVar8 + 0xb8) + 0x28) + uVar11,0x3a);
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)puVar6;
          uVar11 = *param_2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *(long *)puVar6;
          }
          uVar7 = FUN_0281f324(param_1,*(int *)(*(long *)(lVar8 + 0xb8) + 0x2c) + uVar11,
                               (int *)(param_1 + 0x14));
          if ((((uVar7 & 1) != 0) && (iVar4 = *(int *)(param_1 + 0x14), iVar4 < 0x3c)) &&
             ((*piVar2 != 0x18 || (iVar4 == 0 && *piVar3 == 0)))) {
            lVar8 = *(long *)puVar6;
            uVar11 = *param_2;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar6;
            }
            uVar11 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x30) + uVar11;
            *param_2 = uVar11;
            uVar7 = FUN_0281f14c(param_1,uVar11,0x2e);
            if ((uVar7 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x18) = 0;
              lVar8 = 0;
              uVar11 = *param_2 + 1;
              *param_2 = uVar11;
              if (*(int *)(param_1 + 0x30) <= (int)uVar11) {
                return 0;
              }
              lVar10 = *(long *)(param_1 + 0x28);
              if (lVar10 == 0) {
LAB_0281f698:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c(lVar8);
              }
              uVar5 = *(uint *)(lVar10 + 0x18);
              uVar9 = 0xffffffff;
              do {
                if (uVar5 <= uVar11) goto LAB_0281f694;
                uVar11 = (uint)*(ushort *)(lVar10 + (long)(int)uVar11 * 2 + 0x20);
                if (9 < uVar11 - 0x30) {
                  if (uVar9 == 0xffffffff) {
                    return 0;
                  }
                  goto LAB_0281f62c;
                }
                *(uint *)(param_1 + 0x18) = uVar11 + *(int *)(param_1 + 0x18) * 10 + -0x30;
                uVar1 = uVar9 + 1;
                uVar9 = uVar9 + 1;
                uVar11 = *param_2 + 1;
                *param_2 = uVar11;
              } while ((uVar1 < 6) && ((int)uVar11 < *(int *)(param_1 + 0x30)));
              if (uVar9 < 6) {
LAB_0281f62c:
                lVar8 = *(long *)puVar6;
                iVar4 = *(int *)(param_1 + 0x18);
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar8 = *(long *)puVar6;
                }
                lVar10 = **(long **)(lVar8 + 0xb8);
                if (lVar10 == 0) goto LAB_0281f698;
                lVar8 = 7 - (long)(int)(uVar9 + 1);
                if (*(uint *)(lVar10 + 0x18) <= (uint)lVar8) {
LAB_0281f694:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                *(int *)(param_1 + 0x18) = *(int *)(lVar10 + lVar8 * 4 + 0x20) * iVar4;
              }
              if ((*piVar2 == 0x18) && (*(int *)(param_1 + 0x18) != 0)) {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


