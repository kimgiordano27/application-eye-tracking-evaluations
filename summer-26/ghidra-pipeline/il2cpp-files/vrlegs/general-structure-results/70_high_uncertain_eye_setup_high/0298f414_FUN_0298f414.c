/*
FUNCTION_NAME: FUN_0298f414
ENTRY_POINT: 0298f414
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298f890) */
/* WARNING: Removing unreachable block (ram,0x029900f0) */

void FUN_0298f414(long *param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  char local_48 [4];
  undefined2 local_44 [2];
  
  if ((DAT_04127ce3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079f0);
    FUN_01ab69ac(PTR_DAT_03d07a70);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03d079d8);
    FUN_01ab69ac(PTR_DAT_03d078d0);
    FUN_01ab69ac(PTR_DAT_03d07920);
    FUN_01ab69ac(PTR_DAT_03d078d8);
    FUN_01ab69ac(PTR_DAT_03ccaef8);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(PTR_DAT_03d07a78);
    FUN_01ab69ac(PTR_DAT_03d07a80);
    FUN_01ab69ac(PTR_DAT_03d07a88);
    FUN_01ab69ac(PTR_DAT_03d07a90);
    FUN_01ab69ac(PTR_DAT_03cc16b8);
    FUN_01ab69ac(PTR_DAT_03d07a98);
    FUN_01ab69ac(PTR_DAT_03d07aa0);
    FUN_01ab69ac(PTR_DAT_03d07aa8);
    FUN_01ab69ac(PTR_DAT_03d07ab0);
    FUN_01ab69ac(PTR_DAT_03d07ab8);
    DAT_04127ce3 = 1;
  }
  local_44[0] = 0;
  local_48[0] = '\0';
  local_58 = 0;
  local_50 = (long *)0x0;
  local_60 = 0;
  if (param_2 == (long *)0x0) goto LAB_029900e8;
  plVar11 = param_2;
  switch(*(undefined1 *)((long)param_2 + 0x11)) {
  case 1:
  case 0x10:
    if (param_1[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(param_1[2],0);
    if ((uVar8 & 1) != 0) {
      if ((param_1[2] == 0) || (param_1[0x18] == 0)) goto LAB_029900e8;
      lVar16 = *(long *)(param_1[2] + 0xa0);
      uVar4 = FUN_02f0ce18(param_1[0x18],0);
      if (lVar16 == 0) goto LAB_029900e8;
      *(undefined4 *)(lVar16 + 0x3c) = uVar4;
      if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
    }
    if (param_1[0x18] == 0) goto LAB_029900e8;
    uVar4 = FUN_02f0ce18(param_1[0x18],0);
    *(undefined4 *)((long)param_1 + 0xcc) = uVar4;
    if (param_1[0x18] == 0) goto LAB_029900e8;
    iVar5 = FUN_02f0ce18(param_1[0x18],0);
    uVar2 = iVar5 - (int)param_2[10];
    puVar18 = (uint *)((long)param_1 + 0x7c);
    *puVar18 = uVar2;
    if (10000 < uVar2) {
      if (param_1[2] == 0) goto LAB_029900e8;
      if (2 < *(byte *)(param_1[2] + 0x40)) {
        uVar9 = FUN_0276793c(puVar18,0);
        uVar17 = *(undefined8 *)PTR_DAT_03d07ab8;
        uVar19 = *(undefined8 *)PTR_DAT_03d07aa0;
        uVar10 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar9 = FUN_025be45c(uVar19,uVar9,uVar17,uVar10,0);
        FUN_0298e564(param_1,3,uVar9);
      }
      *(int *)((long)param_1 + 0x7c) = *(int *)((long)param_1 + 0x74) << 2;
    }
    plVar11 = (long *)FUN_02994b04(param_1,*(undefined4 *)((long)param_2 + 0x4c),
                                   *(undefined1 *)((long)param_2 + 0x12),
                                   *(char *)((long)param_2 + 0x11) == '\x10');
    FUN_02990210(param_2);
    if (plVar11 == (long *)0x0) {
      return;
    }
    FUN_029901a4(plVar11);
    lVar16 = FUN_0298d23c(param_1,*(undefined1 *)((long)plVar11 + 0x12));
    local_48[0] = '\0';
    FUN_027e0bd8(lVar16,local_48,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar16 + 0x68) < *(int *)((long)plVar11 + 0x14)) {
      *(int *)(lVar16 + 0x68) = *(int *)((long)plVar11 + 0x14);
    }
    *(int *)(lVar16 + 0x6c) = *(int *)(lVar16 + 0x6c) + -1;
    if (local_48[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar16,0);
    }
    uVar2 = *puVar18;
    if (*(char *)((long)plVar11 + 0x11) == '\f') {
      if (*(int *)((long)param_1 + 0x74) < (int)uVar2) {
        (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      }
      else {
        if (param_1[0x18] == 0) goto LAB_029900e8;
        lVar16 = param_1[0x30];
        iVar5 = FUN_02f0ce18(param_1[0x18],0);
        *(int *)((long)param_1 + 0x6c) = ((int)lVar16 + ((int)uVar2 >> 1)) - iVar5;
        *(undefined1 *)(param_1 + 0xe) = 1;
      }
    }
    else {
      FUN_02994e98(param_1,uVar2);
      if (*(char *)((long)plVar11 + 0x11) == '\x02') {
        uVar2 = *puVar18;
        if (-1 < (int)uVar2) {
          if ((int)uVar2 < 0x10) {
            *(undefined8 *)((long)param_1 + 0x74) = DAT_00d386d8;
          }
          else {
            *(uint *)((long)param_1 + 0x74) = uVar2;
          }
        }
      }
      else if ((*(char *)((long)plVar11 + 0x11) == '\x04') && ((char)param_1[8] == '\x04')) {
        if (param_1[2] == 0) goto LAB_029900e8;
        if (2 < *(byte *)(param_1[2] + 0x40)) {
          FUN_0298e564(param_1,3,*(undefined8 *)PTR_DAT_03d07a80);
        }
        uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d079d8);
        FUN_0299c3f0(uVar9,param_1,*(undefined8 *)PTR_DAT_03d07a70,0);
        FUN_02994f0c(param_1,uVar9);
      }
    }
    break;
  case 2:
  case 5:
    if (param_1[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(param_1[2],0);
    if ((uVar8 & 1) != 0) {
      if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
    }
    break;
  case 3:
    if (param_1[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(param_1[2],0);
    if ((uVar8 & 1) != 0) {
      if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
    }
    if ((char)param_1[8] == '\x01') {
      uVar9 = FUN_029957f4(param_1);
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
      FUN_029bb504(uVar10,uVar9,0);
      FUN_0298e708(param_1,6,uVar10,0);
      if (param_1[2] == 0) goto LAB_029900e8;
      if (*(char *)(param_1[2] + 0x8d) != '\0') {
        FUN_0298d084(param_1);
      }
      *(undefined1 *)(param_1 + 8) = 3;
    }
    break;
  case 4:
    if (param_1[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(param_1[2],0);
    if ((uVar8 & 1) != 0) {
      if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
    }
    cVar1 = (char)param_2[4];
    if (cVar1 == '\x01') {
      uVar4 = 0x413;
    }
    else if (cVar1 == '\x02') {
      uVar4 = 0x411;
    }
    else {
      uVar4 = 0x412;
      if (cVar1 != '\x03') {
        uVar4 = 0x414;
      }
    }
    lVar16 = param_1[2];
    if (lVar16 == 0) goto LAB_029900e8;
    if (2 < *(byte *)(lVar16 + 0x40)) {
      plVar15 = *(long **)(lVar16 + 0x48);
      lVar16 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,0xc);
      if (lVar16 == 0) goto LAB_029900e8;
      if (*(int *)(lVar16 + 0x18) == 0) {
LAB_029900ec:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)PTR_DAT_03d07a98;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x20));
      if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_029900ec;
      *(long *)(lVar16 + 0x28) = param_1[6];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar16 + 0x28));
      if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)PTR_DAT_03d07ab0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x30));
      local_44[0] = (undefined2)param_1[0xd];
      uVar9 = FUN_0278c624(local_44,0);
      if (*(uint *)(lVar16 + 0x18) < 4) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x38) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x38),uVar9);
      if (*(uint *)(lVar16 + 0x18) < 5) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)PTR_DAT_03d07aa8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x40));
      uVar9 = FUN_0276793c((long)param_1 + 0x74,0);
      if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x48) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x48),uVar9);
      if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)PTR_DAT_03cc16b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x50));
      uVar9 = FUN_0276793c(param_1 + 0xf,0);
      if (*(uint *)(lVar16 + 0x18) < 8) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x58) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x58),uVar9);
      if (*(uint *)(lVar16 + 0x18) < 9) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)PTR_DAT_03d07a78;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x60));
      uVar9 = FUN_026b7320(param_2 + 4,0);
      if (*(uint *)(lVar16 + 0x18) < 10) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x68) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x68),uVar9);
      if (*(uint *)(lVar16 + 0x18) < 0xb) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)PTR_DAT_03d07a90;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar16 + 0x70));
      local_78 = *(undefined8 *)PTR_DAT_03d079f0;
      uStack_70 = 0xffffffffffffffff;
      local_68 = (undefined1)param_1[8];
      uVar9 = FUN_027a62b8(&local_78,0);
      if (*(uint *)(lVar16 + 0x18) < 0xc) goto LAB_029900ec;
      *(undefined8 *)(lVar16 + 0x78) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar9 = FUN_025be564(lVar16,0);
      if (plVar15 == (long *)0x0) goto LAB_029900e8;
      lVar16 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cca060) {
            puVar7 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0298fd7c;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)PTR_DAT_03cca060,0);
