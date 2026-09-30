/*
FUNCTION_NAME: FUN_02ee952c
ENTRY_POINT: 02ee952c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ee9784) */

long FUN_02ee952c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  char local_34 [4];
  long local_28;
  
  puVar1 = PTR_DAT_03d1f430;
  if ((DAT_0412a817 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d21030);
    FUN_01ab69ac(PTR_DAT_03d20eb8);
    FUN_01ab69ac(PTR_DAT_03d21038);
    FUN_01ab69ac(PTR_DAT_03d210a0);
    FUN_01ab69ac(PTR_DAT_03d21040);
    FUN_01ab69ac(PTR_DAT_03d21048);
    FUN_01ab69ac(PTR_DAT_03d1f430);
    DAT_0412a817 = 1;
  }
  lVar4 = *(long *)puVar1;
  local_34[0] = '\0';
  local_28 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_03d20eb8;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    FUN_0219f8b8(**(long **)(lVar4 + 0xb8),param_1,&local_28,*(undefined8 *)PTR_DAT_03d20eb8);
    lVar4 = local_28;
    if (local_28 == 0) {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_02ee9780;
      FUN_0219f8b8(lVar4,param_1,&local_28,*(undefined8 *)puVar2);
      lVar4 = local_28;
      if (local_28 == 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        uVar8 = **(undefined8 **)(lVar4 + 0xb8);
        local_34[0] = '\0';
        FUN_027e0bd8(uVar8,local_34,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar3 = FUN_0219b384(lVar4,*(undefined8 *)PTR_DAT_03d210a0);
        if (0x1ff < iVar3) {
          uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d21048);
          FUN_0219a508(uVar5,0x19,*(undefined8 *)PTR_DAT_03d21038);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
          *puVar6 = uVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
        }
        lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d21030);
        FUN_02ee93c4(lVar4,param_1,0xffffffff,0x14f10ffe);
        lVar7 = *(long *)puVar1;
        local_28 = lVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219b83c(lVar4,param_1,local_28,*(undefined8 *)PTR_DAT_03d21040);
        lVar4 = local_28;
        if (local_34[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
        }
      }
    }
    return lVar4;
  }
LAB_02ee9780:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


