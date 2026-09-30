/*
FUNCTION_NAME: FUN_054aabac
ENTRY_POINT: 054aabac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x054ab414) */
/* WARNING: Removing unreachable block (ram,0x054ab40c) */

void FUN_054aabac(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_06a53ab6 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_ReviewItemResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var);
    FUN_02d4dc40(System_Net_ResponseStream_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    DAT_06a53ab6 = 1;
  }
  if ((param_2 != 0) && (plVar9 = *(long **)(param_2 + 0x40), plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    puVar5 = PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var;
    puVar4 = PTR_DAT_066479b0;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_054aacd0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar15,0);
LAB_054aacd0:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = PTR_DAT_066479a8;
      if ((uVar17 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02d8a53c(plVar9,*(undefined8 *)PTR_DAT_066479a8);
        if (plVar9 == (long *)0x0) goto LAB_054aae34;
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_054aae0c;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_054aadf4;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_054aad38;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar15,1);
LAB_054aad38:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar11);
        }
      }
      uVar17 = FUN_054ab670(plVar11);
      if ((uVar17 & 1) != 0) {
        plVar12 = *(long **)(param_1 + 0x20);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
      }
    } while( true );
  }
  goto LAB_054ab3b4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_054ab308:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_054ab33c;
    }
  }
LAB_054ab320:
  puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar3,0);
LAB_054ab33c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_054aadf4:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_054aae28;
    }
  }
LAB_054aae0c:
  puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar3,0);
LAB_054aae28:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_054aae34:
  plVar9 = *(long **)(param_2 + 0x48);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    puVar8 = System_Xml_XmlEncodedRawTextWriter_TypeInfo;
    puVar7 = PlayFab_EconomyModels_ReviewItemResponse_TypeInfo;
    puVar6 = PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo;
    puVar5 = System_Net_ResponseStream_TypeInfo;
    puVar4 = PTR_DAT_066479b0;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_054aaedc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar15,0);
LAB_054aaedc:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar17 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02d8a53c(plVar9,*(undefined8 *)puVar3);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_054ab320;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_054ab308;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar15 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_054aaf44;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar15,1);
LAB_054aaf44:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
LAB_054aafc4:
        uVar17 = FUN_054abb7c(plVar11);
        plVar12 = *(long **)(param_1 + 0x20);
        if ((uVar17 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar15 = plVar11[7];
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            lVar15 = plVar11[7];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            plVar11 = *(long **)(param_1 + 0x20);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*plVar11 + 0x318))
                      (plVar11,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
        }
      }
      else {
        bVar1 = *(byte *)(*plVar11 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar15 = *(long *)(*plVar11 + 200),
           *(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar11);
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(plVar11);
          }
          goto LAB_054aafc4;
        }
        uVar17 = FUN_054b4ff0(plVar11,1);
        plVar12 = *(long **)(param_1 + 0x20);
        if ((uVar17 & 1) == 0) {
          lVar15 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            plVar12 = *(long **)(param_1 + 0x20);
            lVar15 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar12 + 800));
          }
          plVar12 = *(long **)(param_1 + 0x20);
          lVar15 = FUN_0547e790(plVar11,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar15 = (**(code **)(*plVar12 + 0x308))
                             (plVar12,*(undefined8 *)(lVar15 + 0x20),
                              *(undefined8 *)(*plVar12 + 0x310));
          if (lVar15 != 0) {
            plVar12 = *(long **)(param_1 + 0x20);
            lVar15 = FUN_0547e790(plVar11,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar12 + 800));
          }
          lVar15 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar15 = *(long *)(lVar15 + 0x48);
          uVar13 = FUN_0547e790(plVar11,0);
          uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
          FUN_05488ecc(uVar14,*(undefined8 *)puVar8,uVar13,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          plVar11 = (long *)FUN_054507ac(lVar15,uVar14,0);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4e268(plVar11);
            }
            plVar12 = *(long **)(param_1 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar15 = (**(code **)(*plVar12 + 0x308))
                               (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x310));
            if (lVar15 != 0) {
              plVar12 = *(long **)(param_1 + 0x20);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,0,*(undefined8 *)(*plVar12 + 800));
            }
            lVar15 = plVar11[7];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            plVar12 = *(long **)(param_1 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar15 = (**(code **)(*plVar12 + 0x308))
                               (plVar12,*(undefined8 *)(lVar15 + 0x20),
                                *(undefined8 *)(*plVar12 + 0x310));
            if (lVar15 != 0) {
              lVar15 = plVar11[7];
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              plVar11 = *(long **)(param_1 + 0x20);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              (**(code **)(*plVar11 + 0x318))
                        (plVar11,*(undefined8 *)(lVar15 + 0x20),0,*(undefined8 *)(*plVar11 + 800));
            }
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar12 + 0x318))(plVar12,plVar11,plVar11,*(undefined8 *)(*plVar12 + 800));
        }
      }
    } while( true );
  }
LAB_054ab3b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


