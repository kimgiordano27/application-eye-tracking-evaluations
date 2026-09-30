/*
FUNCTION_NAME: FUN_02799508
ENTRY_POINT: 02799508
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02799894) */

uint FUN_02799508(long param_1,byte *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  byte local_3c [4];
  byte local_38 [4];
  char local_34 [4];
  uint local_28;
  undefined4 local_24;
  
  if ((DAT_04124dd5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfb768);
    FUN_01ab69ac(PTR_DAT_03cfb760);
    FUN_01ab69ac(PTR_DAT_03cfb770);
    FUN_01ab69ac(PTR_DAT_03cfb778);
    DAT_04124dd5 = 1;
  }
  puVar2 = PTR_DAT_03cfb760;
  local_28 = 0;
  local_38[0] = 0;
  local_3c[0] = 0;
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar7 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfb780);
    FUN_026a44fc(uVar7,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfb788);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar5);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf0500);
    uVar7 = FUN_027b3d94(uVar7,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfb780);
    FUN_026a7658(uVar5,uVar7,uVar6,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfb788);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar7);
  }
  lVar3 = *(long *)PTR_DAT_03cfb760;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  cVar1 = *(char *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02799394();
  }
  *param_2 = 0;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = **(undefined8 **)(lVar3 + 0xb8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar7,local_34,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = FUN_0219f8b8(**(long **)(lVar3 + 0xb8),param_1,&local_28,*(undefined8 *)PTR_DAT_03cfb770);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cfb768 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_027b6170(param_1,local_3c,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_24 = 8;
      FUN_0219b83c(**(long **)(lVar3 + 0xb8),param_1,&local_24,*(undefined8 *)PTR_DAT_03cfb778);
      uVar8 = 0;
      uVar9 = 0;
      goto LAB_027997b8;
    }
    *param_2 = local_3c[0];
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_24 = 5;
    if (*param_2 != 0) {
      local_24 = 6;
    }
    FUN_0219b83c(**(long **)(lVar3 + 0xb8),param_1,&local_24,*(undefined8 *)PTR_DAT_03cfb778);
  }
  else {
    if (local_28 == 8) {
      uVar9 = 0;
      *param_2 = 0;
      uVar8 = 1;
      goto LAB_027997b8;
    }
    *param_2 = (byte)(local_28 >> 1) & 1;
    if ((local_28 >> 2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cfb768 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_027b6170(param_1,local_38,0);
      if ((uVar4 & 1) != 0) {
        *param_2 = local_38[0];
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_24 = 5;
      if (*param_2 != 0) {
        local_24 = 6;
      }
      FUN_0219b83c(**(long **)(lVar3 + 0xb8),param_1,&local_24,*(undefined8 *)PTR_DAT_03cfb778);
    }
  }
  uVar8 = 1;
  uVar9 = 1;
LAB_027997b8:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return uVar8 & uVar9;
}


