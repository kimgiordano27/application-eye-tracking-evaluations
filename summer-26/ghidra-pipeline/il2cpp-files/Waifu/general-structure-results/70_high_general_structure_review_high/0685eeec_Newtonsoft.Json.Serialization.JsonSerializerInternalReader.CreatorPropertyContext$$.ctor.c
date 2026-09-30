/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 0685eeec
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor(void)

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
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *unaff_x22;
  undefined8 uVar25;
  long unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined8 uVar26;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000008;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x0685eeec:
  plVar23 = unaff_x27 + unaff_x25 + 4;
  uVar10 = FUN_06740938(*plVar23,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(uint *)(unaff_x27 + 3) <= unaff_x25) goto LAB_0685fd5c;
    plVar11 = (long *)*plVar23;
    if ((plVar11 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar11 + 1000))(plVar11,*(undefined8 *)(*plVar11 + 0x3f0)),
       lVar12 == 0)) goto LAB_0685eebc;
    uVar10 = *(ulong *)(lVar12 + 0x18);
    lVar17 = *unaff_x28;
    if (uVar10 == 0) {
      if (lVar17 == 0) goto LAB_0685eebc;
      if (*(long *)(lVar17 + 0x18) != 0) {
        if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
        plVar11 = (long *)*plVar23;
        if (plVar11 == (long *)0x0) goto LAB_0685eebc;
        uVar8 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
        unaff_x27 = in_stack_00000028;
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
      lVar12 = *plVar23;
      if (lVar12 != 0) {
        lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*in_stack_00000028 + 0x40));
        if (lVar17 == 0) goto LAB_06860ed8;
        uVar8 = (uint)in_stack_00000028[3];
      }
      if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
      plVar23 = in_stack_00000028 + (long)(int)unaff_w24 + 4;
      *plVar23 = lVar12;
      unaff_w24 = unaff_w24 + 1;
      if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar23 >> 0x12 & 0x7fff);
      unaff_x22 = &DAT_083d2000;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
        unaff_x27 = in_stack_00000028;
      } while (cVar5 != '\0');
    }
    else {
      if (lVar17 == 0) goto LAB_0685eebc;
      uVar8 = *(uint *)(lVar17 + 0x18);
      iVar7 = (int)uVar10;
      if ((int)uVar8 < iVar7) {
        uVar9 = iVar7 - 1;
        if ((int)uVar8 < (int)uVar9) {
          plVar11 = (long *)(lVar12 + (long)(int)uVar8 * 8 + 0x20);
          do {
            if ((uint)uVar10 <= uVar8) goto LAB_0685fd5c;
            plVar13 = (long *)*plVar11;
            if (plVar13 == (long *)0x0) goto LAB_0685eebc;
            lVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
            if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
              FUN_033b9870(DAT_083ca050);
            }
            if (lVar17 == **(long **)(DAT_083ca050 + 0xb8)) {
              uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
              uVar9 = *(uint *)(lVar12 + 0x18) - 1;
              break;
            }
            uVar10 = *(ulong *)(lVar12 + 0x18);
            uVar8 = uVar8 + 1;
            plVar11 = plVar11 + 1;
            uVar9 = (int)uVar10 - 1;
          } while ((int)uVar8 < (int)uVar9);
        }
        if (uVar8 == uVar9) {
          if ((uint)uVar10 <= uVar9) goto LAB_0685fd5c;
          plVar11 = (long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
          plVar13 = (long *)*plVar11;
          if (plVar13 == (long *)0x0) goto LAB_0685eebc;
          lVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
          if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
            FUN_033b9870(DAT_083ca050);
          }
          if (lVar17 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar13 = (long *)*plVar11;
          if ((plVar13 == (long *)0x0) ||
             (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
             plVar13 == (long *)0x0)) goto LAB_0685eebc;
          uVar10 = (**(code **)(*plVar13 + 0x358))(plVar13,*(undefined8 *)(*plVar13 + 0x360));
          uVar25 = DAT_083bd0a8;
          if ((uVar10 & 1) == 0) goto LAB_0685fbc0;
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar13 = (long *)*plVar11;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar25 = FUN_0683eca4(uVar25,0);
          if (plVar13 == (long *)0x0) goto LAB_0685eebc;
          uVar10 = (**(code **)(*plVar13 + 0x218))
                             (plVar13,uVar25,1,*(undefined8 *)(*plVar13 + 0x220));
          if ((uVar10 & 1) != 0) {
            if (uVar9 < *(uint *)(lVar12 + 0x18)) {
              plVar11 = (long *)*plVar11;
              goto joined_r0x0685fb88;
            }
            goto LAB_0685fd5c;
          }
        }
LAB_0685fbb8:
        unaff_x22 = &DAT_083d2000;
        unaff_x27 = in_stack_00000028;
      }
      else {
        if (iVar7 == 0) goto LAB_0685fd5c;
        uVar9 = iVar7 - 1;
        lVar17 = (long)(int)uVar9;
        plVar11 = (long *)(lVar12 + lVar17 * 8 + 0x20);
        plVar13 = (long *)*plVar11;
        if ((plVar13 == (long *)0x0) ||
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
           plVar13 == (long *)0x0)) goto LAB_0685eebc;
        uVar10 = (**(code **)(*plVar13 + 0x358))(plVar13,*(undefined8 *)(*plVar13 + 0x360));
        uVar25 = DAT_083bd0a8;
        if (iVar7 < (int)uVar8) {
          if ((uVar10 & 1) != 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
            plVar13 = (long *)*plVar11;
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar25 = FUN_0683eca4(uVar25,0);
            if (plVar13 == (long *)0x0) goto LAB_0685eebc;
            uVar10 = (**(code **)(*plVar13 + 0x218))
                               (plVar13,uVar25,1,*(undefined8 *)(*plVar13 + 0x220));
            if ((uVar10 & 1) == 0) goto LAB_0685fbb8;
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar18 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
            if (*(uint *)(lVar18 + lVar17 * 4 + 0x20) == uVar9) {
LAB_0685f2d4:
              if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                plVar11 = (long *)*plVar11;
joined_r0x0685fb88:
                if ((plVar11 != (long *)0x0) &&
                   (plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x1f0)),
                   plVar11 != (long *)0x0)) {
                  plVar11 = (long *)(**(code **)(*plVar11 + 0x448))
                                              (plVar11,*(undefined8 *)(*plVar11 + 0x450));
                  goto LAB_0685f360;
                }
                goto LAB_0685eebc;
              }
              goto LAB_0685fd5c;
            }
          }
