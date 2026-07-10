/*
FUNCTION_NAME: System.Threading.ManualResetEventSlim$$Wait
ENTRY_POINT: 030c9bfc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x030c9fe0) */
/* WARNING: Removing unreachable block (ram,0x030ca030) */

byte System_Threading_ManualResetEventSlim__Wait(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  undefined8 uVar13;
  long local_b8;
  char *pcStack_b0;
  undefined8 *local_a8;
  char local_9c [4];
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_6c;
  long local_68;
  undefined8 uStack_58;
  
  puVar1 = PTR_System_Threading_CancellationToken_TypeInfo_03cb7438;
  local_68 = param_1;
  uStack_58 = param_3;
  if ((DAT_03ef419c & 1) == 0) {
    FUN_01c5c92c(PTR_System_Threading_CancellationToken_TypeInfo_03cb7438);
    FUN_01c5c92c(PTR_System_Threading_ManualResetEventSlim_TypeInfo_03cc2b28);
    FUN_01c5c92c(PTR_System_Threading_SpinWait_TypeInfo_03cb7ef8);
    DAT_03ef419c = 1;
  }
  local_6c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_9c[0] = '\0';
  System_Threading_ManualResetEventSlim__ThrowIfDisposed(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
  lVar3 = local_68;
  if ((int)param_2 < -1) {
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar13 = thunk_FUN_01c8fc48();
    uVar10 = thunk_FUN_01cb9718(PTR_StringLiteral_9103_03cc2b68);
    System_ArgumentOutOfRangeException___ctor(uVar13,uVar10,0);
    uVar10 = thunk_FUN_01cb9718(PTR_Method_System_Threading_ManualResetEventSlim_Wait___03cc2b70);
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar13,uVar10);
  }
  uVar8 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar8 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 0xffffffff) {
      iVar5 = 0;
    }
    else {
      iVar5 = System_Environment__get_TickCount(0);
    }
    iVar6 = System_Threading_ManualResetEventSlim__get_SpinCount(lVar3);
    puVar2 = PTR_System_Threading_SpinWait_TypeInfo_03cb7ef8;
    iVar7 = 0;
    local_6c = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar3 = local_68;
      if (iVar6 <= iVar7) {
        System_Threading_ManualResetEventSlim__EnsureLockObjectCreated(local_68);
        puVar2 = PTR_System_Threading_ManualResetEventSlim_TypeInfo_03cc2b28;
        lVar9 = *(long *)PTR_System_Threading_ManualResetEventSlim_TypeInfo_03cc2b28;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar9 = *(long *)puVar2;
        }
        uVar13 = **(undefined8 **)(lVar9 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar1);
        }
        System_Threading_CancellationToken__InternalRegisterWithoutEC
                  (&local_b8,&uStack_58,uVar13,lVar3);
        local_80 = local_a8;
        uVar13 = *(undefined8 *)(local_68 + 0x10);
        uStack_88 = pcStack_b0;
        local_90 = local_b8;
        thunk_FUN_01c6a2b8();
        pcStack_b0 = local_9c;
        local_b8 = 0;
        local_a8 = &local_98;
        local_9c[0] = '\0';
        local_98 = uVar13;
        System_Threading_Monitor__Enter(uVar13,local_9c);
        uVar12 = param_2;
        goto LAB_030c9e54;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      System_Threading_SpinWait__SpinOnce(&local_6c,0x28);
      uVar8 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
      if ((uVar8 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      iVar7 = local_6c;
      if (99 < local_6c) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        if (((uint)(iVar7 * -0x33333333) >> 1 | iVar7 * -0x80000000) < 0x1999999a) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
        }
      }
    }
  }
  return 1;
LAB_030c9e54:
  uVar8 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar8 & 1) != 0) {
    iVar7 = 5;
LAB_030c9f5c:
    bVar4 = iVar7 != 0xe;
    bVar11 = 0;
LAB_030c9f8c:
    if (*pcStack_b0 != '\0') {
      FUN_01c69dc0(*local_a8);
    }
    if (local_b8 == 0) {
      System_Threading_CancellationTokenRegistration__Dispose(&local_90);
      return bVar4 | bVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbcc();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
  if (param_2 != 0xffffffff) {
    iVar6 = System_Environment__get_TickCount(0);
    iVar7 = 0xe;
    if ((iVar6 - iVar5 < 0) || (uVar12 = param_2 - (iVar6 - iVar5), (int)uVar12 < 1))
    goto LAB_030c9f5c;
    uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  }
  iVar7 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
  System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar7 + 1);
  uVar8 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar8 & 1) != 0) {
    iVar5 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
    System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar5 + -1);
    bVar4 = false;
    bVar11 = 1;
    goto LAB_030c9f8c;
  }
  uVar13 = *(undefined8 *)(local_68 + 0x10);
  thunk_FUN_01c6a2b8();
  uVar8 = System_Threading_Monitor__Wait(uVar13,uVar12,0);
  iVar7 = 0xb;
  if ((uVar8 & 1) == 0) {
    iVar7 = 0xe;
  }
  iVar6 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
  System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar6 + -1);
  if ((iVar7 != 0xb) && (iVar7 != 0)) goto LAB_030c9f5c;
  goto LAB_030c9e54;
}


