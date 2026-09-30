/*
FUNCTION_NAME: FUN_060cb21c
ENTRY_POINT: 060cb21c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x060cbec0) */
/* WARNING: Removing unreachable block (ram,0x060cb6f4) */

undefined4
FUN_060cb21c(undefined8 param_1,long param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  
  if ((DAT_07554cef & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2d18);
    FUN_03188a78(PTR_DAT_071004f8);
    FUN_03188a78(PTR_DAT_0710b760);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(PTR_DAT_070c7c80);
    FUN_03188a78(PTR_DAT_0710bc30);
    FUN_03188a78(PTR_DAT_07136a28);
    FUN_03188a78(PTR_DAT_070d1278);
    FUN_03188a78(PTR_DAT_07136a30);
    FUN_03188a78(PTR_DAT_071349b8);
    FUN_03188a78(PTR_DAT_070f5e20);
    FUN_03188a78(PTR_DAT_070cfda0);
    FUN_03188a78(PTR_DAT_07136a38);
    DAT_07554cef = 1;
  }
  puVar3 = PTR_DAT_0710bc30;
  if (param_2 == 0) {
    if (param_5 == (long *)0x0) goto LAB_060cbebc;
    uVar13 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
    lVar21 = *(long *)puVar3;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar21);
    }
    uVar13 = FUN_0634c788(uVar13,0);
    uVar14 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
    lVar21 = FUN_060cc004(param_1,uVar13,uVar14);
  }
  else {
    if (param_5 == (long *)0x0) goto LAB_060cbebc;
    lVar23 = *(long *)(param_2 + 0x28);
    uVar13 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
    lVar21 = *(long *)puVar3;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar21);
    }
    uVar13 = FUN_0634c788(uVar13,0);
    uVar14 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
    if (lVar23 == 0) goto LAB_060cbebc;
    lVar21 = FUN_060a385c(lVar23,uVar13,uVar14,0);
  }
  *param_3 = lVar21;
  lVar23 = *param_5;
  if (lVar21 == 0) {
    (**(code **)(lVar23 + 0x498))(param_5,*(undefined8 *)(lVar23 + 0x4a0));
    return 0xffffffff;
  }
  iVar9 = (**(code **)(lVar23 + 0x1f8))(param_5,*(undefined8 *)(lVar23 + 0x200));
  if (*param_3 == 0) {
    FUN_02d342ac(param_5);
    uVar13 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
    thunk_FUN_031edd38(PTR_DAT_0710bc30);
    FUN_02d35640();
    uVar13 = FUN_0634c788(uVar13,0);
    uVar13 = FUN_0607ed74(uVar13,0);
    uVar14 = thunk_FUN_031edd38(PTR_DAT_07136a40);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar13,uVar14);
  }
  uVar13 = (**(code **)(*param_5 + 0x3c8))
                     (param_5,*(undefined8 *)PTR_DAT_07136a30,*(undefined8 *)PTR_DAT_071349b8,
                      *(undefined8 *)(*param_5 + 0x3d0));
  uVar15 = FUN_057bebf8(uVar13,0);
  puVar3 = PTR_DAT_070c1958;
  if ((uVar15 & 1) == 0) {
    lVar21 = *(long *)(PTR_DAT_070c1958 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar14 = FUN_0593e698(lVar21 + 0x20,0);
    if (*(int *)(*(long *)PTR_DAT_070c2d18 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070c2d18);
    }
    plVar16 = (long *)FUN_058aa0b8(uVar13,uVar14,0,0);
    if (plVar16 == (long *)0x0) goto LAB_060cbebc;
    if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
    puVar17 = (undefined4 *)thunk_FUN_031c3ef0();
    *param_4 = *puVar17;
  }
  if (*param_3 != 0) {
    uVar10 = FUN_0606ab94(*param_3,0);
    puVar7 = PTR_DAT_0710b760;
    puVar6 = PTR_DAT_071004f8;
    puVar4 = PTR_DAT_070c7c80;
    puVar3 = PTR_DAT_070c2e88;
    if ((*param_3 != 0) && (plVar16 = *(long **)(*param_3 + 0x40), plVar16 != (long *)0x0)) {
      plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
      do {
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar21 = *plVar16;
        uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_060cb570;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar4,0);
LAB_060cb570:
        uVar15 = (*(code *)*puVar18)(plVar16,puVar18[1]);
        if ((uVar15 & 1) == 0) {
          plVar16 = (long *)thunk_FUN_031c3cac(plVar16,*(undefined8 *)puVar3);
          puVar6 = PTR_DAT_0710bc30;
          if (plVar16 == (long *)0x0) goto LAB_060cb6e8;
          lVar21 = *plVar16;
          uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar15 == 0) goto LAB_060cb6a8;
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          goto LAB_060cb690;
        }
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar21 = *plVar16;
        uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
              puVar18 = (undefined8 *)(lVar21 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_060cb5d8;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar4,1);
LAB_060cb5d8:
        plVar19 = (long *)(*(code *)*puVar18)(plVar16,puVar18[1]);
        lVar21 = *(long *)puVar6;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar21 = *(long *)puVar6;
        }
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar23 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar23 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != lVar23)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(plVar19);
        }
        FUN_06077a94(plVar19,uVar10,**(undefined8 **)(lVar21 + 0xb8),0);
      } while( true );
    }
  }
