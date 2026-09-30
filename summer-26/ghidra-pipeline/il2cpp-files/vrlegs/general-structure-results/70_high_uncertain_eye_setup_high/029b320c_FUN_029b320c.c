/*
FUNCTION_NAME: FUN_029b320c
ENTRY_POINT: 029b320c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b3d80) */

void FUN_029b320c(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  char local_6c [4];
  undefined4 local_68;
  uint uStack_64;
  
  puVar3 = PTR_DAT_03ccaef8;
  puVar2 = PTR_DAT_03cbfb98;
  if ((DAT_04127da5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03ccaef8);
    FUN_01ab69ac(PTR_DAT_03d085b8);
    FUN_01ab69ac(PTR_DAT_03d085c0);
    FUN_01ab69ac(PTR_DAT_03d085c8);
    DAT_04127da5 = 1;
  }
  puVar6 = PTR_DAT_03d085c8;
  puVar5 = PTR_DAT_03d085c0;
  puVar4 = PTR_DAT_03d085b8;
  local_68 = 0;
  uStack_64 = 0;
  local_6c[0] = '\0';
  uVar7 = FUN_02995e60(param_1,0);
  lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_029b3e24(lVar10,uVar7);
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar2,9);
  puVar2 = PTR_DAT_03cdc860;
  while( true ) {
    while( true ) {
      if (*(int *)((long)param_1 + 0x1c) != 2) {
        lVar10 = param_1[0xc];
        local_6c[0] = '\0';
        FUN_027e0bd8(lVar10,local_6c,0);
        if ((*(int *)((long)param_1 + 0x1c) != 0) && (*(int *)((long)param_1 + 0x1c) != 3)) {
          (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        }
        if (local_6c[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
        }
        return;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined4 *)(lVar10 + 0x14) = 0;
      FUN_029bb694(lVar10,0);
      if (*(int *)(lVar10 + 0x14) < *(int *)(lVar10 + 0x10)) {
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x14);
      }
      iVar17 = 0;
      while (iVar17 < 9) {
        if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar8 = FUN_02ebc138(param_1[0xb],lVar11,iVar17,9 - iVar17,0,0);
        iVar17 = iVar8 + iVar17;
        if (iVar8 == 0) {
          thunk_FUN_01a6ca08(puVar2);
          uVar12 = thunk_FUN_01a89e68();
          FUN_02ec8664(uVar12,0x2746,0);
          uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,uVar13);
        }
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar16 = (uint)*(undefined8 *)(lVar11 + 0x18);
      if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(char *)(lVar11 + 0x20) != -0x10) break;
      FUN_0299686c(param_1,lVar11,*(undefined8 *)(lVar11 + 0x18),1,0);
    }
    if (uVar16 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (uVar16 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (uVar16 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (uVar16 == 4) break;
    uStack_64 = (uint)*(byte *)(lVar11 + 0x21) << 0x18 | (uint)*(byte *)(lVar11 + 0x22) << 0x10 |
                (uint)*(byte *)(lVar11 + 0x23) << 8 | (uint)*(byte *)(lVar11 + 0x24);
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar14 = FUN_0298d310(param_1[2],0);
    if ((uVar14 & 1) != 0) {
      if (*(uint *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(char *)(lVar11 + 0x20) == -5) {
        if (*(uint *)(lVar11 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar15 = param_1[2];
        if (*(char *)(lVar11 + 0x26) == '\0') {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar15 = FUN_02994928(lVar15,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(uint *)(lVar15 + 0x2c) = *(int *)(lVar15 + 0x2c) + uStack_64;
          *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + 1;
        }
        else {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar15 = FUN_02994928(lVar15,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(uint *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + uStack_64;
          *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
        }
      }
    }
    uVar14 = FUN_02996dc8(param_1,5,0);
    if ((uVar14 & 1) != 0) {
      uVar12 = FUN_0276793c(&uStack_64,0);
      uVar12 = FUN_025b1328(*(undefined8 *)puVar6,uVar12,0);
      FUN_02996df4(param_1,5,uVar12,0);
    }
    FUN_029bb694(lVar10,uStack_64 - 7);
    FUN_029b3ef8(lVar10,lVar11,7,iVar17 + -7);
    uStack_64 = uStack_64 - 9;
    if (0 < (int)uStack_64) {
      iVar17 = 0;
      do {
        if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar9 = FUN_02ebc138(param_1[0xb],*(undefined8 *)(lVar10 + 0x18),
                             *(undefined4 *)(lVar10 + 0x10),uStack_64 - iVar17,0,0);
        iVar8 = *(int *)(lVar10 + 0x10) + iVar9;
        *(int *)(lVar10 + 0x10) = iVar8;
        if (*(int *)(lVar10 + 0x14) < iVar8) {
          *(int *)(lVar10 + 0x14) = iVar8;
          FUN_029bb694(lVar10);
        }
        if (iVar9 == 0) {
          thunk_FUN_01a6ca08(puVar2);
          uVar12 = thunk_FUN_01a89e68();
          FUN_02ec8664(uVar12,0x2746,0);
          uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,uVar13);
        }
        iVar17 = iVar9 + iVar17;
      } while (iVar17 < (int)uStack_64);
    }
    uVar12 = FUN_029b3f90(lVar10);
    FUN_0299686c(param_1,uVar12,*(undefined4 *)(lVar10 + 0x14),0,0);
    uVar14 = FUN_02996dc8(param_1,5,0);
    if ((uVar14 & 1) != 0) {
      local_68 = *(undefined4 *)(lVar10 + 0x14);
      uVar12 = FUN_0276793c(&local_68,0);
      puVar1 = (undefined8 *)puVar4;
      if (*(int *)(lVar10 + 0x14) != uStack_64 + 2) {
        puVar1 = (undefined8 *)puVar5;
      }
      uVar12 = FUN_025bdc88(*(undefined8 *)puVar6,uVar12,*puVar1,0);
      FUN_02996df4(param_1,5,uVar12,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


