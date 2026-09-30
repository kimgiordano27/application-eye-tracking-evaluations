/*
FUNCTION_NAME: FUN_02bae9cc
ENTRY_POINT: 02bae9cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02baeb90) */

void FUN_02bae9cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  char local_54 [4];
  
  if ((DAT_04128ed9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d13a10);
    FUN_01ab69ac(PTR_DAT_03d00730);
    FUN_01ab69ac(PTR_DAT_03cfffd0);
    DAT_04128ed9 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar8,local_54,0);
  puVar1 = PTR_DAT_03d13a10;
  plVar10 = (long *)(param_1 + 0x18);
  lVar7 = *plVar10;
  lVar3 = *(long *)PTR_DAT_03d13a10;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  *plVar10 = **(long **)(lVar3 + 0xb8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  puVar2 = PTR_DAT_03d00730;
  puVar1 = PTR_DAT_03cfffd0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) ||
       (lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar4 == 0)) {
LAB_02baeb88:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(ulong *)(lVar4 + 0x18);
    if (0 < (int)uVar5) {
      uVar9 = 0;
      do {
        lVar4 = FUN_02bafa1c(lVar7,uVar9 & 0xffffffff,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *(long *)puVar2;
        }
        if (lVar4 != *(long *)(*(long *)(lVar6 + 0xb8) + 0x28)) {
          if ((*(long *)(lVar7 + 0x10) == 0) ||
             (lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar4 == 0)) goto LAB_02baeb88;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar11 = *(undefined8 *)(lVar4 + uVar9 * 8 + 0x20);
          uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_02f37e38(uVar8,uVar11,0);
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),param_1,uVar8,*(undefined8 *)(lVar3 + 0x28));
        }
        uVar9 = uVar9 + 1;
      } while ((uVar5 & 0xffffffff) != uVar9);
    }
  }
  return;
}