LAB_0685fbc0:
          unaff_x22 = &DAT_083d2000;
          unaff_x27 = in_stack_00000028;
          goto LAB_0685fbc4;
        }
        if ((uVar10 & 1) == 0) {
LAB_0685f35c:
          plVar11 = (long *)0x0;
        }
        else {
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar13 = (long *)*plVar11;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar25 = FUN_0683eca4(uVar25,0);
          if (plVar13 == (long *)0x0) goto LAB_0685eebc;
          uVar10 = (**(code **)(*plVar13 + 0x218))
                             (plVar13,uVar25,1,*(undefined8 *)(*plVar13 + 0x220));
          if ((uVar10 & 1) != 0) {
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar18 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
            if (*(uint *)(lVar18 + lVar17 * 4 + 0x20) == uVar9) {
              if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                plVar13 = (long *)*plVar11;
                if ((plVar13 == (long *)0x0) ||
                   (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
                   unaff_x26 == 0)) goto LAB_0685eebc;
                if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
                  if (plVar13 != (long *)0x0) {
                    uVar10 = (**(code **)(*plVar13 + 0x2b8))
                                       (plVar13,*(undefined8 *)(unaff_x26 + lVar17 * 8 + 0x20),
                                        *(undefined8 *)(*plVar13 + 0x2c0));
                    if ((uVar10 & 1) == 0) goto LAB_0685f2d4;
                    goto LAB_0685f35c;
                  }
                  goto LAB_0685eebc;
                }
              }
              goto LAB_0685fd5c;
            }
            goto LAB_0685f35c;
          }
          plVar11 = (long *)0x0;
        }
