/*
FUNCTION_NAME: FUN_02225650
ENTRY_POINT: 02225650
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022259ac) */

void FUN_02225650(long param_1,undefined8 ****param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong __n;
  uint uVar12;
  long local_b0 [4];
  char local_8c [4];
  undefined8 ***local_88;
  void *local_80;
  void *pvStack_78;
  int local_6c;
  long local_68;
  
  local_b0[1] = tpidr_el0;
  local_68 = *(long *)(local_b0[1] + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)((long)local_b0 - uVar5);
  __dest = (undefined8 *)((long)__dest_00 - uVar5);
  local_b0[0] = *(long *)(param_1 + 0x10);
  local_8c[0] = '\0';
  local_88 = param_2;
  FUN_027e0bd8(local_b0[0],local_8c,0);
  FUN_02225a3c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  uVar12 = *(uint *)(param_1 + 0x30);
  plVar7 = *(long **)(param_1 + 0x28);
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10) + 0x28)) {
    param_2 = &local_88;
  }
  memcpy(__dest_00,param_2,__n);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar12 + 0x20),
         __dest_00,__n);
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  FUN_01ab6954(lVar3,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar12 + 0x20,
               __dest_00);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  local_b0[2] = param_1;
  local_b0[3] = param_3;
  while (uVar12 != 0) {
    plVar7 = *(long **)(local_b0[2] + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar11 = *(long **)(local_b0[2] + 0x18);
    memcpy(__dest_00,
           (void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar12 + 0x20),__n
          );
    uVar2 = uVar12;
    if (-1 < (int)(uVar12 - 1)) {
      uVar2 = uVar12 - 1;
    }
    uVar1 = (int)uVar2 >> 1;
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    lVar9 = *(long *)(local_b0[3] + 0x20);
    memcpy(__dest,(void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * lVar3 + 0x20),__n);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(lVar9 + 0xc0);
    lVar9 = *(long *)(lVar4 + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8(lVar9);
      lVar4 = *(long *)(*(long *)(local_b0[3] + 0x20) + 0xc0);
    }
    puVar8 = __dest_00;
    puVar10 = __dest;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*__dest_00;
      puVar10 = (undefined8 *)*__dest;
    }
    lVar4 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar9) {
          lVar9 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_022258c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar9 = FUN_01a472ec(plVar11,lVar9,0);
LAB_022258c0:
    lVar9 = *(long *)(lVar9 + 8);
    local_80 = puVar8;
    pvStack_78 = puVar10;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar11,&local_80,&local_6c);
    if (-1 < local_6c) break;
    plVar7 = *(long **)(local_b0[2] + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_02226554((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar12 + 0x20,
                 (long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * lVar3 + 0x20,
                 *(undefined8 *)(*(long *)(*(long *)(local_b0[3] + 0x20) + 0xc0) + 0x90));
    uVar12 = uVar1;
  }
  if (local_8c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_b0[0],0);
  }
  if (*(long *)(local_b0[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


