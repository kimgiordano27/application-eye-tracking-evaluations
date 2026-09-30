/*
FUNCTION_NAME: FUN_029922d8
ENTRY_POINT: 029922d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x029927a8) */
/* WARNING: Removing unreachable block (ram,0x0299247c) */
/* WARNING: Removing unreachable block (ram,0x0299268c) */
/* WARNING: Removing unreachable block (ram,0x02992798) */
/* WARNING: Removing unreachable block (ram,0x029927a0) */

void FUN_029922d8(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  char local_74 [4];
  char local_70 [4];
  char local_6c [4];
  char local_68 [4];
  char local_64 [4];
  long local_60;
  byte local_58 [4];
  undefined1 local_54 [4];
  
  if ((DAT_04127cd8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07b18);
    FUN_01ab69ac(PTR_DAT_03d07b20);
    FUN_01ab69ac(PTR_DAT_03d07b28);
    FUN_01ab69ac(PTR_DAT_03d07b30);
    FUN_01ab69ac(PTR_DAT_03d07b38);
    FUN_01ab69ac(PTR_DAT_03cbe888);
    FUN_01ab69ac(PTR_DAT_03d07ad8);
    FUN_01ab69ac(PTR_DAT_03d07ae0);
    DAT_04127cd8 = 1;
  }
  local_68[0] = '\0';
  local_6c[0] = '\0';
  local_70[0] = '\0';
  local_74[0] = '\0';
  thunk_FUN_01aa519c(param_1 + 0x130,0,1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x5c) < 1) {
      return;
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x128) + 0x18) == 0) {
        uVar15 = *(undefined8 *)(param_1 + 0x188);
        local_68[0] = '\0';
        FUN_027e0bd8(uVar15,local_68,0);
        lVar7 = *(long *)(param_1 + 0x188);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          uVar11 = 0;
          do {
            if (uVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            lVar16 = *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar16 + 0x6c) = 0;
            *(int *)(lVar16 + 0x70) = *(int *)(lVar16 + 0x68) + 1;
          } while ((int)uVar11 < (int)uVar2);
        }
        if (local_68[0] == '\0') {
          return;
        }
FUN_02992728:
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
        return;
      }
      if (*(long *)(param_1 + 0x1b0) != 0) {
        FUN_021e4d64(*(long *)(param_1 + 0x1b0),*(undefined8 *)PTR_DAT_03d07b20);
        uVar15 = *(undefined8 *)(param_1 + 0x188);
        local_6c[0] = '\0';
        FUN_027e0bd8(uVar15,local_6c,0);
        puVar4 = PTR_DAT_03d07b18;
        lVar7 = *(long *)(param_1 + 0x188);
        if (lVar7 == 0) {
LAB_02992450:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar16 = 0;
        while( true ) {
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)lVar16) break;
          if (*(uint *)(lVar7 + 0x18) <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar12 = *(long *)(lVar7 + lVar16 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((*(char *)(lVar12 + 0x10) != -1) && (0 < *(int *)(lVar12 + 0x6c))) {
            if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            local_64[0] = *(char *)(lVar12 + 0x10);
            FUN_021e5f08(*(long *)(param_1 + 0x1b0),local_64,*(undefined8 *)puVar4);
            lVar7 = *(long *)(param_1 + 0x188);
          }
          lVar16 = lVar16 + 1;
          if (lVar7 == 0) goto LAB_02992450;
        }
        if (local_6c[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
        }
        lVar7 = *(long *)(param_1 + 0x1b8);
        lVar16 = *(long *)(param_1 + 0x188);
        plVar1 = (long *)(param_1 + 0x1b8);
        if (lVar7 == 0) {
          if (lVar16 == 0) goto LAB_02992774;
        }
        else {
          if (lVar16 == 0) goto LAB_02992774;
          uVar13 = *(ulong *)(lVar7 + 0x18);
          iVar10 = (int)uVar13;
          if (iVar10 == *(int *)(lVar16 + 0x18)) {
            if (0 < iVar10) {
              uVar9 = 0;
              do {
                if ((uVar13 & 0xffffffff) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                *(undefined4 *)(lVar7 + 0x20 + uVar9 * 4) = 0;
                uVar9 = uVar9 + 1;
              } while ((long)uVar9 < (long)iVar10);
            }
LAB_02992570:
            uVar15 = *(undefined8 *)(param_1 + 0x128);
            local_70[0] = '\0';
            FUN_027e0bd8(uVar15,local_70,0);
            puVar6 = PTR_DAT_03d07b30;
            puVar5 = PTR_DAT_03d07b28;
            puVar4 = PTR_DAT_03d07ae0;
            lVar7 = *(long *)(param_1 + 0x128);
            if (lVar7 != 0) {
              iVar10 = 0;
              do {
                if (*(int *)(lVar7 + 0x18) <= iVar10) {
LAB_02992664:
                  if (local_70[0] != '\0') {
                    OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
                  }
                  uVar15 = *(undefined8 *)(param_1 + 0x188);
                  local_74[0] = '\0';
                  FUN_027e0bd8(uVar15,local_74,0);
                  lVar7 = *(long *)(param_1 + 0x188);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  uVar2 = *(uint *)(lVar7 + 0x18);
                  if (0 < (int)uVar2) {
                    lVar12 = *plVar1;
                    lVar16 = 0;
                    do {
                      if (uVar2 <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar12 + 0x18) <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      iVar10 = *(int *)(lVar12 + 0x20 + lVar16 * 4);
                      lVar14 = *(long *)(lVar7 + 0x20 + lVar16 * 8);
                      if (iVar10 < 1) {
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        iVar10 = *(int *)(lVar14 + 0x68) + 1;
                      }
                      else if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      lVar16 = lVar16 + 1;
                      *(int *)(lVar14 + 0x70) = iVar10;
                    } while ((int)lVar16 < (int)uVar2);
                  }
                  if (local_74[0] == '\0') {
                    return;
                  }
                  goto FUN_02992728;
                }
                FUN_02215a88(lVar7,iVar10,&local_60,*(undefined8 *)puVar4);
                lVar7 = local_60;
                if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if ((*(byte *)(local_60 + 0x10) >> 1 & 1) == 0) {
                  bVar3 = *(byte *)(local_60 + 0x12);
                  if ((ulong)bVar3 != 0xff) {
                    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    local_58[0] = bVar3;
                    uVar13 = FUN_021e4dc4(*(long *)(param_1 + 0x1b0),local_58,*(undefined8 *)puVar5)
                    ;
                    if ((uVar13 & 1) != 0) {
                      lVar16 = *plVar1;
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar16 + 0x18) <= (uint)bVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      piVar8 = (int *)(lVar16 + (ulong)bVar3 * 4 + 0x20);
                      if (*piVar8 == 0) {
                        *piVar8 = *(int *)(lVar7 + 0x14);
                      }
                      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      local_54[0] = *(undefined1 *)(lVar7 + 0x12);
                      FUN_021e514c(*(long *)(param_1 + 0x1b0),local_54,*(undefined8 *)puVar6);
                      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x20) == 0) goto LAB_02992664;
                    }
                  }
                }
                lVar7 = *(long *)(param_1 + 0x128);
                iVar10 = iVar10 + 1;
              } while (lVar7 != 0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,*(undefined4 *)(lVar16 + 0x18));
        *plVar1 = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar7);
        goto LAB_02992570;
      }
    }
  }
LAB_02992774:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


