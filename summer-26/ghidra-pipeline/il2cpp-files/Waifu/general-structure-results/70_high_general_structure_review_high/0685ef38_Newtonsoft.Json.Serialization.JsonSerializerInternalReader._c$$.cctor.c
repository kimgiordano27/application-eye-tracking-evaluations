/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0685ef38
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long *unaff_x20;
  long *plVar20;
  ulong uVar21;
  ulong unaff_x21;
  long *plVar22;
  undefined8 *unaff_x22;
  undefined8 uVar23;
  long unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined8 uVar24;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long lVar25;
  long *in_stack_00000008;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x0685ef38:
  if (unaff_x21 == 0) {
    if (param_1 == 0) goto LAB_0685eebc;
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
      plVar20 = (long *)*unaff_x20;
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      uVar8 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
      if ((uVar8 >> 1 & 1) == 0) goto LAB_0685fbc4;
    }
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24))
    goto LAB_0685fd5c;
    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)unaff_w24 * 8);
    *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
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
    uVar8 = *(uint *)(in_stack_00000028 + 3);
    if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
    lVar11 = *unaff_x20;
    if (lVar11 != 0) {
      lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*in_stack_00000028 + 0x40));
      if (lVar16 == 0) goto LAB_06860ed8;
      uVar8 = (uint)in_stack_00000028[3];
    }
    if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
    plVar20 = in_stack_00000028 + (long)(int)unaff_w24 + 4;
    *plVar20 = lVar11;
    unaff_w24 = unaff_w24 + 1;
    if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
    unaff_x22 = &DAT_083d2000;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_0685fbc4;
  }
  if (param_1 == 0) goto LAB_0685eebc;
  uVar8 = *(uint *)(param_1 + 0x18);
  iVar7 = (int)unaff_x21;
  if ((int)uVar8 < iVar7) {
    uVar9 = iVar7 - 1;
    if ((int)uVar8 < (int)uVar9) {
      plVar20 = (long *)(unaff_x27 + (long)(int)uVar8 * 8 + 0x20);
      do {
        if ((uint)unaff_x21 <= uVar8) goto LAB_0685fd5c;
        plVar10 = (long *)*plVar20;
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        lVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
        if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca050);
        }
        if (lVar11 == **(long **)(DAT_083ca050 + 0xb8)) {
          unaff_x21 = (ulong)*(uint *)(unaff_x27 + 0x18);
          uVar9 = *(uint *)(unaff_x27 + 0x18) - 1;
          break;
        }
        unaff_x21 = *(ulong *)(unaff_x27 + 0x18);
        uVar8 = uVar8 + 1;
        plVar20 = plVar20 + 1;
        uVar9 = (int)unaff_x21 - 1;
      } while ((int)uVar8 < (int)uVar9);
    }
    if (uVar8 == uVar9) {
      if ((uint)unaff_x21 <= uVar9) goto LAB_0685fd5c;
      plVar20 = (long *)(unaff_x27 + (long)(int)uVar9 * 8 + 0x20);
      plVar10 = (long *)*plVar20;
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      lVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar11 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar10 = (long *)*plVar20;
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
         plVar10 == (long *)0x0)) goto LAB_0685eebc;
      uVar13 = (**(code **)(*plVar10 + 0x358))(plVar10,*(undefined8 *)(*plVar10 + 0x360));
      uVar23 = DAT_083bd0a8;
      if ((uVar13 & 1) == 0) goto LAB_0685fbc0;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar10 = (long *)*plVar20;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar23 = FUN_0683eca4(uVar23,0);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      uVar13 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar23,1,*(undefined8 *)(*plVar10 + 0x220));
      if ((uVar13 & 1) != 0) {
        if (uVar9 < *(uint *)(unaff_x27 + 0x18)) {
          plVar20 = (long *)*plVar20;
          goto joined_r0x0685fb88;
        }
        goto LAB_0685fd5c;
      }
    }
