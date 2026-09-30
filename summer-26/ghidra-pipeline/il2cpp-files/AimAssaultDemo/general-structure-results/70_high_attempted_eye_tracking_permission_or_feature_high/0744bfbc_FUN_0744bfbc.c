/*
FUNCTION_NAME: FUN_0744bfbc
ENTRY_POINT: 0744bfbc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0744cda0) */
/* WARNING: Removing unreachable block (ram,0x0744cdb8) */
/* WARNING: Removing unreachable block (ram,0x0744cd3c) */
/* WARNING: Removing unreachable block (ram,0x0744c548) */
/* WARNING: Removing unreachable block (ram,0x0744cdb0) */
/* WARNING: Removing unreachable block (ram,0x0744c4e0) */
/* WARNING: Removing unreachable block (ram,0x0744c738) */
/* WARNING: Removing unreachable block (ram,0x0744cdd0) */
/* WARNING: Removing unreachable block (ram,0x0744cd90) */
/* WARNING: Removing unreachable block (ram,0x0744cddc) */
/* WARNING: Removing unreachable block (ram,0x0744caa0) */
/* WARNING: Removing unreachable block (ram,0x0744cd74) */
/* WARNING: Removing unreachable block (ram,0x0744ccc0) */

void FUN_0744bfbc(long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  puVar5 = UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo;
  if ((DAT_08269b75 & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_TreeViewExpansionChangedArgs_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    FUN_0373b518(Oculus_Platform_Models_TrialOffer_TypeInfo);
    FUN_0373b518(Oculus_Platform_Models_TrialOfferList_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_MeshOperations_Triangulation_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_Triangle_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_Poly2Tri_Triangulatable_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo);
    DAT_08269b75 = 1;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x234) = 1;
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar9 = *(long *)puVar5;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    FUN_0754d370(lVar9,0);
  }
  uVar10 = FUN_07435e74(param_1);
  if (*(long *)(param_1 + 0x210) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x210) + 0x10);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar2 = *(int *)(lVar16 + 0x18);
  iVar3 = *(int *)(lVar15 + 0x18);
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar16 = *(long *)(param_1 + 0x220);
    if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x18))) {
      if ((uVar10 & 1) != 0) {
        FUN_049cf910(&local_a0,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar6), plVar8 = local_d0,
              (uVar11 & 1) != 0) {
          uVar18 = *(undefined8 *)((long)param_3 + 0x14);
          uVar19 = *param_3;
          uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
          uVar26 = uStack_b0;
          uStack_b8 = (undefined4)param_3[1];
          uVar20 = uStack_b8;
          uStack_b4 = (undefined4)((ulong)param_3[1] >> 0x20);
          uVar23 = uStack_b4;
          local_c0 = uVar19;
          uStack_ac = uVar18;
          if (local_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar24 = param_4[1];
          uVar21 = param_4[2];
          uVar22 = *param_4;
          lVar16 = *local_d0;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_0744c320;
              }
              uVar11 = uVar11 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(local_d0,*(long *)puVar5,3);
LAB_0744c320:
          uStack_98 = uVar20;
          uStack_8c = (undefined4)uVar18;
          uStack_88 = (undefined4)((ulong)uVar18 >> 0x20);
          uStack_94 = uVar23;
          local_90 = uVar26;
          local_a0 = uVar19;
          (*(code *)*puVar13)(uVar22,uVar24,uVar21,plVar8,param_1,&local_a0,puVar13[1]);
        }
        FUN_05d64e94(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
      }
      lVar16 = *(long *)(param_1 + 0x220);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar1 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_062658d0(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
      }
    }
  }
  else {
    if ((uVar10 & 1) != 0) {
      if (0 < iVar2) {
        FUN_049cf910(&local_a0,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar6), plVar8 = local_d0,
              (uVar11 & 1) != 0) {
          plVar12 = *(long **)(param_1 + 0x210);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            uVar18 = *(undefined8 *)((long)param_3 + 0x14);
            local_a0 = *param_3;
            uStack_8c = (undefined4)uVar18;
            uStack_88 = (undefined4)((ulong)uVar18 >> 0x20);
            local_90 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uStack_98 = (undefined4)param_3[1];
            uStack_94 = (undefined4)((ulong)param_3[1] >> 0x20);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar23 = param_4[1];
            uVar20 = param_4[2];
            uVar26 = *param_4;
            uStack_f4 = uStack_94;
            uStack_f0 = local_90;
            lVar16 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
            local_100 = local_a0;
            uStack_f8 = uStack_98;
            uStack_ec = uVar18;
            if (uVar11 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_0744c204;
                }
                uVar11 = uVar11 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar5,3);
LAB_0744c204:
            uStack_b8 = uStack_f8;
            local_c0 = local_100;
            uStack_ac = uStack_ec;
            uStack_b4 = uStack_f4;
            uStack_b0 = uStack_f0;
            (*(code *)*puVar13)(uVar26,uVar23,uVar20,plVar8,param_1,&local_c0,puVar13[1]);
          }
        }
        FUN_05d64e94(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
      }
      if (0 < iVar3) {
        if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar16 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_049cf910(&local_a0,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
        local_d0 = (long *)CONCAT44(uStack_8c,local_90);
        local_e0 = local_a0;
        while (uVar11 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar6), plVar8 = local_d0,
              (uVar11 & 1) != 0) {
          plVar12 = *(long **)(param_1 + 0x218);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400))
          ;
          if ((uVar11 & 1) != 0) {
            uVar18 = *param_3;
            uStack_10c = (undefined4)*(undefined8 *)((long)param_3 + 0x14);
            uVar21 = uStack_10c;
            uStack_108 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
            uVar24 = uStack_108;
            uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
            uVar26 = uStack_110;
            uStack_118 = (undefined4)param_3[1];
            uVar20 = uStack_118;
            local_114 = (undefined4)((ulong)param_3[1] >> 0x20);
            uVar23 = local_114;
            uStack_120 = uVar18;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar25 = param_4[1];
            uVar22 = param_4[2];
            uVar27 = *param_4;
            lVar16 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar11 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_0744c478;
                }
                uVar11 = uVar11 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar5,3);
