/*
FUNCTION_NAME: FUN_09b6b1ec
ENTRY_POINT: 09b6b1ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x09b6b868) */
/* WARNING: Removing unreachable block (ram,0x09b6b90c) */
/* WARNING: Removing unreachable block (ram,0x09b6bd78) */
/* WARNING: Removing unreachable block (ram,0x09b6bf9c) */
/* WARNING: Removing unreachable block (ram,0x09b6bedc) */
/* WARNING: Removing unreachable block (ram,0x09b6c300) */

uint FUN_09b6b1ec(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  uint extraout_w8;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  int iVar25;
  float fVar26;
  long *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long **pplStack_100;
  long *local_f8;
  long local_f0;
  char *local_e8;
  long **local_e0;
  long local_d8;
  long **local_d0;
  long *local_c8;
  long local_c0;
  byte *local_b8;
  long **local_b0;
  long *local_a8;
  long local_a0;
  long *local_98;
  char local_8c [4];
  long *local_88;
  long *local_80;
  byte local_74 [4];
  long *local_68;
  
  if ((DAT_0b3397a4 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0acbe618);
    FUN_04947ee4(PTR_DAT_0acbe5e8);
    FUN_04947ee4(PTR_DAT_0ac1d270);
    FUN_04947ee4(PTR_DAT_0ac09b88);
    FUN_04947ee4(PTR_DAT_0ac2ae98);
    FUN_04947ee4(PTR_DAT_0ac5ee08);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac15130);
    FUN_04947ee4(PTR_DAT_0ac09ba8);
    FUN_04947ee4(PTR_DAT_0ac0a830);
    FUN_04947ee4(PTR_DAT_0acbe5f0);
    DAT_0b3397a4 = 1;
  }
  plVar19 = (long *)PTR_DAT_0ac09b88;
  iVar12 = *(int *)(param_1 + 0x1c);
  local_68 = (long *)0x0;
  local_74[0] = 0;
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_8c[0] = '\0';
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_a8 = (long *)0x0;
  if ((iVar12 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    lVar13 = *(long *)PTR_DAT_0ac09b88;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar13 = *plVar19;
      iVar12 = *(int *)(param_1 + 0x1c);
    }
    fVar26 = 1.0;
    local_118 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
    if (iVar12 < *(int *)(param_1 + 0x24)) {
      fVar26 = (float)iVar12 / (float)*(int *)(param_1 + 0x24);
    }
    plVar14 = *(long **)(param_1 + 0x10);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    local_68 = (long *)(**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0));
    local_b8 = local_74;
    local_74[0] = 0;
    local_c0 = 0;
    local_b0 = &local_68;
    FUN_08de98fc(local_68,local_74,0);
    plVar14 = *(long **)(param_1 + 0x10);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    local_80 = (long *)(**(code **)(*plVar14 + 0x328))(plVar14,*(undefined8 *)(*plVar14 + 0x330));
    puVar6 = PTR_DAT_0acbe5e8;
    puVar5 = PTR_DAT_0ac09ba8;
    local_d0 = &local_80;
    local_120 = (long *)0x0;
    iVar12 = 0;
    local_d8 = 0;
    local_c8 = &local_a0;
