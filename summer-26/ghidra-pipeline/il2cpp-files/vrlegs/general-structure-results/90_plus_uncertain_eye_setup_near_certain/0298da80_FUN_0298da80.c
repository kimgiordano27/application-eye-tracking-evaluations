/*
FUNCTION_NAME: FUN_0298da80
ENTRY_POINT: 0298da80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0298df44) */
/* WARNING: Removing unreachable block (ram,0x0298df2c) */
/* WARNING: Removing unreachable block (ram,0x0298de74) */
/* WARNING: Removing unreachable block (ram,0x0298dea4) */
/* WARNING: Removing unreachable block (ram,0x0298dd2c) */
/* WARNING: Removing unreachable block (ram,0x0298dd5c) */
/* WARNING: Removing unreachable block (ram,0x0298df68) */
/* WARNING: Removing unreachable block (ram,0x0298df70) */
/* WARNING: Removing unreachable block (ram,0x0298df4c) */
/* WARNING: Removing unreachable block (ram,0x0298dd80) */

void FUN_0298da80(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char local_84 [4];
  long local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_50 [4];
  char local_4c [4];
  long local_48;
  
  if ((DAT_04127d00 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079a0);
    FUN_01ab69ac(PTR_DAT_03d079a8);
    FUN_01ab69ac(PTR_DAT_03d079b0);
    FUN_01ab69ac(PTR_DAT_03d07978);
    FUN_01ab69ac(PTR_DAT_03d079b8);
    FUN_01ab69ac(PTR_DAT_03d079c0);
    FUN_01ab69ac(PTR_DAT_03cc1c00);
    FUN_01ab69ac(PTR_DAT_03cc1c08);
    FUN_01ab69ac(PTR_DAT_03d079c8);
    DAT_04127d00 = 1;
  }
  local_50[0] = '\0';
  local_60 = 0;
  local_84[0] = '\0';
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  local_4c[0] = '\0';
  FUN_027e0bd8(uVar7,local_4c,0);
  bVar1 = param_2 & 1;
  if (*(byte *)(param_1 + 0x10) != bVar1) {
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x108);
      local_50[0] = '\0';
      FUN_027e0bd8(uVar4,local_50,0);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0221188c(lVar5,&local_d8,*(undefined8 *)PTR_DAT_03d079b8);
      puVar3 = PTR_DAT_03d079b0;
      puVar2 = PTR_DAT_03d079a8;
      uStack_78 = uStack_d0;
      local_80 = local_d8;
      uStack_68 = uStack_c0;
      uStack_70 = local_c8;
      local_60 = local_b8;
      while (uVar6 = FUN_021b4a88(&local_80,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        FUN_01d5dd70(&local_80,&local_48,*(undefined8 *)puVar3);
        plVar8 = *(long **)(param_1 + 0x30);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((plVar8[5] != 0) && (*(int *)(plVar8[5] + 0x1c) == 2)) {
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar5 = *(long *)(local_48 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar8 + 0x238))
                    (plVar8,lVar5,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*plVar8 + 0x240));
        }
      }
      FUN_021b503c(&local_80,*(undefined8 *)PTR_DAT_03d079a0);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02210f9c(lVar5,*(undefined8 *)PTR_DAT_03d07978);
      if (local_50[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100);
      local_84[0] = '\0';
      FUN_027e0bd8(uVar4,local_84,0);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0221188c(lVar5,&local_d8,*(undefined8 *)PTR_DAT_03d079b8);
      puVar3 = PTR_DAT_03d079b0;
      puVar2 = PTR_DAT_03d079a8;
      uStack_a8 = uStack_d0;
      local_b0 = local_d8;
      uStack_98 = uStack_c0;
      uStack_a0 = local_c8;
      local_90 = local_b8;
      while (uVar6 = FUN_021b4a88(&local_b0,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        FUN_01d5dd70(&local_b0,&local_d8,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar8 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
        if ((plVar8 != (long *)0x0) && (*(int *)((long)plVar8 + 0x1c) == 2)) {
          if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar5 = *(long *)(local_d8 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar8 + 0x198))
                    (plVar8,lVar5,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*plVar8 + 0x1a0));
        }
      }
      FUN_021b503c(&local_b0,*(undefined8 *)PTR_DAT_03d079a0);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02210f9c(lVar5,*(undefined8 *)PTR_DAT_03d07978);
      if (local_84[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de7f8(*(long *)(param_1 + 0x40),0);
    }
    else {
      plVar8 = (long *)(param_1 + 0x38);
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*plVar8 == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
        FUN_027d737c(uVar4,uVar9,*(undefined8 *)PTR_DAT_03d079c0,0);
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
        FUN_027e22f4(lVar5,uVar4,0);
        *plVar8 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar5);
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027e3114(*plVar8,1,0);
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027e3218(*plVar8,*(undefined8 *)PTR_DAT_03d079c8,0);
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027e2600(*plVar8,0);
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de940(*(long *)(param_1 + 0x40),0);
    }
  }
  if (local_4c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


