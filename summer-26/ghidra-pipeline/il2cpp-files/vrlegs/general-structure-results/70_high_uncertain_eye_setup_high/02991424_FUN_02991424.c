/*
FUNCTION_NAME: FUN_02991424
ENTRY_POINT: 02991424
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02991f0c) */
/* WARNING: Removing unreachable block (ram,0x02991e18) */
/* WARNING: Removing unreachable block (ram,0x02991fac) */
/* WARNING: Removing unreachable block (ram,0x02991f34) */
/* WARNING: Removing unreachable block (ram,0x02991ecc) */
/* WARNING: Removing unreachable block (ram,0x02991f1c) */
/* WARNING: Removing unreachable block (ram,0x029915bc) */

bool FUN_02991424(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  bool bVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  char local_70 [4];
  char local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_04127cd7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d07ad8);
    FUN_01ab69ac(PTR_DAT_03d07ae0);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d07b00);
    FUN_01ab69ac(PTR_DAT_03d07b08);
    FUN_01ab69ac(PTR_DAT_03d07b10);
    DAT_04127cd7 = 1;
  }
  local_70[0] = '\0';
  local_74[0] = '\0';
  local_78[0] = '\0';
  local_7c[0] = '\0';
  if ((char)param_1[8] != '\0') {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(param_1[5] + 0x1c) == 2) {
      lVar19 = param_1[0x2b];
      local_6c[0] = '\0';
      FUN_027e0bd8(lVar19,local_6c,0);
      uVar3 = FUN_02990434(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_02f0ce18(param_1[0x18],0);
      lVar21 = param_1[0x27];
      *(undefined4 *)(param_1 + 0x1b) = uVar3;
      local_70[0] = '\0';
      FUN_027e0bd8(lVar21,local_70,0);
      if (param_1[0x27] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar4 = FUN_029b4004(param_1[0x27],0);
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_02990ce8(param_1);
        if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = FUN_02f0ce18(param_1[0x18],0);
        *(undefined4 *)((long)param_1 + 0xd4) = uVar3;
      }
      if (local_70[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar21,0);
      }
      if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar5 = FUN_02f0ce18(param_1[0x18],0);
      if ((int)param_1[0x19] < iVar5) {
        if (param_1[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (0 < *(int *)(param_1[0x25] + 0x18)) {
          if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar5 = FUN_02f0ce18(param_1[0x18],0);
          lVar21 = param_1[0x25];
          local_74[0] = '\0';
          FUN_027e0bd8(lVar21,local_74,0);
          puVar2 = PTR_DAT_03d07ae0;
          puVar1 = PTR_DAT_03cbeda8;
          lVar10 = param_1[0x25];
          if (lVar10 != 0) {
            iVar9 = 0;
            iVar22 = 0;
            iVar5 = iVar5 + 100;
            do {
              if (*(int *)(lVar10 + 0x18) <= iVar22) {
LAB_02991964:
                iVar4 = iVar9 + iVar4;
                *(int *)(param_1 + 0x19) = iVar5;
                iVar5 = 0x18;
                goto LAB_02991bbc;
              }
              FUN_02215a88(lVar10,iVar22,&local_68,*(undefined8 *)puVar2);
              lVar10 = CONCAT44(uStack_64,local_68);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar8 = *(int *)(lVar10 + 0x3c);
              iVar7 = *(int *)(lVar10 + 0x44);
              iVar6 = FUN_02f0ce18(param_1[0x18],0);
              iVar7 = iVar7 + iVar8;
              if (iVar7 < iVar6) {
                lVar17 = param_1[2];
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if ((int)(uint)*(byte *)(lVar10 + 0x40) <= *(int *)(lVar17 + 0x70)) {
                  if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  iVar7 = FUN_02f0ce18(param_1[0x18],0);
                  if (iVar7 <= *(int *)(lVar10 + 0x48)) {
                    uVar11 = FUN_02990f80(param_1,lVar10,1);
                    if ((uVar11 & 1) == 0) {
                      if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      iVar5 = (int)param_1[0x19];
                      iVar8 = FUN_0299ebac(param_1[2],0);
                      iVar9 = iVar9 + 1;
                      iVar7 = iVar5;
                      if (iVar8 - (int)param_1[0x2c] < 0x50) goto LAB_02991964;
                    }
                    else {
                      lVar17 = param_1[2];
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (4 < *(byte *)(lVar17 + 0x40)) {
                        plVar23 = *(long **)(lVar17 + 0x48);
                        plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,5);
                        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
                        if (lVar17 == 0) {
                          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar13,0);
                        }
                        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        plVar12[4] = lVar10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 4,lVar10);
                        if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        local_68 = FUN_02f0ce18(param_1[0x18],0);
                        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_68);
                        if ((lVar10 != 0) &&
                           (lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar17 == 0)) {
                          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar13,0);
                        }
                        if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        plVar12[5] = lVar10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 5,lVar10);
                        local_80 = *(undefined4 *)((long)param_1 + 0x74);
                        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_80);
                        if ((lVar10 != 0) &&
                           (lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar17 == 0)) {
                          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar13,0);
                        }
                        if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        plVar12[6] = lVar10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 6,lVar10);
                        local_84 = (undefined4)param_1[0xf];
                        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_84);
                        if ((lVar10 != 0) &&
                           (lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar17 == 0)) {
                          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar13,0);
                        }
                        if (*(uint *)(plVar12 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        plVar12[7] = lVar10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 7,lVar10);
                        if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        local_88 = FUN_02f0ce18(param_1[0x18],0);
                        local_88 = local_88 - (int)param_1[0x11];
                        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_88);
                        if ((lVar10 != 0) &&
                           (lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar17 == 0)) {
                          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar13,0);
                        }
                        if (*(uint *)(plVar12 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        plVar12[8] = lVar10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 8,lVar10);
                        uVar13 = FUN_025be8f4(*(undefined8 *)PTR_DAT_03d07b00,plVar12,0);
                        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        lVar10 = *plVar23;
                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                        if (uVar11 != 0) {
                          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03cca060) {
                              puVar14 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                              goto LAB_02991934;
                            }
                            uVar11 = uVar11 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_01a472ec(plVar23,*(long *)PTR_DAT_03cca060,0);
LAB_02991934:
                        (*(code *)*puVar14)(plVar23,5,uVar13,puVar14[1]);
                      }
                      *(int *)(param_1 + 0x2f) = (int)param_1[0x2f] + 1;
                      iVar7 = iVar5;
                    }
                    goto LAB_02991954;
                  }
                  lVar17 = param_1[2];
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                }
                if (*(byte *)(lVar17 + 0x40) < 2) goto LAB_02991b88;
                if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                plVar12 = *(long **)(lVar17 + 0x48);
                local_68 = FUN_02f0ce18(param_1[0x18],0);
                uVar13 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_68);
                uVar3 = *(undefined4 *)((long)param_1 + 0x174);
                if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar15 = FUN_027401e4(uVar3,0x10,0);
                uVar13 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b08,lVar10,uVar13,uVar15,0);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar17 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar11 == 0) goto LAB_02991a44;
                piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                goto LAB_02991a2c;
              }
              if (iVar5 <= iVar7) {
                iVar7 = iVar5;
              }