LAB_09b6b3a4:
    iVar7 = 0;
    do {
      plVar14 = local_80;
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar13 = *local_80;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_09b6b400;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(local_80,*(long *)puVar5,0);
LAB_09b6b400:
      uVar23 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      plVar14 = local_80;
      if ((uVar23 & 1) == 0) {
        iVar7 = 0x17;
        goto Unity_XR_Oculus_Input_OculusHMD__set_leftEyeAngularVelocity;
      }
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar13 = *local_80;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_09b6b468;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(local_80,*(long *)puVar5,1);
LAB_09b6b468:
      plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)PTR_DAT_0ac2ae98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c();
      }
      lVar13 = thunk_FUN_049840a8();
      if (param_2 == 0) {
        plVar14 = *(long **)(lVar13 + 8);
        if (plVar14 == (long *)0x0) goto LAB_09b6c2dc;
        bVar3 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar14);
        }
      }
      else {
        plVar14 = *(long **)(param_1 + 0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                    (plVar14,param_2,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar14 == (long *)0x0) {
LAB_09b6c2dc:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar14);
        }
      }
      plVar16 = (long *)plVar14[2];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      local_88 = (long *)(**(code **)(*plVar16 + 0x308))(plVar16,*(undefined8 *)(*plVar16 + 0x310));
      local_e8 = local_8c;
      local_f0 = 0;
      local_e0 = &local_88;
      local_8c[0] = '\0';
      FUN_08de98fc(local_88,local_8c,0);
      plVar16 = (long *)plVar14[2];
      if ((plVar16 == (long *)0x0) ||
         (plVar16 = (long *)(**(code **)(*plVar16 + 0x2c8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x2d0)),
         plVar16 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar13 = *plVar16;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac15130) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_09b6b5ec;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6b5ec:
      local_98 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
      pplStack_100 = &local_98;
      iVar25 = 0;
      local_108 = 0;
      local_f8 = &local_a0;
      plVar16 = local_120;
      uVar18 = local_118;
LAB_09b6b610:
      local_118 = uVar18;
      local_120 = plVar16;
      plVar16 = local_98;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar13 = *local_98;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto FUN_09b6b664;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(local_98,*(long *)puVar5,0);
FUN_09b6b664:
      uVar23 = (*(code *)*puVar15)(plVar16,puVar15[1]);
      plVar16 = local_98;
      if ((uVar23 & 1) != 0) {
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar13 = *local_98;
        uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto Unity_XR_OpenVR_ViveWand__get_deviceVelocity;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_04980e68(local_98,*(long *)puVar5,1);
Unity_XR_OpenVR_ViveWand__get_deviceVelocity:
        plVar17 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
        if (plVar17 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(plVar17);
          }
        }
        iVar7 = FUN_09b6c510(plVar17,plVar17);
        iVar12 = iVar7 + iVar12;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar7;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar8 = FUN_09b699f8(plVar17,0);
        iVar25 = iVar8 + iVar25;
        iVar8 = FUN_09b699f8(plVar17,0);
        plVar16 = local_120;
        uVar18 = local_118;
        if (0 < iVar8) {
          uVar18 = FUN_09b69a44(plVar17,0,0);
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar23 = FUN_08d560b0(uVar18,local_118,0);
          plVar16 = plVar17;
          if ((uVar23 & 1) == 0) {
            plVar16 = local_120;
            uVar18 = local_118;
          }
        }
        goto LAB_09b6b610;
      }
      plVar19 = (long *)thunk_FUN_04983e64(local_98,*(undefined8 *)PTR_DAT_0ac09b90);
      *local_f8 = (long)plVar19;
      if (plVar19 != (long *)0x0) {
        lVar13 = *plVar19;
        uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac09b90) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_09b6b82c;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_04980e68(plVar19,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6b82c:
        (*(code *)*puVar15)(plVar19,puVar15[1]);
      }
      if (*local_e8 != '\0') {
        thunk_FUN_0495413c(*local_e0,0);
      }
      if (local_f0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948184();
      }
      uVar10 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar19 = (long *)PTR_DAT_0ac09b88;
      iVar9 = FUN_08d7af4c(uVar2,uVar10,0);
      iVar8 = -0x80000000;
      if (fVar26 * (float)iVar25 != INFINITY) {
        iVar8 = (int)(fVar26 * (float)iVar25);
      }
      iVar8 = FUN_08d7af4c(iVar8,iVar9 + -1,0);
    } while (iVar25 <= iVar8);
    plVar16 = (long *)plVar14[2];
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    local_88 = (long *)(**(code **)(*plVar16 + 0x308))(plVar16,*(undefined8 *)(*plVar16 + 0x310));
    local_e8 = local_8c;
    local_f0 = 0;
    local_e0 = &local_88;
    local_8c[0] = '\0';
    FUN_08de98fc(local_88,local_8c,0);
    uVar18 = *(undefined8 *)PTR_DAT_0acbe618;
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar18 = FUN_08d895f0(uVar18,0);
    plVar16 = (long *)plVar14[2];
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar10 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    lVar13 = FUN_08da22c4(uVar18,uVar10,0);
    uVar18 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
    plVar16 = (long *)plVar14[2];
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar10 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    lVar20 = FUN_08da22c4(uVar18,uVar10,0);
    plVar14 = (long *)plVar14[2];
    if ((plVar14 == (long *)0x0) ||
       (plVar14 = (long *)(**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0))
       , plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar22 = *plVar14;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac15130) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_09b6bb2c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6bb2c:
    plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
    pplStack_100 = &local_98;
    local_108 = 0;
    local_f8 = &local_a0;
    do {
      local_98 = plVar14;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar22 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_09b6bba0;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)puVar5,0);
LAB_09b6bba0:
      uVar23 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      plVar14 = local_98;
      if ((uVar23 & 1) == 0) goto LAB_09b6bcb0;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar22 = *local_98;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_09b6bc08;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(local_98,*(long *)puVar5,1);
LAB_09b6bc08:
      plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar14);
      }
      local_110 = FUN_09b69a44(plVar14,0,0);
      uVar18 = thunk_FUN_04983b98(*plVar19,&local_110);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c(uVar18,uVar18);
      }
      FUN_08d9ecb4(lVar20,uVar18,iVar7,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08d9ecb4(lVar13,plVar14,iVar7,0);
      iVar7 = iVar7 + 1;
      plVar14 = local_98;
    } while( true );
  }
  uVar18 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac5ee08);
  FUN_08d0b76c(uVar18,0);
  *(undefined8 *)(param_1 + 0x10) = uVar18;
  thunk_FUN_049ee3d8((undefined8 *)(param_1 + 0x10),uVar18);
  uVar21 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  goto LAB_09b6c0c8;
