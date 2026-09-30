/*
FUNCTION_NAME: FUN_01f0f518
ENTRY_POINT: 01f0f518
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01f0f518(long *param_1,long param_2,long param_3,undefined8 ****param_4,
                 undefined8 ****param_5,undefined8 param_6,undefined4 param_7,long param_8)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *__dest;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_d0;
  void *local_c8;
  ulong uStack_c0;
  long *local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined8 local_88;
  undefined8 ***local_80;
  undefined8 ***pppuStack_78;
  long *local_70;
  long local_68;
  
  local_b0 = tpidr_el0;
  local_68 = *(long *)(local_b0 + 0x28);
  local_98 = param_4;
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_5;
  pppuStack_78 = param_4;
  if (*(long *)(param_8 + 0x38) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7348);
    FUN_01ab69ac(PTR_DAT_03cd7350);
    FUN_01ab69ac(PTR_DAT_03cd7358);
    FUN_01ab69ac(PTR_DAT_03cd7360);
    if (*(long *)(param_8 + 0x38) == 0) {
      FUN_01a47054(param_8);
    }
  }
  lVar3 = *(long *)(param_8 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  plVar11 = *(long **)(param_8 + 0x38);
  local_a8 = (ulong)*(uint *)(plVar11[3] + 0xfc);
  local_a0 = (ulong)*(uint *)(plVar11[4] + 0xfc);
  uStack_c0 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0xfc);
  puVar10 = (undefined8 *)((long)&local_d0 - (local_a8 + 0xf & 0x1fffffff0));
  uVar8 = uStack_c0 + 0xf & 0x1fffffff0;
  lVar3 = (long)puVar10 - uVar8;
  __dest = (undefined8 *)(lVar3 - (local_a0 + 0xf & 0x1fffffff0));
  local_c8 = (void *)((long)__dest - uVar8);
  memset(local_c8,0,uStack_c0);
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar4 = thunk_FUN_01a89e68();
  FUN_020203fc(lVar4,*(undefined8 *)(*(long *)(param_8 + 0x38) + 8));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar11 = (long *)(lVar4 + 0x10);
  *plVar11 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,param_2);
  local_b8 = (long *)(lVar4 + 0x18);
  *local_b8 = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_b8,param_3);
  if (param_1 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    puVar7 = PTR_DAT_03cd7368;
  }
  else {
    if ((*plVar11 != 0) || (*local_b8 != 0)) {
      FUN_025c97a0(param_7,1,0);
      lVar5 = *(long *)(param_8 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar6 = thunk_FUN_01a89e68();
      lVar5 = *(long *)(param_8 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8(lVar5);
      }
      FUN_020a18e8(uVar6,local_88,param_7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x78));
      puVar12 = (undefined8 *)(lVar4 + 0x20);
      *puVar12 = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar6);
      puVar7 = PTR_DAT_03cd7350;
      if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      local_d0 = lVar3;
      uVar8 = FUN_027ecd3c(0);
      if ((uVar8 & 1) != 0) {
        uVar13 = *puVar12;
        uVar14 = *(undefined8 *)PTR_DAT_03cd7360;
        uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        uVar6 = FUN_025b1328(uVar14,uVar6,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar7);
        }
        FUN_027ecd44(0,uVar13,uVar6,0,0);
      }
      uVar6 = *puVar12;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c6a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04121c6a = '\x01';
      }
      puVar2 = PTR_DAT_03cc0330;
      lVar3 = *(long *)PTR_DAT_03cc0330;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin__GetCurrentDetachedInteractionProfile(uVar6,0);
      }
      lVar3 = *(long *)(param_8 + 0x38);
      ppppuVar1 = (undefined8 ****)local_98;
      if (-1 < *(int *)(*(long *)(lVar3 + 0x18) + 0x28)) {
        ppppuVar1 = &pppuStack_78;
      }
      memcpy(puVar10,ppppuVar1,local_a8);
      ppppuVar1 = (undefined8 ****)local_90;
      if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
        ppppuVar1 = &local_80;
      }
      memcpy(__dest,ppppuVar1,local_a0);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574(uVar6,lVar4,*(undefined8 *)(*(long *)(param_8 + 0x38) + 0x28),0);
      if (-1 < *(int *)(*(long *)(*(long *)(param_8 + 0x38) + 0x18) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      if (-1 < *(int *)(*(long *)(*(long *)(param_8 + 0x38) + 0x20) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      (*(code *)param_1[3])(param_1[8],puVar10,__dest,uVar6,local_88,&local_70,param_1[5]);
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = *local_70;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cd7358) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_01f0f944;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_01a472ec(local_70,*(long *)PTR_DAT_03cd7358,3);
LAB_01f0f944:
      uVar8 = (*(code *)*puVar10)(local_70,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        lVar3 = *(long *)(param_8 + 0x20);
        lVar5 = *plVar11;
        uVar6 = *puVar12;
        lVar4 = *local_b8;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        FUN_0209ff88(local_70,lVar5,lVar4,uVar6,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88));
      }
      if (*(long *)(local_b0 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(*puVar12);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    puVar7 = PTR_DAT_03cd7378;
  }
  uVar13 = thunk_FUN_01a6ca08(puVar7);
  FUN_026a44fc(uVar6,uVar13,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,param_8);
}


