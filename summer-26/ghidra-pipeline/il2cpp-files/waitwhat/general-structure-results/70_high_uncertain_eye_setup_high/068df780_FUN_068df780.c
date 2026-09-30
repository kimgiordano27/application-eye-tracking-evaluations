/*
FUNCTION_NAME: FUN_068df780
ENTRY_POINT: 068df780
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x068e0524) */
/* WARNING: Removing unreachable block (ram,0x068e0514) */
/* WARNING: Removing unreachable block (ram,0x068dfeb8) */
/* WARNING: Removing unreachable block (ram,0x068dfc70) */
/* WARNING: Removing unreachable block (ram,0x068e04fc) */
/* WARNING: Removing unreachable block (ram,0x068dfcd0) */
/* WARNING: Removing unreachable block (ram,0x068e0504) */
/* WARNING: Removing unreachable block (ram,0x068e04ec) */
/* WARNING: Removing unreachable block (ram,0x068e0530) */
/* WARNING: Removing unreachable block (ram,0x068e04dc) */
/* WARNING: Removing unreachable block (ram,0x068e0234) */
/* WARNING: Removing unreachable block (ram,0x068e0458) */

void FUN_068df780(long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

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
  
  puVar6 = OVRPlugin_LayerLayout_TypeInfo;
  if ((DAT_075592c6 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinHeightProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo);
    FUN_03188a78(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingBottomProperty_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginBottomProperty_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingTopProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo)
    ;
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingRightProperty_TypeInfo
                );
    FUN_03188a78(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075592c6 = 1;
  }
  lVar10 = *(long *)puVar6;
  local_d0 = (long *)0x0;
  local_c8 = 0;
  *(undefined1 *)(param_1 + 0x254) = 1;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar6;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    UnityEngine_TerrainData___cctor(lVar10,0);
  }
  local_e8 = &local_c8;
  local_f0 = 0;
  local_c8 = lVar10;
  if (*(long *)(param_1 + 0x230) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x230) + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(long *)(param_1 + 0x238) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x238) + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  cVar4 = *(char *)(param_1 + 0x110);
  iVar2 = *(int *)(lVar10 + 0x18);
  iVar3 = *(int *)(lVar15 + 0x18);
  if (*(char *)(param_1 + 0x248) == '\0') {
    lVar10 = *(long *)(param_1 + 0x240);
    if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
      if (cVar4 != '\0') {
        FUN_042e54fc(&local_a0,lVar10,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                    );
        puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
        puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
        puStack_d8 = (undefined8 *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        uStack_b8 = &local_e0;
        local_e0 = local_a0;
        local_c0 = 0;
        while( true ) {
          uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar7);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          if (local_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
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
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_068dfacc;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08(local_d0,*(long *)puVar6,3);
LAB_068dfacc:
          uStack_98._0_4_ = uStack_148;
          local_a0 = local_150;
          uStack_8c = (undefined4)uStack_13c;
          uStack_88 = (undefined4)((ulong)uStack_13c >> 0x20);
          uStack_98._4_4_ = uStack_144;
          local_90 = uStack_140;
          (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_a0,puVar13[1]);
        }
        FUN_054518b0(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo
                    );
      }
      lVar10 = *(long *)(param_1 + 0x240);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
  }
  else {
    if (cVar4 != '\0') {
      if (0 < iVar2) {
        FUN_042e54fc(&local_a0,lVar10,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                    );
        puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
        puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
        puStack_d8 = (undefined8 *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        uStack_98 = &local_e0;
        local_e0 = local_a0;
        local_a0 = 0;
        while( true ) {
          uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar7);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          plVar12 = *(long **)(param_1 + 0x230);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
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
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto LAB_068df9c0;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar6,3);
LAB_068df9c0:
            uStack_b8._0_4_ = uStack_108;
            local_c0 = local_110;
            uStack_ac = uStack_fc;
            uStack_b8._4_4_ = uStack_104;
            uStack_b0 = uStack_100;
            (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_c0,puVar13[1]);
          }
        }
        FUN_054518b0(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo
                    );
      }
      if (0 < iVar3) {
        if (*(long *)(param_1 + 0x238) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x238) + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_042e54fc(&local_a0,lVar10,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                    );
        puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
        puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
        puStack_d8 = uStack_98;
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        puStack_160 = &local_e0;
        local_e0 = local_a0;
        local_168 = 0;
        while( true ) {
          uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar7);
          plVar9 = local_d0;
          if ((uVar11 & 1) == 0) break;
          plVar12 = *(long **)(param_1 + 0x238);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
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
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto LAB_068dfc10;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar6,3);
LAB_068dfc10:
            uStack_98._0_4_ = uStack_128;
            local_a0 = local_130;
            uStack_8c = (undefined4)uStack_11c;
            uStack_88 = (undefined4)((ulong)uStack_11c >> 0x20);
            uStack_98._4_4_ = uStack_124;
            local_90 = uStack_120;
            (*(code *)*puVar13)(uVar19,uVar18,uVar17,plVar9,param_1,&local_a0,puVar13[1]);
          }
        }
        FUN_054518b0(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo
                    );
      }
    }
    lVar10 = *(long *)(param_1 + 0x240);
    *(undefined1 *)(param_1 + 0x248) = 0;
    uStack_b8 = (undefined8 *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uStack_b8 = (undefined8 *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
  }
  if (cVar4 == '\0') {
    if (0 < iVar3) {
      if (*(long *)(param_1 + 0x238) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x238) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_042e54fc(&local_168,lVar10,
                   *(undefined8 *)
                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                  );
      puVar8 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
      puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
      puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginBottomProperty_TypeInfo;
      puStack_d8 = puStack_160;
      local_e0 = local_168;
      puStack_160 = &local_e0;
      local_d0 = local_158;
      local_168 = 0;
      while( true ) {
        uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar8);
        plVar9 = local_d0;
        if ((uVar11 & 1) == 0) break;
        plVar12 = (long *)thunk_FUN_031c3cac(local_d0,*(undefined8 *)puVar6);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x238);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 400));
          if ((uVar11 & 1) != 0) {
            lVar15 = *plVar12;
            lVar10 = *(long *)puVar6;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar10) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_068e012c;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar12,lVar10,0);