LAB_02991954:
              iVar5 = iVar7;
              lVar10 = param_1[0x25];
              iVar22 = iVar22 + 1;
            } while (lVar10 != 0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      goto LAB_02991be0;
    }
  }
  return false;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar18 = piVar18 + 4;
    if (uVar11 == 0) break;
LAB_02991a2c:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03cca060) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02991a60;
    }
  }
LAB_02991a44:
  puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cca060,0);
LAB_02991a60:
  (*(code *)*puVar14)(plVar12,2,uVar13,puVar14[1]);
  lVar17 = param_1[2];
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (2 < *(byte *)(lVar17 + 0x40)) {
    plVar12 = *(long **)(lVar17 + 0x48);
    local_68 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    uVar13 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_68);
    lVar17 = FUN_0298d23c(param_1,*(undefined1 *)(lVar10 + 0x12));
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_80 = *(undefined4 *)(lVar17 + 0x70);
    uVar15 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_80);
    if (param_1[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_84 = *(undefined4 *)(param_1[0x25] + 0x18);
    uVar16 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_84);
    uVar13 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b10,uVar13,uVar15,uVar16,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar17 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar11 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02991b74;
        }
        uVar11 = uVar11 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cca060,0);
LAB_02991b74:
    (*(code *)*puVar14)(plVar12,3,uVar13,puVar14[1]);
  }