LAB_0685fbb8:
    unaff_x22 = &DAT_083d2000;
    goto LAB_0685fbc4;
  }
  if (iVar7 == 0) goto LAB_0685fd5c;
  uVar9 = iVar7 - 1;
  lVar11 = (long)(int)uVar9;
  plVar20 = (long *)(unaff_x27 + lVar11 * 8 + 0x20);
  plVar10 = (long *)*plVar20;
  if ((plVar10 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
     plVar10 == (long *)0x0)) goto LAB_0685eebc;
  uVar13 = (**(code **)(*plVar10 + 0x358))(plVar10,*(undefined8 *)(*plVar10 + 0x360));
  uVar23 = DAT_083bd0a8;
  if (iVar7 < (int)uVar8) {
    if ((uVar13 & 1) != 0) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar10 = (long *)*plVar20;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar23 = FUN_0683eca4(uVar23,0);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      uVar13 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar23,1,*(undefined8 *)(*plVar10 + 0x220));
      if ((uVar13 & 1) == 0) goto LAB_0685fbb8;
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar16 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (*(uint *)(lVar16 + lVar11 * 4 + 0x20) == uVar9) {
LAB_0685f2d4:
        if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
        plVar20 = (long *)*plVar20;
joined_r0x0685fb88:
        if ((plVar20 != (long *)0x0) &&
           (plVar20 = (long *)(**(code **)(*plVar20 + 0x1e8))
                                        (plVar20,*(undefined8 *)(*plVar20 + 0x1f0)),
           plVar20 != (long *)0x0)) {
          plVar20 = (long *)(**(code **)(*plVar20 + 0x448))
                                      (plVar20,*(undefined8 *)(*plVar20 + 0x450));
          goto LAB_0685f360;
        }
        goto LAB_0685eebc;
      }
    }
LAB_0685fbc0:
    unaff_x22 = &DAT_083d2000;
    goto LAB_0685fbc4;
  }
  if ((uVar13 & 1) == 0) {
LAB_0685f35c:
    plVar20 = (long *)0x0;
  }
  else {
    if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar20;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar23 = FUN_0683eca4(uVar23,0);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar13 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar23,1,*(undefined8 *)(*plVar10 + 0x220));
    if ((uVar13 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar16 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (*(uint *)(lVar16 + lVar11 * 4 + 0x20) == uVar9) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
        plVar10 = (long *)*plVar20;
        if ((plVar10 != (long *)0x0) &&
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)), unaff_x26 != 0)
           ) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_0685fd5c;
          if (plVar10 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar10 + 0x2b8))
                               (plVar10,*(undefined8 *)(unaff_x26 + lVar11 * 8 + 0x20),
                                *(undefined8 *)(*plVar10 + 0x2c0));
            if ((uVar13 & 1) == 0) goto LAB_0685f2d4;
            goto LAB_0685f35c;
          }
        }
        goto LAB_0685eebc;
      }
      goto LAB_0685f35c;
    }
    plVar20 = (long *)0x0;
  }
