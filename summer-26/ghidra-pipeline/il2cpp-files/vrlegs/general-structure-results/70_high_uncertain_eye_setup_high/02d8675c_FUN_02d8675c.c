/*
FUNCTION_NAME: FUN_02d8675c
ENTRY_POINT: 02d8675c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02d86d70) */

long FUN_02d8675c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined4 local_68;
  char local_64 [4];
  long local_58;
  
  local_58 = param_2;
  if ((DAT_04129ce6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1a650);
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    FUN_01ab69ac(PTR_DAT_03d15248);
    FUN_01ab69ac(PTR_DAT_03cda660);
    DAT_04129ce6 = 1;
  }
  puVar2 = PTR_DAT_03cbeda8;
  local_64[0] = '\0';
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar8 = thunk_FUN_01a89e68();
    uVar17 = thunk_FUN_01a6ca08(PTR_DAT_03d151c0);
    FUN_026a44fc(uVar8,uVar17,0);
    uVar17 = thunk_FUN_01a6ca08(PTR_DAT_03d1b758);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar17);
  }
  plVar16 = *(long **)(param_1 + 0x20);
  local_68 = FUN_02d77f98(param_2,0);
  uVar8 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_68);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar9 = (**(code **)(*plVar16 + 0x348))(plVar16,uVar8,*(undefined8 *)(*plVar16 + 0x350));
  lVar11 = local_58;
  if ((uVar9 & 1) == 0) {
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d1b760);
    uVar8 = FUN_02e36494(uVar8,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar17 = thunk_FUN_01a89e68();
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d151c0);
    FUN_026a7658(uVar17,uVar8,uVar13,0);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d1b758);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar17,uVar8);
  }
  uVar8 = FUN_02d82234(param_1);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar8,local_64,0);
  FUN_02d86ec8(param_1,local_58);
  FUN_02d87958(param_1,local_58);
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar17 = *(undefined8 *)(local_58 + 0xd0);
  if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = FUN_02e9fa38(uVar17,0,0);
  if ((uVar9 & 1) != 0) {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar16 = *(long **)(param_1 + 0x40);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar9 = (**(code **)(*plVar16 + 0x3a8))
                      (plVar16,*(undefined8 *)(local_58 + 0xd0),*(undefined8 *)(*plVar16 + 0x3b0));
  }
  uVar17 = FUN_02d85d5c(uVar9,local_58);
  plVar16 = (long *)FUN_02d87f8c(param_1,uVar17);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar14 = *plVar16;
  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03ccbd08) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_02d8693c;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03ccbd08,1);
LAB_02d8693c:
  iVar6 = (*(code *)*puVar10)(plVar16,puVar10[1]);
  if (iVar6 == 0) {
    plVar16 = *(long **)(param_1 + 0x50);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar16 + 0x3a8))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x3b0));
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(int *)(local_58 + 0x7c) == 0) &&
     (uVar9 = FUN_02d880f0(param_1,&local_58,*(undefined8 *)(local_58 + 0x48)), (uVar9 & 1) != 0)) {
    plVar16 = *(long **)(param_1 + 0x50);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = (**(code **)(*plVar16 + 0x308))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x310));
    if (lVar11 == 0) {
      plVar16 = *(long **)(param_1 + 0x50);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar17,uVar17,*(undefined8 *)(*plVar16 + 0x2b0));
    }
    plVar16 = (long *)(param_1 + 0x70);
    if ((*plVar16 == 0) &&
       (uVar9 = thunk_FUN_025bd1c0(uVar17,*(undefined8 *)PTR_DAT_03cda660,0), (uVar9 & 1) != 0)) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = FUN_02d77e80(local_58,0);
      puVar3 = PTR_DAT_03d1a650;
      if (*(int *)(*(long *)PTR_DAT_03d1a650 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = FUN_02d808f4(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50));
      if (lVar11 != 0) {
        *plVar16 = local_58;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16);
      }
    }
    puVar5 = PTR_DAT_03d1a650;
    puVar4 = PTR_DAT_03d15248;
    puVar3 = PTR_DAT_03cda660;
    if (local_58 != 0) {
      iVar6 = 0;
      do {
        plVar12 = (long *)FUN_02d79114(local_58,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar7 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
        lVar11 = local_58;
        if (iVar7 <= iVar6) goto LAB_02d86c50;
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar12 = (long *)FUN_02d79114(local_58,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x2e8))
                                    (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x2f0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar12);
        }
        plVar18 = *(long **)(param_1 + 0x20);
        local_68 = FUN_02d77f98(plVar12,0);
        uVar17 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_68);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar17,uVar17);
        }
        uVar9 = (**(code **)(*plVar18 + 0x348))(plVar18,uVar17,*(undefined8 *)(*plVar18 + 0x350));
        if ((uVar9 & 1) == 0) {
          plVar18 = *(long **)(param_1 + 0x20);
          local_68 = FUN_02d77f98(plVar12,0);
          uVar17 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_68);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar17,uVar17);
          }
          uVar9 = (**(code **)(*plVar18 + 0x288))
                            (plVar18,uVar17,plVar12,*(undefined8 *)(*plVar18 + 0x290));
        }
        uVar17 = FUN_02d85d5c(uVar9,plVar12);
        plVar12 = *(long **)(param_1 + 0x50);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = (**(code **)(*plVar12 + 0x308))(plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x310));
        if (lVar11 == 0) {
          plVar12 = *(long **)(param_1 + 0x50);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar12 + 0x2a8))(plVar12,uVar17,uVar17,*(undefined8 *)(*plVar12 + 0x2b0));
        }
        if ((*plVar16 == 0) &&
           (uVar9 = thunk_FUN_025bd1c0(uVar17,*(undefined8 *)puVar3,0), (uVar9 & 1) != 0)) {
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar11 = FUN_02d77e80(local_58,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar11 = FUN_02d808f4(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50));
          if (lVar11 != 0) {
            *plVar16 = local_58;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16);
          }
        }
        iVar6 = iVar6 + 1;
      } while (local_58 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_02d86c50:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  return lVar11;
}


