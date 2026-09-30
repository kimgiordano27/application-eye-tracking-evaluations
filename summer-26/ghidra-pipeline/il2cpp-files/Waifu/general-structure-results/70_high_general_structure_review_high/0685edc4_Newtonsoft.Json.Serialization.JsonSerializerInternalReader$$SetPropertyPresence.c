/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 0685edc4
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

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
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long unaff_x19;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  long unaff_x20;
  ulong uVar26;
  long *plVar27;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar28;
  long *unaff_x27;
  long *unaff_x28;
  long lVar29;
  long *in_stack_00000008;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    uVar9 = (int)unaff_x25 + 1;
    if ((int)(uint)unaff_x27[3] <= (int)uVar9) break;
    if ((uint)unaff_x27[3] <= uVar9) goto LAB_0685fd5c;
    unaff_x25 = (long)(int)uVar9;
    plVar11 = unaff_x27 + unaff_x25 + 4;
    plVar10 = (long *)*plVar11;
    if (((plVar10 == (long *)0x0) ||
        (lVar18 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
        lVar18 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
    uVar19 = *(ulong *)(*unaff_x28 + 0x18);
    uVar23 = *(ulong *)(lVar18 + 0x18);
    if ((int)*(ulong *)(lVar18 + 0x18) <= (int)uVar19) {
      uVar23 = uVar19;
    }
    lVar12 = FUN_03398188(*(undefined8 *)(unaff_x19 + 0x838),uVar23 & 0xffffffff);
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    *plVar10 = lVar12;
    if (DAT_08908cd0 != 0) {
      puVar1 = (ulong *)((long)&DAT_086f67d0 + unaff_x20 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | unaff_x24 << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (in_stack_00000030 == 0) {
      if (*unaff_x28 == 0) goto LAB_0685eebc;
      iVar8 = (int)*(undefined8 *)(*unaff_x28 + 0x18);
      if (0 < iVar8) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_0685fd5c;
        lVar18 = *plVar10;
        uVar19 = (ulong)iVar8;
        uVar23 = 0;
        if ((long)uVar19 < 2) {
          uVar19 = 1;
        }
        do {
          if (lVar18 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_0685fd5c;
          *(int *)(lVar18 + 0x20 + uVar23 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar19 != uVar23);
      }
    }
    else {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_0685fd5c;
      lVar12 = *plVar10;
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar23 = FUN_06860fe0(lVar12,lVar18,in_stack_00000030);
      if ((uVar23 & 1) == 0) {
        if (*(uint *)(unaff_x27 + 3) <= uVar9) goto LAB_0685fd5c;
        *plVar11 = 0;
        if (DAT_08908cd0 != 0) {
          puVar1 = (ulong *)((long)&DAT_086f67d0 + unaff_x20 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8
                            );
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | unaff_x24 << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
    }
  }
  plVar10 = (long *)FUN_03398188(DAT_083c7dc8);
  if (*unaff_x28 != 0) {
    plVar11 = (long *)FUN_03398188(DAT_083c7dc8,*(undefined4 *)(*unaff_x28 + 0x18));
    lVar18 = *unaff_x28;
    if (lVar18 != 0) {
      uVar23 = 0;
      do {
        if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar23) {
          if ((int)unaff_x27[3] < 1) goto LAB_06860f70;
          uVar23 = 0;
          uVar9 = 0;
          uVar19 = unaff_x27[3] & 0xffffffff;
          goto LAB_0685eee4;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_0685fd5c;
        plVar22 = *(long **)(lVar18 + uVar23 * 8 + 0x20);
        if (plVar22 != (long *)0x0) {
          lVar18 = FUN_0339a700(*plVar22 + 0x20);
          if (plVar11 == (long *)0x0) break;
          if ((lVar18 != 0) &&
             (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar11 + 3) <= uVar23) goto LAB_0685fd5c;
          plVar22 = plVar11 + uVar23 + 4;
          *plVar22 = lVar18;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar22 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar22 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar18 = *unaff_x28;
        }
        uVar23 = uVar23 + 1;
      } while (lVar18 != 0);
    }
  }
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_0685eee4:
  if (uVar19 <= uVar23) goto LAB_0685fd5c;
  plVar22 = unaff_x27 + uVar23 + 4;
  uVar19 = FUN_06740938(*plVar22,0,0);
  if ((uVar19 & 1) != 0) goto LAB_0685fbc4;
  if (*(uint *)(unaff_x27 + 3) <= uVar23) goto LAB_0685fd5c;
  plVar13 = (long *)*plVar22;
  if ((plVar13 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar13 + 1000))(plVar13,*(undefined8 *)(*plVar13 + 0x3f0)),
     lVar18 == 0)) goto LAB_0685eebc;
  uVar19 = *(ulong *)(lVar18 + 0x18);
  lVar12 = *unaff_x28;
  if (uVar19 == 0) {
    if (lVar12 == 0) goto LAB_0685eebc;
    if (*(long *)(lVar12 + 0x18) != 0) {
      if (*(uint *)(unaff_x27 + 3) <= uVar23) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar22;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      uVar7 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
      if ((uVar7 >> 1 & 1) == 0) goto LAB_0685fbc4;
    }
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar23) || (*(uint *)(unaff_x23 + 0x18) <= uVar9))
    goto LAB_0685fd5c;
    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)uVar9 * 8);
    *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + uVar23 * 8);
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
    uVar7 = *(uint *)(unaff_x27 + 3);
    if (uVar7 <= uVar23) goto LAB_0685fd5c;
    lVar18 = *plVar22;
    if (lVar18 != 0) {
      lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*unaff_x27 + 0x40));
      if (lVar12 == 0) goto LAB_06860ed8;
      uVar7 = (uint)unaff_x27[3];
    }
    if (uVar7 <= uVar9) goto LAB_0685fd5c;
    plVar22 = unaff_x27 + (long)(int)uVar9 + 4;
    *plVar22 = lVar18;
    uVar9 = uVar9 + 1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar22 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar22 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    goto LAB_0685fbc4;
  }
  if (lVar12 == 0) goto LAB_0685eebc;
  uVar7 = *(uint *)(lVar12 + 0x18);
  iVar8 = (int)uVar19;
  if ((int)uVar7 < iVar8) {
    uVar25 = iVar8 - 1;
    if ((int)uVar7 < (int)uVar25) {
      plVar13 = (long *)(lVar18 + (long)(int)uVar7 * 8 + 0x20);
      do {
        if ((uint)uVar19 <= uVar7) goto LAB_0685fd5c;
        plVar14 = (long *)*plVar13;
        if (plVar14 == (long *)0x0) goto LAB_0685eebc;
        lVar12 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
        if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca050);
        }
        if (lVar12 == **(long **)(DAT_083ca050 + 0xb8)) {
          uVar19 = (ulong)*(uint *)(lVar18 + 0x18);
          uVar25 = *(uint *)(lVar18 + 0x18) - 1;
          break;
        }
        uVar19 = *(ulong *)(lVar18 + 0x18);
        uVar7 = uVar7 + 1;
        plVar13 = plVar13 + 1;
        uVar25 = (int)uVar19 - 1;
      } while ((int)uVar7 < (int)uVar25);
    }
    if (uVar7 == uVar25) {
      if ((uint)uVar19 <= uVar25) goto LAB_0685fd5c;
      plVar13 = (long *)(lVar18 + (long)(int)uVar25 * 8 + 0x20);
      plVar14 = (long *)*plVar13;
      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
      lVar12 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar12 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0685fd5c;
      plVar14 = (long *)*plVar13;
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x1f0)),
         plVar14 == (long *)0x0)) goto LAB_0685eebc;
      uVar19 = (**(code **)(*plVar14 + 0x358))(plVar14,*(undefined8 *)(*plVar14 + 0x360));
      uVar16 = DAT_083bd0a8;
      if ((uVar19 & 1) != 0) {
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0685fd5c;
        plVar14 = (long *)*plVar13;
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar16 = FUN_0683eca4(uVar16,0);
        if (plVar14 == (long *)0x0) goto LAB_0685eebc;
        uVar19 = (**(code **)(*plVar14 + 0x218))(plVar14,uVar16,1,*(undefined8 *)(*plVar14 + 0x220))
        ;
        if ((uVar19 & 1) != 0) {
          if (uVar25 < *(uint *)(lVar18 + 0x18)) {
            plVar13 = (long *)*plVar13;
            goto joined_r0x0685fb88;
          }
          goto LAB_0685fd5c;
        }
      }
    }
    goto LAB_0685fbc4;
  }
  if (iVar8 == 0) goto LAB_0685fd5c;
  uVar25 = iVar8 - 1;
  lVar12 = (long)(int)uVar25;
  plVar13 = (long *)(lVar18 + lVar12 * 8 + 0x20);
  plVar14 = (long *)*plVar13;
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0)),
     plVar14 == (long *)0x0)) goto LAB_0685eebc;
  uVar19 = (**(code **)(*plVar14 + 0x358))(plVar14,*(undefined8 *)(*plVar14 + 0x360));
  uVar16 = DAT_083bd0a8;
  if (iVar8 < (int)uVar7) {
    if ((uVar19 & 1) != 0) {
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0685fd5c;
      plVar14 = (long *)*plVar13;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar16 = FUN_0683eca4(uVar16,0);
      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
      uVar19 = (**(code **)(*plVar14 + 0x218))(plVar14,uVar16,1,*(undefined8 *)(*plVar14 + 0x220));
      if ((uVar19 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_0685eebc;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
        lVar20 = *(long *)(unaff_x23 + uVar23 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
        if (*(uint *)(lVar20 + lVar12 * 4 + 0x20) == uVar25) {
LAB_0685f2d4:
          if (uVar25 < *(uint *)(lVar18 + 0x18)) {
            plVar13 = (long *)*plVar13;
joined_r0x0685fb88:
            if ((plVar13 != (long *)0x0) &&
               (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
               plVar13 != (long *)0x0)) {
              plVar13 = (long *)(**(code **)(*plVar13 + 0x448))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x450));
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
  if ((uVar19 & 1) == 0) {
LAB_0685f35c:
    plVar13 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0685fd5c;
    plVar14 = (long *)*plVar13;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar16 = FUN_0683eca4(uVar16,0);
    if (plVar14 == (long *)0x0) goto LAB_0685eebc;
    uVar19 = (**(code **)(*plVar14 + 0x218))(plVar14,uVar16,1,*(undefined8 *)(*plVar14 + 0x220));
    if ((uVar19 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
      lVar20 = *(long *)(unaff_x23 + uVar23 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
      if (*(uint *)(lVar20 + lVar12 * 4 + 0x20) == uVar25) {
        if (uVar25 < *(uint *)(lVar18 + 0x18)) {
          plVar14 = (long *)*plVar13;
          if ((plVar14 != (long *)0x0) &&
             (plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x1f0)),
             plVar11 != (long *)0x0)) {
            if (uVar25 < *(uint *)(plVar11 + 3)) {
              if (plVar14 != (long *)0x0) {
                uVar19 = (**(code **)(*plVar14 + 0x2b8))
                                   (plVar14,plVar11[lVar12 + 4],*(undefined8 *)(*plVar14 + 0x2c0));
                if ((uVar19 & 1) == 0) goto LAB_0685f2d4;
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
    plVar13 = (long *)0x0;
  }
LAB_0685f360:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
    if (plVar13 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
    uVar7 = *(int *)(lVar18 + 0x18) - 1;
  }
  else {
    if (plVar13 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
    if (*unaff_x28 == 0) goto LAB_0685eebc;
    uVar7 = *(uint *)(*unaff_x28 + 0x18);
  }
  if ((int)uVar7 < 1) {
    uVar24 = 0;
  }
  else {
    uVar25 = 0;
    plVar14 = (long *)(unaff_x23 + uVar23 * 8 + 0x20);
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0685fd5c;
      lVar12 = (long)(int)uVar25;
      plVar15 = *(long **)(lVar18 + lVar12 * 8 + 0x20);
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1f0)),
         plVar15 == (long *)0x0)) goto LAB_0685eebc;
      uVar19 = (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
      if ((uVar19 & 1) != 0) {
        plVar15 = (long *)(**(code **)(*plVar15 + 0x448))(plVar15,*(undefined8 *)(*plVar15 + 0x450))
        ;
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
      lVar20 = *plVar14;
      if (lVar20 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
      if (plVar11 == (long *)0x0) goto LAB_0685eebc;
      uVar24 = *(uint *)(lVar20 + lVar12 * 4 + 0x20);
      if (*(uint *)(plVar11 + 3) <= uVar24) goto LAB_0685fd5c;
      plVar27 = (long *)plVar11[(long)(int)uVar24 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar27 != plVar15) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
          lVar20 = *plVar14;
          if (lVar20 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
          lVar21 = *unaff_x28;
          if (lVar21 == 0) goto LAB_0685eebc;
          uVar24 = *(uint *)(lVar20 + lVar12 * 4 + 0x20);
          if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_0685fd5c;
          lVar20 = *(long *)(lVar21 + (long)(int)uVar24 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar20 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar16 = DAT_083bd010;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
        lVar20 = *plVar14;
        if (lVar20 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
        lVar21 = *unaff_x28;
        if (lVar21 == 0) goto LAB_0685eebc;
        uVar24 = *(uint *)(lVar20 + lVar12 * 4 + 0x20);
        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_0685fd5c;
        if (*(long *)(lVar21 + (long)(int)uVar24 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar27 = (long *)FUN_0683eca4(uVar16,0);
          if (plVar27 != plVar15) {
            if (plVar15 == (long *)0x0) goto LAB_0685eebc;
            uVar19 = (**(code **)(*plVar15 + 0x608))(plVar15,*(undefined8 *)(*plVar15 + 0x610));
            if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
            lVar20 = *plVar14;
            if (lVar20 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar20 + 0x18) <= uVar25) ||
               (uVar24 = *(uint *)(lVar20 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar24))
            goto LAB_0685fd5c;
            lVar20 = plVar11[(long)(int)uVar24 + 4];
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar24 = uVar25;
            if ((uVar19 & 1) == 0) {
              if (lVar20 != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
                lVar20 = *plVar14;
                if (lVar20 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar20 + 0x18) <= uVar25) ||
                   (uVar4 = *(uint *)(lVar20 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar4))
                goto LAB_0685fd5c;
                uVar19 = (**(code **)(*plVar15 + 0x2b8))
                                   (plVar15,plVar11[(long)(int)uVar4 + 4],
                                    *(undefined8 *)(*plVar15 + 0x2c0));
                if ((uVar19 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
                  lVar20 = *plVar14;
                  if (lVar20 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar20 + 0x18) <= uVar25) ||
                     (uVar4 = *(uint *)(lVar20 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar4
                     )) goto LAB_0685fd5c;
                  plVar27 = (long *)plVar11[(long)(int)uVar4 + 4];
                  if (plVar27 == (long *)0x0) goto LAB_0685eebc;
                  uVar19 = (**(code **)(*plVar27 + 0x588))
                                     (plVar27,*(undefined8 *)(*plVar27 + 0x590));
                  if ((uVar19 & 1) != 0) {
                    if (uVar23 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar20 = *plVar14;
                      if (lVar20 != 0) {
                        if (uVar25 < *(uint *)(lVar20 + 0x18)) {
                          lVar21 = *unaff_x28;
                          if (lVar21 != 0) {
                            uVar4 = *(uint *)(lVar20 + lVar12 * 4 + 0x20);
                            if (uVar4 < *(uint *)(lVar21 + 0x18)) {
                              uVar19 = (**(code **)(*plVar15 + 0x908))
                                                 (plVar15,*(undefined8 *)
                                                           (lVar21 + (long)(int)uVar4 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar15 + 0x910));
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
              if (lVar20 == 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar23) goto LAB_0685fd5c;
              lVar20 = *plVar14;
              if (lVar20 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0685fd5c;
              lVar21 = *unaff_x28;
              if (lVar21 == 0) goto LAB_0685eebc;
              uVar4 = *(uint *)(lVar20 + lVar12 * 4 + 0x20);
              if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_0685fd5c;
              uVar16 = *(undefined8 *)(lVar21 + (long)(int)uVar4 * 8 + 0x20);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar15);
              }
              uVar19 = FUN_06861228(uVar16,plVar15);
joined_r0x0685f778:
              if ((uVar19 & 1) == 0) break;
            }
          }
        }
      }
LAB_0685f77c:
      uVar25 = uVar25 + 1;
      uVar24 = uVar7;
    } while (uVar7 != uVar25);
  }
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((plVar13 != (long *)0x0) && (uVar24 == *(int *)(lVar18 + 0x18) - 1U)) {
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_0685eebc;
    lVar12 = (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3) + 0x20;
    while ((int)uVar24 < *(int *)(lVar18 + 0x18)) {
      uVar19 = (**(code **)(*plVar13 + 0x608))(plVar13,*(undefined8 *)(*plVar13 + 0x610));
      if (plVar11 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(plVar11 + 3) <= uVar24) goto LAB_0685fd5c;
      lVar18 = *(long *)((long)plVar11 + lVar12);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if ((uVar19 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
        if (lVar18 == 0) break;
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_0685fd5c;
        uVar16 = *(undefined8 *)(lVar18 + lVar12);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8)
            != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar13);
        }
        uVar19 = FUN_06861228(uVar16,plVar13);
joined_r0x0685f89c:
        if ((uVar19 & 1) == 0) break;
      }
      else {
        if ((uVar19 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
        if (lVar18 != 0) {
          if (*(uint *)(plVar11 + 3) <= uVar24) goto LAB_0685fd5c;
          uVar19 = (**(code **)(*plVar13 + 0x2b8))
                             (plVar13,*(undefined8 *)((long)plVar11 + lVar12),
                              *(undefined8 *)(*plVar13 + 0x2c0));
          if ((uVar19 & 1) != 0) goto LAB_0685f934;
          if (*(uint *)(plVar11 + 3) <= uVar24) goto LAB_0685fd5c;
          plVar14 = *(long **)((long)plVar11 + lVar12);
          if (plVar14 == (long *)0x0) goto LAB_0685eebc;
          uVar19 = (**(code **)(*plVar14 + 0x588))(plVar14,*(undefined8 *)(*plVar14 + 0x590));
          if ((uVar19 & 1) != 0) {
            lVar18 = *unaff_x28;
            if (lVar18 != 0) {
              if (uVar24 < *(uint *)(lVar18 + 0x18)) {
                uVar19 = (**(code **)(*plVar13 + 0x908))
                                   (plVar13,*(undefined8 *)(lVar18 + lVar12),
                                    *(undefined8 *)(*plVar13 + 0x910));
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
      lVar18 = *unaff_x28;
      uVar24 = uVar24 + 1;
      lVar12 = lVar12 + 8;
      if (lVar18 == 0) goto LAB_0685eebc;
    }
  }
  if (*unaff_x28 == 0) goto LAB_0685eebc;
  if (uVar24 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar23) || (*(uint *)(unaff_x23 + 0x18) <= uVar9))
    goto LAB_0685fd5c;
    lVar18 = (long)(int)uVar9;
    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar18 * 8);
    *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + uVar23 * 8);
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
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    if ((plVar13 != (long *)0x0) &&
       (lVar12 = FUN_0339898c(plVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_0685fd5c;
    plVar14 = plVar10 + lVar18 + 4;
    *plVar14 = (long)plVar13;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar7 = *(uint *)(unaff_x27 + 3);
    if (uVar7 <= uVar23) goto LAB_0685fd5c;
    lVar12 = *plVar22;
    if (lVar12 != 0) {
      lVar20 = FUN_0339898c(lVar12,*(undefined8 *)(*unaff_x27 + 0x40));
      if (lVar20 == 0) goto LAB_06860ed8;
      uVar7 = (uint)unaff_x27[3];
    }
    if (uVar7 <= uVar9) goto LAB_0685fd5c;
    plVar22 = unaff_x27 + lVar18 + 4;
    *plVar22 = lVar12;
    uVar9 = uVar9 + 1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar22 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar22 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
LAB_0685fbc4:
  uVar7 = *(uint *)(unaff_x27 + 3);
  uVar19 = (ulong)uVar7;
  uVar23 = uVar23 + 1;
  if ((long)(int)uVar7 <= (long)uVar23) goto LAB_0685fbf8;
  goto LAB_0685eee4;
LAB_0685fbf8:
  if (uVar9 != 1) {
    if (uVar9 == 0) {
LAB_06860f70:
      uVar28 = FUN_033d1ba8(&DAT_08440468);
      FUN_033d1ba8(&DAT_083cee70);
      uVar16 = thunk_FUN_03398a84();
      FUN_0683135c(uVar16,uVar28,0);
LAB_06860fa0:
      uVar28 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar16,uVar28);
    }
    if (1 < (int)uVar9) {
      if (uVar7 != 0) {
        if (unaff_x23 == 0) goto LAB_0685eebc;
        lVar18 = 0;
        uVar7 = 0;
        uVar23 = (ulong)uVar9;
        uVar26 = 1;
        bVar6 = false;
        while (uVar7 < (uint)*(ulong *)(unaff_x23 + 0x18)) {
          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
          if (((((uint)plVar10[3] <= uVar7) || (uVar19 <= uVar26)) ||
              ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar26)) ||
             ((plVar10[3] & 0xffffffffU) <= uVar26)) break;
          lVar12 = plVar10[lVar18 + 4];
          lVar20 = unaff_x27[lVar18 + 4];
          uVar16 = *(undefined8 *)(unaff_x23 + lVar18 * 8 + 0x20);
          lVar29 = unaff_x27[uVar26 + 4];
          uVar28 = *(undefined8 *)(unaff_x23 + uVar26 * 8 + 0x20);
          lVar21 = plVar10[uVar26 + 4];
          lVar18 = *unaff_x28;
          if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
            FUN_033b9870();
          }
          iVar8 = FUN_06861580(lVar20,uVar16,lVar12,lVar29,uVar28,lVar21,plVar11,lVar18);
          if (iVar8 == 0) {
            if (uVar26 + 1 == uVar23) {
LAB_06860ef4:
              uVar28 = FUN_033d1ba8(&DAT_08433710);
              FUN_033d1ba8(&DAT_083c8758);
              uVar16 = thunk_FUN_03398a84();
              FUN_0673e2f4(uVar16,uVar28,0);
              goto LAB_06860fa0;
            }
            bVar6 = true;
          }
          else if (iVar8 == 2) {
            uVar7 = (uint)uVar26;
            if (uVar26 + 1 == uVar23) goto LAB_0685fdf8;
            bVar6 = false;
          }
          else if (uVar26 + 1 == uVar23) {
            if (bVar6) goto LAB_06860ef4;
            goto LAB_0685fdf8;
          }
          uVar26 = uVar26 + 1;
          uVar19 = unaff_x27[3] & 0xffffffff;
          lVar18 = (long)(int)uVar7;
          if ((uint)unaff_x27[3] <= uVar7) break;
        }
      }
      goto LAB_0685fd5c;
    }
    uVar7 = 0;
LAB_0685fdf8:
    if (in_stack_00000030 != 0) {
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
      plVar11 = (long *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
      if (*plVar11 == 0) goto LAB_0685eebc;
      lVar18 = FUN_03398738();
      lVar12 = *unaff_x28;
      if ((lVar12 == 0) || (plVar10 == (long *)0x0)) goto LAB_0685eebc;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar20 = plVar10[(long)(int)uVar7 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar21 = FUN_03398a84(DAT_083d57e0);
      uVar16 = DAT_083c7838;
      if (lVar18 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = FUN_0339898c(lVar18,DAT_083c7838);
        if (lVar29 == 0) goto LAB_0685fe90;
      }
      uVar3 = *(undefined4 *)(lVar12 + 0x18);
      plVar22 = (long *)(lVar21 + 0x10);
      *plVar22 = lVar29;
      if (DAT_08908cd0 == 0) {
        *(undefined4 *)(lVar21 + 0x18) = uVar3;
        *(bool *)(lVar21 + 0x1c) = lVar20 != 0;
        *in_stack_00000008 = lVar21;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar22 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar22 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(undefined4 *)(lVar21 + 0x18) = uVar3;
        *(bool *)(lVar21 + 0x1c) = lVar20 != 0;
        *in_stack_00000008 = lVar21;
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
      lVar18 = *plVar11;
      lVar12 = *unaff_x28;
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_068613a0(lVar18,lVar12);
    }
    if (*(uint *)(unaff_x27 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar22 = unaff_x27 + (long)(int)uVar7 + 4;
    plVar11 = (long *)*plVar22;
    if (((plVar11 == (long *)0x0) ||
        (lVar18 = (**(code **)(*plVar11 + 1000))(plVar11,*(undefined8 *)(*plVar11 + 0x3f0)),
        lVar18 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
    iVar8 = *(int *)(*unaff_x28 + 0x18);
    iVar17 = (int)*(ulong *)(lVar18 + 0x18);
    if (iVar17 == iVar8) {
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar12 = plVar10[(long)(int)uVar7 + 4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (lVar12 != 0) {
        plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar18 + 0x18));
        uVar9 = *(int *)(lVar18 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar11,0,uVar9,0);
        if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
        lVar12 = plVar10[(long)(int)uVar7 + 4];
        lVar18 = FUN_03398188(DAT_083c7838,1);
        if (lVar18 == 0) goto LAB_0685eebc;
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0685fd5c;
        *(undefined4 *)(lVar18 + 0x20) = 1;
        lVar18 = FUN_06852fd0(lVar12);
        if (plVar11 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar18 != 0) &&
           (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_06860ed8;
        uVar25 = *(uint *)(plVar11 + 3);
        if (uVar25 <= uVar9) goto LAB_0685fd5c;
        plVar10 = plVar11 + (long)(int)uVar9 + 4;
        *plVar10 = lVar18;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar25 = *(uint *)(plVar11 + 3);
        }
        if (uVar25 <= uVar9) goto LAB_0685fd5c;
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
        FUN_06853274(plVar10,*(undefined8 *)(lVar18 + (long)(int)uVar9 * 8 + 0x20),0,0);
        *unaff_x28 = (long)plVar11;
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
      if (iVar8 < iVar17) {
        plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar18 + 0x18) & 0xffffffff);
        lVar12 = *unaff_x28;
        if (lVar12 != 0) {
          uVar23 = 0;
          do {
            if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar23) {
              uVar9 = *(uint *)(lVar18 + 0x18);
              if ((int)uVar23 < (int)(uVar9 - 1)) goto LAB_06860788;
              goto LAB_06860c2c;
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_0685fd5c;
            if (plVar11 == (long *)0x0) break;
            lVar12 = *(long *)(lVar12 + uVar23 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar20 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar20 == 0))
            goto LAB_06860ed8;
            if (*(uint *)(plVar11 + 3) <= uVar23) goto LAB_0685fd5c;
            plVar13 = plVar11 + uVar23 + 4;
            *plVar13 = lVar12;
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
            lVar12 = *unaff_x28;
            uVar23 = uVar23 + 1;
          } while (lVar12 != 0);
        }
        goto LAB_0685eebc;
      }
      if (*(uint *)(unaff_x27 + 3) <= uVar7) goto LAB_0685fd5c;
      plVar11 = (long *)*plVar22;
      if (plVar11 == (long *)0x0) goto LAB_0685eebc;
      uVar9 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
      if ((uVar9 >> 1 & 1) == 0) {
        plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar18 + 0x18));
        uVar9 = *(int *)(lVar18 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar11,0,uVar9,0);
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
        lVar12 = plVar10[(long)(int)uVar7 + 4];
        lVar18 = FUN_03398188(DAT_083c7838,1);
        if ((*unaff_x28 == 0) || (lVar18 == 0)) goto LAB_0685eebc;
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0685fd5c;
        *(uint *)(lVar18 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar9;
        lVar18 = FUN_06852fd0(lVar12);
        if (plVar11 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar18 != 0) &&
           (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_06860ed8;
        uVar25 = *(uint *)(plVar11 + 3);
        if (uVar25 <= uVar9) goto LAB_0685fd5c;
        plVar10 = plVar11 + (long)(int)uVar9 + 4;
        *plVar10 = lVar18;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar25 = *(uint *)(plVar11 + 3);
        }
        if (uVar25 <= uVar9) goto LAB_0685fd5c;
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto LAB_0685eebc;
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
              != DAT_083c8a28)) goto LAB_06860fdc;
        }
        FUN_068537e0(lVar18,uVar9,plVar10,0,*(int *)(lVar18 + 0x18) - uVar9,0);
        *unaff_x28 = (long)plVar11;
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
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
    lVar18 = FUN_03398738();
    lVar12 = *unaff_x28;
    if ((lVar12 == 0) || (plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
    lVar20 = plVar10[4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar21 = FUN_03398a84(DAT_083d57e0);
    uVar16 = DAT_083c7838;
    if (lVar18 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = FUN_0339898c(lVar18,DAT_083c7838);
      if (lVar29 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar18,uVar16);
      }
    }
    uVar3 = *(undefined4 *)(lVar12 + 0x18);
    plVar11 = (long *)(lVar21 + 0x10);
    *plVar11 = lVar29;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar21 + 0x18) = uVar3;
      *(bool *)(lVar21 + 0x1c) = lVar20 != 0;
      *in_stack_00000008 = lVar21;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar21 + 0x18) = uVar3;
      *(bool *)(lVar21 + 0x1c) = lVar20 != 0;
      *in_stack_00000008 = lVar21;
      puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
    uVar16 = *(undefined8 *)(unaff_x23 + 0x20);
    lVar18 = *unaff_x28;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(uVar16,lVar18);
    uVar7 = (uint)unaff_x27[3];
  }
  if (uVar7 == 0) goto LAB_0685fd5c;
  plVar22 = unaff_x27 + 4;
  plVar11 = (long *)*plVar22;
  if (((plVar11 == (long *)0x0) ||
      (lVar18 = (**(code **)(*plVar11 + 1000))(plVar11,*(undefined8 *)(*plVar11 + 0x3f0)),
      lVar18 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
  iVar8 = *(int *)(*unaff_x28 + 0x18);
  iVar17 = (int)*(ulong *)(lVar18 + 0x18);
  if (iVar17 == iVar8) {
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
    lVar12 = plVar10[4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar12 != 0) {
      plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar18 + 0x18));
      uVar9 = *(int *)(lVar18 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar11,0,uVar9,0);
      if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
      lVar12 = plVar10[4];
      lVar18 = FUN_03398188(DAT_083c7838,1);
      if (lVar18 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar18 + 0x20) = 1;
      lVar18 = FUN_06852fd0(lVar12);
      if (plVar11 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar18 != 0) &&
         (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_06860ed8;
      uVar7 = *(uint *)(plVar11 + 3);
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      plVar10 = plVar11 + (long)(int)uVar9 + 4;
      *plVar10 = lVar18;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar7 = *(uint *)(plVar11 + 3);
      }
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar10);
      }
      FUN_06853274(plVar10,*(undefined8 *)(lVar18 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *unaff_x28 = (long)plVar11;
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
    if (iVar8 < iVar17) {
      plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar18 + 0x18) & 0xffffffff);
      lVar12 = *unaff_x28;
      if (lVar12 != 0) {
        uVar23 = 0;
        do {
          if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar23) {
            uVar9 = *(uint *)(lVar18 + 0x18);
            if ((int)uVar23 < (int)(uVar9 - 1)) goto LAB_068602b4;
            goto LAB_06860ba0;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_0685fd5c;
          if (plVar11 == (long *)0x0) break;
          lVar12 = *(long *)(lVar12 + uVar23 * 8 + 0x20);
          if ((lVar12 != 0) &&
             (lVar20 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar20 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar11 + 3) <= uVar23) goto LAB_0685fd5c;
          plVar13 = plVar11 + uVar23 + 4;
          *plVar13 = lVar12;
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
          lVar12 = *unaff_x28;
          uVar23 = uVar23 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_0685eebc;
    }
    if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
    plVar11 = (long *)*plVar22;
    if (plVar11 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar11 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar18 + 0x18));
      uVar9 = *(int *)(lVar18 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar11,0,uVar9,0);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
      lVar12 = plVar10[4];
      lVar18 = FUN_03398188(DAT_083c7838,1);
      if ((*unaff_x28 == 0) || (lVar18 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar18 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar9;
      lVar18 = FUN_06852fd0(lVar12);
      if (plVar11 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar18 != 0) &&
         (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_06860ed8;
      uVar7 = *(uint *)(plVar11 + 3);
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      plVar10 = plVar11 + (long)(int)uVar9 + 4;
      *plVar10 = lVar18;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar7 = *(uint *)(plVar11 + 3);
      }
      if (uVar7 <= uVar9) goto LAB_0685fd5c;
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_0685eebc;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar18,uVar9,plVar10,0,*(int *)(lVar18 + 0x18) - uVar9,0);
      *unaff_x28 = (long)plVar11;
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
    plVar13 = *(long **)(lVar18 + (long)(int)uVar25 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar11 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar20 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar20 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar11 + 3) <= uVar25) goto LAB_0685fd5c;
    plVar13 = plVar11 + (long)(int)uVar25 + 4;
    *plVar13 = lVar12;
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
    uVar9 = *(uint *)(lVar18 + 0x18);
    uVar23 = (ulong)(uVar25 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar25 + 1)) break;
LAB_06860788:
    uVar25 = (uint)uVar23;
    if (uVar9 <= uVar25) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (plVar10 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar12 = plVar10[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar23;
  if (lVar12 == 0) {
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar10 = *(long **)(lVar18 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar18 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210)),
       plVar11 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar18 != 0) &&
       (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar25 = *(uint *)(plVar11 + 3);
  }
  else {
    if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar18 = plVar10[(long)(int)uVar7 + 4];
    uVar16 = FUN_03398188(DAT_083c7838,1);
    lVar18 = FUN_06852fd0(lVar18,uVar16);
    if (plVar11 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar18 != 0) &&
       (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar25 = *(uint *)(plVar11 + 3);
  }
  if (uVar25 <= uVar9) goto LAB_0685fd5c;
  plVar10 = plVar11 + (long)(int)uVar9 + 4;
  *plVar10 = lVar18;
  if (DAT_08908cd0 == 0) {
    *unaff_x28 = (long)plVar11;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
    *unaff_x28 = (long)plVar11;
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
  if (uVar7 < *(uint *)(unaff_x27 + 3)) goto LAB_06860eb4;
  goto LAB_0685fd5c;
  while( true ) {
    plVar13 = *(long **)(lVar18 + (long)(int)uVar7 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar11 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar20 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar20 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar13 = plVar11 + (long)(int)uVar7 + 4;
    *plVar13 = lVar12;
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
    uVar9 = *(uint *)(lVar18 + 0x18);
    uVar23 = (ulong)(uVar7 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar7 + 1)) break;
LAB_068602b4:
    uVar7 = (uint)uVar23;
    if (uVar9 <= uVar7) goto LAB_0685fd5c;
  }
LAB_06860ba0:
  if (plVar10 == (long *)0x0) goto LAB_0685eebc;
  if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
  lVar12 = plVar10[4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar23;
  if (lVar12 == 0) {
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar10 = *(long **)(lVar18 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar18 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210)),
       plVar11 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar18 != 0) &&
       (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    uVar7 = *(uint *)(plVar11 + 3);
  }
  else {
    if ((int)plVar10[3] == 0) goto LAB_0685fd5c;
    lVar18 = plVar10[4];
    uVar16 = FUN_03398188(DAT_083c7838,1);
    lVar18 = FUN_06852fd0(lVar18,uVar16);
    if (plVar11 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar18 != 0) &&
       (lVar12 = FUN_0339898c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_06860ed8:
      uVar16 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar16,0);
    }
    uVar7 = *(uint *)(plVar11 + 3);
  }
  if (uVar7 <= uVar9) goto LAB_0685fd5c;
  plVar10 = plVar11 + (long)(int)uVar9 + 4;
  *plVar10 = lVar18;
  if (DAT_08908cd0 == 0) {
    *unaff_x28 = (long)plVar11;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
    *unaff_x28 = (long)plVar11;
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
  if ((int)unaff_x27[3] != 0) {
LAB_06860eb4:
    return *plVar22;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


