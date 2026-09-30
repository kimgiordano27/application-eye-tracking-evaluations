/*
FUNCTION_NAME: FUN_020b2c94
ENTRY_POINT: 020b2c94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020b2fd8) */
/* WARNING: Removing unreachable block (ram,0x020b2eb4) */
/* WARNING: Removing unreachable block (ram,0x020b3100) */
/* WARNING: Removing unreachable block (ram,0x020b2f1c) */
/* WARNING: Removing unreachable block (ram,0x020b30f8) */

void FUN_020b2c94(long param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long local_b0;
  int local_a4;
  long local_a0;
  int local_98;
  int local_94;
  long local_90;
  char local_84 [4];
  int local_80;
  int iStack_7c;
  long local_78;
  long local_70;
  long local_68;
  
  local_b0 = tpidr_el0;
  local_68 = *(long *)(local_b0 + 0x28);
  if (DAT_04121e41 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cda250);
    DAT_04121e41 = '\x01';
  }
  puVar5 = (undefined8 *)
           ((long)&local_b0 -
           ((ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0xfc) +
            0xf & 0x1fffffff0));
  local_84[0] = '\0';
  iVar2 = FUN_020af8cc();
  plVar8 = (long *)PTR_DAT_03cbdee0;
  iVar3 = param_4;
  if (iVar2 != 1) {
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar3 = -0x80000000;
    if ((float)(int)((float)param_4 / (float)iVar2) != INFINITY) {
      iVar3 = (int)((float)param_4 / (float)iVar2);
    }
  }
  iVar2 = param_4 + -1;
  if (0 < param_4) {
    iVar6 = 0;
    lVar9 = 0;
    local_98 = iVar3 + -1;
    local_a0 = 0;
    local_a4 = iVar2;
    do {
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar3 = FUN_0276c214(local_98 + iVar6,iVar2,0);
      if (iVar3 == iVar2) {
        for (; iVar6 < param_4; iVar6 = iVar6 + 1) {
          local_90 = lVar9;
          FUN_01f66c74(param_3,iVar6,puVar5,
                       *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80));
          if (param_2 == 0) goto LAB_020b30f4;
          puVar4 = puVar5;
          if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0x28)) {
            puVar4 = (undefined8 *)*puVar5;
          }
          local_80 = param_4;
          iStack_7c = iVar6;
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),puVar4,&iStack_7c,&local_80,
                     *(undefined8 *)(param_2 + 0x28));
          lVar9 = local_90;
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        local_84[0] = '\0';
        local_94 = iVar3;
        FUN_027e0bd8(uVar7,local_84,0);
        if (*(long *)(param_1 + 0x10) == 0) {
          local_90 = lVar9;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x10),&local_78,*(undefined8 *)PTR_DAT_03cda250);
        local_90 = local_78;
        if (local_84[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        local_84[0] = '\0';
        FUN_027e0bd8(uVar7,local_84,0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x18),&local_70,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8));
        local_a0 = local_70;
        if (local_84[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        lVar9 = local_a0;
        if ((local_a0 == 0) ||
           (FUN_0221e108(local_a0,iVar6,local_94,param_3,param_4,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb8)),
           lVar1 = local_90, local_90 == 0)) {
LAB_020b30f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(long *)(local_90 + 0x18) = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(local_90 + 0x18),lVar9);
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_020afa8c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xc0));
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        local_84[0] = '\0';
        FUN_027e0bd8(uVar7,local_84,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (local_84[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        lVar9 = local_90;
        FUN_027e13f4(*(undefined8 *)(param_1 + 0x30),local_90,0);
        plVar8 = (long *)PTR_DAT_03cbdee0;
        iVar2 = local_a4;
        iVar3 = local_94;
      }
      iVar6 = iVar3 + 1;
    } while (iVar6 < param_4);
  }
  FUN_020af954(param_1,0xffffffff,0,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200));
  if (*(long *)(local_b0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


