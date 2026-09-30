/*
FUNCTION_NAME: FUN_02baf754
ENTRY_POINT: 02baf754
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


/* WARNING: Removing unreachable block (ram,0x02baf944) */

void FUN_02baf754(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char local_44 [4];
  
  puVar4 = PTR_DAT_03d13aa0;
  puVar3 = PTR_DAT_03cd9da0;
  puVar2 = PTR_DAT_03cd9d90;
  puVar1 = PTR_DAT_03cd75b0;
  if ((DAT_04128edf & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d13aa0);
    FUN_01ab69ac(PTR_DAT_03d00730);
    FUN_01ab69ac(PTR_DAT_03cd9da0);
    FUN_01ab69ac(PTR_DAT_03cd75b0);
    FUN_01ab69ac(PTR_DAT_03cd9d90);
    DAT_04128edf = 1;
  }
  FUN_02baf9d0(param_2,*(undefined8 *)puVar1);
  FUN_01f4d114(param_2,param_3,*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)puVar2,
               *(undefined8 *)puVar3,*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar7,local_44,0);
  FUN_02baf5ac(param_1);
  puVar1 = PTR_DAT_03d00730;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *(long *)(lVar8 + 0x10);
  if (lVar6 != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((long)*(int *)(*(long *)(lVar6 + 0x10) + 0x18) <= (long)uVar9) {
        if (local_44[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        return;
      }
      lVar6 = FUN_02bafa1c(lVar8,uVar9 & 0xffffffff);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      if (lVar6 != *(long *)(*(long *)(lVar5 + 0xb8) + 0x28)) {
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined8 *)(param_2 + (long)(int)param_3 * 8 + 0x20) =
             *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        param_3 = param_3 + 1;
      }
      lVar6 = *(long *)(lVar8 + 0x10);
      uVar9 = uVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


