/*
FUNCTION_NAME: GameAnalyticsSDK.Wrapper.GA_Wrapper$$configureAvailableCustomDimensions01
ENTRY_POINT: 0123e5ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void GameAnalyticsSDK_Wrapper_GA_Wrapper__configureAvailableCustomDimensions01(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  pthread_t pVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long in_x9;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong in_x10;
  ulong in_x11;
  ulong uVar14;
  ulong in_x12;
  ulong uVar15;
  int in_w13;
  uint unaff_w19;
  long lVar16;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  uint uVar17;
  int unaff_w26;
  int *unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  
code_r0x0123e5ec:
  in_x11 = (ulong)((int)in_x11 + 1);
  if (in_w13 < 1) goto LAB_0123e5d0;
LAB_0123e600:
  iVar11 = *(int *)(param_1 + 0x68) + -1;
  if (0 < *(int *)(param_1 + 0x68)) {
    if (iVar11 == 0) {
      piVar1 = (int *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 2) {
        FUN_012959dc(piVar1,1,0);
      }
    }
    else {
      *(int *)(param_1 + 0x68) = iVar11;
    }
  }
  if (unaff_w19 != 0) {
    puVar12 = *(undefined8 **)(unaff_x23 + 0xac0);
    *(undefined4 *)(puVar12 + 0x50) = 0x50;
    do {
      uVar9 = *puVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar3) {
        *puVar12 = uVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar8 = FUN_012117c4();
    puVar13 = *(ulong **)(unaff_x23 + 0xac0);
    if ((long)(puVar13[0x29] + (long)((short)uVar9 * 1000)) <= (long)(uVar8 & 0xffffffff)) {
      do {
        uVar8 = *puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *puVar13 = uVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      while( true ) {
        DataMemoryBarrier(2,3);
        puVar13 = *(ulong **)(unaff_x23 + 0xac0);
        if (*(int *)((long)puVar13 + 0x26c) <= (int)(short)uVar8) break;
        while (*puVar13 == uVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar3) {
            *puVar13 = uVar8 & 0xffffffffffff0000 | (ulong)((int)uVar8 + 1) & 0xffff;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            DataMemoryBarrier(2,3);
            FUN_0123f970();
            iVar11 = 4;
            goto LAB_0123e880;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        puVar13 = *(ulong **)(unaff_x23 + 0xac0);
        do {
          uVar8 = *puVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar3) {
            *puVar13 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  goto LAB_0123e680;
  while (bVar3 = iVar11 != 0, iVar11 = iVar11 + -1, bVar3) {
LAB_0123e880:
    uVar8 = FUN_01222174();
    if ((((uVar8 & 1) != 0) ||
        (uVar8 = GameAnalyticsSDK_Wrapper_GA_Wrapper__configureAvailableResourceItemTypes(),
        (uVar8 & 1) != 0)) || (uVar8 = FUN_0123e8fc(), (uVar8 & 1) != 0)) break;
  }
LAB_0123e680:
  do {
    do {
      iVar11 = *unaff_x27;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
      if (bVar3) {
        *unaff_x27 = unaff_w22;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar11 == 1) {
      uVar8 = FUN_01222174();
      if ((uVar8 & 1) == 0) {
        lVar16 = *(long *)(unaff_x23 + 0xac0);
        pVar7 = pthread_self();
        if (pVar7 == *(pthread_t *)(lVar16 + 0x60)) {
          *(int *)(lVar16 + 0x68) = *(int *)(lVar16 + 0x68) + 1;
        }
        else {
          piVar1 = (int *)(lVar16 + 0x20);
          iVar11 = 0;
          do {
            iVar5 = *piVar1;
            if (iVar5 == iVar11) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_0123e760;
              bVar3 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0123e760:
              bVar3 = false;
            }
          } while ((iVar5 != 2) && (iVar11 = iVar5, !bVar3));
          while (iVar5 != 0) {
            FUN_01295984(piVar1,2,0xffffffff);
            do {
              iVar5 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = unaff_w26;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(pthread_t *)(lVar16 + 0x60) = pVar7;
          *(int *)(lVar16 + 0x68) = unaff_w22;
        }
        lVar10 = *(long *)(unaff_x23 + 0xac0);
        lVar16 = *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8);
        if (lVar16 == 0) {
          bVar3 = false;
        }
        else {
          uVar8 = 1;
          uVar15 = 0;
          do {
            uVar14 = uVar8;
            iVar11 = *(int *)(*(long *)(*(long *)(lVar10 + 8) + uVar15 * 8) + 8);
            bVar3 = 0 < iVar11;
            if ((ulong)(lVar16 >> 3) <= uVar14) break;
            uVar8 = (ulong)((int)uVar14 + 1);
            uVar15 = uVar14;
          } while (iVar11 < 1);
        }
        iVar11 = *(int *)(lVar10 + 0x68) + -1;
        if (0 < *(int *)(lVar10 + 0x68)) {
          if (iVar11 == 0) {
            piVar1 = (int *)(lVar10 + 0x20);
            *(undefined8 *)(lVar10 + 0x60) = 0;
            *(undefined4 *)(lVar10 + 0x68) = 0;
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = 0;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 == 2) {
              FUN_012959dc(piVar1,1,0);
            }
          }
          else {
            *(int *)(lVar10 + 0x68) = iVar11;
          }
        }
        if (!bVar3 && *(long *)(unaff_x28 + 0x200) != -1) {
          lVar16 = FUN_01211824();
          if (unaff_x24 < lVar16 - *(long *)(unaff_x28 + 0x200)) goto LAB_0123e6a0;
          if (*(long *)(unaff_x28 + 0x200) != -1) goto LAB_0123e4b8;
        }
        uVar9 = FUN_01211824();
        *(undefined8 *)(unaff_x28 + 0x200) = uVar9;
      }
      else {
LAB_0123e6a0:
        *(undefined8 *)(unaff_x28 + 0x200) = unaff_x29;
        while (*unaff_x27 == 1) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
          if (bVar3) {
            *unaff_x27 = unaff_w26;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
      }
    }
LAB_0123e4b8:
    FUN_011f8014(1);
    uVar17 = 0;
    iVar11 = 500;
    do {
      uVar8 = FUN_01222174();
      if ((uVar8 & 1) != 0) break;
      iVar5 = FUN_012117c4();
      FUN_01204048(iVar11);
      iVar6 = FUN_012117c4();
      FUN_011f8014(0);
      FUN_011f8014(1);
      if (8 < uVar17) break;
      iVar11 = (iVar5 - iVar6) + iVar11;
      uVar17 = uVar17 + 1;
    } while (0 < iVar11);
    FUN_011f8014(0);
  } while ((*(char *)(*(long *)(unaff_x23 + 0xac0) + 0x284) != '\0') ||
          (uVar8 = FUN_01222174(), (uVar8 & 1) != 0));
  lVar16 = *(long *)(unaff_x23 + 0xac0);
  pVar7 = pthread_self();
  if (pVar7 == *(pthread_t *)(lVar16 + 0x60)) {
    *(int *)(lVar16 + 0x68) = *(int *)(lVar16 + 0x68) + 1;
  }
  else {
    piVar1 = (int *)(lVar16 + 0x20);
    iVar11 = 0;
    do {
      iVar5 = *piVar1;
      if (iVar5 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0123e574;
        bVar3 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0123e574:
        bVar3 = false;
      }
    } while ((iVar5 != 2) && (iVar11 = iVar5, !bVar3));
    while (iVar5 != 0) {
      FUN_01295984(piVar1,2,0xffffffff);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = unaff_w26;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(pthread_t *)(lVar16 + 0x60) = pVar7;
    *(int *)(lVar16 + 0x68) = unaff_w22;
  }
  param_1 = *(long *)(unaff_x23 + 0xac0);
  in_x9 = *(long *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 0x10) - in_x9;
  if (lVar16 == 0) {
    unaff_w19 = 0;
    goto LAB_0123e600;
  }
  in_x12 = 0;
  in_x10 = lVar16 >> 3;
  in_x11 = 1;
LAB_0123e5d0:
  in_w13 = *(int *)(*(long *)(in_x9 + in_x12 * 8) + 8);
  unaff_w19 = (uint)(0 < in_w13);
  in_x12 = in_x11;
  if (in_x11 < in_x10) goto code_r0x0123e5ec;
  goto LAB_0123e600;
}


