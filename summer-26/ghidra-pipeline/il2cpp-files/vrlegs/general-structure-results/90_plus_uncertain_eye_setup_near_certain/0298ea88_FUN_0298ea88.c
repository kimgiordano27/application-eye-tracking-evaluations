/*
FUNCTION_NAME: FUN_0298ea88
ENTRY_POINT: 0298ea88
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


/* WARNING: Removing unreachable block (ram,0x0298f248) */
/* WARNING: Removing unreachable block (ram,0x0298ec0c) */
/* WARNING: Removing unreachable block (ram,0x0298eef0) */
/* WARNING: Removing unreachable block (ram,0x0298f114) */
/* WARNING: Removing unreachable block (ram,0x0298f2a0) */
/* WARNING: Removing unreachable block (ram,0x0298f1b8) */

uint FUN_0298ea88(long *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint extraout_w8;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  char local_ac [4];
  byte local_a8 [4];
  char local_a4 [4];
  long local_a0;
  undefined8 local_98;
  long local_90;
  int local_84;
  long local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  int local_64;
  
  if ((DAT_04127cd3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07a18);
    FUN_01ab69ac(PTR_DAT_03d07a20);
    FUN_01ab69ac(PTR_DAT_03d07a28);
    FUN_01ab69ac(PTR_DAT_03d07a30);
    FUN_01ab69ac(PTR_DAT_03d078b8);
    FUN_01ab69ac(PTR_DAT_03d078b0);
    FUN_01ab69ac(PTR_DAT_03d07a38);
    FUN_01ab69ac(PTR_DAT_03d078a8);
    FUN_01ab69ac(PTR_DAT_03d07a40);
    FUN_01ab69ac(PTR_DAT_03d07a48);
    FUN_01ab69ac(PTR_DAT_03d07a50);
    FUN_01ab69ac(PTR_DAT_03d07a58);
    FUN_01ab69ac(PTR_DAT_03cbf920);
    FUN_01ab69ac(PTR_DAT_03d078e0);
    FUN_01ab69ac(PTR_DAT_03d07a60);
    FUN_01ab69ac(PTR_DAT_03d07a68);
    DAT_04127cd3 = 1;
  }
  puVar4 = PTR_DAT_03d07a48;
  local_a0 = 0;
  local_a4[0] = '\0';
  local_a8[0] = 0;
  local_ac[0] = '\0';
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  lVar13 = param_1[0x35];
  auVar19 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  if (lVar13 == 0) {
LAB_0298f250:
    local_d0 = auVar19;
    local_c0 = auVar2;
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar17 = *(int *)(lVar13 + 0x20);
  if (0 < iVar17) {
    while( true ) {
      iVar17 = iVar17 + -1;
      local_a4[0] = '\0';
      FUN_027e0bd8(lVar13,local_a4,0);
      if (param_1[0x35] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_022661a4(param_1[0x35],&local_98,*(undefined8 *)puVar4);
      FUN_0298f414(param_1,local_98);
      if (local_a4[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar13,0);
      }
      if (iVar17 == 0) break;
      lVar13 = param_1[0x35];
    }
  }
  puVar4 = PTR_DAT_03d07a50;
  lVar13 = 0;
  while( true ) {
    lVar14 = param_1[0xc];
    local_a8[0] = 0;
    FUN_027e0bd8(lVar14,local_a8,0);
    lVar10 = param_1[0xc];
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar10 + 0x20) < 1) {
      iVar17 = 9;
    }
    else {
      FUN_022661a4(lVar10,&local_90,*(undefined8 *)puVar4);
      iVar17 = 10;
      lVar13 = local_90;
    }
    uVar16 = (uint)local_a8[0];
    if (local_a8[0] != 0) {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar14,0);
      uVar16 = extraout_w8;
    }
    auVar2._8_8_ = local_c0._8_8_;
    auVar2._0_8_ = local_c0._0_8_;
    auVar19._8_8_ = local_d0._8_8_;
    auVar19._0_8_ = local_d0._0_8_;
    if ((iVar17 != 0) && (iVar17 != 10)) break;
    if (lVar13 == 0) goto LAB_0298f250;
    (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
  }
  if (iVar17 != 9) {
LAB_0298f088:
    return uVar16 & 1;
  }
  local_a0 = 0;
  lVar13 = param_1[0x31];
  local_ac[0] = '\0';
  FUN_027e0bd8(lVar13,local_ac,0);
  puVar8 = PTR_DAT_03d07a58;
  puVar7 = PTR_DAT_03d07a30;
  puVar6 = PTR_DAT_03d07a28;
  puVar5 = PTR_DAT_03d078b8;
  puVar4 = PTR_DAT_03d078a8;
  lVar10 = param_1[0x31];
  if (lVar10 != 0) {
    uVar16 = 0;
    puVar18 = (undefined8 *)PTR_DAT_03d07a38;
    do {
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar16) {
LAB_0298f198:
        if (local_ac[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar13,0);
        }
        if (local_a0 == 0) {
          uVar16 = 0;
          goto LAB_0298f088;
        }
        uVar16 = 0;
        if (*(long *)(local_a0 + 0x58) == 0) goto LAB_0298f088;
        uVar1 = *(undefined4 *)(local_a0 + 0x54);
        plVar15 = param_1 + 10;
        *plVar15 = local_a0;
        *(undefined4 *)(param_1 + 9) = uVar1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15);
        auVar19 = local_d0;
        auVar2 = local_c0;
        if (local_a0 == 0) goto LAB_0298f250;
        (**(code **)(*param_1 + 600))
                  (param_1,*(undefined8 *)(local_a0 + 0x58),*(undefined8 *)(*param_1 + 0x260));
        param_1[10] = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15,0);
        auVar19 = local_d0;
        auVar2 = local_c0;
        if (local_a0 == 0) goto LAB_0298f250;
        FUN_029901a4();
        auVar19 = local_d0;
        auVar2 = local_c0;
        if (local_a0 == 0) goto LAB_0298f250;
        FUN_02990210();
        uVar16 = 1;
        goto LAB_0298f088;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar10 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar14 = *(long *)(lVar10 + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < *(int *)(lVar14 + 0x20)) {
        FUN_022661a4(lVar14,&local_70,*(undefined8 *)PTR_DAT_03d07a48);
        local_a0 = CONCAT44(uStack_6c,local_70);
        goto LAB_0298f198;
      }
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar17 = FUN_0223d91c(*(long *)(lVar10 + 0x20),*puVar18);
      if (0 < iVar17) {
        if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        auVar19 = FUN_0223d8d8(*(long *)(lVar10 + 0x20),*(undefined8 *)PTR_DAT_03d07a40);
        puVar3 = PTR_DAT_03cbf920;
        local_d0 = auVar19;
        auVar19 = FUN_02205e14(local_d0,*(undefined8 *)PTR_DAT_03d07a20);
        iVar17 = 0x7fffffff;
        local_c0 = auVar19;
        while( true ) {
          uVar11 = FUN_02206110(local_c0,*(undefined8 *)puVar6);
          if ((uVar11 & 1) == 0) break;
          FUN_02205f78(local_c0,&local_84,*(undefined8 *)puVar7);
          iVar9 = local_84;
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_78 = local_84;
          FUN_0223df10(*(long *)(lVar10 + 0x20),&local_78,&local_80,*(undefined8 *)puVar4);
          if (iVar9 < *(int *)(lVar10 + 0x4c)) {
LAB_0298ee7c:
            lVar14 = param_1[2];
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            *(int *)(lVar14 + 0x108) = *(int *)(lVar14 + 0x108) + 1;
            if (param_1[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            local_74 = iVar9;
            FUN_02265dfc(param_1[0x32],&local_74,*(undefined8 *)puVar3);
          }
          else {
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(int *)(local_80 + 0x14) < *(int *)(lVar10 + 0x48)) goto LAB_0298ee7c;
            if ((iVar9 < iVar17) && (*(int *)(local_80 + 0x14) <= *(int *)(lVar10 + 0x48))) {
              iVar17 = iVar9;
            }
          }
        }
        FUN_022061c4(local_c0,*(undefined8 *)PTR_DAT_03d07a18);
        lVar14 = *(long *)(lVar10 + 0x20);
        while( true ) {
          lVar12 = param_1[0x32];
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(int *)(lVar12 + 0x20) < 1) break;
          FUN_022661a4(lVar12,&local_70,*(undefined8 *)puVar8);
          iVar9 = local_70;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_64 = local_70;
          FUN_0223df10(lVar14,&local_64,&local_70,*(undefined8 *)puVar4);
          lVar12 = CONCAT44(uStack_6c,local_70);
          local_70 = iVar9;
          FUN_0223ebe0(lVar14,&local_70,*(undefined8 *)puVar5);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_029901a4(lVar12);
          FUN_02990210(lVar12);
        }
        if (iVar17 != 0x7fffffff) {
          if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(int *)(param_1[2] + 0x10c) = iVar17 - *(int *)(lVar10 + 0x4c);
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_64 = iVar17;
          FUN_0223df10(*(long *)(lVar10 + 0x20),&local_64,&local_70,*(undefined8 *)puVar4);
          local_a0 = CONCAT44(uStack_6c,local_70);
        }
        puVar18 = (undefined8 *)PTR_DAT_03d07a38;
        if (local_a0 != 0) {
          if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_70 = *(int *)(local_a0 + 0x18);
          FUN_0223ebe0(*(long *)(lVar10 + 0x20),&local_70,*(undefined8 *)puVar5);
          if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(local_a0 + 0x18);
          goto LAB_0298f198;
        }
      }
      if (local_a0 == 0) {
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar17 = FUN_0223d91c(*(long *)(lVar10 + 0x18),*puVar18);
        if (0 < iVar17) {
          if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_70 = *(int *)(lVar10 + 0x48) + 1;
          FUN_0223dd48(*(long *)(lVar10 + 0x18),&local_70,&local_a0,*(undefined8 *)PTR_DAT_03d078b0)
          ;
          if (local_a0 != 0) {
            if (*(char *)(local_a0 + 0x11) == '\b') {
              if (*(int *)(local_a0 + 0x38) < 1) {
                iVar17 = *(int *)(local_a0 + 0x14);
                *(int *)(lVar10 + 0x48) = iVar17 + *(int *)(local_a0 + 0x28) + -1;
                if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                local_70 = iVar17;
                FUN_0223ebe0(*(long *)(lVar10 + 0x18),&local_70,*(undefined8 *)puVar5);
              }
              else {
                local_a0 = 0;
              }
            }
            else {
              iVar17 = *(int *)(local_a0 + 0x14);
              *(int *)(lVar10 + 0x48) = iVar17;
              if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              local_70 = iVar17;
              FUN_0223ebe0(*(long *)(lVar10 + 0x18),&local_70,*(undefined8 *)puVar5);
            }
            goto LAB_0298f198;
          }
        }
      }
      lVar10 = param_1[0x31];
      uVar16 = uVar16 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