LAB_068e012c:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar11 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar15 = *plVar9;
              lVar10 = *(long *)puVar7;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar10) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_068e018c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,0);
LAB_068e018c:
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
                      goto LAB_068e01ec;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,4);
LAB_068e01ec:
                (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_054518b0(&local_e0,
                   *(undefined8 *)
                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo)
      ;
    }
    if (0 < iVar2) {
      if (*(long *)(param_1 + 0x230) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x230) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_042e54fc(&local_168,lVar10,
                   *(undefined8 *)
                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                  );
      puVar8 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
      puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
      puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginBottomProperty_TypeInfo;
      puStack_d8 = puStack_160;
      local_e0 = local_168;
      local_d0 = local_158;
      local_168 = 0;
      puStack_160 = &local_e0;
      while( true ) {
        uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar8);
        plVar9 = local_d0;
        if ((uVar11 & 1) == 0) break;
        plVar12 = (long *)thunk_FUN_031c3cac(local_d0,*(undefined8 *)puVar6);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x230);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 400));
          if ((uVar11 & 1) != 0) {
            lVar15 = *plVar12;
            lVar10 = *(long *)puVar6;
            uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar10) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_068e0328;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_031c0d08(plVar12,lVar10,0);
LAB_068e0328:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar11 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar15 = *plVar9;
              lVar10 = *(long *)puVar7;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar10) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_068e0388;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,0);
LAB_068e0388:
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
                      goto LAB_068e03e8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,4);
LAB_068e03e8:
                (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_054518b0(&local_e0,
                   *(undefined8 *)
                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo)
      ;
    }
    goto LAB_068e0434;
  }
  if (iVar3 < 1) {
LAB_068dfd30:
    bVar5 = false;
  }
  else {
    lVar10 = FUN_068d8cdc(param_1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar10 + 0x18) < 2) {
      uVar11 = FUN_068e0860(param_1);
      if ((uVar11 & 1) != 0) goto LAB_068dfd30;
    }
    if (*(long *)(param_1 + 0x238) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x238) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_042e54fc(&local_168,lVar10,
                 *(undefined8 *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                );
    puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
    puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
    bVar5 = false;
    puStack_d8 = puStack_160;
    local_e0 = local_168;
    local_d0 = local_158;
    local_168 = 0;
    puStack_160 = &local_e0;
    while( true ) {
      uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar7);
      plVar9 = local_d0;
      if ((uVar11 & 1) == 0) break;
      plVar12 = *(long **)(param_1 + 0x238);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar11 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar15 = *plVar9;
        lVar10 = *(long *)puVar6;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_068dfe0c;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,0);
LAB_068dfe0c:
        uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
        if ((uVar11 & 1) != 0) {
          lVar15 = *plVar9;
          lVar10 = *(long *)puVar6;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_068dfe6c;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,4);
LAB_068dfe6c:
          bVar5 = true;
          (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_054518b0(&local_e0,
                 *(undefined8 *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo);
  }
  if ((0 < iVar2) && (!bVar5)) {
    if (*(long *)(param_1 + 0x230) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x230) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_042e54fc(&local_168,lVar10,
                 *(undefined8 *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                );
    puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_OpacityProperty_TypeInfo;
    puVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MarginLeftProperty_TypeInfo;
    puStack_d8 = puStack_160;
    local_e0 = local_168;
    local_d0 = local_158;
    local_168 = 0;
    puStack_160 = &local_e0;
    while( true ) {
      uVar11 = FUN_054518b4(&local_e0,*(undefined8 *)puVar7);
      plVar9 = local_d0;
      if ((uVar11 & 1) == 0) break;
      plVar12 = *(long **)(param_1 + 0x230);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar11 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar15 = *plVar9;
        lVar10 = *(long *)puVar6;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_068dff98;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,0);
LAB_068dff98:
        uVar11 = (*(code *)*puVar13)(plVar9,puVar13[1]);
        if ((uVar11 & 1) != 0) {
          lVar15 = *plVar9;
          lVar10 = *(long *)puVar6;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_068dfff8;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_031c0d08(plVar9,lVar10,4);
LAB_068dfff8:
          (*(code *)*puVar13)(plVar9,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_054518b0(&local_e0,
                 *(undefined8 *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_MinWidthProperty_TypeInfo);
  }
LAB_068e0434:
  if (*local_e8 != 0) {
    FUN_069807c8(*local_e8,0);
  }
  if (local_f0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0();
  }
  *(undefined1 *)(param_1 + 0x254) = 0;
  return;
}