LAB_0298fd7c:
      (*(code *)*puVar7)(plVar15,3,uVar9,puVar7[1]);
    }
    if ((*(byte *)(param_1 + 8) | 4) != 4) {
      FUN_0298e1e4(param_1,uVar4);
      (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    }
    break;
  case 6:
  case 7:
  case 0xb:
  case 0xe:
    if (param_1[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(param_1[2],0);
    if ((uVar8 & 1) != 0) {
      if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
      goto LAB_029900e8;
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        FUN_029b3ed8();
      }
      else {
        FUN_029b3ebc(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
      }
    }
    if (((char)param_1[8] == '\x03') && (uVar8 = FUN_02995008(param_1,param_2), (uVar8 & 1) != 0)) {
      return;
    }
    break;
  case 8:
  case 0xf:
    if ((char)param_1[8] == '\x03') {
      if (param_1[2] == 0) goto LAB_029900e8;
      uVar8 = FUN_0299ec14(param_1[2],0);
      if ((uVar8 & 1) != 0) {
        if ((param_1[2] == 0) || (lVar16 = *(long *)(param_1[2] + 0xa0), lVar16 == 0))
        goto LAB_029900e8;
        FUN_029c0c74(lVar16,*(undefined4 *)((long)param_2 + 0x54),0);
      }
      if ((*(int *)((long)param_2 + 0x2c) <= (int)param_2[5]) &&
         (iVar5 = *(int *)((long)param_2 + 0x34), iVar5 < (int)param_2[6])) {
        if (param_2[0xb] == 0) goto LAB_029900e8;
        iVar3 = FUN_029b4004(param_2[0xb],0);
        if (iVar3 + iVar5 <= (int)param_2[6]) {
          cVar1 = *(char *)((long)param_2 + 0x11);
          lVar16 = FUN_0298d23c(param_1,*(undefined1 *)((long)param_2 + 0x12));
          local_50 = (long *)0x0;
          if (lVar16 == 0) goto LAB_029900e8;
          uVar8 = FUN_0298bc2c(lVar16,*(undefined4 *)((long)param_2 + 0x24),cVar1 == '\b',&local_50)
          ;
          if ((uVar8 & 1) != 0) {
            if (local_50 == (long *)0x0) goto LAB_029900e8;
            if ((int)local_50[7] < 1) break;
          }
          uVar12 = FUN_02995008(param_1,param_2);
          if ((uVar12 & 1) != 0) {
            iVar5 = *(int *)((long)param_2 + 0x14);
            if (iVar5 == *(int *)((long)param_2 + 0x24)) {
              local_58 = 0;
              iVar3 = (int)param_2[7] + -1;
              *(int *)(param_2 + 7) = iVar3;
              local_50 = param_2;
              while ((0 < iVar3 &&
                     (iVar5 = iVar5 + 1, iVar5 < (int)local_50[5] + *(int *)((long)local_50 + 0x24))
                     )) {
                uVar8 = FUN_0298bc2c(lVar16,iVar5,cVar1 == '\b',&local_58);
                if ((uVar8 & 1) == 0) {
                  if (local_50 == (long *)0x0) goto LAB_029900e8;
                }
                else {
                  if (local_50 == (long *)0x0) goto LAB_029900e8;
                  *(int *)(local_50 + 7) = (int)local_50[7] + -1;
                }
                iVar3 = (int)local_50[7];
              }
            }
            else if ((uVar8 & 1) == 0) {
              if (local_50 == (long *)0x0) {
                return;
              }
            }
            else {
              if (local_50 == (long *)0x0) goto LAB_029900e8;
              *(int *)(local_50 + 7) = (int)local_50[7] + -1;
            }
            if (0 < (int)local_50[7]) {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar13 = FUN_02992d88();
            if ((lVar13 != 0) && (FUN_029b3f74(lVar13,0,0), local_50 != (long *)0x0)) {
              thunk_FUN_029bb694(lVar13,(int)local_50[6],0);
              uVar9 = FUN_029b3f64(lVar13,0);
              if (local_50 != (long *)0x0) {
                iVar5 = *(int *)((long)local_50 + 0x24);
                if (iVar5 < (int)local_50[5] + iVar5) {
                  do {
                    uVar8 = FUN_0298bc2c(lVar16,iVar5,cVar1 == '\b',&local_60);
                    if ((uVar8 & 1) == 0) {
                      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                      uVar9 = thunk_FUN_01a89e68();
                      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d07ac0);
                      FUN_027a794c(uVar9,uVar10,0);
                      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d07ac8);
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6b14(uVar9,uVar10);
                    }
                    if ((((local_60 == 0) || (*(long *)(local_60 + 0x58) == 0)) ||
                        (uVar10 = FUN_029b3f64(*(long *)(local_60 + 0x58),0), local_60 == 0)) ||
                       (*(long *)(local_60 + 0x58) == 0)) goto LAB_029900e8;
                    uVar4 = *(undefined4 *)(local_60 + 0x34);
                    uVar6 = FUN_029b4004(*(long *)(local_60 + 0x58),0);
                    FUN_0279cdc8(uVar10,0,uVar9,uVar4,uVar6,0);
                    if (((local_60 == 0) || (FUN_029901a4(), local_60 == 0)) ||
                       (FUN_0298bccc(lVar16,*(undefined4 *)(local_60 + 0x14),cVar1 == '\b'),
                       local_60 == 0)) goto LAB_029900e8;
                    if (0 < *(int *)(local_60 + 0x2c)) {
                      FUN_02990210();
                    }
                    if (local_50 == (long *)0x0) goto LAB_029900e8;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)local_50[5] + *(int *)((long)local_50 + 0x24));
                }
                FUN_029b3e94(lVar13,(long)(int)local_50[6],0);
                if (local_50 != (long *)0x0) {
                  local_50[0xb] = lVar13;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (local_50 + 0xb,lVar13);
                  if (local_50 != (long *)0x0) {
                    *(int *)((long)local_50 + 0x54) = (int)local_50[6] + (int)local_50[5] * 0xc;
                    if (cVar1 == '\b') {
                      if (*(long *)(lVar16 + 0x18) != 0) {
                        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)((long)local_50 + 0x24));
                        Liv_Lck_LckService__remove_OnLowStorageSpace
                                  (*(long *)(lVar16 + 0x18),&local_78,local_50,
                                   *(undefined8 *)PTR_DAT_03d078d0);
                        return;
                      }
                    }
                    else if (*(long *)(lVar16 + 0x28) != 0) {
                      FUN_02265dfc(*(long *)(lVar16 + 0x28),local_50,*(undefined8 *)PTR_DAT_03d078d8
                                  );
                      return;
                    }
                  }
                }
              }
            }
            goto LAB_029900e8;
          }
          break;
        }
      }
      lVar16 = param_1[2];
      if (lVar16 == 0) {
LAB_029900e8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(lVar16 + 0x40) != '\0') {
        plVar15 = *(long **)(lVar16 + 0x48);
        uVar10 = *(undefined8 *)PTR_DAT_03d07a88;
        uVar9 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar9 = FUN_025b1328(uVar10,uVar9,0);
        if (plVar15 == (long *)0x0) goto LAB_029900e8;
        lVar16 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cca060) {
              puVar7 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0298fd58;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)PTR_DAT_03cca060,0);
LAB_0298fd58:
        (*(code *)*puVar7)(plVar15,1,uVar9,puVar7[1]);
      }
    }
    break;
  default:
    goto switchD_0298f560_caseD_9;
  }
  FUN_02990210(plVar11);
switchD_0298f560_caseD_9:
  return;
}