LAB_0685f360:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
    if (plVar20 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
    uVar8 = *(int *)(unaff_x27 + 0x18) - 1;
  }
  else {
    if (plVar20 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
    if (*unaff_x28 == 0) goto LAB_0685eebc;
    uVar8 = *(uint *)(*unaff_x28 + 0x18);
  }
  if ((int)uVar8 < 1) {
    uVar19 = 0;
  }
  else {
    uVar9 = 0;
    plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
      lVar11 = (long)(int)uVar9;
      plVar12 = *(long **)(unaff_x27 + lVar11 * 8 + 0x20);
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1f0)),
         plVar12 == (long *)0x0)) goto LAB_0685eebc;
      uVar13 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      if ((uVar13 & 1) != 0) {
        plVar12 = (long *)(**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450))
        ;
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar16 = *plVar10;
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (unaff_x26 == 0) goto LAB_0685eebc;
      uVar19 = *(uint *)(lVar16 + lVar11 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar19) goto LAB_0685fd5c;
      plVar22 = *(long **)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      unaff_x28 = in_stack_00000048;
      if (plVar22 != plVar12) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
          lVar16 = *plVar10;
          if (lVar16 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
          lVar17 = *in_stack_00000048;
          if (lVar17 == 0) goto LAB_0685eebc;
          uVar19 = *(uint *)(lVar16 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_0685fd5c;
          lVar16 = *(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar16 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar23 = DAT_083bd010;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar16 = *plVar10;
        if (lVar16 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
        lVar17 = *in_stack_00000048;
        if (lVar17 == 0) goto LAB_0685eebc;
        uVar19 = *(uint *)(lVar16 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_0685fd5c;
        if (*(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar22 = (long *)FUN_0683eca4(uVar23,0);
          if (plVar22 != plVar12) {
            if (plVar12 == (long *)0x0) goto LAB_0685eebc;
            uVar13 = (**(code **)(*plVar12 + 0x608))(plVar12,*(undefined8 *)(*plVar12 + 0x610));
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar16 = *plVar10;
            if (lVar16 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar16 + 0x18) <= uVar9) ||
               (uVar19 = *(uint *)(lVar16 + lVar11 * 4 + 0x20),
               *(uint *)(unaff_x26 + 0x18) <= uVar19)) goto LAB_0685fd5c;
            lVar16 = *(long *)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar19 = uVar9;
            if ((uVar13 & 1) == 0) {
              if (lVar16 != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar16 = *plVar10;
                if (lVar16 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar16 + 0x18) <= uVar9) ||
                   (uVar4 = *(uint *)(lVar16 + lVar11 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                uVar13 = (**(code **)(*plVar12 + 0x2b8))
                                   (plVar12,*(undefined8 *)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20)
                                    ,*(undefined8 *)(*plVar12 + 0x2c0));
                if ((uVar13 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar16 = *plVar10;
                  if (lVar16 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar16 + 0x18) <= uVar9) ||
                     (uVar4 = *(uint *)(lVar16 + lVar11 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                  plVar22 = *(long **)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
                  if (plVar22 == (long *)0x0) goto LAB_0685eebc;
                  uVar13 = (**(code **)(*plVar22 + 0x588))
                                     (plVar22,*(undefined8 *)(*plVar22 + 0x590));
                  if ((uVar13 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar16 = *plVar10;
                      if (lVar16 != 0) {
                        if (uVar9 < *(uint *)(lVar16 + 0x18)) {
                          lVar17 = *in_stack_00000048;
                          if (lVar17 != 0) {
                            uVar4 = *(uint *)(lVar16 + lVar11 * 4 + 0x20);
                            if (uVar4 < *(uint *)(lVar17 + 0x18)) {
                              uVar13 = (**(code **)(*plVar12 + 0x908))
                                                 (plVar12,*(undefined8 *)
                                                           (lVar17 + (long)(int)uVar4 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar12 + 0x910));
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
              if (lVar16 == 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar16 = *plVar10;
              if (lVar16 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
              lVar17 = *in_stack_00000048;
              if (lVar17 == 0) goto LAB_0685eebc;
              uVar4 = *(uint *)(lVar16 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_0685fd5c;
              uVar23 = *(undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar12);
              }
              uVar13 = FUN_06861228(uVar23,plVar12);
joined_r0x0685f778:
              if ((uVar13 & 1) == 0) break;
            }
          }
        }
      }
LAB_0685f77c:
      uVar9 = uVar9 + 1;
      uVar19 = uVar8;
    } while (uVar8 != uVar9);
  }
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((plVar20 != (long *)0x0) && (uVar19 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar11 = *unaff_x28;
    if (lVar11 == 0) goto LAB_0685eebc;
    lVar16 = (-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3) + 0x20;
    while ((int)uVar19 < *(int *)(lVar11 + 0x18)) {
      uVar13 = (**(code **)(*plVar20 + 0x608))(plVar20,*(undefined8 *)(*plVar20 + 0x610));
      if (unaff_x26 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar19) goto LAB_0685fd5c;
      lVar11 = *(long *)(unaff_x26 + lVar16);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if ((uVar13 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
        if (lVar11 == 0) break;
        lVar11 = *unaff_x28;
        if (lVar11 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_0685fd5c;
        uVar23 = *(undefined8 *)(lVar11 + lVar16);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8)
            != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar20);
        }
        uVar13 = FUN_06861228(uVar23,plVar20);
joined_r0x0685f89c:
        if ((uVar13 & 1) == 0) break;
      }
      else {
        if ((uVar13 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
        if (lVar11 != 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar19) goto LAB_0685fd5c;
          uVar13 = (**(code **)(*plVar20 + 0x2b8))
                             (plVar20,*(undefined8 *)(unaff_x26 + lVar16),
                              *(undefined8 *)(*plVar20 + 0x2c0));
          if ((uVar13 & 1) != 0) goto LAB_0685f934;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar19) goto LAB_0685fd5c;
          plVar10 = *(long **)(unaff_x26 + lVar16);
          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
          uVar13 = (**(code **)(*plVar10 + 0x588))(plVar10,*(undefined8 *)(*plVar10 + 0x590));
          if ((uVar13 & 1) != 0) {
            lVar11 = *unaff_x28;
            if (lVar11 != 0) {
              if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                uVar13 = (**(code **)(*plVar20 + 0x908))
                                   (plVar20,*(undefined8 *)(lVar11 + lVar16),
                                    *(undefined8 *)(*plVar20 + 0x910));
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
      lVar11 = *unaff_x28;
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 8;
      if (lVar11 == 0) goto LAB_0685eebc;
    }
  }
  unaff_x22 = &DAT_083d2000;
  if (*unaff_x28 == 0) goto LAB_0685eebc;
  if (uVar19 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24))
    goto LAB_0685fd5c;
    lVar11 = (long)(int)unaff_w24;
    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar11 * 8);
    *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
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
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if ((plVar20 != (long *)0x0) &&
       (lVar16 = FUN_0339898c(plVar20,*(undefined8 *)(*in_stack_00000020 + 0x40)), lVar16 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
    plVar10 = in_stack_00000020 + lVar11 + 4;
    *plVar10 = (long)plVar20;
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
    }
    uVar8 = *(uint *)(in_stack_00000028 + 3);
    if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
    lVar16 = *unaff_x20;
    if (lVar16 != 0) {
      lVar17 = FUN_0339898c(lVar16,*(undefined8 *)(*in_stack_00000028 + 0x40));
      if (lVar17 == 0) goto LAB_06860ed8;
      uVar8 = (uint)in_stack_00000028[3];
    }
    if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
    plVar20 = in_stack_00000028 + lVar11 + 4;
    *plVar20 = lVar16;
    unaff_w24 = unaff_w24 + 1;
    if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
    unaff_x22 = &DAT_083d2000;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_0685fbc4:
  while( true ) {
    uVar8 = *(uint *)(in_stack_00000028 + 3);
    uVar18 = (ulong)uVar8;
    uVar13 = unaff_x25 + 1;
    if ((long)(int)uVar8 <= (long)uVar13) break;
    if (uVar18 <= uVar13) goto LAB_0685fd5c;
    unaff_x20 = in_stack_00000028 + unaff_x25 + 5;
    uVar18 = FUN_06740938(*unaff_x20,0,0);
    unaff_x25 = uVar13;
    if ((uVar18 & 1) == 0) goto code_r0x0685ef04;
  }
  if (unaff_w24 != 1) {
    if (unaff_w24 == 0) {
      uVar24 = FUN_033d1ba8(&DAT_08440468);
      FUN_033d1ba8(&DAT_083cee70);
      uVar23 = thunk_FUN_03398a84();
      FUN_0683135c(uVar23,uVar24,0);
      goto LAB_06860fa0;
    }
    if ((int)unaff_w24 < 2) {
      uVar8 = 0;
      in_stack_00000048 = unaff_x28;
      goto LAB_0685fdf8;
    }
    if (uVar8 == 0) goto LAB_0685fd5c;
    if (unaff_x23 == 0) goto LAB_0685eebc;
    lVar11 = 0;
    uVar8 = 0;
    uVar13 = (ulong)unaff_w24;
    uVar21 = 1;
    bVar6 = false;
    goto LAB_0685fc30;
  }
  if (in_stack_00000030 == 0) goto LAB_0685ff98;
  if (unaff_x23 == 0) goto LAB_0685eebc;
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
  lVar11 = FUN_03398738();
  lVar16 = *unaff_x28;
  if ((lVar16 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
  if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
  lVar17 = in_stack_00000020[4];
  if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar25 = FUN_03398a84(DAT_083d57e0);
  uVar23 = DAT_083c7838;
  if (lVar11 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_0339898c(lVar11,DAT_083c7838);
    if (lVar14 == 0) goto LAB_0685fe90;
  }
  uVar3 = *(undefined4 *)(lVar16 + 0x18);
  plVar20 = (long *)(lVar25 + 0x10);
  *plVar20 = lVar14;
  if (DAT_08908cd0 == 0) {
    *(undefined4 *)(lVar25 + 0x18) = uVar3;
    *(bool *)(lVar25 + 0x1c) = lVar17 != 0;
    *in_stack_00000008 = lVar25;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(lVar25 + 0x18) = uVar3;
    *(bool *)(lVar25 + 0x1c) = lVar17 != 0;
    *in_stack_00000008 = lVar25;
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
  uVar23 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar11 = *unaff_x28;
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_068613a0(uVar23,lVar11);
  uVar8 = (uint)in_stack_00000028[3];
  unaff_x22 = &DAT_083d2000;
LAB_0685ff98:
  if (uVar8 == 0) goto LAB_0685fd5c;
  plVar10 = in_stack_00000028 + 4;
  plVar20 = (long *)*plVar10;
  if (((plVar20 == (long *)0x0) ||
      (lVar11 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
      lVar11 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  iVar15 = (int)*(ulong *)(lVar11 + 0x18);
  if (iVar15 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
    lVar16 = in_stack_00000020[4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar16 != 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar11 + 0x18));
      uVar8 = *(int *)(lVar11 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar20,0,uVar8,0);
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar16 = in_stack_00000020[4];
      lVar11 = FUN_03398188(DAT_083c7838,1);
      if (lVar11 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar11 + 0x20) = 1;
      lVar11 = FUN_06852fd0(lVar16);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar11 != 0) &&
         (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
      goto LAB_06860ed8;
      uVar9 = *(uint *)(plVar20 + 3);
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      plVar12 = plVar20 + (long)(int)uVar8 + 4;
      *plVar12 = lVar11;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar9 = *(uint *)(plVar20 + 3);
      }
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      lVar11 = *unaff_x28;
      if (lVar11 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0685fd5c;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) goto LAB_06860fdc;
      FUN_06853274(plVar12,*(undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20),0,0);
      *unaff_x28 = (long)plVar20;
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
LAB_06860db0:
    if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
    goto LAB_06860eb4;
  }
  if (iVar15 <= iVar7) {
    if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
    plVar20 = (long *)*plVar10;
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    uVar8 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar11 + 0x18));
      uVar8 = *(int *)(lVar11 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar20,0,uVar8,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar16 = in_stack_00000020[4];
      lVar11 = FUN_03398188(DAT_083c7838,1);
      if ((*unaff_x28 == 0) || (lVar11 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar11 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar11 = FUN_06852fd0(lVar16);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar11 != 0) &&
         (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
      goto LAB_06860ed8;
      uVar9 = *(uint *)(plVar20 + 3);
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      plVar12 = plVar20 + (long)(int)uVar8 + 4;
      *plVar12 = lVar11;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar9 = *(uint *)(plVar20 + 3);
      }
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      lVar11 = *unaff_x28;
      if (lVar11 == 0) goto LAB_0685eebc;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar11,uVar8,plVar12,0,*(int *)(lVar11 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar20;
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
    goto LAB_06860db0;
  }
  plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar11 + 0x18) & 0xffffffff);
  lVar16 = *unaff_x28;
  if (lVar16 == 0) goto LAB_0685eebc;
  uVar13 = 0;
  while( true ) {
    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar13) {
      uVar8 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar13 < (int)(uVar8 - 1)) {
        do {
          uVar9 = (uint)uVar13;
          if (uVar8 <= uVar9) goto LAB_0685fd5c;
          plVar12 = *(long **)(lVar11 + (long)(int)uVar9 * 8 + 0x20);
          if ((plVar12 == (long *)0x0) ||
             (lVar16 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
             plVar20 == (long *)0x0)) goto LAB_0685eebc;
          if ((lVar16 != 0) &&
             (lVar17 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar20 + 3) <= uVar9) goto LAB_0685fd5c;
          plVar12 = plVar20 + (long)(int)uVar9 + 4;
          *plVar12 = lVar16;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar8 = *(uint *)(lVar11 + 0x18);
          uVar13 = (ulong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < (int)(uVar8 - 1));
      }
      if (in_stack_00000020 == (long *)0x0) break;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar16 = in_stack_00000020[4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = (uint)uVar13;
      if (lVar16 == 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar12 = *(long **)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
        if ((plVar12 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
           plVar20 == (long *)0x0)) break;
        if ((lVar11 != 0) &&
           (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
        goto LAB_06860ed8;
        uVar9 = *(uint *)(plVar20 + 3);
      }
      else {
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar11 = in_stack_00000020[4];
        uVar23 = FUN_03398188(DAT_083c7838,1);
        lVar11 = FUN_06852fd0(lVar11,uVar23);
        if (plVar20 == (long *)0x0) break;
        if ((lVar11 != 0) &&
           (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
        goto LAB_06860ed8;
        uVar9 = *(uint *)(plVar20 + 3);
      }
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      plVar12 = plVar20 + (long)(int)uVar8 + 4;
      *plVar12 = lVar11;
      if (DAT_08908cd0 == 0) {
        *unaff_x28 = (long)plVar20;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        *unaff_x28 = (long)plVar20;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_06860db0;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_0685fd5c;
    if (plVar20 == (long *)0x0) break;
    lVar16 = *(long *)(lVar16 + uVar13 * 8 + 0x20);
    if ((lVar16 != 0) &&
       (lVar17 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar20 + 3) <= uVar13) goto LAB_0685fd5c;
    plVar12 = plVar20 + uVar13 + 4;
    *plVar12 = lVar16;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar16 = *unaff_x28;
    uVar13 = uVar13 + 1;
    if (lVar16 == 0) break;
  }
  goto LAB_0685eebc;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar8) || (uVar18 <= uVar21)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar21)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar21)) goto LAB_0685fd5c;
  lVar16 = in_stack_00000020[lVar11 + 4];
  lVar17 = in_stack_00000028[lVar11 + 4];
  uVar23 = *(undefined8 *)(unaff_x23 + lVar11 * 8 + 0x20);
  lVar25 = in_stack_00000028[uVar21 + 4];
  uVar24 = *(undefined8 *)(unaff_x23 + uVar21 * 8 + 0x20);
  lVar11 = in_stack_00000020[uVar21 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar7 = FUN_06861580(lVar17,uVar23,lVar16,lVar25,uVar24,lVar11);
  if (iVar7 == 0) {
    if (uVar21 + 1 == uVar13) {
LAB_06860ef4:
      uVar24 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar23 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar23,uVar24,0);
LAB_06860fa0:
      uVar24 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar23,uVar24);
    }
    bVar6 = true;
LAB_0685fd44:
    uVar21 = uVar21 + 1;
    uVar18 = in_stack_00000028[3] & 0xffffffff;
    lVar11 = (long)(int)uVar8;
    if ((uint)in_stack_00000028[3] <= uVar8) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar7 == 2) {
    unaff_x22 = &DAT_083d2000;
    uVar8 = (uint)uVar21;
    if (uVar21 + 1 == uVar13) goto LAB_0685fdf8;
    bVar6 = false;
    goto LAB_0685fd44;
  }
  unaff_x22 = &DAT_083d2000;
  if (uVar21 + 1 != uVar13) goto LAB_0685fd44;
  if (bVar6) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar20 = (long *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20);
    if (*plVar20 == 0) goto LAB_0685eebc;
    lVar11 = FUN_03398738();
    lVar16 = *in_stack_00000048;
    if ((lVar16 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar17 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar23 = DAT_083c7838;
    if (lVar11 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = FUN_0339898c(lVar11,DAT_083c7838);
      if (lVar14 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar11,uVar23);
      }
    }
    uVar3 = *(undefined4 *)(lVar16 + 0x18);
    plVar10 = (long *)(lVar25 + 0x10);
    *plVar10 = lVar14;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar17 != 0;
      *in_stack_00000008 = lVar25;
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
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar17 != 0;
      *in_stack_00000008 = lVar25;
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
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    lVar11 = *plVar20;
    lVar16 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar11,lVar16);
    unaff_x22 = &DAT_083d2000;
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
  plVar10 = in_stack_00000028 + (long)(int)uVar8 + 4;
  plVar20 = (long *)*plVar10;
  if (((plVar20 == (long *)0x0) ||
      (lVar11 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
      lVar11 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar7 = *(int *)(*in_stack_00000048 + 0x18);
  iVar15 = (int)*(ulong *)(lVar11 + 0x18);
  if (iVar15 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar16 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar16 != 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar11 + 0x18));
      uVar9 = *(int *)(lVar11 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar9,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar16 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar11 = FUN_03398188(DAT_083c7838,1);
      if (lVar11 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar11 + 0x20) = 1;
      lVar11 = FUN_06852fd0(lVar16);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar11 != 0) &&
         (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar20 + 3);
      if (uVar19 <= uVar9) goto LAB_0685fd5c;
      plVar12 = plVar20 + (long)(int)uVar9 + 4;
      *plVar12 = lVar11;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar19 = *(uint *)(plVar20 + 3);
      }
      if (uVar19 <= uVar9) goto LAB_0685fd5c;
      lVar11 = *in_stack_00000048;
      if (lVar11 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar12);
      }
      FUN_06853274(plVar12,*(undefined8 *)(lVar11 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar20;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  else {
    if (iVar7 < iVar15) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar11 + 0x18) & 0xffffffff);
      lVar16 = *in_stack_00000048;
      if (lVar16 != 0) {
        uVar13 = 0;
        do {
          if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar13) {
            uVar9 = *(uint *)(lVar11 + 0x18);
            if ((int)uVar13 < (int)(uVar9 - 1)) goto LAB_06860788;
            goto LAB_06860c2c;
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_0685fd5c;
          if (plVar20 == (long *)0x0) break;
          lVar16 = *(long *)(lVar16 + uVar13 * 8 + 0x20);
          if ((lVar16 != 0) &&
             (lVar17 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar20 + 3) <= uVar13) goto LAB_0685fd5c;
          plVar12 = plVar20 + uVar13 + 4;
          *plVar12 = lVar16;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar16 = *in_stack_00000048;
          uVar13 = uVar13 + 1;
        } while (lVar16 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
    plVar20 = (long *)*plVar10;
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar11 + 0x18));
      uVar9 = *(int *)(lVar11 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar9,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar16 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar11 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar11 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar11 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar9;
      lVar11 = FUN_06852fd0(lVar16);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar11 != 0) &&
         (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar20 + 3);
      if (uVar19 <= uVar9) goto LAB_0685fd5c;
      plVar12 = plVar20 + (long)(int)uVar9 + 4;
      *plVar12 = lVar11;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar19 = *(uint *)(plVar20 + 3);
      }
      if (uVar19 <= uVar9) goto LAB_0685fd5c;
      lVar11 = *in_stack_00000048;
      if (lVar11 == 0) goto LAB_0685eebc;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar11,uVar9,plVar12,0,*(int *)(lVar11 + 0x18) - uVar9,0);
      *in_stack_00000048 = (long)plVar20;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
code_r0x0685ef04:
  if (*(uint *)(in_stack_00000028 + 3) <= uVar13) goto LAB_0685fd5c;
  plVar20 = (long *)*unaff_x20;
  if ((plVar20 == (long *)0x0) ||
     (unaff_x27 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
     unaff_x27 == 0)) goto LAB_0685eebc;
  unaff_x21 = *(ulong *)(unaff_x27 + 0x18);
  param_1 = *unaff_x28;
  goto code_r0x0685ef38;
  while( true ) {
    plVar12 = *(long **)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
    if ((plVar12 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
       plVar20 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar16 != 0) &&
       (lVar17 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar20 + 3) <= uVar19) goto LAB_0685fd5c;
    plVar12 = plVar20 + (long)(int)uVar19 + 4;
    *plVar12 = lVar16;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar11 + 0x18);
    uVar13 = (ulong)(uVar19 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar19 + 1)) break;
LAB_06860788:
    uVar19 = (uint)uVar13;
    if (uVar9 <= uVar19) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
  lVar16 = in_stack_00000020[(long)(int)uVar8 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar13;
  if (lVar16 == 0) {
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar12 = *(long **)(lVar11 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar12 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
       plVar20 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar11 != 0) &&
       (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
    goto LAB_06860ed8;
    uVar19 = *(uint *)(plVar20 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar11 = in_stack_00000020[(long)(int)uVar8 + 4];
    uVar23 = FUN_03398188(DAT_083c7838,1);
    lVar11 = FUN_06852fd0(lVar11,uVar23);
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar11 != 0) &&
       (lVar16 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0)) {
LAB_06860ed8:
      uVar23 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar23,0);
    }
    uVar19 = *(uint *)(plVar20 + 3);
  }
  if (uVar19 <= uVar9) goto LAB_0685fd5c;
  plVar12 = plVar20 + (long)(int)uVar9 + 4;
  *plVar12 = lVar11;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar20;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_06860ea8:
  if (uVar8 < *(uint *)(in_stack_00000028 + 3)) {
LAB_06860eb4:
    return *plVar10;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


