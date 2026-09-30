/*
FUNCTION_NAME: FUN_02993f54
ENTRY_POINT: 02993f54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x029946b0) */
/* WARNING: Removing unreachable block (ram,0x029945ac) */
/* WARNING: Removing unreachable block (ram,0x029945b0) */
/* WARNING: Removing unreachable block (ram,0x02994724) */

void FUN_02993f54(long param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int local_80;
  int local_7c;
  char local_78 [4];
  int local_74;
  char local_70 [4];
  undefined4 local_6c;
  int local_68;
  byte local_64 [4];
  undefined2 local_58 [2];
  uint local_54;
  
  if ((DAT_04127ce2 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07ad0);
    FUN_01ab69ac(PTR_DAT_03cca318);
    FUN_01ab69ac(PTR_DAT_03d078d8);
    FUN_01ab69ac(PTR_DAT_03cc9f98);
    FUN_01ab69ac(PTR_DAT_03cc4ad8);
    FUN_01ab69ac(PTR_DAT_03d07bc0);
    FUN_01ab69ac(PTR_DAT_03d07bc8);
    FUN_01ab69ac(PTR_DAT_03d07bd0);
    FUN_01ab69ac(PTR_DAT_03d07bd8);
    FUN_01ab69ac(PTR_DAT_03d07be0);
    FUN_01ab69ac(PTR_DAT_03d07be8);
    DAT_04127ce2 = 1;
  }
  local_58[0] = 0;
  local_64[0] = 0;
  local_6c = 0;
  local_68 = 0;
  local_70[0] = '\0';
  local_74 = 0;
  local_78[0] = '\0';
  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  puVar3 = PTR_DAT_03cca318;
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  local_54 = 0;
  if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_029a2920(local_58,param_2,&local_54,0);
  uVar13 = local_54 + 1;
  if (param_2 == 0) {
    local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(param_2 + 0x18) <= local_54) {
    local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  cVar1 = *(char *)(param_2 + (int)local_54 + 0x20);
  if (cVar1 == '\x01') {
    if (*(long *)(param_1 + 0x10) == 0) {
      local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x100) == 0) {
      return;
    }
    local_54 = uVar13;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(&local_68,param_2,&local_54,0);
    uVar13 = local_54;
    if (local_68 != *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      return;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x100);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d07ad0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0299431c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03d07ad0,2);
LAB_0299431c:
    param_2 = (*(code *)*puVar6)(plVar11,param_2,uVar13,param_3 - uVar13,param_2,&local_6c,puVar6[1]
                                );
    if (*(char *)(param_1 + 0x184) == '\0') {
      uVar12 = *(undefined8 *)(param_1 + 0x158);
      local_70[0] = '\0';
      FUN_027e0bd8(uVar12,local_70,0);
      *(undefined1 *)(param_1 + 0x184) = 1;
      *(undefined4 *)(param_1 + 0x198) = 0;
      if (local_70[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
      }
    }
    local_54 = 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    local_64[0] = *(byte *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(param_1 + 0x180,param_2,&local_54,0);
    lVar8 = *(long *)(param_1 + 0x98) + (long)param_3;
  }
  else {
    if (*(char *)(param_1 + 0x184) != '\0') {
      if (*(long *)(param_1 + 0x10) == 0) {
        local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 2) {
        return;
      }
      local_54 = uVar13;
      FUN_0298e564(param_1,2,*(undefined8 *)PTR_DAT_03d07be8);
      return;
    }
    local_54 = local_54 + 2;
    if (*(uint *)(param_2 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    local_64[0] = *(byte *)(param_2 + (int)uVar13 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(param_1 + 0x180,param_2,&local_54,0);
    FUN_029a288c(&local_68,param_2,&local_54,0);
    if (local_68 != *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if (*(char *)(param_1 + 0x40) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 5) {
          return;
        }
        uVar12 = FUN_0276793c(&local_68,0);
        uVar7 = FUN_0276793c(param_1 + 0x174,0);
        uVar12 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d07bc8,uVar12,*(undefined8 *)PTR_DAT_03d07bd8
                              ,uVar7,0);
        FUN_0298e564(param_1,5,uVar12);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (cVar1 == -0x34) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_029a288c(&local_74,param_2,&local_54,0);
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 4;
      local_54 = local_54 - 4;
      FUN_029a25d0(0,param_2,&local_54,0);
      if (*(int *)(*(long *)PTR_DAT_03cc9f98 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar5 = FUN_029be0d0(param_2,param_3,0);
      if (local_74 != iVar5) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        puVar3 = PTR_DAT_03cc4ad8;
        if (*(char *)(param_1 + 0x40) == '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 3) {
            return;
          }
          local_7c = local_74;
          uVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_7c);
          local_80 = iVar5;
          uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&local_80);
          uVar12 = FUN_025be86c(*(undefined8 *)PTR_DAT_03d07be0,uVar12,uVar7,0);
          FUN_0298e564(param_1,3,uVar12);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    lVar8 = *(long *)(param_1 + 0x98) + 0xc;
  }
  *(long *)(param_1 + 0x98) = lVar8;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar9 = FUN_0299ec14(*(long *)(param_1 + 0x10),0);
  if ((uVar9 & 1) == 0) {
    if (local_64[0] != 0) goto LAB_0299441c;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    *(uint *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + (uint)local_64[0];
    if (local_64[0] != 0) {
LAB_0299441c:
      if ((int)(uint)local_64[0] <= *(int *)(param_1 + 0x170)) goto LAB_02994484;
    }
  }
  uVar12 = FUN_026b7320(local_64,0);
  uVar7 = FUN_0276793c(param_1 + 0x170,0);
  uVar12 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d07bc0,uVar12,*(undefined8 *)PTR_DAT_03d07bd0,uVar7
                        ,0);
  FUN_0298e564(param_1,1,uVar12);
  if (local_64[0] == 0) {
    return;
  }
LAB_02994484:
  puVar3 = PTR_DAT_03d078d8;
  bVar2 = false;
  uVar13 = 0;
  do {
    if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_02994944(*(long *)(param_1 + 0x120),param_1,param_2,&local_54);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(char *)(lVar8 + 0x11) == '\x01') || (*(char *)(lVar8 + 0x11) == '\x10')) {
      FUN_0298f414(param_1,lVar8);
      bVar2 = true;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      local_78[0] = '\0';
      FUN_027e0bd8(uVar12,local_78,0);
      if (*(long *)(param_1 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02265dfc(*(long *)(param_1 + 0x1a8),lVar8,*(undefined8 *)puVar3);
      if (local_78[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
      }
    }
    if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
      FUN_02993d14(param_1,lVar8,*(undefined4 *)(param_1 + 0x180));
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = FUN_0299ec14(*(long *)(param_1 + 0x10),0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
        uVar4 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined4 *)(lVar8 + 0x40) = uVar4;
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_029bf178(lVar8,0x14,0);
      }
    }
    uVar13 = uVar13 + 1;
    if (local_64[0] <= uVar13) {
      if (bVar2) {
        thunk_FUN_01aa519c(param_1 + 0x130,1,0,0);
      }
      return;
    }
  } while( true );
}


