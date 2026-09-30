/*
FUNCTION_NAME: FUN_02f45e00
ENTRY_POINT: 02f45e00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f462e8) */
/* WARNING: Removing unreachable block (ram,0x02f462e0) */

long * FUN_02f45e00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  long *plVar18;
  char local_64 [4];
  
  puVar2 = PTR_DAT_03d23cb8;
  if ((DAT_0412ab1f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cfffe8);
    FUN_01ab69ac(PTR_DAT_03d239b0);
    FUN_01ab69ac(PTR_DAT_03d23cb8);
    DAT_0412ab1f = 1;
  }
  lVar3 = *(long *)puVar2;
  local_64[0] = '\0';
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  thunk_FUN_01a4b338();
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x78);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar13,local_64,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    thunk_FUN_01a4b338();
    if (lVar3 == 0) {
      uVar16 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(uVar16,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *puVar4 = uVar16;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar16);
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  plVar14 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x28);
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cfffe8;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = (**(code **)(*plVar14 + 0x308))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x310));
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x78);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar13,local_64,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    plVar14 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x28);
    thunk_FUN_01a4b338();
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = (**(code **)(*plVar14 + 0x308))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x310));
    if (lVar3 == 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = (**(code **)(*param_1 + 0xac8))(param_1,0x16,*(undefined8 *)(*param_1 + 0xad0));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,*(undefined4 *)(lVar3 + 0x18));
      uVar12 = *(uint *)(lVar3 + 0x18);
      if ((int)uVar12 < 1) {
        uVar17 = 0;
        plVar18 = (long *)PTR_DAT_03d23cb8;
      }
      else {
        lVar15 = 0;
        uVar17 = 0;
        do {
          if (uVar12 <= (uint)lVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar18 = *(long **)(lVar3 + 0x20 + lVar15 * 8);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar6 = (**(code **)(*plVar18 + 0x328))(plVar18,*(undefined8 *)(*plVar18 + 0x330));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(lVar6 + 0x18) == 0) {
            uVar16 = FUN_0267f990(plVar18,0);
            uVar7 = FUN_0267f9b8(plVar18,0);
            uVar8 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
            uVar9 = FUN_0267de10(uVar16,0,0);
            if ((uVar9 & 1) != 0) {
              uVar10 = (**(code **)(*plVar18 + 0x318))(plVar18,*(undefined8 *)(*plVar18 + 800));
              lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
              FUN_02f3cd1c(lVar6,param_1,uVar8,uVar10,plVar18,uVar16,uVar7,0,0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar6 != 0) &&
                 (lVar11 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
              {
                uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar13,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar14[(long)(int)uVar17 + 4] = lVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (plVar14 + (long)(int)uVar17 + 4,lVar6);
              uVar17 = uVar17 + 1;
            }
          }
          uVar12 = *(uint *)(lVar3 + 0x18);
          lVar15 = lVar15 + 1;
          plVar18 = (long *)PTR_DAT_03d23cb8;
        } while ((int)lVar15 < (int)uVar12);
      }
      PTR_DAT_03d23cb8 = (undefined *)plVar18;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar5 = plVar14;
      if (uVar17 != *(uint *)(plVar14 + 3)) {
        plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,uVar17);
        FUN_02793ce8(plVar14,0,plVar5,0,uVar17,0);
      }
      lVar3 = *plVar18;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)PTR_DAT_03d23cb8;
      }
      plVar14 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x28);
      thunk_FUN_01a4b338();
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar14 + 0x318))(plVar14,param_1,plVar5,*(undefined8 *)(*plVar14 + 800));
    }
    else {
      uVar16 = *(undefined8 *)PTR_DAT_03cfffe8;
      plVar5 = (long *)thunk_FUN_01a89d6c(lVar3,uVar16);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar3,uVar16);
      }
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
  }
  else {
    uVar13 = *(undefined8 *)puVar1;
    plVar5 = (long *)thunk_FUN_01a89d6c(lVar3,uVar13);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar3,uVar13);
    }
  }
  return plVar5;
}


