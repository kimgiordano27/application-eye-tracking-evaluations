/*
FUNCTION_NAME: FUN_02225f20
ENTRY_POINT: 02225f20
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


/* WARNING: Removing unreachable block (ram,0x02226254) */
/* WARNING: Removing unreachable block (ram,0x022262ac) */

void FUN_02225f20(long param_1,void *param_2,long param_3)

{
  long *__src;
  uint uVar1;
  undefined1 *__src_00;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong __n;
  undefined1 *__dest;
  long *plVar7;
  int iVar8;
  undefined1 *__s;
  undefined1 *__dest_00;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 local_90;
  void *local_88;
  long local_80;
  undefined1 *local_78;
  char local_6c [4];
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_a0 + -uVar6;
  __dest_00 = __dest + -uVar6;
  local_98 = __dest_00 + -uVar6;
  __s = local_98 + -uVar6;
  local_88 = param_2;
  memset(__s,0,__n);
  puVar2 = __s + -uVar6;
  local_78 = puVar2;
  memset(puVar2,0,__n);
  puVar2 = puVar2 + -uVar6;
  memset(puVar2,0,__n);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  local_6c[0] = '\0';
  FUN_027e0bd8(local_90,local_6c,0);
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 < 1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar4 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cdbe30);
    FUN_0276a4a8(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,param_3);
  }
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  __src = plVar7 + 4;
  memcpy(__dest,__src,__n);
  memcpy(__s,__dest,__n);
  __src_00 = local_78;
  uVar1 = iVar8 - 1;
  *(uint *)(param_1 + 0x30) = uVar1;
  if (uVar1 == 0) {
    memset(local_78,0,__n);
    memcpy(__dest,__src_00,__n);
    iVar8 = (int)plVar7[3];
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy(__src,__dest,__n);
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
      iVar8 = (int)plVar7[3];
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar3,__src,__dest);
    memcpy(__dest_00,__s,__n);
  }
  else {
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy(__dest,(void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (ulong)uVar1 + 0x20),
           __n);
    iVar8 = (int)plVar7[3];
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy(__src,__dest,__n);
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
      iVar8 = (int)plVar7[3];
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar3,__src,__dest);
    plVar7 = *(long **)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x30);
    memset(puVar2,0,__n);
    memcpy(__dest_00,puVar2,__n);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
           __dest_00,__n);
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar3,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20,
                 __dest_00);
    FUN_02226498(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0));
    FUN_02226390(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
    __dest_00 = local_98;
    memcpy(local_98,__s,__n);
  }
  memcpy(local_78,__dest_00,__n);
  if (local_6c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_90,0);
  }
  memcpy(__dest,local_78,__n);
  memcpy(local_88,__dest,__n);
  if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


