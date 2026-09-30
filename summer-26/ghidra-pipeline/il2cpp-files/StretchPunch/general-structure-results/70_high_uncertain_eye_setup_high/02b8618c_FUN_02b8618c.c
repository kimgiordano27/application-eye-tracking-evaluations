/*
FUNCTION_NAME: FUN_02b8618c
ENTRY_POINT: 02b8618c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02b8618c(long param_1,long *param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  void *__s;
  ulong __n;
  long alStack_b0 [2];
  void *local_a0;
  void *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  local_80 = (ulong)*(uint *)(*(long *)(lVar6 + 0x70) + 0xfc);
  local_88 = (ulong)*(uint *)(*(long *)(lVar6 + 0x78) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0xa8) + 0xfc);
  uVar8 = local_80 + 0xf & 0x1fffffff0;
  local_70 = (undefined8 *)((long)alStack_b0 - uVar8);
  local_98 = (void *)((long)local_70 - uVar8);
  uVar8 = local_88 + 0xf & 0x1fffffff0;
  local_78 = (undefined8 *)((long)local_98 - uVar8);
  local_a0 = (void *)((long)local_78 - uVar8);
  __s = (void *)((long)local_a0 - (__n + 0xf & 0x1fffffff0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  if (*(uint *)(param_2 + 3) < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  }
  alStack_b0[1] = lVar7;
  iVar2 = (*(code *)**(undefined8 **)(lVar6 + 0x128))(param_1);
  if ((int)((int)param_2[3] - param_3) < iVar2) {
    FUN_033b2d60(5,0);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar8 = 0;
    local_90 = __n;
    do {
      if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_02b864ec;
      piVar3 = (int *)thunk_FUN_01dc553c((long)plVar9 + uVar8 * *(uint *)(*plVar9 + 0x104) + 0x20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                    0x68) + 0x80));
      if (-1 < *piVar3) {
        if (*(uint *)(plVar9 + 3) <= uVar8) {
LAB_02b864ec:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        pvVar4 = (void *)thunk_FUN_01dc553c((long)plVar9 + uVar8 * *(uint *)(*plVar9 + 0x104) + 0x20
                                            ,*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x40);
        memcpy(local_70,pvVar4,local_80);
        if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_02b864ec;
        pvVar4 = (void *)thunk_FUN_01dc553c((long)plVar9 + uVar8 * *(uint *)(*plVar9 + 0x104) + 0x20
                                            ,*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x60);
        memcpy(local_78,pvVar4,local_88);
        memset(__s,0,__n);
        pvVar4 = local_98;
        lVar6 = *(long *)(param_4 + 0x20);
        lVar7 = *(long *)(lVar6 + 0xc0);
        if (*(int *)(*(long *)(lVar7 + 0x70) + 0x28) < 0) {
          memcpy(local_98,local_70,local_80);
          lVar7 = *(long *)(lVar6 + 0xc0);
        }
        else {
          pvVar4 = (void *)*local_70;
        }
        pvVar5 = local_a0;
        if (*(int *)(*(long *)(lVar7 + 0x78) + 0x28) < 0) {
          memcpy(local_a0,local_78,local_88);
          lVar7 = *(long *)(lVar6 + 0xc0);
        }
        else {
          pvVar5 = (void *)*local_78;
        }
        FUN_030718bc(__s,pvVar4,pvVar5,*(undefined8 *)(lVar7 + 0x130));
        __n = local_90;
        if (*(uint *)(param_2 + 3) <= param_3) goto LAB_02b864ec;
        lVar6 = (long)(int)param_3;
        memcpy((void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * lVar6 + 0x20),__s,
               local_90);
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01dde7f8();
        }
        if (*(uint *)(param_2 + 3) <= param_3) goto LAB_02b864ec;
        param_3 = param_3 + 1;
        FUN_01d7d8c8(lVar7,(long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * lVar6 + 0x20,__s);
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  if (*(long *)(alStack_b0[1] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


