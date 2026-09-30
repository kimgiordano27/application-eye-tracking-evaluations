/*
FUNCTION_NAME: FUN_01fa234c
ENTRY_POINT: 01fa234c
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


/* WARNING: Removing unreachable block (ram,0x01fa2798) */

void FUN_01fa234c(undefined8 ****param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 ****__src;
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  void *__s;
  void *__s_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *__s_01;
  void *__dest;
  ulong __n;
  void *__s_02;
  void *__s_03;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long local_80;
  undefined1 local_78 [4];
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  plVar3 = *(long **)(param_4 + 0x38);
  local_98 = param_3;
  local_90 = param_2;
  local_70 = param_1;
  if (plVar3 == (long *)0x0) {
    FUN_01ab69ac(PTR_DAT_03cc9c48);
    FUN_01ab69ac(PTR_DAT_03cc9c30);
    FUN_01ab69ac(PTR_DAT_03cc0af8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc4bb8);
    plVar3 = *(long **)(param_4 + 0x38);
    if (plVar3 == (long *)0x0) {
      FUN_01a47054(param_4);
      plVar3 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar3 + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)&local_a0 - uVar9);
  __s_03 = (void *)((long)__dest - uVar9);
  local_78[0] = 0;
  memset(__s_03,0,__n);
  __s = (void *)((long)__s_03 - uVar9);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,__n);
  __s_01 = (void *)((long)__s_00 - uVar9);
  memset(__s_01,0,__n);
  __s_02 = (void *)((long)__s_01 - uVar9);
  memset(__s_02,0,__n);
  puVar1 = PTR_DAT_03cc0af8;
  lVar2 = *(long *)PTR_DAT_03cc0af8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  local_88 = (long *)*puVar4;
  if (local_88 == (long *)0x0) goto LAB_01fa2764;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  }
  if (*(byte *)(puVar4 + 1) < 2) goto LAB_01fa2764;
  uVar10 = *(undefined8 *)PTR_DAT_03cc9c30;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  local_a0 = FUN_0277b678(uVar10,0);
  local_74[0] = '\0';
  FUN_027e0bd8(local_a0,local_74,0);
  plVar3 = *(long **)(param_4 + 0x38);
  __src = param_1;
  if (-1 < *(int *)(*plVar3 + 0x28)) {
    __src = &local_70;
  }
  memcpy(__dest,__src,__n);
  uVar9 = FUN_01ab6bfc(*plVar3,__dest);
  plVar3 = local_90;
  if ((uVar9 & 1) == 0) {
    local_78[0] = 0;
    if (local_90 == (long *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*local_90 + 0x168))(local_90,*(undefined8 *)(*local_90 + 0x170));
    }
    plVar3 = local_88;
    lVar7 = *local_88;
    lVar8 = *(long *)PTR_DAT_03cc9c48;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar5 = *(long *)PTR_DAT_03cc4bb8;
    if (lVar2 != 0) {
      lVar5 = lVar2;
    }
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar2 = lVar7 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa271c;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    lVar2 = FUN_01a472ec(local_88);
LAB_01fa271c:
    lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar8);
    (**(code **)(lVar2 + 8))(plVar3,2,local_98,local_78,lVar5,lVar2);
  }
  else {
    if (-1 < *(int *)(**(long **)(param_4 + 0x38) + 0x28)) {
      param_1 = &local_70;
    }
    if (local_90 == (long *)0x0) {
      memcpy(__s,param_1,__n);
      memcpy(__s_00,__s,__n);
LAB_01fa25ec:
      memcpy(__s_02,__s_00,__n);
      lVar2 = *(long *)PTR_DAT_03cc4bb8;
      __s_00 = __s_02;
    }
    else {
      memcpy(__s_03,param_1,__n);
      lVar2 = *plVar3;
      lVar2 = (**(code **)(lVar2 + 0x168))(plVar3,*(undefined8 *)(lVar2 + 0x170));
      memcpy(__s_00,__s_03,__n);
      if (lVar2 == 0) goto LAB_01fa25ec;
    }
    memcpy(__s_01,__s_00,__n);
    plVar3 = local_88;
    lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    lVar5 = *local_88;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa26dc;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    lVar5 = FUN_01a472ec(local_88);
LAB_01fa26dc:
    lVar5 = thunk_FUN_01a41d84(*(undefined8 *)(lVar5 + 8),lVar7);
    (**(code **)(lVar5 + 8))(plVar3,2,local_98,__s_01,lVar2,lVar5);
  }
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_a0,0);
  }
LAB_01fa2764:
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


