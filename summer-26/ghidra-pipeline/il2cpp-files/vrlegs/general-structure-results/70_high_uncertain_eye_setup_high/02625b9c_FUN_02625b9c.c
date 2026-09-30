/*
FUNCTION_NAME: FUN_02625b9c
ENTRY_POINT: 02625b9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262669c) */

void FUN_02625b9c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char local_54 [4];
  undefined *puVar17;
  
  if ((DAT_04124053 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2348);
    FUN_01ab69ac(PTR_DAT_03cf2168);
    FUN_01ab69ac(PTR_DAT_03cd8520);
    FUN_01ab69ac(PTR_DAT_03cf2350);
    FUN_01ab69ac(PTR_DAT_03cf2170);
    FUN_01ab69ac(PTR_DAT_03cf2358);
    FUN_01ab69ac(PTR_DAT_03cf2360);
    FUN_01ab69ac(PTR_DAT_03cf2368);
    FUN_01ab69ac(PTR_DAT_03cf2370);
    FUN_01ab69ac(PTR_DAT_03cf2378);
    FUN_01ab69ac(PTR_DAT_03cf2380);
    FUN_01ab69ac(PTR_DAT_03cf2388);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cf2318);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbebe8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03ccc8b0);
    DAT_04124053 = 1;
  }
  local_54[0] = '\0';
  if ((param_1 == 0) ||
     (plVar8 = (long *)FUN_02625398(param_1), puVar2 = PTR_DAT_03cf2318, puVar17 = PTR_DAT_03cf2168,
     plVar8 == (long *)0x0)) goto LAB_0262660c;
  iVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  puVar3 = PTR_DAT_03cf2388;
  iVar5 = iVar5 + -1;
  if (iVar5 < 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar11 = (long *)0x0;
    do {
      plVar8 = (long *)FUN_02625398(param_1);
      if (plVar8 == (long *)0x0) goto LAB_0262660c;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x2f0))
      ;
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar17);
        if (plVar8 != (long *)0x0) goto LAB_02625d30;
LAB_02625d48:
        plVar8 = (long *)0x0;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_02625d48;
LAB_02625d30:
        lVar9 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_02625d48;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar8 = (long *)0x0;
        }
      }
      lVar9 = FUN_0263abe8(plVar8);
      if (lVar9 == 0) goto LAB_0262660c;
      uVar22 = *(undefined8 *)puVar3;
      plVar8 = (long *)thunk_FUN_01a89d6c(lVar9,uVar22);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar9,uVar22);
      }
      lVar18 = *plVar8;
      lVar9 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar9) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02625dd0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar10 = (undefined8 *)FUN_01a472ec(plVar8,lVar9,0);
LAB_02625dd0:
      (*(code *)*puVar10)(plVar8,plVar11,puVar10[1]);
      iVar5 = iVar5 + -1;
      plVar11 = plVar8;
    } while (-1 < iVar5);
  }
  plVar11 = (long *)FUN_02625b2c(param_1);
  if (plVar11 == (long *)0x0) goto LAB_0262660c;
  iVar5 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
  puVar3 = PTR_DAT_03cf2370;
  iVar5 = iVar5 + -1;
  if (iVar5 < 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar12 = (long *)0x0;
    do {
      plVar11 = (long *)FUN_02625b2c(param_1);
      if (plVar11 == (long *)0x0) goto LAB_0262660c;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x2e8))
                                  (plVar11,iVar5,*(undefined8 *)(*plVar11 + 0x2f0));
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar17);
        if (plVar11 != (long *)0x0) goto LAB_02625e68;
LAB_02625e80:
        plVar11 = (long *)0x0;
      }
      else {
        if (plVar11 == (long *)0x0) goto LAB_02625e80;
LAB_02625e68:
        lVar9 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_02625e80;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      lVar9 = FUN_0263abe8(plVar11);
      if (lVar9 == 0) goto LAB_0262660c;
      uVar22 = *(undefined8 *)puVar3;
      plVar11 = (long *)thunk_FUN_01a89d6c(lVar9,uVar22);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar9,uVar22);
      }
      lVar18 = *plVar11;
      lVar9 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar9) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02625f08;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar10 = (undefined8 *)FUN_01a472ec(plVar11,lVar9,0);
