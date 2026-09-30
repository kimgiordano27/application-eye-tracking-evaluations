/*
FUNCTION_NAME: FUN_027d8bd0
ENTRY_POINT: 027d8bd0
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


/* WARNING: Removing unreachable block (ram,0x027d8fb4) */
/* WARNING: Removing unreachable block (ram,0x027d8f64) */

byte FUN_027d8bd0(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  char local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70 [2];
  undefined8 local_68;
  
  puVar1 = PTR_DAT_03cc9e10;
  local_68 = param_3;
  if ((DAT_0412503e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cfcbe8);
    FUN_01ab69ac(PTR_DAT_03cd9c70);
    DAT_0412503e = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_8c[0] = '\0';
  FUN_027d8258(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d7fa0(&local_68);
  if (param_2 < -1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar9 = thunk_FUN_01a89e68();
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc18);
    FUN_026b3fc8(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc20);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar10);
  }
  uVar7 = FUN_027d8448(param_1);
  if ((uVar7 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = thunk_FUN_01a4a380(0);
    }
    iVar4 = FUN_027d85a4(param_1);
    puVar2 = PTR_DAT_03cd9c70;
    local_70[0] = 0;
    iVar5 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (iVar4 <= iVar5) {
        FUN_027d8974(param_1);
        puVar2 = PTR_DAT_03cfcbe8;
        lVar8 = *(long *)PTR_DAT_03cfcbe8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar2;
        }
        uVar9 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar1);
        }
        FUN_027d7a1c(&local_88,&local_68,uVar9,param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        thunk_FUN_01a4b338();
        local_8c[0] = '\0';
        FUN_027e0bd8(uVar9,local_8c,0);
        iVar5 = param_2;
        goto LAB_027d8de8;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d90e4(local_70,0x28);
      uVar7 = FUN_027d8448(param_1);
      if ((uVar7 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar5 = local_70[0];
      if (99 < local_70[0]) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (((uint)(iVar5 * -0x33333333) >> 1 | iVar5 * -0x80000000) < 0x1999999a) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_027d7fa0(&local_68);
        }
      }
    }
  }
  return 1;
LAB_027d8de8:
  uVar7 = FUN_027d8448(param_1);
  if ((uVar7 & 1) != 0) {
    bVar11 = 0;
    iVar4 = 5;
    goto LAB_027d8f18;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d7fa0(&local_68);
  if (param_2 != -1) {
    iVar5 = thunk_FUN_01a4a380(0);
    bVar11 = 0;
    iVar4 = 0xe;
    if ((iVar5 - iVar3 < 0) || (iVar5 = param_2 - (iVar5 - iVar3), iVar5 < 1)) goto LAB_027d8f18;
  }
  iVar4 = FUN_027d8640(param_1);
  FUN_027d869c(param_1,iVar4 + 1);
  uVar7 = FUN_027d8448(param_1);
  if ((uVar7 & 1) != 0) {
    iVar3 = FUN_027d8640(param_1);
    FUN_027d869c(param_1,iVar3 + -1);
    bVar11 = 1;
    iVar4 = 0xe;
    goto LAB_027d8f18;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  thunk_FUN_01a4b338();
  uVar7 = FUN_027e1070(uVar10,iVar5,0);
  iVar4 = 0xb;
  if ((uVar7 & 1) == 0) {
    iVar4 = 0xe;
  }
  iVar6 = FUN_027d8640(param_1);
  FUN_027d869c(param_1,iVar6 + -1);
  if ((iVar4 != 0xb) && (iVar4 != 0)) {
    bVar11 = 0;
LAB_027d8f18:
    if (local_8c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
    FUN_027d9a54(&local_88);
    return iVar4 != 0xe | bVar11;
  }
  goto LAB_027d8de8;
}