LAB_09b6bcb0:
  plVar19 = (long *)thunk_FUN_04983e64(local_98,*(undefined8 *)PTR_DAT_0ac09b90);
  *local_f8 = (long)plVar19;
  if (plVar19 != (long *)0x0) {
    lVar22 = *plVar19;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar19,*(long *)PTR_DAT_0ac09b90,0);
Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed:
    (*(code *)*puVar15)(plVar19,puVar15[1]);
  }
  if (*local_e8 != '\0') {
    thunk_FUN_0495413c(*local_e0,0);
  }
  if (local_f0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  FUN_08da1af0(lVar20,lVar13,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar7 = 0;
  do {
    plVar19 = (long *)PTR_DAT_0ac09b88;
    iVar9 = FUN_08d948e8(lVar13,0);
    if (iVar9 <= iVar7) break;
    plVar19 = (long *)FUN_08d94948(lVar13,iVar7,0);
    if (plVar19 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar19);
      }
    }
    local_e8 = local_8c;
    local_f0 = 0;
    local_e0 = &local_a8;
    local_8c[0] = '\0';
    local_a8 = plVar19;
    FUN_08de98fc(plVar19,local_8c,0);
    if (iVar25 - iVar8 != 0 && iVar8 <= iVar25) {
      iVar1 = (iVar25 - iVar8) + iVar12;
      iVar9 = iVar12;
      iVar4 = iVar25;
      do {
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar11 = FUN_09b699f8(plVar19,0);
        iVar12 = iVar9;
        iVar25 = iVar4;
        if (iVar11 < 1) break;
        FUN_09b69fa0(plVar19,0,0);
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        iVar12 = iVar1;
        iVar25 = iVar8;
      } while (iVar8 < iVar4);
    }
    if (local_8c[0] != '\0') {
      thunk_FUN_0495413c(*local_e0,0);
    }
    iVar7 = iVar7 + 1;
    plVar19 = (long *)PTR_DAT_0ac09b88;
  } while (iVar8 < iVar25);
  if ((iVar25 <= iVar8) || (param_2 == 0)) goto LAB_09b6b3a4;
  local_8c[0] = '\0';
  iVar7 = 0x16;
Unity_XR_Oculus_Input_OculusHMD__set_leftEyeAngularVelocity:
  plVar19 = (long *)thunk_FUN_04983e64(*local_d0,*(undefined8 *)PTR_DAT_0ac09b90);
  *local_c8 = (long)plVar19;
  if (plVar19 != (long *)0x0) {
    lVar13 = *plVar19;
    uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_09b6c170;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar19,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6c170:
    (*(code *)*puVar15)(plVar19,puVar15[1]);
  }
  if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  uVar21 = (uint)*local_b8;
  if (*local_b8 != 0) {
    thunk_FUN_0495413c(*local_b0,0);
    uVar21 = extraout_w8;
  }
  puVar5 = PTR_DAT_0ac09b88;
  if (local_c0 != 0) {
LAB_09b6c318:
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (iVar7 != 0x17) {
    if (iVar7 == 0x16) {
      uVar21 = (uint)(local_8c[0] != '\0');
      goto LAB_09b6c0c8;
    }
    if (iVar7 != 0) goto LAB_09b6c0c8;
  }
  uVar21 = 1;
  if ((param_2 == 0) && (iVar12 == 0)) {
    lVar13 = *(long *)PTR_DAT_0ac09b88;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar13 = *(long *)puVar5;
    }
    uVar23 = FUN_08d5b56c(local_118,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
    if ((uVar23 & 1) == 0) {
      local_b8 = local_74;
      local_74[0] = 0;
      local_c0 = 0;
      local_b0 = &local_a8;
      local_a8 = local_120;
      FUN_08de98fc(local_120,local_74,0);
      if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x24)) {
        if (local_120 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        do {
          iVar12 = FUN_09b699f8(local_120,0);
          if (iVar12 < 1) break;
          FUN_09b69fa0(local_120,0,0);
          iVar12 = *(int *)(param_1 + 0x24) + -1;
          *(int *)(param_1 + 0x24) = iVar12;
        } while (*(int *)(param_1 + 0x1c) <= iVar12);
      }
      if (*local_b8 != 0) {
        thunk_FUN_0495413c(*local_b0,0);
      }
      if (local_c0 != 0) goto LAB_09b6c318;
      uVar21 = 1;
    }
    else {
      uVar21 = 0;
    }
  }
LAB_09b6c0c8:
  return uVar21 & 1;
}


