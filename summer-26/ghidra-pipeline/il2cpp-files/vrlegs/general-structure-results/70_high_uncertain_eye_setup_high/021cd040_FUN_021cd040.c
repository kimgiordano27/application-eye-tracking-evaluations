/*
FUNCTION_NAME: FUN_021cd040
ENTRY_POINT: 021cd040
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cd300) */
/* WARNING: Removing unreachable block (ram,0x021cd2c4) */

void FUN_021cd040(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char local_54 [4];
  
  local_54[0] = '\0';
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
    uVar9 = 0;
    uVar4 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar6 = *(long *)(lVar8 + 0x20 + uVar9 * 8);
      thunk_FUN_01a4b338();
      if (lVar6 != 0) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          uVar5 = **(undefined8 **)(lVar1 + 0xb8);
          local_54[0] = '\0';
          FUN_027e0bd8(uVar5,local_54,0);
          plVar2 = (long *)thunk_FUN_01a59484(lVar6,*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(param_2 + 0x20)
                                                                         + 0xc0) + 0x20) + 0x80));
          lVar1 = *plVar2;
          thunk_FUN_01a4b338();
          if (lVar1 != 0) {
            plVar2 = (long *)thunk_FUN_01a59484(lVar6,*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)(param_2 + 0x20
                                                                                     ) + 0xc0) +
                                                                 0x20) + 0x80));
            lVar1 = *plVar2;
            thunk_FUN_01a4b338();
            puVar3 = (undefined8 *)
                     thunk_FUN_01a59484(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20
                                                                                     ) + 0xc0) +
                                                                 0x20) + 0x80) + 0x20);
            uVar7 = *puVar3;
            thunk_FUN_01a4b338();
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            thunk_FUN_01a4b338();
            FUN_018820a8(lVar1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) +
                                                  0x20) + 0x80) + 0x20,uVar7);
          }
          plVar2 = (long *)thunk_FUN_01a59484(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(param_2 
                                                  + 0x20) + 0xc0) + 0x20) + 0x80) + 0x20);
          lVar1 = *plVar2;
          thunk_FUN_01a4b338();
          puVar3 = (undefined8 *)
                   thunk_FUN_01a59484(lVar6,*(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0)
                                                       + 0x20) + 0x80));
          uVar7 = *puVar3;
          thunk_FUN_01a4b338();
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          thunk_FUN_01a4b338();
          FUN_018820a8(lVar1,*(undefined8 *)
                              (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20) + 0x80)
                       ,uVar7);
          if (local_54[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
          }
        }
        else {
          thunk_FUN_01a4b338();
          FUN_018820a8(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20)
                                      + 0x80) + 0x40,0);
        }
      }
      uVar4 = (ulong)*(uint *)(lVar8 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027c2aa4(param_1,0);
  return;
}