LAB_0744c478:
            uStack_98 = uVar20;
            uStack_94 = uVar23;
            local_90 = uVar26;
            local_a0 = uVar18;
            uStack_8c = uVar21;
            uStack_88 = uVar24;
            (*(code *)*puVar13)(uVar27,uVar25,uVar22,plVar8,param_1,&local_a0,puVar13[1]);
          }
        }
        FUN_05d64e94(&local_e0,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
      }
    }
    lVar16 = *(long *)(param_1 + 0x220);
    *(undefined1 *)(param_1 + 0x228) = 0;
    if (lVar16 != 0) {
      iVar1 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_062658d0(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
      }
    }
  }
  if ((uVar10 & 1) == 0) {
    if (0 < iVar3) {
      if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar16 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&uStack_120,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
      puVar7 = Oculus_Platform_Models_TrialOffer_TypeInfo;
      puVar6 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
      puVar5 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
      uStack_d8 = CONCAT44(local_114,uStack_118);
      local_d0 = (long *)CONCAT44(uStack_10c,uStack_110);
      local_e0 = uStack_120;
      while (uVar10 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar7), plVar8 = local_d0,
            (uVar10 & 1) != 0) {
        plVar12 = (long *)thunk_FUN_037787d0(local_d0,*(undefined8 *)puVar5);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x218);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 400));
          if ((uVar10 & 1) != 0) {
            lVar15 = *plVar12;
            lVar16 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar16) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0744c998;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar12,lVar16,0);
