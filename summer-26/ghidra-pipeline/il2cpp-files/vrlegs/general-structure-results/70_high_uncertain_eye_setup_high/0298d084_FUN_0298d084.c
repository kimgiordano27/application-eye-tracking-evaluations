/*
FUNCTION_NAME: FUN_0298d084
ENTRY_POINT: 0298d084
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298d1bc) */

void FUN_0298d084(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char local_24 [4];
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x8d) != '\0') {
    uVar12 = *(undefined8 *)(param_1 + 0x188);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar12,local_24,0);
    lVar7 = *(long *)(param_1 + 0x188);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (0 < (long)((ulong)uVar3 << 0x20)) {
      uVar6 = 0;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar10 = *(long *)(param_1 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = *(long *)(lVar10 + 0x90);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = *(uint *)(lVar11 + 0x18);
        iVar5 = 0;
        if (uVar9 != 0) {
          iVar5 = (int)uVar6 / (int)uVar9;
        }
        uVar4 = (int)uVar6 - iVar5 * uVar9;
        if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar8 = *(long *)(lVar7 + 0x20 + uVar6 * 8);
        uVar9 = (uint)*(byte *)(lVar11 + (int)uVar4 + 0x20);
        if (*(char *)(lVar10 + 0x98) == '\0') {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(uint *)(lVar8 + 0x48) = uVar9;
          *(uint *)(lVar8 + 0x50) = uVar9;
          *(uint *)(lVar8 + 0x68) = uVar9;
        }
        else {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar5 = *(int *)(lVar8 + 0x48) + uVar9;
          iVar1 = *(int *)(lVar8 + 0x50) + uVar9;
          iVar2 = *(int *)(lVar8 + 0x68) + uVar9;
          uVar9 = *(int *)(lVar8 + 0x58) + uVar9;
          *(int *)(lVar8 + 0x48) = iVar5;
          *(int *)(lVar8 + 0x50) = iVar1;
          *(int *)(lVar8 + 0x68) = iVar2;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(lVar8 + 0x58) = uVar9;
      } while ((long)uVar6 < (long)(int)uVar3);
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
    }
  }
  return;
}


