/*
FUNCTION_NAME: OVRTask.TaskSource<__Il2CppFullySharedGenericType>$$OVRObjectPool.IPoolObject.OnReturn
ENTRY_POINT: 01fa15dc
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


/* WARNING: Removing unreachable block (ram,0x01fa1a14) */

void OVRTask_TaskSource<__Il2CppFullySharedGenericType>__OVRObjectPool_IPoolObject_OnReturn
               (undefined8 ****param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  void *__dest;
  ulong __n;
  void *__s;
  void *__s_00;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 ***local_88;
  long local_80;
  undefined1 local_78 [4];
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  plVar5 = *(long **)(param_4 + 0x38);
  local_90 = param_3;
  local_88 = param_1;
  local_70 = param_1;
  if (plVar5 == (long *)0x0) {
    FUN_01ab69ac(PTR_DAT_03cc9c48);
    FUN_01ab69ac(PTR_DAT_03cc9c30);
    FUN_01ab69ac(PTR_DAT_03cc0af8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc4bb8);
    plVar5 = *(long **)(param_4 + 0x38);
    if (plVar5 == (long *)0x0) {
      FUN_01a47054(param_4);
      plVar5 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)&local_a0 - uVar8);
  __s_00 = (void *)((long)__dest - uVar8);
  local_78[0] = 0;
  memset(__s_00,0,__n);
  pvVar10 = (void *)((long)__s_00 - uVar8);
  memset(pvVar10,0,__n);
  __s = (void *)((long)pvVar10 - uVar8);
  memset(__s,0,__n);
  pvVar3 = (void *)((long)__s - uVar8);
  local_98 = pvVar3;
  memset(pvVar3,0,__n);
  pvVar3 = (void *)((long)pvVar3 - uVar8);
  memset(pvVar3,0,__n);
  puVar2 = PTR_DAT_03cc0af8;
  lVar4 = *(long *)PTR_DAT_03cc0af8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
  }
  plVar5 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar5 == (long *)0x0) goto LAB_01fa19e0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = *(undefined8 *)PTR_DAT_03cc9c30;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  local_a0 = FUN_0277b678(uVar12,0);
  local_74[0] = '\0';
  FUN_027e0bd8(local_a0,local_74,0);
  plVar13 = *(long **)(param_4 + 0x38);
  ppppuVar1 = (undefined8 ****)local_88;
  if (-1 < *(int *)(*plVar13 + 0x28)) {
    ppppuVar1 = &local_70;
  }
  memcpy(__dest,ppppuVar1,__n);
  uVar8 = FUN_01ab6bfc(*plVar13,__dest);
  if ((uVar8 & 1) == 0) {
    local_78[0] = 0;
    if (param_2 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    }
    lVar9 = *plVar5;
    lVar11 = *(long *)PTR_DAT_03cc9c48;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar6 = *(long *)PTR_DAT_03cc4bb8;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar4 = lVar9 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1998;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    lVar4 = FUN_01a472ec(plVar5);
LAB_01fa1998:
    lVar4 = thunk_FUN_01a41d84(*(undefined8 *)(lVar4 + 8),lVar11);
    (**(code **)(lVar4 + 8))(plVar5,0,local_90,local_78,lVar6,lVar4);
  }
  else {
    ppppuVar1 = (undefined8 ****)local_88;
    if (-1 < *(int *)(**(long **)(param_4 + 0x38) + 0x28)) {
      ppppuVar1 = &local_70;
    }
    if (param_2 == (long *)0x0) {
      memcpy(pvVar10,ppppuVar1,__n);
      memcpy(__s,pvVar10,__n);
LAB_01fa186c:
      pvVar10 = local_98;
      memcpy(pvVar3,__s,__n);
      lVar4 = *(long *)PTR_DAT_03cc4bb8;
      __s = pvVar3;
    }
    else {
      memcpy(__s_00,ppppuVar1,__n);
      lVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      memcpy(__s,__s_00,__n);
      pvVar10 = local_98;
      if (lVar4 == 0) goto LAB_01fa186c;
    }
    memcpy(pvVar10,__s,__n);
    lVar6 = *plVar5;
    lVar9 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1958;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01a472ec(plVar5);
LAB_01fa1958:
    lVar6 = thunk_FUN_01a41d84(*(undefined8 *)(lVar6 + 8),lVar9);
    (**(code **)(lVar6 + 8))(plVar5,0,local_90,pvVar10,lVar4,lVar6);
  }
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_a0,0);
  }
LAB_01fa19e0:
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


