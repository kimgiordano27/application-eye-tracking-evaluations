/*
FUNCTION_NAME: FUN_01c71e60
ENTRY_POINT: 01c71e60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c720dc) */
/* WARNING: Removing unreachable block (ram,0x01c72014) */
/* WARNING: Removing unreachable block (ram,0x01c72044) */
/* WARNING: Removing unreachable block (ram,0x01c720ec) */
/* WARNING: Removing unreachable block (ram,0x01c720f4) */
/* WARNING: Removing unreachable block (ram,0x01c72068) */

void FUN_01c71e60(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  
  if ((DAT_0411f8a5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4fb0);
    FUN_01ab69ac(PTR_DAT_03cc4fb8);
    FUN_01ab69ac(PTR_DAT_03cc4fc0);
    FUN_01ab69ac(PTR_DAT_03cc4fc8);
    FUN_01ab69ac(PTR_DAT_03cc4fd0);
    FUN_01ab69ac(PTR_DAT_03cc4b18);
    FUN_01ab69ac(PTR_DAT_03cc4fd8);
    DAT_0411f8a5 = 1;
  }
  puVar1 = PTR_DAT_03cc4b18;
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar4 = *(int *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    lVar5 = *(long *)PTR_DAT_03cc4b18;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    uVar6 = FUN_027bcf38(uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
    if ((uVar6 & 1) != 0) {
      if ((param_2 & 1) == 0) {
        if (iVar4 < 0x2de226) {
          FUN_01c72288(*(undefined8 *)(param_1 + 0x40));
        }
        else {
          FUN_01c72304();
        }
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x78);
        local_44[0] = '\0';
        FUN_027e0bd8(uVar8,local_44,0);
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar5 = FUN_0219b4e4(*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_03cc4fb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_020e8ebc(lVar5,&local_78,*(undefined8 *)PTR_DAT_03cc4fd8);
        puVar3 = PTR_DAT_03cc4fd0;
        puVar2 = PTR_DAT_03cc4fc8;
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        while (uVar6 = FUN_021c0c90(&local_60,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          FUN_01bfc044(&local_60,&local_78,*(undefined8 *)puVar3);
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01c714f4();
        }
        FUN_021c0c8c(&local_60,*(undefined8 *)PTR_DAT_03cc4fc0);
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219c0c4(*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_03cc4fb0);
        if (local_44[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
        }
        if (iVar4 < 0x2de226) {
          iVar4 = FUN_01c72288(*(undefined8 *)(param_1 + 0x40));
        }
        else {
          iVar4 = FUN_01c72304();
        }
        if (iVar4 != 0) {
          uVar8 = FUN_01c72380(*(undefined8 *)(param_1 + 0x40));
          uVar8 = FUN_01c6c09c(iVar4,uVar8);
          uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4fe0);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,uVar7);
        }
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x40) = uVar8;
    }
  }
  return;
}


