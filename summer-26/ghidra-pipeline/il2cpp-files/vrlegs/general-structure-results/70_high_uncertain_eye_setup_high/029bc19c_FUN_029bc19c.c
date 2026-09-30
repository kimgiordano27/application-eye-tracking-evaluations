/*
FUNCTION_NAME: FUN_029bc19c
ENTRY_POINT: 029bc19c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bc3fc) */
/* WARNING: Removing unreachable block (ram,0x029bc318) */
/* WARNING: Removing unreachable block (ram,0x029bc39c) */
/* WARNING: Removing unreachable block (ram,0x029bc408) */

bool FUN_029bc19c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  puVar2 = PTR_DAT_03cc9f98;
  if ((DAT_04127dc2 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08780);
    FUN_01ab69ac(PTR_DAT_03d08788);
    FUN_01ab69ac(PTR_DAT_03d08790);
    FUN_01ab69ac(PTR_DAT_03d08798);
    FUN_01ab69ac(PTR_DAT_03d087a0);
    FUN_01ab69ac(PTR_DAT_03cc9f98);
    DAT_04127dc2 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar9,local_34,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  if (**(long **)(lVar6 + 0xb8) == 0) {
    uVar10 = 3;
  }
  else {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (**(long **)(lVar6 + 0xb8),&local_78,*(undefined8 *)PTR_DAT_03d087a0);
    puVar5 = PTR_DAT_03d08790;
    puVar4 = PTR_DAT_03d08788;
    puVar3 = PTR_DAT_03d08780;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar7 = FUN_021b51c8(&local_60,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      FUN_01b7a454(&local_60,&local_78,*(undefined8 *)puVar5);
      if (local_78 != 0) {
        FUN_027e3250(local_78,0);
      }
    }
    FUN_021b51c4(&local_60,*(undefined8 *)puVar3);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *(long *)PTR_DAT_03d08798;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    uVar7 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
    }
    uVar10 = 8;
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return (uVar10 | 8) == 8;
}