LAB_02625f08:
      (*(code *)*puVar10)(plVar11,plVar12,puVar10[1]);
      iVar5 = iVar5 + -1;
      plVar12 = plVar11;
    } while (-1 < iVar5);
  }
  puVar4 = PTR_DAT_03cf2348;
  puVar3 = PTR_DAT_03cbebe8;
  puVar2 = PTR_DAT_03cbe5e8;
  uVar22 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar12 = (long *)FUN_01ab6d3c(uVar22,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  uVar19 = FUN_02786d28(plVar12,0,0);
  if ((uVar19 & 1) != 0) {
    FUN_018748a8(param_1);
    uVar21 = *(undefined8 *)(param_1 + 0x18);
    uVar22 = thunk_FUN_01a6ca08(PTR_DAT_03cd8228);
    uVar16 = thunk_FUN_01a6ca08(PTR_DAT_03cf2328);
    uVar22 = FUN_025bdc88(uVar22,uVar21,uVar16,0);
    goto LAB_026266e4;
  }
  uVar22 = *(undefined8 *)PTR_DAT_03cf2358;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar13 = (long *)FUN_0277b678(uVar22,0);
  puVar3 = PTR_DAT_03cf2350;
  if (plVar13 == (long *)0x0) goto LAB_0262660c;
  uVar6 = (**(code **)(*plVar13 + 0x388))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 0x390));
  plVar13 = (long *)FUN_0277b678(*(undefined8 *)puVar3,0);
  if (plVar13 == (long *)0x0) goto LAB_0262660c;
  uVar7 = (**(code **)(*plVar13 + 0x388))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 0x390));
  if ((uVar6 & uVar7 & 1) == 0) {
    if ((uVar6 & 1) != 0) {
      plVar13 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
      uVar22 = *(undefined8 *)PTR_DAT_03cf2378;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar2);
      }
      lVar9 = FUN_0277b678(uVar22,0);
      if (plVar13 == (long *)0x0) goto LAB_0262660c;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if ((int)plVar13[3] == 0) goto LAB_02626628;
      plVar13[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 4,lVar9);
      lVar9 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf2368,0);
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if (*(uint *)(plVar13 + 3) < 2) goto LAB_02626628;
      plVar13[5] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 5,lVar9);
      plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
      lVar9 = FUN_0262a4e8(param_1);
      if (plVar14 == (long *)0x0) goto LAB_0262660c;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if ((int)plVar14[3] == 0) goto LAB_02626628;
      plVar14[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar9);
      if ((plVar11 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01a89d6c(plVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
      goto LAB_0262662c;
      if (*(uint *)(plVar14 + 3) < 2) goto LAB_02626628;
      plVar15 = plVar14 + 5;
      *plVar15 = (long)plVar11;
      plVar8 = plVar11;
      goto LAB_02626474;
    }
    if ((uVar7 & 1) != 0) {
      plVar13 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
      uVar22 = *(undefined8 *)PTR_DAT_03cf2378;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar2);
      }
      lVar9 = FUN_0277b678(uVar22,0);
      if (plVar13 == (long *)0x0) goto LAB_0262660c;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if ((int)plVar13[3] == 0) goto LAB_02626628;
      plVar13[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 4,lVar9);
      lVar9 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf2380,0);
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if (*(uint *)(plVar13 + 3) < 2) goto LAB_02626628;
      plVar13[5] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 5,lVar9);
      plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
      lVar9 = FUN_0262a4e8(param_1);
      if (plVar14 == (long *)0x0) goto LAB_0262660c;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
      goto LAB_0262662c;
      if ((int)plVar14[3] == 0) goto LAB_02626628;
      plVar14[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar9);
      if ((plVar8 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01a89d6c(plVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
      goto LAB_0262662c;
      if (*(uint *)(plVar14 + 3) < 2) goto LAB_02626628;
      plVar15 = plVar14 + 5;
      *plVar15 = (long)plVar8;
      goto LAB_02626474;
    }
    if (plVar12 == (long *)0x0) {
      uVar22 = 0;
      puVar17 = PTR_DAT_03cf2398;
    }
    else {
      uVar22 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      puVar17 = PTR_DAT_03cf2398;
    }
  }
  else {
    plVar13 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,3);
    uVar22 = *(undefined8 *)PTR_DAT_03cf2378;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    lVar9 = FUN_0277b678(uVar22,0);
    if (plVar13 == (long *)0x0) goto LAB_0262660c;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0)) {
LAB_0262662c:
      uVar22 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar22,0);
    }
    if ((int)plVar13[3] == 0) {
LAB_02626628:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar13[4] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 4,lVar9);
    lVar9 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf2368,0);
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
    goto LAB_0262662c;
    if (*(uint *)(plVar13 + 3) < 2) goto LAB_02626628;
    plVar13[5] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 5,lVar9);
    lVar9 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf2380,0);
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
    goto LAB_0262662c;
    if (*(uint *)(plVar13 + 3) < 3) goto LAB_02626628;
    plVar13[6] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13 + 6,lVar9);
    plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,3);
    lVar9 = FUN_0262a4e8(param_1);
    if (plVar14 == (long *)0x0) goto LAB_0262660c;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
    goto LAB_0262662c;
    if ((int)plVar14[3] == 0) goto LAB_02626628;
    plVar14[4] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar9);
    if ((plVar11 != (long *)0x0) &&
       (lVar9 = thunk_FUN_01a89d6c(plVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
    goto LAB_0262662c;
    if (*(uint *)(plVar14 + 3) < 2) goto LAB_02626628;
    plVar14[5] = (long)plVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 5,plVar11);
    if ((plVar8 != (long *)0x0) &&
       (lVar9 = thunk_FUN_01a89d6c(plVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
    goto LAB_0262662c;
    if (*(uint *)(plVar14 + 3) < 3) goto LAB_02626628;
    plVar15 = plVar14 + 6;
    *plVar15 = (long)plVar8;
LAB_02626474:
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15,plVar8);
    puVar2 = PTR_DAT_03cd8520;
    if (plVar12 == (long *)0x0) {
LAB_0262660c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_0278a094(plVar12,plVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    uVar19 = FUN_0267bc0c(lVar9,0,0);
    if ((uVar19 & 1) == 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_0267bbcc(lVar9,plVar14,0);
      if (lVar9 == 0) {
        lVar18 = 0;
      }
      else {
        uVar22 = *(undefined8 *)PTR_DAT_03cf2360;
        lVar18 = thunk_FUN_01a89d6c(lVar9,uVar22);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar9,uVar22);
        }
      }
      lVar9 = *(long *)puVar17;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar17;
      }
      plVar8 = (long *)**(long **)(lVar9 + 0xb8);
      if (plVar8 != (long *)0x0) {
        uVar22 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
        local_54[0] = '\0';
        FUN_027e0bd8(uVar22,local_54,0);
        uVar19 = thunk_FUN_025bd1c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_03ccc8b0,
                                    0);
        if (((uVar19 & 1) == 0) ||
           (lVar9 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)PTR_DAT_03cf2170), lVar9 != 0)) {
          if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0263a334(lVar18);
        }
        else {
          lVar9 = *(long *)puVar17;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)puVar17;
          }
          plVar8 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar8 + 0x308))(plVar8,lVar18,*(undefined8 *)(*plVar8 + 0x310));
        }
        if (local_54[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar22,0);
        }
        return;
      }
      goto LAB_0262660c;
    }
    uVar22 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    puVar17 = PTR_DAT_03cf2390;
  }
  uVar16 = thunk_FUN_01a6ca08(puVar17);
  uVar22 = FUN_025b1328(uVar22,uVar16,0);
LAB_026266e4:
  thunk_FUN_01a6ca08(PTR_DAT_03cf2180);
  uVar16 = thunk_FUN_01a89e68();
  FUN_026202e0(uVar16,uVar22);
  uVar22 = thunk_FUN_01a6ca08(PTR_DAT_03cf2348);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar16,uVar22);
}


