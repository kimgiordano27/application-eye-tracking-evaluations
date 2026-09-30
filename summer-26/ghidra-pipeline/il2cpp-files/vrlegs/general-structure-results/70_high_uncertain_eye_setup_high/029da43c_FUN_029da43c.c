/*
FUNCTION_NAME: FUN_029da43c
ENTRY_POINT: 029da43c
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


/* WARNING: Removing unreachable block (ram,0x029da5f8) */
/* WARNING: Removing unreachable block (ram,0x029da604) */

void FUN_029da43c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  if ((DAT_04127e86 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08e40);
    FUN_01ab69ac(PTR_DAT_03d08e48);
    FUN_01ab69ac(PTR_DAT_03d08e50);
    FUN_01ab69ac(PTR_DAT_03d08e58);
    DAT_04127e86 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar7 = 3;
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
              (*(long *)(param_1 + 0x28),&local_78,*(undefined8 *)PTR_DAT_03d08e58);
    puVar3 = PTR_DAT_03d08e50;
    puVar2 = PTR_DAT_03d08e48;
    puVar1 = PTR_DAT_03d08e40;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    do {
      uVar4 = FUN_021b51c8(&local_60,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        iVar7 = 6;
        goto LAB_029da564;
      }
      FUN_01b7a454(&local_60,&local_78,*(undefined8 *)puVar3);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    } while (*(char *)(local_78 + 0x14) != '\0');
    iVar7 = 3;
LAB_029da564:
    FUN_021b51c4(&local_60,*(undefined8 *)puVar1);
    if ((iVar7 == 6) || (iVar7 == 0)) {
      *(undefined1 *)(param_1 + 0x48) = 0;
      iVar7 = 7;
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if (((iVar7 == 7) || (iVar7 == 0)) && (*(char *)(param_1 + 0x49) == '\0')) {
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


