/*
FUNCTION_NAME: FUN_01d2e6b0
ENTRY_POINT: 01d2e6b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d2e86c) */
/* WARNING: Removing unreachable block (ram,0x01d2e878) */

void FUN_01d2e6b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  if ((DAT_04120dfe & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccabb0);
    FUN_01ab69ac(PTR_DAT_03ccabb8);
    FUN_01ab69ac(PTR_DAT_03ccabc0);
    FUN_01ab69ac(PTR_DAT_03ccabc8);
    DAT_04120dfe = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar7 = 3;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x20),0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_1 + 0x28),&local_78,*(undefined8 *)PTR_DAT_03ccabc8);
    puVar3 = PTR_DAT_03ccabc0;
    puVar2 = PTR_DAT_03ccabb8;
    puVar1 = PTR_DAT_03ccabb0;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    do {
      uVar4 = FUN_021b51c8(&local_60,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        uVar7 = 7;
        goto LAB_01d2e7d8;
      }
      FUN_01b7a454(&local_60,&local_78,*(undefined8 *)puVar3);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    } while (*(char *)(local_78 + 0x14) != '\0');
    uVar7 = 3;
LAB_01d2e7d8:
    FUN_021b51c4(&local_60,*(undefined8 *)puVar1);
    if ((uVar7 == 7) || (uVar7 == 0)) {
      *(undefined1 *)(param_1 + 0x54) = 0;
      uVar7 = 8;
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if (((uVar7 | 8) == 8) && (*(char *)(param_1 + 0x55) == '\0')) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),param_1,*(undefined8 *)(lVar5 + 0x28))
    ;
  }
  return;
}