LAB_02991b88:
  *(undefined1 *)(param_1 + 8) = 6;
  FUN_0298e1e4(param_1,0x410);
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  FUN_02990210(lVar10);
  iVar5 = 3;
LAB_02991bbc:
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar21,0);
  }
  if ((iVar5 != 0x18) && (iVar5 != 0)) {
LAB_02991e80:
    bVar20 = false;
LAB_02991e88:
    if (local_6c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar19,0);
    }
    return bVar20;
  }
LAB_02991be0:
  if ((char)param_1[8] == '\x03') {
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(param_1[2] + 0x78)) {
      if (param_1[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(param_1[0x25] + 0x18) == 0) {
        if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar5 = FUN_02f0ce18(param_1[0x18],0);
        if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(param_1[2] + 0x78) < iVar5 - *(int *)((long)param_1 + 0xcc)) {
          iVar5 = FUN_02990364(param_1,(int)param_1[0x2c] + 0xc);
          if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar9 = FUN_0299ebac(param_1[2],0);
          if (iVar5 <= iVar9) {
            if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar21 = FUN_0298d380(param_1[0x24],param_1,5,0,0xff);
            FUN_0298d54c(param_1,lVar21);
            if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar11 = FUN_0299ec14(param_1[2],0);
            if ((uVar11 & 1) != 0) {
              if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              lVar10 = *(long *)(param_1[2] + 0xa8);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_029bf178(lVar10,*(undefined4 *)(lVar21 + 0x54),0);
            }
          }
        }
      }
    }
  }
  iVar5 = thunk_FUN_01aa519c(param_1 + 0x26,1,1,0);
  if (iVar5 == 1) {
    FUN_029922d8(param_1);
  }
  lVar10 = param_1[0x31];
  local_78[0] = '\0';
  FUN_027e0bd8(lVar10,local_78,0);
  lVar21 = param_1[0x31];
  if (lVar21 != 0) {
    uVar11 = 0;
    do {
      if ((long)(int)*(uint *)(lVar21 + 0x18) <= (long)uVar11) {
        if (local_78[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
        }
        if ((char)param_1[0x2a] == '\0') goto LAB_02991e80;
        if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_0299ec14(param_1[2],0);
        if ((uVar11 & 1) != 0) {
          if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar21 = *(long *)(param_1[2] + 0xa8);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
          *(uint *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + (uint)*(byte *)(param_1 + 0x2a);
        }
        FUN_029910c8(param_1,param_1[0x2b],(int)param_1[0x2c]);
        bVar20 = 0 < iVar4;
        goto LAB_02991e88;
      }
      if (*(uint *)(lVar21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar21 = *(long *)(lVar21 + uVar11 * 8 + 0x20);
      local_7c[0] = '\0';
      FUN_027e0bd8(lVar21,local_7c,0);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar5 = *(int *)(param_1[2] + 0x5c) + *(int *)(lVar21 + 0x70);
      iVar9 = FUN_0299295c(param_1,*(undefined8 *)(lVar21 + 0x38),iVar5);
      iVar5 = FUN_0299295c(param_1,*(undefined8 *)(lVar21 + 0x40),iVar5);
      iVar4 = iVar5 + iVar9 + iVar4;
      if (local_7c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar21,0);
      }
      lVar21 = param_1[0x31];
      uVar11 = uVar11 + 1;
    } while (lVar21 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


