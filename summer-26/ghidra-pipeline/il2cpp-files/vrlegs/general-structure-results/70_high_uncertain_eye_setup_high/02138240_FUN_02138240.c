/*
FUNCTION_NAME: FUN_02138240
ENTRY_POINT: 02138240
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x021386f0) */
/* WARNING: Removing unreachable block (ram,0x02138710) */

void FUN_02138240(long param_1,undefined8 ****param_2,undefined8 param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  void *__dest;
  ulong __n;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_90;
  undefined8 ***local_88;
  long local_80;
  char local_78 [4];
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18) + 0xfc);
  __dest = (void *)((long)&local_90 - (__n + 0xf & 0x1fffffff0));
  local_78[0] = '\0';
  local_74[0] = '\0';
  local_90 = param_3;
  local_88 = param_2;
  local_70 = param_2;
  thunk_FUN_01a4b338();
  thunk_FUN_01aa5300(param_1 + 0x2c,1,0);
  uVar11 = *(uint *)(param_1 + 0x14);
  thunk_FUN_01a4b338();
  if (uVar11 == 0x7fffffff) {
    thunk_FUN_01a4b338();
    *(undefined4 *)(param_1 + 0x2c) = 0;
    local_78[0] = '\0';
    FUN_027e0bd8(param_1,local_78,0);
    uVar2 = *(uint *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    uVar3 = *(uint *)(param_1 + 0x20);
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    uVar11 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar3 & uVar2;
    thunk_FUN_01a4b338();
    uVar11 = uVar11 & 0x7fffffff;
    thunk_FUN_01a4b338();
    *(uint *)(param_1 + 0x14) = uVar11;
    thunk_FUN_01a4b338();
    thunk_FUN_01aa5300(param_1 + 0x2c,1,0);
    if (local_78[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  thunk_FUN_01a4b338();
                    /* try { // try from 02138360 to 02238433 has its CatchHandler @ 02138360
                       catch() { ... } // from try @ 02138360 with catch @ 02138360
                       catch() { ... } // from try @ 021385d4 with catch @ 02138360
                       catch() { ... } // from try @ 0213861c with catch @ 02138360
                       catch() { ... } // from try @ 02138674 with catch @ 02138360
                       catch() { ... } // from try @ 021386dc with catch @ 02138360 */
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar5 = *(int *)(param_1 + 0x20);
    thunk_FUN_01a4b338();
    if ((iVar4 < (int)(uVar11 - 1)) && ((int)uVar11 < iVar5 + iVar4)) {
      plVar9 = *(long **)(param_1 + 0x18);
      thunk_FUN_01a4b338();
      uVar2 = *(uint *)(param_1 + 0x20);
      thunk_FUN_01a4b338();
      ppppuVar1 = (undefined8 ****)local_88;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18) + 0x28)) {
        ppppuVar1 = &local_70;
      }
      memcpy(__dest,ppppuVar1,__n);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = uVar2 & uVar11;
      if (*(uint *)(plVar9 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar2 + 0x20),
             __dest,__n);
      lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      if (*(uint *)(plVar9 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar10,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar2 + 0x20
                   ,__dest);
      thunk_FUN_01a4b338();
      iVar4 = *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x14) = uVar11 + 1;
      goto LAB_02138684;
    }
  }
  thunk_FUN_01a4b338();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_027e0bd8(param_1,local_74,0);
  uVar2 = *(uint *)(param_1 + 0x10);
  thunk_FUN_01a4b338();
  iVar4 = *(int *)(param_1 + 0x20);
  thunk_FUN_01a4b338();
  uVar3 = uVar11 - uVar2;
  if (iVar4 <= (int)uVar3) {
    plVar9 = (long *)(param_1 + 0x18);
    lVar10 = *plVar9;
    thunk_FUN_01a4b338();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8();
    }
    lVar10 = FUN_01ab6a94(lVar6,*(int *)(lVar10 + 0x18) << 1);
    uVar11 = *(uint *)(param_1 + 0x20);
    thunk_FUN_01a4b338();
    lVar6 = *plVar9;
    uVar11 = uVar11 & uVar2;
    if (uVar11 == 0) {
      thunk_FUN_01a4b338();
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar6,0,lVar10,0,*(undefined4 *)(lVar8 + 0x18),0);
    }
    else {
      thunk_FUN_01a4b338();
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar6,uVar11,lVar10,0,*(int *)(lVar8 + 0x18) - uVar11,0);
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      lVar6 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar8,0,lVar10,*(int *)(lVar6 + 0x18) - uVar11,uVar11,0);
    }
    thunk_FUN_01a4b338();
    *plVar9 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar10);
    thunk_FUN_01a4b338();
    *(undefined4 *)(param_1 + 0x10) = 0;
    thunk_FUN_01a4b338();
    iVar4 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x14) = uVar3;
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    *(uint *)(param_1 + 0x20) = iVar4 << 1 | 1;
    uVar11 = uVar3;
  }
  plVar9 = *(long **)(param_1 + 0x18);
  thunk_FUN_01a4b338();
  uVar2 = *(uint *)(param_1 + 0x20);
  thunk_FUN_01a4b338();
  ppppuVar1 = (undefined8 ****)local_88;
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18) + 0x28)) {
    ppppuVar1 = &local_70;
  }
  memcpy(__dest,ppppuVar1,__n);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = uVar2 & uVar11;
  if (*(uint *)(plVar9 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar2 + 0x20),__dest
         ,__n);
  lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  if (*(uint *)(plVar9 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  FUN_01ab6954(lVar10,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar2 + 0x20,
               __dest);
  thunk_FUN_01a4b338();
  *(uint *)(param_1 + 0x14) = uVar11 + 1;
  if (uVar3 == 0) {
    thunk_FUN_01aa5278(local_90,0);
  }
  iVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x24) = iVar4;
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_02138684:
  if (iVar4 == 0x7fffffff) {
    uVar7 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,param_4);
  }
  *(int *)(param_1 + 0x24) = iVar4 + 1;
  thunk_FUN_01a4b338();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


