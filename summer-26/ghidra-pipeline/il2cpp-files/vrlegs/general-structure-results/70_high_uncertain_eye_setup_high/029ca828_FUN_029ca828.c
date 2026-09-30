/*
FUNCTION_NAME: FUN_029ca828
ENTRY_POINT: 029ca828
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029caab0) */
/* WARNING: Removing unreachable block (ram,0x029caac0) */

void FUN_029ca828(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  
  puVar4 = PTR_DAT_03d089a0;
  if ((DAT_04127e0d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cca320);
    FUN_01ab69ac(PTR_DAT_03d089a0);
    FUN_01ab69ac(PTR_DAT_03cc4f30);
    FUN_01ab69ac(PTR_DAT_03cca328);
    FUN_01ab69ac(PTR_DAT_03cc4f48);
    FUN_01ab69ac(PTR_DAT_03cca330);
    DAT_04127e0d = 1;
  }
  lVar5 = *(long *)puVar4;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar4;
  }
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar8,local_44,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar4;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = *(long *)PTR_DAT_03cca328;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  else {
    iVar9 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar9) {
      FUN_02793a34(*(undefined8 *)(lVar5 + 0x10),0,iVar9,0);
    }
  }
  if (param_1 != 0) {
    FUN_0298af6c(&local_98,param_1,0);
    puVar3 = PTR_DAT_03cca330;
    puVar2 = PTR_DAT_03cca320;
    puVar1 = PTR_DAT_03cc4f30;
    uStack_68 = uStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    local_50 = local_78;
    while( true ) {
      do {
        uVar6 = FUN_0298b7ec(&local_70,0);
        if ((uVar6 & 1) == 0) {
          iVar9 = 0;
          FUN_0298b8dc(&local_70,0);
          while( true ) {
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar4;
            }
            lVar7 = **(long **)(lVar5 + 0xb8);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) <= iVar9) {
              if (local_44[0] != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
              }
              return;
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = **(long **)(*(long *)puVar4 + 0xb8);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
            }
            FUN_02215a88(lVar7,iVar9,&local_98,*(undefined8 *)puVar3);
            FUN_0219eaf8(param_1,local_98,*(undefined8 *)puVar2);
            iVar9 = iVar9 + 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        auVar10 = FUN_0298b700(&local_70,0);
      } while (auVar10._8_8_ != 0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar4;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) break;
      FUN_01b5f01c(**(long **)(lVar5 + 0xb8),auVar10._0_8_,*(undefined8 *)puVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