LAB_060cbebc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar22 = piVar22 + 4;
    if (uVar15 == 0) break;
LAB_060cb690:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_060cb6dc;
    }
  }
LAB_060cb6a8:
  puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar3,0);
LAB_060cb6dc:
  (*(code *)*puVar18)(plVar16,puVar18[1]);
LAB_060cb6e8:
  if ((*param_3 != 0) && (plVar16 = *(long **)(*param_3 + 0x40), plVar16 != (long *)0x0)) {
    plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
    puVar5 = PTR_DAT_070d1278;
    do {
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar21 = *plVar16;
      uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_060cb784;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar4,0);
LAB_060cb784:
      uVar15 = (*(code *)*puVar18)(plVar16,puVar18[1]);
      if ((uVar15 & 1) == 0) {
        plVar16 = (long *)thunk_FUN_031c3cac(plVar16,*(undefined8 *)puVar3);
        if (plVar16 == (long *)0x0) goto LAB_060cb9a0;
        lVar21 = *plVar16;
        uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar15 == 0) goto LAB_060cb978;
        piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        goto LAB_060cb960;
      }
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar21 = *plVar16;
      uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar18 = (undefined8 *)(lVar21 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_060cb7ec;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar4,1);
LAB_060cb7ec:
      plVar19 = (long *)(*(code *)*puVar18)(plVar16,puVar18[1]);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar21 = *(long *)puVar7;
      lVar23 = *plVar19;
      bVar1 = *(byte *)(lVar21 + 0x130);
      if ((*(byte *)(lVar23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)bVar1 * 8 + -8) != lVar21)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar19);
      }
      iVar11 = (**(code **)(lVar23 + 0x1d8))(plVar19,*(undefined8 *)(lVar23 + 0x1e0));
      if ((iVar11 != 1) &&
         (iVar11 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
         iVar11 != 3)) {
        iVar11 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        if (iVar11 == 4) {
          uVar13 = FUN_06075a28(plVar19,0);
          uVar13 = FUN_057b27f0(*(undefined8 *)puVar5,uVar13,0);
          lVar21 = (**(code **)(*param_5 + 0x3c8))
                             (param_5,uVar13,*(undefined8 *)PTR_DAT_071349b8,
                              *(undefined8 *)(*param_5 + 0x3d0));
        }
        else {
          uVar13 = FUN_06075a28(plVar19,0);
          uVar14 = FUN_060775ac(plVar19,0);
          lVar21 = (**(code **)(*param_5 + 0x3c8))
                             (param_5,uVar13,uVar14,*(undefined8 *)(*param_5 + 0x3d0));
        }
        if (lVar21 != 0) {
          uVar13 = FUN_06079ac0(plVar19,lVar21,0);
          FUN_06077a94(plVar19,uVar10,uVar13,0);
        }
      }
    } while( true );
  }
  goto LAB_060cbebc;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar22 = piVar22 + 4;
    if (uVar15 == 0) break;
LAB_060cb960:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
      goto System_Runtime_Serialization_KnownTypeDataContractResolver__TryResolveType;
    }
  }
LAB_060cb978:
  puVar18 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)puVar3,0);
System_Runtime_Serialization_KnownTypeDataContractResolver__TryResolveType:
  (*(code *)*puVar18)(plVar16,puVar18[1]);
