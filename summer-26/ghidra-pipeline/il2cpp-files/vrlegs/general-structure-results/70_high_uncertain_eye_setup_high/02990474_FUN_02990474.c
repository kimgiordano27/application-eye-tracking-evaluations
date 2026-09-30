/*
FUNCTION_NAME: FUN_02990474
ENTRY_POINT: 02990474
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02990b00) */
/* WARNING: Removing unreachable block (ram,0x02990a5c) */
/* WARNING: Removing unreachable block (ram,0x029905a8) */
/* WARNING: Removing unreachable block (ram,0x029909d4) */
/* WARNING: Removing unreachable block (ram,0x02990a78) */

bool FUN_02990474(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined8 uVar19;
  int iVar20;
  long *plVar21;
  int iVar22;
  byte local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  char local_74 [4];
  char local_70 [4];
  char local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_04127cd6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeb20);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d07ad8);
    FUN_01ab69ac(PTR_DAT_03d07ae0);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d07ae8);
    DAT_04127cd6 = 1;
  }
  local_70[0] = '\0';
  local_74[0] = '\0';
  if (((*(char *)(param_1 + 0x40) == '\0') || (*(long *)(param_1 + 0x28) == 0)) ||
     (*(int *)(*(long *)(param_1 + 0x28) + 0x1c) != 2)) {
    bVar18 = false;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0x158);
    local_6c[0] = '\0';
    FUN_027e0bd8(uVar17,local_6c,0);
    uVar5 = FUN_02990434(param_1);
    uVar19 = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x160) = uVar5;
    *(undefined1 *)(param_1 + 0x150) = 0;
    local_70[0] = '\0';
    FUN_027e0bd8(uVar19,local_70,0);
    iVar6 = FUN_02990ce8(param_1);
    if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
    *(undefined4 *)(param_1 + 0xd4) = uVar5;
    if (local_70[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar19,0);
    }
    if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar7 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
    if (*(int *)(param_1 + 200) < iVar7) {
      if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < *(int *)(*(long *)(param_1 + 0x128) + 0x18)) {
        if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar7 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
        uVar19 = *(undefined8 *)(param_1 + 0x128);
        local_74[0] = '\0';
        FUN_027e0bd8(uVar19,local_74,0);
        puVar3 = PTR_DAT_03d07ae0;
        puVar2 = PTR_DAT_03cbeda8;
        lVar10 = *(long *)(param_1 + 0x128);
        if (lVar10 != 0) {
          iVar22 = 0;
          iVar20 = 0;
          iVar7 = iVar7 + 100;
          do {
            if (*(int *)(lVar10 + 0x18) <= iVar20) {
LAB_029909a0:
              *(int *)(param_1 + 200) = iVar7;
              iVar6 = iVar22 + iVar6;
              if (local_74[0] != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(uVar19,0);
              }
              goto LAB_029909d8;
            }
            FUN_02215a88(lVar10,iVar20,&local_68,*(undefined8 *)puVar3);
            lVar10 = CONCAT44(uStack_64,local_68);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar9 = *(int *)(lVar10 + 0x3c);
            iVar1 = *(int *)(lVar10 + 0x44);
            iVar8 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
            iVar1 = iVar1 + iVar9;
            if (iVar1 < iVar8) {
              bVar4 = FUN_02990f80(param_1,lVar10,1);
              if ((bVar4 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                iVar7 = *(int *)(param_1 + 200);
                iVar9 = FUN_0299ebac(*(long *)(param_1 + 0x10),0);
                iVar22 = iVar22 + 1;
                iVar1 = iVar7;
                if (iVar9 - *(int *)(param_1 + 0x160) < 0x50) goto LAB_029909a0;
              }
              else {
                lVar14 = *(long *)(param_1 + 0x10);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (4 < *(byte *)(lVar14 + 0x40)) {
                  plVar21 = *(long **)(lVar14 + 0x48);
                  plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                  if (lVar14 == 0) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[4] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 4,lVar10);
                  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  local_68 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
                  lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_68);
                  if ((lVar10 != 0) &&
                     (lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar14 == 0)) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[5] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 5,lVar10);
                  local_78 = *(undefined4 *)(param_1 + 0x74);
                  lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_78);
                  if ((lVar10 != 0) &&
                     (lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar14 == 0)) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[6] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 6,lVar10);
                  local_7c = *(undefined4 *)(param_1 + 0x78);
                  lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_7c);
                  if ((lVar10 != 0) &&
                     (lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar14 == 0)) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[7] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 7,lVar10);
                  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  local_80 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
                  local_80 = local_80 - *(int *)(param_1 + 0x88);
                  lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_80);
                  if ((lVar10 != 0) &&
                     (lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar14 == 0)) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[8] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 8,lVar10);
                  local_84[0] = bVar4 & 1;
                  lVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,local_84);
                  if ((lVar10 != 0) &&
                     (lVar14 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar14 == 0)) {
                    uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar17,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar11[9] = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar11 + 9,lVar10);
                  uVar12 = FUN_025be8f4(*(undefined8 *)PTR_DAT_03d07ae8,plVar11,0);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  lVar10 = *plVar21;
                  uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03cca060) {
                        puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_02990948;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_01a472ec(plVar21,*(long *)PTR_DAT_03cca060,0);
LAB_02990948:
                  (*(code *)*puVar13)(plVar21,5,uVar12,puVar13[1]);
                }
                *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
                iVar1 = iVar7;
              }
            }
            else if (iVar7 <= iVar1) {
              iVar1 = iVar7;
            }
            iVar7 = iVar1;
            lVar10 = *(long *)(param_1 + 0x128);
            iVar20 = iVar20 + 1;
          } while (lVar10 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
LAB_029909d8:
    if (*(char *)(param_1 + 0x150) == '\0') {
      bVar18 = false;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar15 = FUN_0299ec14(*(long *)(param_1 + 0x10),0);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + 1;
        *(uint *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + (uint)*(byte *)(param_1 + 0x150);
      }
      FUN_029910c8(param_1,*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
      bVar18 = 0 < iVar6;
    }
    if (local_6c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar17,0);
    }
  }
  return bVar18;
}


