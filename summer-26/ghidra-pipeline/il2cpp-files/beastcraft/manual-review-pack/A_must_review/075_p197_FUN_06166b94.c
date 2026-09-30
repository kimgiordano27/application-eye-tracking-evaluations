/*
FUNCTION_NAME: FUN_06166b94
ENTRY_POINT: 06166b94
PROGRAM: beastcraft-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_8;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06167938) */
/* WARNING: Removing unreachable block (ram,0x06167928) */
/* WARNING: Removing unreachable block (ram,0x061672cc) */
/* WARNING: Removing unreachable block (ram,0x06167084) */
/* WARNING: Removing unreachable block (ram,0x06167910) */
/* WARNING: Removing unreachable block (ram,0x061670e4) */
/* WARNING: Removing unreachable block (ram,0x06167918) */
/* WARNING: Removing unreachable block (ram,0x06167900) */
/* WARNING: Removing unreachable block (ram,0x06167944) */
/* WARNING: Removing unreachable block (ram,0x061678f0) */
/* WARNING: Removing unreachable block (ram,0x06167648) */
/* WARNING: Removing unreachable block (ram,0x0616786c) */

void FUN_06166b94(long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_168;
  undefined8 *puStack_160;
  long *local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  long local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  puVar6 = PTR_DAT_06a6a618;
  if ((bRam0000000006e957a4 & 1) == 0) {
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateStatus_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Tablet_CameraMode_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_CameraProperties_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_CameraRenderType_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_CcmBlockCipher_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateStatusRequest_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
    FUN_02e3ca1c(Game_Views_Survival_CampfireActor_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a681a8);
    FUN_02e3ca1c(PTR_DAT_06a6a618);
    bRam0000000006e957a4 = 1;
  }
  lVar10 = *(long *)puVar6;
  local_d0 = (long *)0x0;
  local_c8 = 0;
  *(undefined1 *)(param_1 + 0x26c) = 1;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar10 = *(long *)puVar6;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    FUN_06215068(lVar10,0);
  }
  local_e8 = &local_c8;
  local_f0 = 0;
  local_c8 = lVar10;
  if (*(long *)(param_1 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x250) + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  cVar4 = *(char *)(param_1 + 0x110);
  iVar2 = *(int *)(lVar10 + 0x18);
  iVar3 = *(int *)(lVar15 + 0x18);
  if (*(char *)(param_1 + 0x260) == '\0') {
    lVar10 = *(long *)(param_1 + 600);
    if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
      if (cVar4 != '\0') {
        FUN_03f2c008(&local_a0,lVar10,
                     *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
        puVar7 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
        puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
        puStack_d8 = (undefined8 *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        uStack_b8 = &local_e0;
        local_e0 = local_a0;
        local_c0 = 0;
        while( true ) {
          uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          if (local_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar10 = *local_d0;
          uVar18 = param_4[1];
          uVar17 = param_4[2];
          local_150 = *param_3;
          uStack_13c = *(undefined8 *)((long)param_3 + 0x14);
          uVar19 = *param_4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uStack_148 = (undefined4)param_3[1];
          uStack_144 = (undefined4)*(undefined8 *)((long)param_3 + 0xc);
          uStack_140 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_06166ee0;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_02e759c0(local_d0,*(long *)puVar7,3);
LAB_06166ee0:
          uStack_98._0_4_ = uStack_148;
          local_a0 = local_150;
          uStack_8c = (undefined4)uStack_13c;
          uStack_88 = (undefined4)((ulong)uStack_13c >> 0x20);
          uStack_98._4_4_ = uStack_144;
          local_90 = uStack_140;
          (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_a0,puVar13[1]);
        }
        FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
      }
      lVar10 = *(long *)(param_1 + 600);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05628afc(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
  }
  else {
    if (cVar4 != '\0') {
      if (0 < iVar2) {
        FUN_03f2c008(&local_a0,lVar10,
                     *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
        puVar7 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
        puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
        puStack_d8 = (undefined8 *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        uStack_98 = &local_e0;
        local_e0 = local_a0;
        local_a0 = 0;
        while( true ) {
          uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          plVar12 = *(long **)(param_1 + 0x248);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar10 = *plVar9;
            uVar18 = param_4[1];
            uVar17 = param_4[2];
            local_110 = *param_3;
            uStack_fc = *(undefined8 *)((long)param_3 + 0x14);
            uVar19 = *param_4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            uStack_108 = (undefined4)param_3[1];
            uStack_104 = (undefined4)*(undefined8 *)((long)param_3 + 0xc);
            uStack_100 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto LAB_06166dd4;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)puVar7,3);
LAB_06166dd4:
            uStack_b8._0_4_ = uStack_108;
            local_c0 = local_110;
            uStack_ac = uStack_fc;
            uStack_b8._4_4_ = uStack_104;
            uStack_b0 = uStack_100;
            (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_c0,puVar13[1]);
          }
        }
        FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
      }
      if (0 < iVar3) {
        if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x250) + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_03f2c008(&local_a0,lVar10,
                     *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
        puVar7 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
        puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
        puStack_d8 = uStack_98;
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        puStack_160 = &local_e0;
        local_e0 = local_a0;
        local_168 = 0;
        while( true ) {
          uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          plVar12 = *(long **)(param_1 + 0x250);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar10 = *plVar9;
            uVar18 = param_4[1];
            uVar17 = param_4[2];
            local_130 = *param_3;
            uStack_11c = *(undefined8 *)((long)param_3 + 0x14);
            uVar19 = *param_4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            uStack_128 = (undefined4)param_3[1];
            uStack_124 = (undefined4)*(undefined8 *)((long)param_3 + 0xc);
            uStack_120 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto LAB_06167024;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)puVar7,3);
LAB_06167024:
            uStack_98._0_4_ = uStack_128;
            local_a0 = local_130;
            uStack_8c = (undefined4)uStack_11c;
            uStack_88 = (undefined4)((ulong)uStack_11c >> 0x20);
            uStack_98._4_4_ = uStack_124;
            local_90 = uStack_120;
            (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_a0,puVar13[1]);
          }
        }
        FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
      }
    }
    lVar10 = *(long *)(param_1 + 600);
    *(undefined1 *)(param_1 + 0x260) = 0;
    uStack_b8 = (undefined8 *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uStack_b8 = (undefined8 *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
      if (0 < iVar1) {
        FUN_05628afc(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
  }
  if (cVar4 == '\0') {
    if (0 < iVar3) {
      if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x250) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_03f2c008(&local_168,lVar10,
                   *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
      puVar8 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
      puVar7 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_CcmBlockCipher_TypeInfo;
      puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
      puStack_d8 = puStack_160;
      local_e0 = local_168;
      puStack_160 = &local_e0;
      local_d0 = local_158;
      local_168 = 0;
      while( true ) {
        uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
        plVar9 = local_d0;
        if ((uVar11 & 1) == 0) break;
        plVar12 = (long *)thunk_FUN_02e789bc(local_d0,*(undefined8 *)puVar7);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x250);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 400));
          if ((uVar11 & 1) != 0) {
            lVar15 = *plVar12;
            lVar10 = *(long *)puVar7;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar10) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06167540;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(plVar12,lVar10,0);
LAB_06167540:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar11 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar15 = *plVar9;
              lVar10 = *(long *)puVar8;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar10) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_061675a0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,0);
LAB_061675a0:
              uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
              if ((uVar11 & 1) != 0) {
                lVar15 = *plVar9;
                lVar10 = *(long *)puVar8;
                uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar11 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                      goto LAB_06167600;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,4);
LAB_06167600:
                (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
    }
    if (0 < iVar2) {
      if (*(long *)(param_1 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_03f2c008(&local_168,lVar10,
                   *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
      puVar8 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
      puVar7 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_CcmBlockCipher_TypeInfo;
      puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
      puStack_d8 = puStack_160;
      local_e0 = local_168;
      local_d0 = local_158;
      local_168 = 0;
      puStack_160 = &local_e0;
      while( true ) {
        uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
        plVar9 = local_d0;
        if ((uVar11 & 1) == 0) break;
        plVar12 = (long *)thunk_FUN_02e789bc(local_d0,*(undefined8 *)puVar7);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x248);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 400));
          if ((uVar11 & 1) != 0) {
            lVar15 = *plVar12;
            lVar10 = *(long *)puVar7;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar10) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0616773c;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(plVar12,lVar10,0);
LAB_0616773c:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar11 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar15 = *plVar9;
              lVar10 = *(long *)puVar8;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar10) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0616779c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,0);
LAB_0616779c:
              uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
              if ((uVar11 & 1) != 0) {
                lVar15 = *plVar9;
                lVar10 = *(long *)puVar8;
                uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar11 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                      goto LAB_061677fc;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,4);
LAB_061677fc:
                (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
    }
    goto LAB_06167848;
  }
  if (iVar3 < 1) {
LAB_06167144:
    bVar5 = false;
  }
  else {
    lVar10 = FUN_0615e6d4(param_1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(int *)(lVar10 + 0x18) < 2) {
      uVar11 = FUN_06167c74(param_1);
      if ((uVar11 & 1) != 0) goto LAB_06167144;
    }
    if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x250) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&local_168,lVar10,
                 *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
    puVar7 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
    puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
    bVar5 = false;
    puStack_d8 = puStack_160;
    local_e0 = local_168;
    local_d0 = local_158;
    local_168 = 0;
    puStack_160 = &local_e0;
    while( true ) {
      uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
      plVar9 = local_d0;
      if ((uVar11 & 1) == 0) break;
      plVar12 = *(long **)(param_1 + 0x250);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar11 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *plVar9;
        lVar10 = *(long *)puVar7;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06167220;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,0);
LAB_06167220:
        uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
        if ((uVar11 & 1) != 0) {
          lVar15 = *plVar9;
          lVar10 = *(long *)puVar7;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_06167280;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,4);
LAB_06167280:
          bVar5 = true;
          (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
  }
  if ((0 < iVar2) && (!bVar5)) {
    if (*(long *)(param_1 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&local_168,lVar10,
                 *(undefined8 *)UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
    puVar7 = Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo;
    puVar6 = UnityEngine_Rendering_CameraProperties_TypeInfo;
    puStack_d8 = puStack_160;
    local_e0 = local_168;
    local_d0 = local_158;
    local_168 = 0;
    puStack_160 = &local_e0;
    while( true ) {
      uVar11 = FUN_04fc1198(&local_e0,*(undefined8 *)puVar6);
      plVar9 = local_d0;
      if ((uVar11 & 1) == 0) break;
      plVar12 = *(long **)(param_1 + 0x248);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar11 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *plVar9;
        lVar10 = *(long *)puVar7;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_061673ac;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,0);
LAB_061673ac:
        uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
        if ((uVar11 & 1) != 0) {
          lVar15 = *plVar9;
          lVar10 = *(long *)puVar7;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_0616740c;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_02e759c0(plVar9,lVar10,4);
LAB_0616740c:
          (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_04fc1194(&local_e0,*(undefined8 *)Liv_Lck_Tablet_CameraMode_TypeInfo);
  }
LAB_06167848:
  if (*local_e8 != 0) {
    FUN_062150f0(*local_e8,0);
  }
  if (local_f0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccbc();
  }
  *(undefined1 *)(param_1 + 0x26c) = 0;
  return;
}


