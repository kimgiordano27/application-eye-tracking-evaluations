/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 0685eb4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
               (undefined8 param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long unaff_x19;
  uint uVar27;
  uint uVar28;
  long unaff_x20;
  ulong uVar29;
  undefined1 unaff_w21;
  long *plVar30;
  long *unaff_x23;
  undefined8 uVar31;
  long *unaff_x28;
  long lVar32;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7dc8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0xe66) = unaff_w21;
  if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
    uVar31 = FUN_033d1ba8(&DAT_08433d90);
    FUN_033d1ba8(&DAT_083c8a08);
    uVar20 = thunk_FUN_03398a84();
    uVar21 = FUN_033d1ba8(&DAT_08455470);
    FUN_0677f1f8(uVar20,uVar31,uVar21,0);
LAB_06860fa0:
    uVar31 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar20,uVar31);
  }
  lVar10 = FUN_03398738();
  uVar20 = DAT_083c7980;
  if (lVar10 == 0) {
    *unaff_x23 = 0;
    FUN_033d1b20();
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  plVar11 = (long *)FUN_0339898c(lVar10,DAT_083c7980);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar10,uVar20);
  }
  *unaff_x23 = 0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x23 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x23 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar12 = FUN_03398188(DAT_083c7298,(int)plVar11[3]);
  lVar10 = plVar11[3];
  if (0 < (int)lVar10) {
    uVar9 = 0;
    do {
      if ((uint)lVar10 <= uVar9) goto LAB_0685fd5c;
      plVar16 = plVar11 + (long)(int)uVar9 + 4;
      plVar13 = (long *)*plVar16;
      if (((plVar13 == (long *)0x0) ||
          (lVar10 = (**(code **)(*plVar13 + 1000))(plVar13,*(undefined8 *)(*plVar13 + 0x3f0)),
          lVar10 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
      uVar23 = *(ulong *)(*unaff_x28 + 0x18);
      uVar15 = *(ulong *)(lVar10 + 0x18);
      if ((int)*(ulong *)(lVar10 + 0x18) <= (int)uVar23) {
        uVar15 = uVar23;
      }
      lVar14 = FUN_03398188(DAT_083c7838,uVar15 & 0xffffffff);
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar13 = (long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
      *plVar13 = lVar14;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (in_stack_00000030 == 0) {
        if (*unaff_x28 == 0) goto LAB_0685eebc;
        iVar8 = (int)*(undefined8 *)(*unaff_x28 + 0x18);
        if (0 < iVar8) {
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
          lVar10 = *plVar13;
          uVar23 = (ulong)iVar8;
          uVar15 = 0;
          if ((long)uVar23 < 2) {
            uVar23 = 1;
          }
          do {
            if (lVar10 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0685fd5c;
            *(int *)(lVar10 + 0x20 + uVar15 * 4) = (int)uVar15;
            uVar15 = uVar15 + 1;
          } while (uVar23 != uVar15);
        }
      }
      else {
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
        lVar14 = *plVar13;
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar15 = FUN_06860fe0(lVar14,lVar10,in_stack_00000030);
        if ((uVar15 & 1) == 0) {
          if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_0685fd5c;
          *plVar16 = 0;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar16 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
      }
      lVar10 = plVar11[3];
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)lVar10);
  }
  plVar13 = (long *)FUN_03398188(DAT_083c7dc8);
  if (*unaff_x28 != 0) {
    plVar16 = (long *)FUN_03398188(DAT_083c7dc8,*(undefined4 *)(*unaff_x28 + 0x18));
    lVar10 = *unaff_x28;
    if (lVar10 != 0) {
      uVar15 = 0;
      do {
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
          if ((int)plVar11[3] < 1) goto LAB_06860f70;
          uVar15 = 0;
          uVar9 = 0;
          uVar23 = plVar11[3] & 0xffffffff;
          goto LAB_0685eee4;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0685fd5c;
        plVar26 = *(long **)(lVar10 + uVar15 * 8 + 0x20);
        if (plVar26 != (long *)0x0) {
          lVar10 = FUN_0339a700(*plVar26 + 0x20);
          if (plVar16 == (long *)0x0) break;
          if ((lVar10 != 0) &&
             (lVar14 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_0685fd5c;
          plVar26 = plVar16 + uVar15 + 4;
          *plVar26 = lVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar26 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar10 = *unaff_x28;
        }
        uVar15 = uVar15 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_0685eee4:
  if (uVar23 <= uVar15) goto LAB_0685fd5c;
  plVar26 = plVar11 + uVar15 + 4;
  uVar23 = FUN_06740938(*plVar26,0,0);
  if ((uVar23 & 1) != 0) goto LAB_0685fbc4;
  if (*(uint *)(plVar11 + 3) <= uVar15) goto LAB_0685fd5c;
  plVar17 = (long *)*plVar26;
  if ((plVar17 == (long *)0x0) ||
     (lVar10 = (**(code **)(*plVar17 + 1000))(plVar17,*(undefined8 *)(*plVar17 + 0x3f0)),
     lVar10 == 0)) goto LAB_0685eebc;
  uVar23 = *(ulong *)(lVar10 + 0x18);
  lVar14 = *unaff_x28;
  if (uVar23 == 0) {
    if (lVar14 == 0) goto LAB_0685eebc;
    if (*(long *)(lVar14 + 0x18) != 0) {
      if (*(uint *)(plVar11 + 3) <= uVar15) goto LAB_0685fd5c;
      plVar17 = (long *)*plVar26;
      if (plVar17 == (long *)0x0) goto LAB_0685eebc;
      uVar7 = (**(code **)(*plVar17 + 0x288))(plVar17,*(undefined8 *)(*plVar17 + 0x290));
      if ((uVar7 >> 1 & 1) == 0) goto LAB_0685fbc4;
    }
    if (lVar12 == 0) goto LAB_0685eebc;
    if ((*(uint *)(lVar12 + 0x18) <= uVar15) || (*(uint *)(lVar12 + 0x18) <= uVar9))
    goto LAB_0685fd5c;
    puVar2 = (undefined8 *)(lVar12 + 0x20 + (long)(int)uVar9 * 8);
    *puVar2 = *(undefined8 *)(lVar12 + 0x20 + uVar15 * 8);
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar7 = *(uint *)(plVar11 + 3);
    if (uVar7 <= uVar15) goto LAB_0685fd5c;
    lVar10 = *plVar26;
    if (lVar10 != 0) {
      lVar14 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar14 == 0) goto LAB_06860ed8;
      uVar7 = (uint)plVar11[3];
    }
    if (uVar7 <= uVar9) goto LAB_0685fd5c;
    plVar26 = plVar11 + (long)(int)uVar9 + 4;
    *plVar26 = lVar10;
    uVar9 = uVar9 + 1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar26 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    goto LAB_0685fbc4;
  }
  if (lVar14 == 0) goto LAB_0685eebc;
  uVar7 = *(uint *)(lVar14 + 0x18);
  iVar8 = (int)uVar23;
  if ((int)uVar7 < iVar8) {
    uVar28 = iVar8 - 1;
    if ((int)uVar7 < (int)uVar28) {
      plVar17 = (long *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
      do {
        if ((uint)uVar23 <= uVar7) goto LAB_0685fd5c;
        plVar18 = (long *)*plVar17;
        if (plVar18 == (long *)0x0) goto LAB_0685eebc;
        lVar14 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
        if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca050);
        }
        if (lVar14 == **(long **)(DAT_083ca050 + 0xb8)) {
          uVar23 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar28 = *(uint *)(lVar10 + 0x18) - 1;
          break;
        }
        uVar23 = *(ulong *)(lVar10 + 0x18);
        uVar7 = uVar7 + 1;
        plVar17 = plVar17 + 1;
        uVar28 = (int)uVar23 - 1;
      } while ((int)uVar7 < (int)uVar28);
    }
    if (uVar7 == uVar28) {
      if ((uint)uVar23 <= uVar28) goto LAB_0685fd5c;
      plVar17 = (long *)(lVar10 + (long)(int)uVar28 * 8 + 0x20);
      plVar18 = (long *)*plVar17;
      if (plVar18 == (long *)0x0) goto LAB_0685eebc;
      lVar14 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar14 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
      if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0685fd5c;
      plVar18 = (long *)*plVar17;
      if ((plVar18 == (long *)0x0) ||
         (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
         plVar18 == (long *)0x0)) goto LAB_0685eebc;
      uVar23 = (**(code **)(*plVar18 + 0x358))(plVar18,*(undefined8 *)(*plVar18 + 0x360));
      uVar20 = DAT_083bd0a8;
      if ((uVar23 & 1) != 0) {
        if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0685fd5c;
        plVar18 = (long *)*plVar17;
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar20 = FUN_0683eca4(uVar20,0);
        if (plVar18 == (long *)0x0) goto LAB_0685eebc;
        uVar23 = (**(code **)(*plVar18 + 0x218))(plVar18,uVar20,1,*(undefined8 *)(*plVar18 + 0x220))
        ;
        if ((uVar23 & 1) != 0) {
          if (uVar28 < *(uint *)(lVar10 + 0x18)) {
            plVar17 = (long *)*plVar17;
            goto joined_r0x0685fb88;
          }
          goto LAB_0685fd5c;
        }
      }
    }
    goto LAB_0685fbc4;
  }
  if (iVar8 == 0) goto LAB_0685fd5c;
  uVar28 = iVar8 - 1;
  lVar14 = (long)(int)uVar28;
  plVar17 = (long *)(lVar10 + lVar14 * 8 + 0x20);
  plVar18 = (long *)*plVar17;
  if ((plVar18 == (long *)0x0) ||
     (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))(plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
     plVar18 == (long *)0x0)) goto LAB_0685eebc;
  uVar23 = (**(code **)(*plVar18 + 0x358))(plVar18,*(undefined8 *)(*plVar18 + 0x360));
  uVar20 = DAT_083bd0a8;
  if (iVar8 < (int)uVar7) {
    if ((uVar23 & 1) != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0685fd5c;
      plVar18 = (long *)*plVar17;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar20 = FUN_0683eca4(uVar20,0);
      if (plVar18 == (long *)0x0) goto LAB_0685eebc;
      uVar23 = (**(code **)(*plVar18 + 0x218))(plVar18,uVar20,1,*(undefined8 *)(*plVar18 + 0x220));
      if ((uVar23 & 1) != 0) {
        if (lVar12 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
        lVar24 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
        if (*(uint *)(lVar24 + lVar14 * 4 + 0x20) == uVar28) {
LAB_0685f2d4:
          if (uVar28 < *(uint *)(lVar10 + 0x18)) {
            plVar17 = (long *)*plVar17;
joined_r0x0685fb88:
            if ((plVar17 != (long *)0x0) &&
               (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                            (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
               plVar17 != (long *)0x0)) {
              plVar17 = (long *)(**(code **)(*plVar17 + 0x448))
                                          (plVar17,*(undefined8 *)(*plVar17 + 0x450));
              goto LAB_0685f360;
            }
            goto LAB_0685eebc;
          }
          goto LAB_0685fd5c;
        }
      }
    }
    goto LAB_0685fbc4;
  }
  if ((uVar23 & 1) == 0) {
LAB_0685f35c:
    plVar17 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0685fd5c;
    plVar18 = (long *)*plVar17;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar20 = FUN_0683eca4(uVar20,0);
    if (plVar18 == (long *)0x0) goto LAB_0685eebc;
    uVar23 = (**(code **)(*plVar18 + 0x218))(plVar18,uVar20,1,*(undefined8 *)(*plVar18 + 0x220));
    if ((uVar23 & 1) != 0) {
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
      lVar24 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
      if (lVar24 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
      if (*(uint *)(lVar24 + lVar14 * 4 + 0x20) == uVar28) {
        if (uVar28 < *(uint *)(lVar10 + 0x18)) {
          plVar18 = (long *)*plVar17;
          if ((plVar18 != (long *)0x0) &&
             (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
             plVar16 != (long *)0x0)) {
            if (uVar28 < *(uint *)(plVar16 + 3)) {
              if (plVar18 != (long *)0x0) {
                uVar23 = (**(code **)(*plVar18 + 0x2b8))
                                   (plVar18,plVar16[lVar14 + 4],*(undefined8 *)(*plVar18 + 0x2c0));
                if ((uVar23 & 1) == 0) goto LAB_0685f2d4;
                goto LAB_0685f35c;
              }
              goto LAB_0685eebc;
            }
            goto LAB_0685fd5c;
          }
          goto LAB_0685eebc;
        }
        goto LAB_0685fd5c;
      }
      goto LAB_0685f35c;
    }
    plVar17 = (long *)0x0;
  }
LAB_0685f360:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
    if (plVar17 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
    uVar7 = *(int *)(lVar10 + 0x18) - 1;
  }
  else {
    if (plVar17 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
    if (*unaff_x28 == 0) goto LAB_0685eebc;
    uVar7 = *(uint *)(*unaff_x28 + 0x18);
  }
  if ((int)uVar7 < 1) {
    uVar27 = 0;
  }
  else {
    uVar28 = 0;
    plVar18 = (long *)(lVar12 + uVar15 * 8 + 0x20);
    do {
      if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0685fd5c;
      lVar14 = (long)(int)uVar28;
      plVar19 = *(long **)(lVar10 + lVar14 * 8 + 0x20);
      if ((plVar19 == (long *)0x0) ||
         (plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1f0)),
         plVar19 == (long *)0x0)) goto LAB_0685eebc;
      uVar23 = (**(code **)(*plVar19 + 0x378))(plVar19,*(undefined8 *)(*plVar19 + 0x380));
      if ((uVar23 & 1) != 0) {
        plVar19 = (long *)(**(code **)(*plVar19 + 0x448))(plVar19,*(undefined8 *)(*plVar19 + 0x450))
        ;
      }
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
      lVar24 = *plVar18;
      if (lVar24 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
      if (plVar16 == (long *)0x0) goto LAB_0685eebc;
      uVar27 = *(uint *)(lVar24 + lVar14 * 4 + 0x20);
      if (*(uint *)(plVar16 + 3) <= uVar27) goto LAB_0685fd5c;
      plVar30 = (long *)plVar16[(long)(int)uVar27 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar30 != plVar19) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
          lVar24 = *plVar18;
          if (lVar24 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
          lVar25 = *unaff_x28;
          if (lVar25 == 0) goto LAB_0685eebc;
          uVar27 = *(uint *)(lVar24 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar25 + 0x18) <= uVar27) goto LAB_0685fd5c;
          lVar24 = *(long *)(lVar25 + (long)(int)uVar27 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar24 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar20 = DAT_083bd010;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
        lVar24 = *plVar18;
        if (lVar24 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
        lVar25 = *unaff_x28;
        if (lVar25 == 0) goto LAB_0685eebc;
        uVar27 = *(uint *)(lVar24 + lVar14 * 4 + 0x20);
        if (*(uint *)(lVar25 + 0x18) <= uVar27) goto LAB_0685fd5c;
        if (*(long *)(lVar25 + (long)(int)uVar27 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar30 = (long *)FUN_0683eca4(uVar20,0);
          if (plVar30 != plVar19) {
            if (plVar19 == (long *)0x0) goto LAB_0685eebc;
            uVar23 = (**(code **)(*plVar19 + 0x608))(plVar19,*(undefined8 *)(*plVar19 + 0x610));
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
            lVar24 = *plVar18;
            if (lVar24 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar24 + 0x18) <= uVar28) ||
               (uVar27 = *(uint *)(lVar24 + lVar14 * 4 + 0x20), *(uint *)(plVar16 + 3) <= uVar27))
            goto LAB_0685fd5c;
            lVar24 = plVar16[(long)(int)uVar27 + 4];
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar27 = uVar28;
            if ((uVar23 & 1) == 0) {
              if (lVar24 != 0) {
                if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
                lVar24 = *plVar18;
                if (lVar24 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar24 + 0x18) <= uVar28) ||
                   (uVar4 = *(uint *)(lVar24 + lVar14 * 4 + 0x20), *(uint *)(plVar16 + 3) <= uVar4))
                goto LAB_0685fd5c;
                uVar23 = (**(code **)(*plVar19 + 0x2b8))
                                   (plVar19,plVar16[(long)(int)uVar4 + 4],
                                    *(undefined8 *)(*plVar19 + 0x2c0));
                if ((uVar23 & 1) == 0) {
                  if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
                  lVar24 = *plVar18;
                  if (lVar24 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar24 + 0x18) <= uVar28) ||
                     (uVar4 = *(uint *)(lVar24 + lVar14 * 4 + 0x20), *(uint *)(plVar16 + 3) <= uVar4
                     )) goto LAB_0685fd5c;
                  plVar30 = (long *)plVar16[(long)(int)uVar4 + 4];
                  if (plVar30 == (long *)0x0) goto LAB_0685eebc;
                  uVar23 = (**(code **)(*plVar30 + 0x588))
                                     (plVar30,*(undefined8 *)(*plVar30 + 0x590));
                  if ((uVar23 & 1) != 0) {
                    if (uVar15 < *(uint *)(lVar12 + 0x18)) {
                      lVar24 = *plVar18;
                      if (lVar24 != 0) {
                        if (uVar28 < *(uint *)(lVar24 + 0x18)) {
                          lVar25 = *unaff_x28;
                          if (lVar25 != 0) {
                            uVar4 = *(uint *)(lVar24 + lVar14 * 4 + 0x20);
                            if (uVar4 < *(uint *)(lVar25 + 0x18)) {
                              uVar23 = (**(code **)(*plVar19 + 0x908))
                                                 (plVar19,*(undefined8 *)
                                                           (lVar25 + (long)(int)uVar4 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar19 + 0x910));
                              goto joined_r0x0685f778;
                            }
                            goto LAB_0685fd5c;
                          }
                          goto LAB_0685eebc;
                        }
                        goto LAB_0685fd5c;
                      }
                      goto LAB_0685eebc;
                    }
                    goto LAB_0685fd5c;
                  }
                  break;
                }
              }
            }
            else {
              if (lVar24 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
              lVar24 = *plVar18;
              if (lVar24 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar24 + 0x18) <= uVar28) goto LAB_0685fd5c;
              lVar25 = *unaff_x28;
              if (lVar25 == 0) goto LAB_0685eebc;
              uVar4 = *(uint *)(lVar24 + lVar14 * 4 + 0x20);
              if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_0685fd5c;
              uVar20 = *(undefined8 *)(lVar25 + (long)(int)uVar4 * 8 + 0x20);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar19);
              }
              uVar23 = FUN_06861228(uVar20,plVar19);
joined_r0x0685f778:
              if ((uVar23 & 1) == 0) break;
            }
          }
        }
      }
LAB_0685f77c:
      uVar28 = uVar28 + 1;
      uVar27 = uVar7;
    } while (uVar7 != uVar28);
  }
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((plVar17 != (long *)0x0) && (uVar27 == *(int *)(lVar10 + 0x18) - 1U)) {
    lVar10 = *unaff_x28;
    if (lVar10 == 0) goto LAB_0685eebc;
    lVar14 = (-(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3) + 0x20;
    while ((int)uVar27 < *(int *)(lVar10 + 0x18)) {
      uVar23 = (**(code **)(*plVar17 + 0x608))(plVar17,*(undefined8 *)(*plVar17 + 0x610));
      if (plVar16 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(plVar16 + 3) <= uVar27) goto LAB_0685fd5c;
      lVar10 = *(long *)((long)plVar16 + lVar14);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if ((uVar23 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
        if (lVar10 == 0) break;
        lVar10 = *unaff_x28;
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar10 + 0x18) <= uVar27) goto LAB_0685fd5c;
        uVar20 = *(undefined8 *)(lVar10 + lVar14);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8)
            != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar17);
        }
        uVar23 = FUN_06861228(uVar20,plVar17);
joined_r0x0685f89c:
        if ((uVar23 & 1) == 0) break;
      }
      else {
        if ((uVar23 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
        if (lVar10 != 0) {
          if (*(uint *)(plVar16 + 3) <= uVar27) goto LAB_0685fd5c;
          uVar23 = (**(code **)(*plVar17 + 0x2b8))
                             (plVar17,*(undefined8 *)((long)plVar16 + lVar14),
                              *(undefined8 *)(*plVar17 + 0x2c0));
          if ((uVar23 & 1) != 0) goto LAB_0685f934;
          if (*(uint *)(plVar16 + 3) <= uVar27) goto LAB_0685fd5c;
          plVar18 = *(long **)((long)plVar16 + lVar14);
          if (plVar18 == (long *)0x0) goto LAB_0685eebc;
          uVar23 = (**(code **)(*plVar18 + 0x588))(plVar18,*(undefined8 *)(*plVar18 + 0x590));
          if ((uVar23 & 1) != 0) {
            lVar10 = *unaff_x28;
            if (lVar10 != 0) {
              if (uVar27 < *(uint *)(lVar10 + 0x18)) {
                uVar23 = (**(code **)(*plVar17 + 0x908))
                                   (plVar17,*(undefined8 *)(lVar10 + lVar14),
                                    *(undefined8 *)(*plVar17 + 0x910));
                goto joined_r0x0685f89c;
              }
              goto LAB_0685fd5c;
            }
            goto LAB_0685eebc;
          }
          break;
        }
      }
LAB_0685f934:
      lVar10 = *unaff_x28;
      uVar27 = uVar27 + 1;
      lVar14 = lVar14 + 8;
      if (lVar10 == 0) goto LAB_0685eebc;
    }
  }
  if (*unaff_x28 == 0) goto LAB_0685eebc;
  if (uVar27 == *(uint *)(*unaff_x28 + 0x18)) {
    if (lVar12 == 0) goto LAB_0685eebc;
    if ((*(uint *)(lVar12 + 0x18) <= uVar15) || (*(uint *)(lVar12 + 0x18) <= uVar9))
    goto LAB_0685fd5c;
    lVar10 = (long)(int)uVar9;
    puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar10 * 8);
    *puVar2 = *(undefined8 *)(lVar12 + 0x20 + uVar15 * 8);
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plVar13 == (long *)0x0) goto LAB_0685eebc;
    if ((plVar17 != (long *)0x0) &&
       (lVar14 = FUN_0339898c(plVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar13 + 3) <= uVar9) goto LAB_0685fd5c;
    plVar18 = plVar13 + lVar10 + 4;
    *plVar18 = (long)plVar17;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar7 = *(uint *)(plVar11 + 3);
    if (uVar7 <= uVar15) goto LAB_0685fd5c;
    lVar14 = *plVar26;
    if (lVar14 != 0) {
      lVar24 = FUN_0339898c(lVar14,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar24 == 0) goto LAB_06860ed8;
      uVar7 = (uint)plVar11[3];
    }
    if (uVar7 <= uVar9) goto LAB_0685fd5c;
    plVar26 = plVar11 + lVar10 + 4;
    *plVar26 = lVar14;
    uVar9 = uVar9 + 1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar26 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
LAB_0685fbc4:
  uVar7 = *(uint *)(plVar11 + 3);
  uVar23 = (ulong)uVar7;
  uVar15 = uVar15 + 1;
  if ((long)(int)uVar7 <= (long)uVar15) goto LAB_0685fbf8;
  goto LAB_0685eee4;
LAB_0685fbf8:
  if (uVar9 != 1) {
    if (uVar9 == 0) {
LAB_06860f70:
      uVar31 = FUN_033d1ba8(&DAT_08440468);
      FUN_033d1ba8(&DAT_083cee70);
      uVar20 = thunk_FUN_03398a84();
      FUN_0683135c(uVar20,uVar31,0);
      goto LAB_06860fa0;
    }
    if (1 < (int)uVar9) {
      if (uVar7 != 0) {
        if (lVar12 == 0) goto LAB_0685eebc;
        lVar10 = 0;
        uVar7 = 0;
        uVar15 = (ulong)uVar9;
        uVar29 = 1;
        bVar6 = false;
        while (uVar7 < (uint)*(ulong *)(lVar12 + 0x18)) {
          if (plVar13 == (long *)0x0) goto LAB_0685eebc;
          if (((((uint)plVar13[3] <= uVar7) || (uVar23 <= uVar29)) ||
              ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) <= uVar29)) ||
             ((plVar13[3] & 0xffffffffU) <= uVar29)) break;
          lVar14 = plVar13[lVar10 + 4];
          lVar24 = plVar11[lVar10 + 4];
          uVar20 = *(undefined8 *)(lVar12 + lVar10 * 8 + 0x20);
          lVar32 = plVar11[uVar29 + 4];
          uVar31 = *(undefined8 *)(lVar12 + uVar29 * 8 + 0x20);
          lVar25 = plVar13[uVar29 + 4];
          lVar10 = *unaff_x28;
          if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
            FUN_033b9870();
          }
          iVar8 = FUN_06861580(lVar24,uVar20,lVar14,lVar32,uVar31,lVar25,plVar16,lVar10);
          if (iVar8 == 0) {
            if (uVar29 + 1 == uVar15) {
LAB_06860ef4:
              uVar31 = FUN_033d1ba8(&DAT_08433710);
              FUN_033d1ba8(&DAT_083c8758);
              uVar20 = thunk_FUN_03398a84();
              FUN_0673e2f4(uVar20,uVar31,0);
              goto LAB_06860fa0;
            }
            bVar6 = true;
          }
          else if (iVar8 == 2) {
            uVar7 = (uint)uVar29;
            if (uVar29 + 1 == uVar15) goto LAB_0685fdf8;
            bVar6 = false;
          }
          else if (uVar29 + 1 == uVar15) {
            if (bVar6) goto LAB_06860ef4;
            goto LAB_0685fdf8;
          }
          uVar29 = uVar29 + 1;
          uVar23 = plVar11[3] & 0xffffffff;
          lVar10 = (long)(int)uVar7;
          if ((uint)plVar11[3] <= uVar7) break;
        }
      }
      goto LAB_0685fd5c;
    }
    uVar7 = 0;
LAB_0685fdf8:
    if (in_stack_00000030 != 0) {
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_0685fd5c;
      plVar16 = (long *)(lVar12 + (long)(int)uVar7 * 8 + 0x20);
      if (*plVar16 == 0) goto LAB_0685eebc;
      lVar10 = FUN_03398738();
      lVar14 = *unaff_x28;
      if ((lVar14 == 0) || (plVar13 == (long *)0x0)) goto LAB_0685eebc;
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar24 = plVar13[(long)(int)uVar7 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar25 = FUN_03398a84(DAT_083d57e0);
      uVar20 = DAT_083c7838;
      if (lVar10 == 0) {
        lVar32 = 0;
      }
      else {
        lVar32 = FUN_0339898c(lVar10,DAT_083c7838);
        if (lVar32 == 0) goto LAB_0685fe90;
      }
      uVar3 = *(undefined4 *)(lVar14 + 0x18);
      plVar26 = (long *)(lVar25 + 0x10);
      *plVar26 = lVar32;
      if (DAT_08908cd0 == 0) {
        *(undefined4 *)(lVar25 + 0x18) = uVar3;
        *(bool *)(lVar25 + 0x1c) = lVar24 != 0;
        *unaff_x23 = lVar25;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar26 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(undefined4 *)(lVar25 + 0x18) = uVar3;
        *(bool *)(lVar25 + 0x1c) = lVar24 != 0;
        *unaff_x23 = lVar25;
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x23 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x23 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_0685fd5c;
      lVar10 = *plVar16;
      lVar12 = *unaff_x28;
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_068613a0(lVar10,lVar12);
    }
    if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar26 = plVar11 + (long)(int)uVar7 + 4;
    plVar16 = (long *)*plVar26;
    if (((plVar16 == (long *)0x0) ||
        (lVar10 = (**(code **)(*plVar16 + 1000))(plVar16,*(undefined8 *)(*plVar16 + 0x3f0)),
        lVar10 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
    iVar8 = *(int *)(*unaff_x28 + 0x18);
    iVar22 = (int)*(ulong *)(lVar10 + 0x18);
    if (iVar22 == iVar8) {
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar12 = plVar13[(long)(int)uVar7 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (lVar12 != 0) {
        plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar10 + 0x18));
        uVar9 = *(int *)(lVar10 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar16,0,uVar9,0);
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
        lVar12 = plVar13[(long)(int)uVar7 + 4];
        lVar10 = FUN_03398188(DAT_083c7838,1);
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0685fd5c;
        *(undefined4 *)(lVar10 + 0x20) = 1;
        lVar10 = FUN_06852fd0(lVar12);
        if (plVar16 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar10 != 0) &&
           (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
        goto LAB_06860ed8;
        uVar28 = *(uint *)(plVar16 + 3);
        if (uVar28 <= uVar9) goto LAB_0685fd5c;
        plVar13 = plVar16 + (long)(int)uVar9 + 4;
        *plVar13 = lVar10;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar28 = *(uint *)(plVar16 + 3);
        }
        if (uVar28 <= uVar9) goto LAB_0685fd5c;
        lVar10 = *unaff_x28;
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0685eebc;
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
        FUN_06853274(plVar13,*(undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20),0,0);
        *unaff_x28 = (long)plVar16;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
    }
    else {
      if (iVar8 < iVar22) {
        plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar10 + 0x18) & 0xffffffff);
        lVar12 = *unaff_x28;
        if (lVar12 != 0) {
          uVar15 = 0;
          do {
            if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
              uVar9 = *(uint *)(lVar10 + 0x18);
              if ((int)uVar15 < (int)(uVar9 - 1)) goto LAB_06860788;
              goto LAB_06860c2c;
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
            if (plVar16 == (long *)0x0) break;
            lVar12 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar14 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
            goto LAB_06860ed8;
            if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_0685fd5c;
            plVar17 = plVar16 + uVar15 + 4;
            *plVar17 = lVar12;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar12 = *unaff_x28;
            uVar15 = uVar15 + 1;
          } while (lVar12 != 0);
        }
        goto LAB_0685eebc;
      }
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_0685fd5c;
      plVar16 = (long *)*plVar26;
      if (plVar16 == (long *)0x0) goto LAB_0685eebc;
      uVar9 = (**(code **)(*plVar16 + 0x288))(plVar16,*(undefined8 *)(*plVar16 + 0x290));
      if ((uVar9 >> 1 & 1) == 0) {
        plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar10 + 0x18));
        uVar9 = *(int *)(lVar10 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar16,0,uVar9,0);
        if (plVar13 == (long *)0x0) goto LAB_0685eebc;
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
        lVar12 = plVar13[(long)(int)uVar7 + 4];
        lVar10 = FUN_03398188(DAT_083c7838,1);
        if ((*unaff_x28 == 0) || (lVar10 == 0)) goto LAB_0685eebc;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0685fd5c;
        *(uint *)(lVar10 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar9;
        lVar10 = FUN_06852fd0(lVar12);
        if (plVar16 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar10 != 0) &&
           (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
        goto LAB_06860ed8;
        uVar28 = *(uint *)(plVar16 + 3);
        if (uVar28 <= uVar9) goto LAB_0685fd5c;
        plVar13 = plVar16 + (long)(int)uVar9 + 4;
        *plVar13 = lVar10;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar28 = *(uint *)(plVar16 + 3);
        }
        if (uVar28 <= uVar9) goto LAB_0685fd5c;
        lVar10 = *unaff_x28;
        if (lVar10 == 0) goto LAB_0685eebc;
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
              != DAT_083c8a28)) goto LAB_06860fdc;
        }
        FUN_068537e0(lVar10,uVar9,plVar13,0,*(int *)(lVar10 + 0x18) - uVar9,0);
        *unaff_x28 = (long)plVar16;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
    }
    goto LAB_06860ea8;
  }
  if (in_stack_00000030 != 0) {
    if (lVar12 == 0) goto LAB_0685eebc;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0685eebc;
    lVar10 = FUN_03398738();
    lVar14 = *unaff_x28;
    if ((lVar14 == 0) || (plVar13 == (long *)0x0)) goto LAB_0685eebc;
    if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
    lVar24 = plVar13[4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar20 = DAT_083c7838;
    if (lVar10 == 0) {
      lVar32 = 0;
    }
    else {
      lVar32 = FUN_0339898c(lVar10,DAT_083c7838);
      if (lVar32 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar10,uVar20);
      }
    }
    uVar3 = *(undefined4 *)(lVar14 + 0x18);
    plVar16 = (long *)(lVar25 + 0x10);
    *plVar16 = lVar32;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar24 != 0;
      *unaff_x23 = lVar25;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar16 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar24 != 0;
      *unaff_x23 = lVar25;
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x23 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x23 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
    uVar20 = *(undefined8 *)(lVar12 + 0x20);
    lVar10 = *unaff_x28;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(uVar20,lVar10);
    uVar7 = (uint)plVar11[3];
  }
  if (uVar7 == 0) goto LAB_0685fd5c;
  plVar26 = plVar11 + 4;
  plVar16 = (long *)*plVar26;
  if (((plVar16 == (long *)0x0) ||
      (lVar10 = (**(code **)(*plVar16 + 1000))(plVar16,*(undefined8 *)(*plVar16 + 0x3f0)),
      lVar10 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
  iVar8 = *(int *)(*unaff_x28 + 0x18);
  iVar22 = (int)*(ulong *)(lVar10 + 0x18);
  if (iVar22 == iVar8) {
    if (plVar13 == (long *)0x0) goto LAB_0685eebc;
    if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
    lVar12 = plVar13[4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar12 != 0) {
      plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar10 + 0x18));
      uVar9 = *(int *)(lVar10 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar16,0,uVar9,0);
      if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
      lVar12 = plVar13[4];
      lVar10 = FUN_03398188(DAT_083c7838,1);
      if (lVar10 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar10 + 0x20) = 1;
      lVar10 = FUN_06852fd0(lVar12);
      if (plVar16 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar10 != 0) &&
         (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
      goto LAB_06860ed8;
      uVar7 = *(uint *)(plVar16 + 3);
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar16 + (long)(int)uVar9 + 4;
      *plVar13 = lVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      lVar10 = *unaff_x28;
      if (lVar10 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar13);
      }
      FUN_06853274(plVar13,*(undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *unaff_x28 = (long)plVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  else {
    if (iVar8 < iVar22) {
      plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar10 + 0x18) & 0xffffffff);
      lVar12 = *unaff_x28;
      if (lVar12 != 0) {
        uVar15 = 0;
        do {
          if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
            uVar9 = *(uint *)(lVar10 + 0x18);
            if ((int)uVar15 < (int)(uVar9 - 1)) goto LAB_068602b4;
            goto LAB_06860ba0;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0685fd5c;
          if (plVar16 == (long *)0x0) break;
          lVar12 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
          if ((lVar12 != 0) &&
             (lVar14 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_0685fd5c;
          plVar17 = plVar16 + uVar15 + 4;
          *plVar17 = lVar12;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar12 = *unaff_x28;
          uVar15 = uVar15 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_0685eebc;
    }
    if ((int)plVar11[3] == 0) goto LAB_0685fd5c;
    plVar16 = (long *)*plVar26;
    if (plVar16 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar16 + 0x288))(plVar16,*(undefined8 *)(*plVar16 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar10 + 0x18));
      uVar9 = *(int *)(lVar10 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar16,0,uVar9,0);
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
      lVar12 = plVar13[4];
      lVar10 = FUN_03398188(DAT_083c7838,1);
      if ((*unaff_x28 == 0) || (lVar10 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar10 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar9;
      lVar10 = FUN_06852fd0(lVar12);
      if (plVar16 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar10 != 0) &&
         (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
      goto LAB_06860ed8;
      uVar7 = *(uint *)(plVar16 + 3);
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar16 + (long)(int)uVar9 + 4;
      *plVar13 = lVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      lVar10 = *unaff_x28;
      if (lVar10 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar10,uVar9,plVar13,0,*(int *)(lVar10 + 0x18) - uVar9,0);
      *unaff_x28 = (long)plVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  goto LAB_06860db0;
  while( true ) {
    plVar17 = *(long **)(lVar10 + (long)(int)uVar28 * 8 + 0x20);
    if ((plVar17 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210)),
       plVar16 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar14 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar16 + 3) <= uVar28) goto LAB_0685fd5c;
    plVar17 = plVar16 + (long)(int)uVar28 + 4;
    *plVar17 = lVar12;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar15 = (ulong)(uVar28 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar28 + 1)) break;
LAB_06860788:
    uVar28 = (uint)uVar15;
    if (uVar9 <= uVar28) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (plVar13 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar12 = plVar13[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar15;
  if (lVar12 == 0) {
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar13 = *(long **)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar16 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar28 = *(uint *)(plVar16 + 3);
  }
  else {
    if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar10 = plVar13[(long)(int)uVar7 + 4];
    uVar20 = FUN_03398188(DAT_083c7838,1);
    lVar10 = FUN_06852fd0(lVar10,uVar20);
    if (plVar16 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar28 = *(uint *)(plVar16 + 3);
  }
  if (uVar28 <= uVar9) goto LAB_0685fd5c;
  plVar13 = plVar16 + (long)(int)uVar9 + 4;
  *plVar13 = lVar10;
  if (DAT_08908cd0 == 0) {
    *unaff_x28 = (long)plVar16;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
    *unaff_x28 = (long)plVar16;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_06860ea8:
  if (uVar7 < *(uint *)(plVar11 + 3)) goto LAB_06860eb4;
  goto LAB_0685fd5c;
  while( true ) {
    plVar17 = *(long **)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
    if ((plVar17 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210)),
       plVar16 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar14 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar17 = plVar16 + (long)(int)uVar7 + 4;
    *plVar17 = lVar12;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar15 = (ulong)(uVar7 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar7 + 1)) break;
LAB_068602b4:
    uVar7 = (uint)uVar15;
    if (uVar9 <= uVar7) goto LAB_0685fd5c;
  }
LAB_06860ba0:
  if (plVar13 == (long *)0x0) goto LAB_0685eebc;
  if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
  lVar12 = plVar13[4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar15;
  if (lVar12 == 0) {
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar13 = *(long **)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar16 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar7 = *(uint *)(plVar16 + 3);
  }
  else {
    if ((int)plVar13[3] == 0) goto LAB_0685fd5c;
    lVar10 = plVar13[4];
    uVar20 = FUN_03398188(DAT_083c7838,1);
    lVar10 = FUN_06852fd0(lVar10,uVar20);
    if (plVar16 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar12 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)) {
LAB_06860ed8:
      uVar20 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar20,0);
    }
    uVar7 = *(uint *)(plVar16 + 3);
  }
  if (uVar7 <= uVar9) goto LAB_0685fd5c;
  plVar13 = plVar16 + (long)(int)uVar9 + 4;
  *plVar13 = lVar10;
  if (DAT_08908cd0 == 0) {
    *unaff_x28 = (long)plVar16;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
    *unaff_x28 = (long)plVar16;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_06860db0:
  if ((int)plVar11[3] != 0) {
LAB_06860eb4:
    return *plVar26;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


