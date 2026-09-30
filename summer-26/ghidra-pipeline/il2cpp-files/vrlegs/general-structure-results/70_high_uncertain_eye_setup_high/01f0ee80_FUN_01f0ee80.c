/*
FUNCTION_NAME: FUN_01f0ee80
ENTRY_POINT: 01f0ee80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01f0ee80(long *param_1,long param_2,long param_3,undefined8 ****param_4,undefined8 param_5,
                 undefined4 param_6,long param_7)

{
  undefined8 ****__src;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long local_b0;
  void *local_a8;
  ulong uStack_a0;
  long local_98;
  ulong local_90;
  undefined8 ***local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  long *local_70;
  long local_68;
  
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_4;
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7348);
    FUN_01ab69ac(PTR_DAT_03cd7350);
    FUN_01ab69ac(PTR_DAT_03cd7358);
    FUN_01ab69ac(PTR_DAT_03cd7360);
    if (*(long *)(param_7 + 0x38) == 0) {
      FUN_01a47054(param_7);
    }
  }
  lVar2 = *(long *)(param_7 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  plVar10 = *(long **)(param_7 + 0x38);
  local_90 = (ulong)*(uint *)(plVar10[3] + 0xfc);
  uStack_a0 = (ulong)*(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0xfc);
  puVar9 = (undefined8 *)((long)&local_b0 - (local_90 + 0xf & 0x1fffffff0));
  uVar7 = uStack_a0 + 0xf & 0x1fffffff0;
  lVar2 = (long)puVar9 - uVar7;
  local_a8 = (void *)(lVar2 - uVar7);
  memset(local_a8,0,uStack_a0);
  if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar3 = thunk_FUN_01a89e68();
  FUN_0201fe1c(lVar3,*(undefined8 *)(*(long *)(param_7 + 0x38) + 8));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10 = (long *)(lVar3 + 0x10);
  *plVar10 = param_2;
                    /* try { // try from 01f0efb8 to 0200f2c7 has its CatchHandler @ 01f0efb8
                       catch() { ... } // from try @ 01f0efb8 with catch @ 01f0efb8
                       catch() { ... } // from try @ 01f0f364 with catch @ 01f0efb8
                       catch() { ... } // from try @ 01f0f450 with catch @ 01f0efb8
                       catch() { ... } // from try @ 01f0f488 with catch @ 01f0efb8
                       catch() { ... } // from try @ 01f0f4bc with catch @ 01f0efb8 */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,param_2);
  plVar13 = (long *)(lVar3 + 0x18);
  *plVar13 = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,param_3);
  if (param_1 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    puVar6 = PTR_DAT_03cd7368;
  }
  else {
    if ((*plVar10 != 0) || (*plVar13 != 0)) {
      FUN_025c97a0(param_6,1,0);
      lVar4 = *(long *)(param_7 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar5 = thunk_FUN_01a89e68();
      lVar4 = *(long *)(param_7 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8(lVar4);
      }
      FUN_020a18e8(uVar5,local_80,param_6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x78));
      puVar11 = (undefined8 *)(lVar3 + 0x20);
      *puVar11 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar5);
      puVar6 = PTR_DAT_03cd7350;
      if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      local_b0 = lVar2;
      uVar7 = FUN_027ecd3c(0);
      if ((uVar7 & 1) != 0) {
        uVar12 = *puVar11;
        uVar14 = *(undefined8 *)PTR_DAT_03cd7360;
        uVar5 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        uVar5 = FUN_025b1328(uVar14,uVar5,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar6);
        }
        FUN_027ecd44(0,uVar12,uVar5,0,0);
      }
      uVar5 = *puVar11;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c6a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04121c6a = '\x01';
      }
      puVar1 = PTR_DAT_03cc0330;
      lVar2 = *(long *)PTR_DAT_03cc0330;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin__GetCurrentDetachedInteractionProfile(uVar5,0);
      }
      __src = (undefined8 ****)local_88;
      if (-1 < *(int *)(*(long *)(*(long *)(param_7 + 0x38) + 0x18) + 0x28)) {
        __src = &local_78;
      }
      memcpy(puVar9,__src,local_90);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574(uVar5,lVar3,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x20),0);
      if (-1 < *(int *)(*(long *)(*(long *)(param_7 + 0x38) + 0x18) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      (*(code *)param_1[3])(param_1[8],puVar9,uVar5,local_80,&local_70,param_1[5]);
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *local_70;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cd7358) {
            puVar9 = (undefined8 *)(lVar2 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_01f0f254;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(local_70,*(long *)PTR_DAT_03cd7358,3);
LAB_01f0f254:
      uVar7 = (*(code *)*puVar9)(local_70,puVar9[1]);
      if ((uVar7 & 1) != 0) {
        lVar2 = *(long *)(param_7 + 0x20);
        lVar4 = *plVar10;
        lVar3 = *plVar13;
        uVar5 = *puVar11;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01a46ff8();
        }
        FUN_0209ff88(local_70,lVar4,lVar3,uVar5,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
      }
      if (*(long *)(local_98 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(*puVar11);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    puVar6 = PTR_DAT_03cd7370;
  }
  uVar12 = thunk_FUN_01a6ca08(puVar6);
  FUN_026a44fc(uVar5,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,param_7);
}


