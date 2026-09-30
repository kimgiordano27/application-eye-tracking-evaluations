/*
FUNCTION_NAME: FUN_020a0248
ENTRY_POINT: 020a0248
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_020a0248(long *param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                 long param_6)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long local_90;
  void *local_88;
  ulong uStack_80;
  long local_78;
  long *local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  if ((DAT_04121dec & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7348);
    FUN_01ab69ac(PTR_DAT_03cd7350);
    FUN_01ab69ac(PTR_DAT_03cd7358);
    FUN_01ab69ac(PTR_DAT_03cd7360);
    DAT_04121dec = 1;
  }
  lVar13 = *(long *)(param_6 + 0x20);
  uVar1 = *(ushort *)(lVar13 + 0x135);
  lVar3 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = FUN_01a46ff8(lVar13);
    uVar1 = *(ushort *)(*(long *)(param_6 + 0x20) + 0x135);
    lVar3 = *(long *)(param_6 + 0x20);
  }
  uStack_80 = (ulong)*(uint *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x30) + 0xfc);
  uVar8 = uStack_80 + 0xf & 0x1fffffff0;
  lVar13 = (long)&local_90 - uVar8;
  local_88 = (void *)(lVar13 - uVar8);
  memset(local_88,0,uStack_80);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_01a46ff8(lVar3);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar3 = thunk_FUN_01a89e68();
  lVar7 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8(lVar7);
  }
  FUN_0201fd30(lVar3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar14 = (long *)(lVar3 + 0x10);
  *plVar14 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,param_2);
  plVar15 = (long *)(lVar3 + 0x18);
  *plVar15 = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15,param_3);
  if (param_1 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar6 = PTR_DAT_03cd7368;
  }
  else {
    if ((*plVar14 != 0) || (*plVar15 != 0)) {
      FUN_025c97a0(param_5,1,0);
      lVar7 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      local_90 = lVar13;
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      puVar6 = PTR_DAT_03cd7350;
      uVar4 = thunk_FUN_01a89e68();
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8(*(long *)(param_6 + 0x20));
      }
      FUN_020a18e8(uVar4,param_4,param_5);
      puVar12 = (undefined8 *)(lVar3 + 0x20);
      *puVar12 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar4);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_027ecd3c(0);
      if ((uVar8 & 1) != 0) {
        uVar10 = *puVar12;
        uVar11 = *(undefined8 *)PTR_DAT_03cd7360;
        uVar4 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        uVar4 = FUN_025b1328(uVar11,uVar4,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar6);
        }
        FUN_027ecd44(0,uVar10,uVar4,0,0);
      }
      uVar4 = *puVar12;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c6a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04121c6a = '\x01';
      }
      puVar2 = PTR_DAT_03cc0330;
      lVar13 = *(long *)PTR_DAT_03cc0330;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_03cd7348;
      if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin__GetCurrentDetachedInteractionProfile(uVar4,0);
      }
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      lVar13 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01a46ff8();
      }
      FUN_026b4574(uVar4,lVar3,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x80),0);
      (*(code *)param_1[3])(param_1[8],uVar4,param_4,&local_70,param_1[5]);
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
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_020a0604;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(local_70,*(long *)PTR_DAT_03cd7358,3);
LAB_020a0604:
      uVar8 = (*(code *)*puVar5)(local_70,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        lVar3 = *(long *)(param_6 + 0x20);
        lVar7 = *plVar14;
        lVar13 = *plVar15;
        uVar4 = *puVar12;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        FUN_0209ff88(local_70,lVar7,lVar13,uVar4,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88));
      }
      if (*(long *)(local_78 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(*puVar12);
      }
      return;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar6 = PTR_DAT_03cd7378;
  }
  uVar10 = thunk_FUN_01a6ca08(puVar6);
  FUN_026a44fc(uVar4,uVar10,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,param_6);
}


