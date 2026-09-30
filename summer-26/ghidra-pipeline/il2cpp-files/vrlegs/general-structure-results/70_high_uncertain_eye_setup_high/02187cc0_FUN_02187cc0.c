/*
FUNCTION_NAME: FUN_02187cc0
ENTRY_POINT: 02187cc0
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


/* WARNING: Removing unreachable block (ram,0x02187eb4) */
/* WARNING: Removing unreachable block (ram,0x02187f30) */

void FUN_02187cc0(long param_1,undefined8 ****param_2,long param_3)

{
  long *plVar1;
  undefined8 ****__src;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong __n;
  undefined8 *__dest;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_80;
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  local_70 = param_2;
  if ((DAT_041220c3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_041220c3 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60) + 0xfc);
  __dest = (undefined8 *)((long)&local_80 - (__n + 0xf & 0x1fffffff0));
  plVar1 = (long *)(param_1 + 0x18);
  local_74[0] = '\0';
  while( true ) {
    lVar8 = *plVar1;
    thunk_FUN_01a4b338();
    lVar6 = *(long *)(param_3 + 0x20);
    __src = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x60) + 0x28)) {
      __src = &local_70;
    }
    memcpy(__dest,__src,__n);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar5 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
    }
    uVar4 = FUN_02079734(lVar8,puVar5,*(undefined8 *)(lVar6 + 0xd8));
    if ((uVar4 & 1) != 0) break;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    local_74[0] = '\0';
    FUN_027e0bd8(uVar7,local_74,0);
    lVar6 = *plVar1;
    thunk_FUN_01a4b338();
    if (lVar8 == lVar6) {
      FUN_0207909c(lVar8,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8));
      if (*(char *)(lVar8 + 0x19c) == '\0') {
        iVar2 = FUN_02079060(lVar8,*(undefined8 *)
                                    (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8));
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0276c214(iVar2 << 1,0x100000,0);
      }
      else {
        uVar3 = 0x20;
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
      {
        FUN_01a46ff8();
      }
      lVar6 = thunk_FUN_01a89e68();
      FUN_02078f9c(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
      *(long *)(lVar8 + 0x1a0) = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x1a0,lVar6);
      thunk_FUN_01a4b338();
      *plVar1 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar6);
    }
    if (local_74[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
  }
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


