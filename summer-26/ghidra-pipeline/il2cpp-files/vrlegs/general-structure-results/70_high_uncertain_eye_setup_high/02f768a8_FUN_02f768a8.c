/*
FUNCTION_NAME: FUN_02f768a8
ENTRY_POINT: 02f768a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f77078) */
/* WARNING: Removing unreachable block (ram,0x02f77070) */
/* WARNING: Removing unreachable block (ram,0x02f770e8) */

void FUN_02f768a8(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  undefined1 local_68 [4];
  char local_64 [4];
  
  puVar3 = PTR_DAT_03d1fee8;
  if ((DAT_0412acb4 & 1) == 0) {
                    /* try { // try from 02f768e8 to 030768f3 has its CatchHandler @ 02f76ddc */
    FUN_01ab69ac(PTR_DAT_03cbeb20);
                    /* try { // try from 02f768f4 to 03076ceb has its CatchHandler @ 02f76778 */
    FUN_01ab69ac(PTR_DAT_03cbdd48);
    FUN_01ab69ac(PTR_DAT_03d24ca0);
    FUN_01ab69ac(PTR_DAT_03d24cb8);
    FUN_01ab69ac(PTR_DAT_03d24f10);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d25130);
    FUN_01ab69ac(PTR_DAT_03d25138);
    FUN_01ab69ac(PTR_DAT_03d25140);
    DAT_0412acb4 = 1;
  }
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_02f651a8();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66664(param_1,param_2,*(undefined8 *)PTR_DAT_03d25140);
  }
  if (param_2 == (long *)0x0) {
    plVar10 = (long *)0x0;
    plVar9 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    lVar13 = *param_2;
    bVar1 = *(byte *)(lVar13 + 0x130);
    bVar2 = *(byte *)(*(long *)PTR_DAT_03d24ca0 + 0x130);
    if (bVar1 < bVar2) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03d24ca0) {
        plVar9 = (long *)0x0;
      }
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_03d24cb8 + 0x130);
    if (bVar1 < bVar2) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03d24cb8) {
        plVar10 = (long *)0x0;
      }
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_03cbdd48 + 0x130);
    if (bVar1 < bVar2) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cbdd48) {
        plVar16 = (long *)0x0;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_02f651a8();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((plVar10 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01a89d6c(plVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6[4] = (long)plVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,plVar10);
    if ((plVar9 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01a89d6c(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6[5] = (long)plVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,plVar9);
    if ((plVar16 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01a89d6c(plVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6[6] = (long)plVar16;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 6,plVar16);
    local_68[0] = param_2 == (long *)0x0;
    lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,local_68);
    if ((lVar13 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6[7] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 7,lVar13);
    uVar8 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25130,plVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f6520c(param_1,uVar8,*(undefined8 *)PTR_DAT_03d25140);
  }
  plVar6 = param_1 + 0x19;
  if (plVar16 == (long *)0x0) {
    if (plVar9 == (long *)0x0) {
      if (plVar10 == (long *)0x0) {
        if (param_2 != (long *)0x0) {
          thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
          uVar8 = thunk_FUN_01a89e68();
          FUN_02f79548(uVar8,0);
          uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d25148);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,uVar12);
        }
        lVar13 = *plVar6;
        if (lVar13 != 0) {
          FUN_02f7402c(param_1);
          lVar7 = param_1[0x1d];
          uVar4 = *(undefined4 *)(lVar13 + 0x104);
          plVar9 = *(long **)(lVar13 + 0xb0);
          uVar8 = *(undefined8 *)(lVar13 + 0x108);
          if (plVar9 == (long *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02f785b4(lVar7,uVar4,uVar8,uVar12,0);
        }
        uVar4 = 4;
        goto LAB_02f76e84;
      }
      lVar13 = param_1[7];
      local_64[0] = '\0';
      FUN_027e0bd8(lVar13,local_64,0);
      if (*(char *)((long)param_1 + 0xa1) == '\0') {
        param_1[0x1a] = (long)plVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x1a,plVar10);
        iVar15 = 0x12;
      }
      else {
        lVar7 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d24f10) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02f76fc0;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03d24f10,0);
LAB_02f76fc0:
        (*(code *)*puVar11)(plVar10,3,puVar11[1]);
        iVar15 = 8;
      }
      if (local_64[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar13,0);
      }
      if ((iVar15 == 0x12) || (iVar15 == 0)) {
        uVar4 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
        FUN_02f71d64(plVar10,uVar4);
        FUN_02f7402c(param_1);
        uVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        uVar4 = 2;
        if ((uVar5 & 1) != 0) {
          uVar4 = 3;
        }
        goto LAB_02f76e84;
      }
    }
    else {
LAB_02f76c0c:
      lVar13 = param_1[7];
      local_64[0] = '\0';
      FUN_027e0bd8(lVar13,local_64,0);
      if (*(char *)((long)param_1 + 0xa1) == '\0') {
        *plVar6 = (long)plVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,plVar9);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_02f651a8();
        if ((uVar5 & 1) != 0) {
          lVar7 = *plVar6;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02f670d4(param_1,lVar7,*(undefined8 *)PTR_DAT_03d25140);
        }
        iVar15 = 0xd;
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_02f651a8();
        if ((uVar5 & 1) != 0) {
          plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar7 = thunk_FUN_01a89d6c(plVar9,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar7 == 0) {
            uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar8,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar10[4] = (long)plVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,plVar9);
          uVar8 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25138,plVar10,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02f6520c(param_1,uVar8,*(undefined8 *)PTR_DAT_03d25140);
        }
        FUN_02f78e78(plVar9,0);
        iVar15 = 8;
      }
      if (local_64[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar13,0);
      }
      if (((iVar15 == 0xd) || (iVar15 == 0)) &&
         (plVar9 = (long *)FUN_02f75f70(param_1,1), plVar9 != (long *)0x0)) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03d24cb8 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d24cb8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
      }
    }
  }
  else {
    uVar5 = FUN_02f763a0(param_1,plVar16);
    if ((uVar5 & 1) == 0) {
      FUN_02f7453c(param_1,plVar16);
    }
    else {
      plVar9 = (long *)FUN_02f75e0c(param_1);
      if (plVar9 != (long *)0x0) goto LAB_02f76c0c;
    }
  }
  uVar4 = 0;
LAB_02f76e84:
  FUN_02f73644(param_1,uVar4);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_02f651a8();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54(param_1,0,*(undefined8 *)PTR_DAT_03d25140);
  }
  return;
}