LAB_0744c998:
            uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar15 = *plVar8;
              lVar16 = *(long *)puVar6;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0744c9f8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744c9f8:
              uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
              if ((uVar10 & 1) != 0) {
                lVar15 = *plVar8;
                lVar16 = *(long *)puVar6;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar16) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0744ca58;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744ca58:
                (*(code *)*puVar13)(plVar8,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_05d64e94(&local_e0,
                   *(undefined8 *)
                    UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    }
    if (0 < iVar2) {
      if (*(long *)(param_1 + 0x210) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar16 = *(long *)(*(long *)(param_1 + 0x210) + 0x10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&uStack_120,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
      puVar7 = Oculus_Platform_Models_TrialOffer_TypeInfo;
      puVar6 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
      puVar5 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
      uStack_d8 = CONCAT44(local_114,uStack_118);
      local_d0 = (long *)CONCAT44(uStack_10c,uStack_110);
      local_e0 = uStack_120;
      while (uVar10 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar7), plVar8 = local_d0,
            (uVar10 & 1) != 0) {
        plVar12 = (long *)thunk_FUN_037787d0(local_d0,*(undefined8 *)puVar5);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x210);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 400));
          if ((uVar10 & 1) != 0) {
            lVar15 = *plVar12;
            lVar16 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar16) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0744cb88;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar12,lVar16,0);
LAB_0744cb88:
            uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar15 = *plVar8;
              lVar16 = *(long *)puVar6;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0744cbe8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744cbe8:
              uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
              if ((uVar10 & 1) != 0) {
                lVar15 = *plVar8;
                lVar16 = *(long *)puVar6;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar16) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0744cc48;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744cc48:
                (*(code *)*puVar13)(plVar8,param_1,param_2,param_3,param_4,puVar13[1]);
              }
            }
          }
        }
      }
      FUN_05d64e94(&local_e0,
                   *(undefined8 *)
                    UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    }
    goto joined_r0x0744cc98;
  }
  if (iVar3 < 1) {
LAB_0744c5a8:
    bVar4 = false;
  }
  else {
    lVar16 = FUN_07445304(param_1);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((*(int *)(lVar16 + 0x18) < 2) && (uVar10 = FUN_0744d1e4(param_1), (uVar10 & 1) != 0))
    goto LAB_0744c5a8;
    if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x218) + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&uStack_120,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
    puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
    puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
    uStack_d8 = CONCAT44(local_114,uStack_118);
    local_d0 = (long *)CONCAT44(uStack_10c,uStack_110);
    local_e0 = uStack_120;
    bVar4 = false;
    while (uVar10 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar6), plVar8 = local_d0,
          (uVar10 & 1) != 0) {
      plVar12 = *(long **)(param_1 + 0x218);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *plVar8;
        lVar16 = *(long *)puVar5;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar16) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0744c688;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744c688:
        uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
        if ((uVar10 & 1) != 0) {
          lVar15 = *plVar8;
          lVar16 = *(long *)puVar5;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar16) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_0744c6e8;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744c6e8:
          bVar4 = true;
          (*(code *)*puVar13)(plVar8,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_05d64e94(&local_e0,
                 *(undefined8 *)
                  UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
  }
  if ((0 < iVar2) && (!bVar4)) {
    if (*(long *)(param_1 + 0x210) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x210) + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&uStack_120,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
    puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
    puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
    uStack_d8 = CONCAT44(local_114,uStack_118);
    local_d0 = (long *)CONCAT44(uStack_10c,uStack_110);
    local_e0 = uStack_120;
    while (uVar10 = FUN_05d64e98(&local_e0,*(undefined8 *)puVar6), plVar8 = local_d0,
          (uVar10 & 1) != 0) {
      plVar12 = *(long **)(param_1 + 0x210);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,local_d0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *plVar8;
        lVar16 = *(long *)puVar5;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar16) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0744c80c;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744c80c:
        uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
        if ((uVar10 & 1) != 0) {
          lVar15 = *plVar8;
          lVar16 = *(long *)puVar5;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar16) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_0744c86c;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744c86c:
          (*(code *)*puVar13)(plVar8,param_1,param_2,param_3,param_4,puVar13[1]);
        }
      }
    }
    FUN_05d64e94(&local_e0,
                 *(undefined8 *)
                  UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
  }
joined_r0x0744cc98:
  if (lVar9 != 0) {
    FUN_0754d3f8(lVar9,0);
  }
  *(undefined1 *)(param_1 + 0x234) = 0;
  return;
}


