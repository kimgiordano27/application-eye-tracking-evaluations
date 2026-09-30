/*
FUNCTION_NAME: FUN_029a2674
ENTRY_POINT: 029a2674
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


/* WARNING: Removing unreachable block (ram,0x029a2818) */

void FUN_029a2674(undefined4 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  char local_34 [4];
  
  puVar5 = PTR_DAT_03cca318;
  if ((DAT_04127d45 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cca318);
    DAT_04127d45 = 1;
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar5;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar8,local_34,0);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar5;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined4 *)(lVar6 + 0x20) = param_1;
  FUN_0279cdc8(lVar6,0,param_2,*param_3,4,0);
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  if (param_2 != 0) {
    uVar4 = *param_3;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar4 < uVar1) {
      puVar7 = (undefined1 *)(param_2 + (int)uVar4 + 0x20);
      uVar2 = *puVar7;
      if ((uVar4 + 1 < uVar1) && (uVar4 + 3 < uVar1)) {
        uVar3 = *(undefined1 *)(param_2 + (int)(uVar4 + 1) + 0x20);
        *puVar7 = *(undefined1 *)(param_2 + (int)(uVar4 + 3) + 0x20);
        uVar1 = *param_3 + 2;
        if ((uVar1 < *(uint *)(param_2 + 0x18)) &&
           (uVar4 = *param_3 + 1, uVar4 < *(uint *)(param_2 + 0x18))) {
          *(undefined1 *)(param_2 + 0x20 + (long)(int)uVar4) =
               *(undefined1 *)(param_2 + 0x20 + (long)(int)uVar1);
          if (*param_3 + 2 < *(uint *)(param_2 + 0x18)) {
            *(undefined1 *)(param_2 + (int)(*param_3 + 2) + 0x20) = uVar3;
            if (*param_3 + 3 < *(uint *)(param_2 + 0x18)) {
              *(undefined1 *)(param_2 + (int)(*param_3 + 3) + 0x20) = uVar2;
              *param_3 = *param_3 + 4;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