LAB_0685f360:
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
          if (plVar11 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
          uVar8 = *(int *)(lVar12 + 0x18) - 1;
        }
        else {
          if (plVar11 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
          if (*unaff_x28 == 0) goto LAB_0685eebc;
          uVar8 = *(uint *)(*unaff_x28 + 0x18);
        }
        if ((int)uVar8 < 1) {
          uVar21 = 0;
        }
        else {
          uVar9 = 0;
          plVar13 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          do {
            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
            lVar17 = (long)(int)uVar9;
            plVar14 = *(long **)(lVar12 + lVar17 * 8 + 0x20);
            if ((plVar14 == (long *)0x0) ||
               (plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x1f0)),
               plVar14 == (long *)0x0)) goto LAB_0685eebc;
            uVar10 = (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
            if ((uVar10 & 1) != 0) {
              plVar14 = (long *)(**(code **)(*plVar14 + 0x448))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x450));
            }
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar18 = *plVar13;
            if (lVar18 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
            if (unaff_x26 == 0) goto LAB_0685eebc;
            uVar21 = *(uint *)(lVar18 + lVar17 * 4 + 0x20);
            if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_0685fd5c;
            plVar24 = *(long **)(unaff_x26 + (long)(int)uVar21 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            unaff_x28 = in_stack_00000048;
            if (plVar24 != plVar14) {
              if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar18 = *plVar13;
                if (lVar18 == 0) goto LAB_0685eebc;
                if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
                lVar19 = *in_stack_00000048;
                if (lVar19 == 0) goto LAB_0685eebc;
                uVar21 = *(uint *)(lVar18 + lVar17 * 4 + 0x20);
                if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_0685fd5c;
                lVar18 = *(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20);
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                if (lVar18 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
              }
              uVar25 = DAT_083bd010;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar18 = *plVar13;
              if (lVar18 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
              lVar19 = *in_stack_00000048;
              if (lVar19 == 0) goto LAB_0685eebc;
              uVar21 = *(uint *)(lVar18 + lVar17 * 4 + 0x20);
              if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_0685fd5c;
              if (*(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20) != 0) {
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar24 = (long *)FUN_0683eca4(uVar25,0);
                if (plVar24 != plVar14) {
                  if (plVar14 == (long *)0x0) goto LAB_0685eebc;
                  uVar10 = (**(code **)(*plVar14 + 0x608))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x610));
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar18 = *plVar13;
                  if (lVar18 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar9) ||
                     (uVar21 = *(uint *)(lVar18 + lVar17 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar21)) goto LAB_0685fd5c;
                  lVar18 = *(long *)(unaff_x26 + (long)(int)uVar21 * 8 + 0x20);
                  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  uVar21 = uVar9;
                  if ((uVar10 & 1) == 0) {
                    if (lVar18 != 0) {
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                      lVar18 = *plVar13;
                      if (lVar18 == 0) goto LAB_0685eebc;
                      if ((*(uint *)(lVar18 + 0x18) <= uVar9) ||
                         (uVar4 = *(uint *)(lVar18 + lVar17 * 4 + 0x20),
                         *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                      uVar10 = (**(code **)(*plVar14 + 0x2b8))
                                         (plVar14,*(undefined8 *)
                                                   (unaff_x26 + (long)(int)uVar4 * 8 + 0x20),
                                          *(undefined8 *)(*plVar14 + 0x2c0));
                      if ((uVar10 & 1) == 0) {
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                        lVar18 = *plVar13;
                        if (lVar18 == 0) goto LAB_0685eebc;
                        if ((*(uint *)(lVar18 + 0x18) <= uVar9) ||
                           (uVar4 = *(uint *)(lVar18 + lVar17 * 4 + 0x20),
                           *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                        plVar24 = *(long **)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
                        if (plVar24 == (long *)0x0) goto LAB_0685eebc;
                        uVar10 = (**(code **)(*plVar24 + 0x588))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x590));
                        if ((uVar10 & 1) != 0) {
                          if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                            lVar18 = *plVar13;
                            if (lVar18 != 0) {
                              if (uVar9 < *(uint *)(lVar18 + 0x18)) {
                                lVar19 = *in_stack_00000048;
                                if (lVar19 != 0) {
                                  uVar4 = *(uint *)(lVar18 + lVar17 * 4 + 0x20);
                                  if (uVar4 < *(uint *)(lVar19 + 0x18)) {
                                    uVar10 = (**(code **)(*plVar14 + 0x908))
                                                       (plVar14,*(undefined8 *)
                                                                 (lVar19 + (long)(int)uVar4 * 8 +
                                                                 0x20),
                                                        *(undefined8 *)(*plVar14 + 0x910));
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
                    if (lVar18 == 0) break;
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar18 = *plVar13;
                    if (lVar18 == 0) goto LAB_0685eebc;
                    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0685fd5c;
                    lVar19 = *in_stack_00000048;
                    if (lVar19 == 0) goto LAB_0685eebc;
                    uVar4 = *(uint *)(lVar18 + lVar17 * 4 + 0x20);
                    if (*(uint *)(lVar19 + 0x18) <= uVar4) goto LAB_0685fd5c;
                    uVar25 = *(undefined8 *)(lVar19 + (long)(int)uVar4 * 8 + 0x20);
                    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar14 + 200) +
                                  (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_033d1fec(plVar14);
                    }
                    uVar10 = FUN_06861228(uVar25,plVar14);
joined_r0x0685f778:
                    if ((uVar10 & 1) == 0) break;
                  }
                }
              }
            }
LAB_0685f77c:
            uVar9 = uVar9 + 1;
            uVar21 = uVar8;
          } while (uVar8 != uVar9);
        }
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((plVar11 != (long *)0x0) && (uVar21 == *(int *)(lVar12 + 0x18) - 1U)) {
          lVar12 = *unaff_x28;
          if (lVar12 == 0) goto LAB_0685eebc;
          lVar17 = (-(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar21 << 3) + 0x20;
          while ((int)uVar21 < *(int *)(lVar12 + 0x18)) {
            uVar10 = (**(code **)(*plVar11 + 0x608))(plVar11,*(undefined8 *)(*plVar11 + 0x610));
            if (unaff_x26 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_0685fd5c;
            lVar12 = *(long *)(unaff_x26 + lVar17);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
              if ((uVar10 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
              if (lVar12 == 0) break;
              lVar12 = *unaff_x28;
              if (lVar12 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar12 + 0x18) <= uVar21) goto LAB_0685fd5c;
              uVar25 = *(undefined8 *)(lVar12 + lVar17);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar11);
              }
              uVar10 = FUN_06861228(uVar25,plVar11);
joined_r0x0685f89c:
              if ((uVar10 & 1) == 0) break;
            }
            else {
              if ((uVar10 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
              if (lVar12 != 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_0685fd5c;
                uVar10 = (**(code **)(*plVar11 + 0x2b8))
                                   (plVar11,*(undefined8 *)(unaff_x26 + lVar17),
                                    *(undefined8 *)(*plVar11 + 0x2c0));
                if ((uVar10 & 1) != 0) goto LAB_0685f934;
                if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_0685fd5c;
                plVar13 = *(long **)(unaff_x26 + lVar17);
                if (plVar13 == (long *)0x0) goto LAB_0685eebc;
                uVar10 = (**(code **)(*plVar13 + 0x588))(plVar13,*(undefined8 *)(*plVar13 + 0x590));
                if ((uVar10 & 1) != 0) {
                  lVar12 = *unaff_x28;
                  if (lVar12 != 0) {
                    if (uVar21 < *(uint *)(lVar12 + 0x18)) {
                      uVar10 = (**(code **)(*plVar11 + 0x908))
                                         (plVar11,*(undefined8 *)(lVar12 + lVar17),
                                          *(undefined8 *)(*plVar11 + 0x910));
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
            lVar12 = *unaff_x28;
            uVar21 = uVar21 + 1;
            lVar17 = lVar17 + 8;
            if (lVar12 == 0) goto LAB_0685eebc;
          }
        }
        unaff_x22 = &DAT_083d2000;
        if (*unaff_x28 == 0) goto LAB_0685eebc;
        unaff_x27 = in_stack_00000028;
        if (uVar21 == *(uint *)(*unaff_x28 + 0x18)) {
          if (unaff_x23 == 0) goto LAB_0685eebc;
          if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
             (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)) goto LAB_0685fd5c;
          lVar12 = (long)(int)unaff_w24;
          puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar12 * 8);
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
          if ((plVar11 != (long *)0x0) &&
             (lVar17 = FUN_0339898c(plVar11,*(undefined8 *)(*in_stack_00000020 + 0x40)), lVar17 == 0
             )) goto LAB_06860ed8;
          if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
          plVar13 = in_stack_00000020 + lVar12 + 4;
          *plVar13 = (long)plVar11;
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
          uVar8 = *(uint *)(in_stack_00000028 + 3);
          if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
          lVar17 = *plVar23;
          if (lVar17 != 0) {
            lVar18 = FUN_0339898c(lVar17,*(undefined8 *)(*in_stack_00000028 + 0x40));
            if (lVar18 == 0) goto LAB_06860ed8;
            uVar8 = (uint)in_stack_00000028[3];
          }
          if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
          plVar23 = in_stack_00000028 + lVar12 + 4;
          *plVar23 = lVar17;
          unaff_w24 = unaff_w24 + 1;
          if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar23 >> 0x12 & 0x7fff);
          unaff_x22 = &DAT_083d2000;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
    }
  }
LAB_0685fbc4:
  uVar8 = *(uint *)(unaff_x27 + 3);
  uVar10 = (ulong)uVar8;
  unaff_x25 = unaff_x25 + 1;
  if ((long)unaff_x25 < (long)(int)uVar8) {
    if (uVar10 <= unaff_x25) goto LAB_0685fd5c;
    goto code_r0x0685eeec;
  }
  if (unaff_w24 != 1) {
    if (unaff_w24 == 0) {
      uVar26 = FUN_033d1ba8(&DAT_08440468);
      FUN_033d1ba8(&DAT_083cee70);
      uVar25 = thunk_FUN_03398a84();
      FUN_0683135c(uVar25,uVar26,0);
      goto LAB_06860fa0;
    }
    if ((int)unaff_w24 < 2) {
      uVar8 = 0;
      in_stack_00000028 = unaff_x27;
      in_stack_00000048 = unaff_x28;
      goto LAB_0685fdf8;
    }
    if (uVar8 != 0) {
      if (unaff_x23 == 0) goto LAB_0685eebc;
      lVar12 = 0;
      uVar8 = 0;
      uVar20 = (ulong)unaff_w24;
      uVar22 = 1;
      bVar6 = false;
      goto LAB_0685fc30;
    }
    goto LAB_0685fd5c;
  }
  if (in_stack_00000030 == 0) goto LAB_0685ff98;
  if (unaff_x23 == 0) goto LAB_0685eebc;
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
  lVar12 = FUN_03398738();
  lVar17 = *unaff_x28;
  if ((lVar17 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
  if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
  lVar18 = in_stack_00000020[4];
  if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar19 = FUN_03398a84(DAT_083d57e0);
  uVar25 = DAT_083c7838;
  if (lVar12 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = FUN_0339898c(lVar12,DAT_083c7838);
    if (lVar15 == 0) goto LAB_0685fe90;
  }
  uVar3 = *(undefined4 *)(lVar17 + 0x18);
  plVar23 = (long *)(lVar19 + 0x10);
  *plVar23 = lVar15;
  if (DAT_08908cd0 == 0) {
    *(undefined4 *)(lVar19 + 0x18) = uVar3;
    *(bool *)(lVar19 + 0x1c) = lVar18 != 0;
    *in_stack_00000008 = lVar19;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar23 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(lVar19 + 0x18) = uVar3;
    *(bool *)(lVar19 + 0x1c) = lVar18 != 0;
    *in_stack_00000008 = lVar19;
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
  uVar25 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar12 = *unaff_x28;
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_068613a0(uVar25,lVar12);
  uVar8 = (uint)unaff_x27[3];
  unaff_x22 = &DAT_083d2000;
LAB_0685ff98:
  if (uVar8 == 0) goto LAB_0685fd5c;
  plVar11 = unaff_x27 + 4;
  plVar23 = (long *)*plVar11;
  if (((plVar23 == (long *)0x0) ||
      (lVar12 = (**(code **)(*plVar23 + 1000))(plVar23,*(undefined8 *)(*plVar23 + 0x3f0)),
      lVar12 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  iVar16 = (int)*(ulong *)(lVar12 + 0x18);
  if (iVar16 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
    lVar17 = in_stack_00000020[4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar17 != 0) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar12 + 0x18));
      uVar8 = *(int *)(lVar12 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar23,0,uVar8,0);
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar17 = in_stack_00000020[4];
      lVar12 = FUN_03398188(DAT_083c7838,1);
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar12 + 0x20) = 1;
      lVar12 = FUN_06852fd0(lVar17);
      if (plVar23 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar12 != 0) &&
         (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
      goto LAB_06860ed8;
      uVar9 = *(uint *)(plVar23 + 3);
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      plVar13 = plVar23 + (long)(int)uVar8 + 4;
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
        uVar9 = *(uint *)(plVar23 + 3);
      }
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      lVar12 = *unaff_x28;
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) goto LAB_06860fdc;
      FUN_06853274(plVar13,*(undefined8 *)(lVar12 + (long)(int)uVar8 * 8 + 0x20),0,0);
      *unaff_x28 = (long)plVar23;
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
    if (iVar7 < iVar16) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar12 + 0x18) & 0xffffffff);
      lVar17 = *unaff_x28;
      if (lVar17 == 0) goto LAB_0685eebc;
      uVar10 = 0;
      while( true ) {
        if ((long)(int)*(uint *)(lVar17 + 0x18) <= (long)uVar10) {
          uVar8 = *(uint *)(lVar12 + 0x18);
          if ((int)uVar10 < (int)(uVar8 - 1)) {
            do {
              uVar9 = (uint)uVar10;
              if (uVar8 <= uVar9) goto LAB_0685fd5c;
              plVar13 = *(long **)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
              if ((plVar13 == (long *)0x0) ||
                 (lVar17 = (**(code **)(*plVar13 + 0x208))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x210)),
                 plVar23 == (long *)0x0)) goto LAB_0685eebc;
              if ((lVar17 != 0) &&
                 (lVar18 = FUN_0339898c(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar18 == 0))
              goto LAB_06860ed8;
              if (*(uint *)(plVar23 + 3) <= uVar9) goto LAB_0685fd5c;
              plVar13 = plVar23 + (long)(int)uVar9 + 4;
              *plVar13 = lVar17;
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
              uVar8 = *(uint *)(lVar12 + 0x18);
              uVar10 = (ulong)(uVar9 + 1);
            } while ((int)(uVar9 + 1) < (int)(uVar8 - 1));
          }
          if (in_stack_00000020 == (long *)0x0) break;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar17 = in_stack_00000020[4];
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = (uint)uVar10;
          if (lVar17 == 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
            plVar13 = *(long **)(lVar12 + (long)(int)uVar8 * 8 + 0x20);
            if ((plVar13 == (long *)0x0) ||
               (lVar12 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
               plVar23 == (long *)0x0)) break;
            if ((lVar12 != 0) &&
               (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar23 + 3);
          }
          else {
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar12 = in_stack_00000020[4];
            uVar25 = FUN_03398188(DAT_083c7838,1);
            lVar12 = FUN_06852fd0(lVar12,uVar25);
            if (plVar23 == (long *)0x0) break;
            if ((lVar12 != 0) &&
               (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar23 + 3);
          }
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          plVar13 = plVar23 + (long)(int)uVar8 + 4;
          *plVar13 = lVar12;
          if (DAT_08908cd0 == 0) {
            *unaff_x28 = (long)plVar23;
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
            *unaff_x28 = (long)plVar23;
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
        if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0685fd5c;
        if (plVar23 == (long *)0x0) break;
        lVar17 = *(long *)(lVar17 + uVar10 * 8 + 0x20);
        if ((lVar17 != 0) &&
           (lVar18 = FUN_0339898c(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar18 == 0))
        goto LAB_06860ed8;
        if (*(uint *)(plVar23 + 3) <= uVar10) goto LAB_0685fd5c;
        plVar13 = plVar23 + uVar10 + 4;
        *plVar13 = lVar17;
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
        lVar17 = *unaff_x28;
        uVar10 = uVar10 + 1;
        if (lVar17 == 0) break;
      }
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
    plVar23 = (long *)*plVar11;
    if (plVar23 == (long *)0x0) goto LAB_0685eebc;
    uVar8 = (**(code **)(*plVar23 + 0x288))(plVar23,*(undefined8 *)(*plVar23 + 0x290));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar12 + 0x18));
      uVar8 = *(int *)(lVar12 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar23,0,uVar8,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar17 = in_stack_00000020[4];
      lVar12 = FUN_03398188(DAT_083c7838,1);
      if ((*unaff_x28 == 0) || (lVar12 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar12 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar12 = FUN_06852fd0(lVar17);
      if (plVar23 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar12 != 0) &&
         (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
      goto LAB_06860ed8;
      uVar9 = *(uint *)(plVar23 + 3);
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      plVar13 = plVar23 + (long)(int)uVar8 + 4;
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
        uVar9 = *(uint *)(plVar23 + 3);
      }
      if (uVar9 <= uVar8) goto LAB_0685fd5c;
      lVar12 = *unaff_x28;
      if (lVar12 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar12,uVar8,plVar13,0,*(int *)(lVar12 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar23;
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
LAB_06860db0:
  if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
  goto LAB_06860eb4;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar8) || (uVar10 <= uVar22)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar22)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar22)) goto LAB_0685fd5c;
  lVar17 = in_stack_00000020[lVar12 + 4];
  lVar18 = unaff_x27[lVar12 + 4];
  uVar25 = *(undefined8 *)(unaff_x23 + lVar12 * 8 + 0x20);
  lVar19 = unaff_x27[uVar22 + 4];
  uVar26 = *(undefined8 *)(unaff_x23 + uVar22 * 8 + 0x20);
  lVar12 = in_stack_00000020[uVar22 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar7 = FUN_06861580(lVar18,uVar25,lVar17,lVar19,uVar26,lVar12);
  if (iVar7 == 0) {
    if (uVar22 + 1 == uVar20) {
LAB_06860ef4:
      uVar26 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar25 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar25,uVar26,0);
LAB_06860fa0:
      uVar26 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar25,uVar26);
    }
    bVar6 = true;
LAB_0685fd44:
    uVar22 = uVar22 + 1;
    uVar10 = in_stack_00000028[3] & 0xffffffff;
    lVar12 = (long)(int)uVar8;
    unaff_x27 = in_stack_00000028;
    if ((uint)in_stack_00000028[3] <= uVar8) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar7 == 2) {
    unaff_x22 = &DAT_083d2000;
    uVar8 = (uint)uVar22;
    if (uVar22 + 1 == uVar20) goto LAB_0685fdf8;
    bVar6 = false;
    goto LAB_0685fd44;
  }
  unaff_x22 = &DAT_083d2000;
  if (uVar22 + 1 != uVar20) goto LAB_0685fd44;
  if (bVar6) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar23 = (long *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20);
    if (*plVar23 == 0) goto LAB_0685eebc;
    lVar12 = FUN_03398738();
    lVar17 = *in_stack_00000048;
    if ((lVar17 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar18 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar19 = FUN_03398a84(DAT_083d57e0);
    uVar25 = DAT_083c7838;
    if (lVar12 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = FUN_0339898c(lVar12,DAT_083c7838);
      if (lVar15 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar12,uVar25);
      }
    }
    uVar3 = *(undefined4 *)(lVar17 + 0x18);
    plVar11 = (long *)(lVar19 + 0x10);
    *plVar11 = lVar15;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar19 + 0x18) = uVar3;
      *(bool *)(lVar19 + 0x1c) = lVar18 != 0;
      *in_stack_00000008 = lVar19;
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
      *(undefined4 *)(lVar19 + 0x18) = uVar3;
      *(bool *)(lVar19 + 0x1c) = lVar18 != 0;
      *in_stack_00000008 = lVar19;
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
    lVar12 = *plVar23;
    lVar17 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar12,lVar17);
    unaff_x22 = &DAT_083d2000;
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
  plVar11 = in_stack_00000028 + (long)(int)uVar8 + 4;
  plVar23 = (long *)*plVar11;
  if (((plVar23 == (long *)0x0) ||
      (lVar12 = (**(code **)(*plVar23 + 1000))(plVar23,*(undefined8 *)(*plVar23 + 0x3f0)),
      lVar12 == 0)) || (*in_stack_00000048 == 0)) goto LAB_0685eebc;
  iVar7 = *(int *)(*in_stack_00000048 + 0x18);
  iVar16 = (int)*(ulong *)(lVar12 + 0x18);
  if (iVar16 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar17 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar17 != 0) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar12 + 0x18));
      uVar9 = *(int *)(lVar12 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar23,0,uVar9,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar17 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar12 = FUN_03398188(DAT_083c7838,1);
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar12 + 0x20) = 1;
      lVar12 = FUN_06852fd0(lVar17);
      if (plVar23 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar12 != 0) &&
         (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
      goto LAB_06860ed8;
      uVar21 = *(uint *)(plVar23 + 3);
      if (uVar21 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar23 + (long)(int)uVar9 + 4;
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
        uVar21 = *(uint *)(plVar23 + 3);
      }
      if (uVar21 <= uVar9) goto LAB_0685fd5c;
      lVar12 = *in_stack_00000048;
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar13);
      }
      FUN_06853274(plVar13,*(undefined8 *)(lVar12 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar23;
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
    if (iVar7 < iVar16) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar12 + 0x18) & 0xffffffff);
      lVar17 = *in_stack_00000048;
      if (lVar17 != 0) {
        uVar10 = 0;
        do {
          if ((long)(int)*(uint *)(lVar17 + 0x18) <= (long)uVar10) {
            uVar9 = *(uint *)(lVar12 + 0x18);
            if ((int)uVar10 < (int)(uVar9 - 1)) goto LAB_06860788;
            goto LAB_06860c2c;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0685fd5c;
          if (plVar23 == (long *)0x0) break;
          lVar17 = *(long *)(lVar17 + uVar10 * 8 + 0x20);
          if ((lVar17 != 0) &&
             (lVar18 = FUN_0339898c(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar18 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar23 + 3) <= uVar10) goto LAB_0685fd5c;
          plVar13 = plVar23 + uVar10 + 4;
          *plVar13 = lVar17;
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
          lVar17 = *in_stack_00000048;
          uVar10 = uVar10 + 1;
        } while (lVar17 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
    plVar23 = (long *)*plVar11;
    if (plVar23 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar23 + 0x288))(plVar23,*(undefined8 *)(*plVar23 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar23 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar12 + 0x18));
      uVar9 = *(int *)(lVar12 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar23,0,uVar9,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar17 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar12 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar12 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar12 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar9;
      lVar12 = FUN_06852fd0(lVar17);
      if (plVar23 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar12 != 0) &&
         (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
      goto LAB_06860ed8;
      uVar21 = *(uint *)(plVar23 + 3);
      if (uVar21 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar23 + (long)(int)uVar9 + 4;
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
        uVar21 = *(uint *)(plVar23 + 3);
      }
      if (uVar21 <= uVar9) goto LAB_0685fd5c;
      lVar12 = *in_stack_00000048;
      if (lVar12 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar12,uVar9,plVar13,0,*(int *)(lVar12 + 0x18) - uVar9,0);
      *in_stack_00000048 = (long)plVar23;
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
  while( true ) {
    plVar13 = *(long **)(lVar12 + (long)(int)uVar21 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar23 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar17 != 0) &&
       (lVar18 = FUN_0339898c(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar18 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar23 + 3) <= uVar21) goto LAB_0685fd5c;
    plVar13 = plVar23 + (long)(int)uVar21 + 4;
    *plVar13 = lVar17;
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
    uVar9 = *(uint *)(lVar12 + 0x18);
    uVar10 = (ulong)(uVar21 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar21 + 1)) break;
LAB_06860788:
    uVar21 = (uint)uVar10;
    if (uVar9 <= uVar21) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
  lVar17 = in_stack_00000020[(long)(int)uVar8 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar10;
  if (lVar17 == 0) {
    if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar13 = *(long **)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar23 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0))
    goto LAB_06860ed8;
    uVar21 = *(uint *)(plVar23 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar12 = in_stack_00000020[(long)(int)uVar8 + 4];
    uVar25 = FUN_03398188(DAT_083c7838,1);
    lVar12 = FUN_06852fd0(lVar12,uVar25);
    if (plVar23 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar12 != 0) &&
       (lVar17 = FUN_0339898c(lVar12,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0)) {
LAB_06860ed8:
      uVar25 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar25,0);
    }
    uVar21 = *(uint *)(plVar23 + 3);
  }
  if (uVar21 <= uVar9) goto LAB_0685fd5c;
  plVar13 = plVar23 + (long)(int)uVar9 + 4;
  *plVar13 = lVar12;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar23;
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
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar23;
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
    return *plVar11;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