LAB_060cb9a0:
  uVar13 = (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  FUN_060cb1bc(uVar13,param_5);
  iVar11 = (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
  if (iVar9 < iVar11) {
    if (*param_3 == 0) goto LAB_060cbebc;
    lVar23 = *(long *)(*param_3 + 0xf8);
    lVar21 = *param_5;
    if (lVar23 == 0) {
      iVar11 = (**(code **)(lVar21 + 0x1f8))(param_5,*(undefined8 *)(lVar21 + 0x200));
      puVar4 = PTR_DAT_07136a38;
      puVar3 = PTR_DAT_070c1958;
      while (iVar9 < iVar11) {
        uVar13 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)puVar6);
        }
        uVar13 = FUN_0634c788(uVar13,0);
        uVar14 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
        if ((*param_3 == 0) || (lVar21 = *(long *)(*param_3 + 0x40), lVar21 == 0))
        goto LAB_060cbebc;
        lVar21 = FUN_060955cc(lVar21,uVar13,uVar14,0);
        if (lVar21 == 0) {
          while (iVar11 = (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0))
                , iVar11 != 0xf) {
            uVar20 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
            uVar15 = FUN_057bdc60(uVar20,uVar13,0);
            if ((uVar15 & 1) == 0) break;
            uVar20 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
            uVar15 = FUN_057bdc60(uVar20,uVar14,0);
            if ((uVar15 & 1) == 0) break;
            (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
          }
System_Runtime_Serialization_NetDataContractSerializer__get_IgnoreExtensionDataObject:
          (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
        }
        else {
          uVar15 = FUN_06079190(lVar21,0);
          if ((uVar15 & 1) == 0) {
            iVar11 = (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
            (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
            iVar12 = (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
            if (iVar11 < iVar12) {
              iVar11 = (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0));
              if (((iVar11 == 3) ||
                  (iVar11 = (**(code **)(*param_5 + 0x198))
                                      (param_5,*(undefined8 *)(*param_5 + 0x1a0)), iVar11 == 0xd))
                 || (iVar11 = (**(code **)(*param_5 + 0x198))
                                        (param_5,*(undefined8 *)(*param_5 + 0x1a0)), iVar11 == 0xe))
              {
                uVar13 = (**(code **)(*param_5 + 0x528))(param_5,*(undefined8 *)(*param_5 + 0x530));
                uVar13 = FUN_06079ac0(lVar21,uVar13,0);
                FUN_06077a94(lVar21,uVar10,uVar13,0);
                goto 
                System_Runtime_Serialization_NetDataContractSerializer__get_IgnoreExtensionDataObject
                ;
              }
            }
            else {
              uVar13 = *(undefined8 *)(lVar21 + 0x38);
              lVar23 = *(long *)(puVar3 + 0x90);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar14 = FUN_0593e698(lVar23 + 0x20,0);
              uVar15 = FUN_05947b18(uVar13,uVar14,0);
              if ((uVar15 & 1) != 0) {
                FUN_06077a94(lVar21,uVar10,**(undefined8 **)(*(long *)(puVar3 + 0x90) + 0xb8),0);
              }
            }
          }
          else {
            uVar13 = *(undefined8 *)(lVar21 + 0x38);
            lVar23 = *(long *)(puVar3 + 0x10);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar14 = FUN_0593e698(lVar23 + 0x20,0);
            uVar15 = FUN_05947b18(uVar13,uVar14,0);
            if (((uVar15 & 1) == 0) &&
               (lVar23 = (**(code **)(*param_5 + 0x3c8))
                                   (param_5,*(undefined8 *)puVar4,*(undefined8 *)PTR_DAT_071349b8,
                                    *(undefined8 *)(*param_5 + 0x3d0)), lVar23 == 0)) {
              lVar23 = (**(code **)(*param_5 + 0x3c8))
                                 (param_5,*(undefined8 *)PTR_DAT_070cfda0,
                                  *(undefined8 *)PTR_DAT_070f5e20,*(undefined8 *)(*param_5 + 0x3d0))
              ;
              bVar8 = lVar23 != 0;
            }
            else {
              bVar8 = true;
            }
            if (*(long *)(lVar21 + 0x78) == 0) goto LAB_060cbebc;
            lVar23 = *(long *)(*(long *)(lVar21 + 0x78) + 0x20);
            if ((lVar23 == 0) || (*(char *)(lVar23 + 0x8d) == '\0')) {
              bVar2 = false;
              if (!bVar8) goto LAB_060cbcc0;
LAB_060cbcc8:
              lVar23 = 0;
            }
            else {
              (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
              bVar2 = true;
              if (bVar8) goto LAB_060cbcc8;
LAB_060cbcc0:
              if (*(char *)(lVar21 + 0x94) != '\0') goto LAB_060cbcc8;
              if (bVar2) {
                uVar13 = (**(code **)(*param_5 + 0x1b8))(param_5,*(undefined8 *)(*param_5 + 0x1c0));
                lVar23 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)PTR_DAT_07136a28);
                FUN_0636dc48(lVar23,uVar13,0);
                uVar13 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
              }
              else {
                uVar13 = FUN_06075a28(lVar21,0);
                lVar23 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)PTR_DAT_07136a28);
                FUN_0636dc48(lVar23,uVar13,0);
                uVar13 = FUN_060775ac(lVar21,0);
              }
              if (lVar23 == 0) goto LAB_060cbebc;
              *(undefined8 *)(lVar23 + 0x28) = uVar13;
            }
            uVar13 = FUN_06079afc(lVar21,param_5,lVar23,0);
            FUN_06077a94(lVar21,uVar10,uVar13,0);
            if (bVar2)
            goto 
            System_Runtime_Serialization_NetDataContractSerializer__get_IgnoreExtensionDataObject;
          }
        }
        iVar11 = (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
      }
    }
    else {
      uVar13 = (**(code **)(lVar21 + 0x528))(param_5,*(undefined8 *)(lVar21 + 0x530));
      uVar13 = FUN_06079ac0(lVar23,uVar13,0);
      FUN_06077a94(lVar23,uVar10,uVar13,0);
    }
  }
  else {
    if (iVar11 != iVar9) {
      return uVar10;
    }
    iVar9 = (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0));
    if (iVar9 != 0xf) {
      return uVar10;
    }
  }
  uVar13 = (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  FUN_060cb1bc(uVar13,param_5);
  return uVar10;
}


