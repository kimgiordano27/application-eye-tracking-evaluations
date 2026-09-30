/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 0685f00c
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long *unaff_x20;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long unaff_x23;
  uint unaff_w24;
  undefined8 uVar23;
  ulong unaff_x25;
  undefined8 uVar24;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long lVar25;
  long *in_stack_00000008;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x0685f00c:
  if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) && (unaff_w24 < *(uint *)(unaff_x23 + 0x18))) {
    puVar1 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)unaff_w24 * 8);
    *puVar1 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar8 = *(uint *)(unaff_x27 + 3);
    if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
    lVar22 = *unaff_x20;
    if (lVar22 != 0) {
      lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*unaff_x27 + 0x40));
      if (lVar10 == 0) goto LAB_06860ed8;
      uVar8 = (uint)unaff_x27[3];
    }
    if (unaff_w24 < uVar8) {
      plVar19 = unaff_x27 + (long)(int)unaff_w24 + 4;
      *plVar19 = lVar22;
      unaff_w24 = unaff_w24 + 1;
      uVar15 = unaff_x25;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar19 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_0685fbc4:
      uVar8 = *(uint *)(unaff_x27 + 3);
      uVar14 = (ulong)uVar8;
      unaff_x25 = uVar15 + 1;
      if ((long)unaff_x25 < (long)(int)uVar8) {
        if (uVar14 <= unaff_x25) goto LAB_0685fd5c;
        unaff_x20 = unaff_x27 + uVar15 + 5;
        uVar14 = FUN_06740938(*unaff_x20,0,0);
        uVar15 = unaff_x25;
        if ((uVar14 & 1) != 0) goto LAB_0685fbc4;
        if (*(uint *)(unaff_x27 + 3) <= unaff_x25) goto LAB_0685fd5c;
        plVar19 = (long *)*unaff_x20;
        if ((plVar19 == (long *)0x0) ||
           (lVar22 = (**(code **)(*plVar19 + 1000))(plVar19,*(undefined8 *)(*plVar19 + 0x3f0)),
           lVar22 == 0)) goto LAB_0685eebc;
        uVar14 = *(ulong *)(lVar22 + 0x18);
        lVar10 = *unaff_x28;
        if (uVar14 == 0) {
          if (lVar10 == 0) goto LAB_0685eebc;
          if (*(long *)(lVar10 + 0x18) == 0) goto LAB_0685f008;
          if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
          plVar19 = (long *)*unaff_x20;
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          uVar8 = (**(code **)(*plVar19 + 0x288))(plVar19,*(undefined8 *)(*plVar19 + 0x290));
          unaff_x27 = in_stack_00000028;
          if ((uVar8 >> 1 & 1) != 0) goto LAB_0685f008;
          goto LAB_0685fbc4;
        }
        if (lVar10 == 0) goto LAB_0685eebc;
        uVar8 = *(uint *)(lVar10 + 0x18);
        iVar7 = (int)uVar14;
        if ((int)uVar8 < iVar7) {
          uVar9 = iVar7 - 1;
          if ((int)uVar8 < (int)uVar9) {
            plVar19 = (long *)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
            do {
              if ((uint)uVar14 <= uVar8) goto LAB_0685fd5c;
              plVar16 = (long *)*plVar19;
              if (plVar16 == (long *)0x0) goto LAB_0685eebc;
              lVar10 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
              if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
                FUN_033b9870(DAT_083ca050);
              }
              if (lVar10 == **(long **)(DAT_083ca050 + 0xb8)) {
                uVar14 = (ulong)*(uint *)(lVar22 + 0x18);
                uVar9 = *(uint *)(lVar22 + 0x18) - 1;
                break;
              }
              uVar14 = *(ulong *)(lVar22 + 0x18);
              uVar8 = uVar8 + 1;
              plVar19 = plVar19 + 1;
              uVar9 = (int)uVar14 - 1;
            } while ((int)uVar8 < (int)uVar9);
          }
          unaff_x27 = in_stack_00000028;
          if (uVar8 != uVar9) goto LAB_0685fbc4;
          if ((uint)uVar14 <= uVar9) goto LAB_0685fd5c;
          plVar16 = (long *)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
          plVar19 = (long *)*plVar16;
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          lVar10 = (**(code **)(*plVar19 + 0x208))(plVar19,*(undefined8 *)(*plVar19 + 0x210));
          if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
            FUN_033b9870(DAT_083ca050);
          }
          if (lVar10 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
          if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar19 = (long *)*plVar16;
          if ((plVar19 == (long *)0x0) ||
             (plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1f0)),
             plVar19 == (long *)0x0)) goto LAB_0685eebc;
          uVar14 = (**(code **)(*plVar19 + 0x358))(plVar19,*(undefined8 *)(*plVar19 + 0x360));
          uVar23 = DAT_083bd0a8;
          if ((uVar14 & 1) == 0) goto LAB_0685fbc4;
          if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar19 = (long *)*plVar16;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar23 = FUN_0683eca4(uVar23,0);
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          uVar14 = (**(code **)(*plVar19 + 0x218))
                             (plVar19,uVar23,1,*(undefined8 *)(*plVar19 + 0x220));
          if ((uVar14 & 1) == 0) goto LAB_0685fbc4;
          if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_0685eebc;
LAB_0685fb8c:
          plVar19 = (long *)(**(code **)(*plVar16 + 0x1e8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          plVar19 = (long *)(**(code **)(*plVar19 + 0x448))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x450));
        }
        else {
          if (iVar7 == 0) goto LAB_0685fd5c;
          uVar9 = iVar7 - 1;
          lVar10 = (long)(int)uVar9;
          plVar16 = (long *)(lVar22 + lVar10 * 8 + 0x20);
          plVar19 = (long *)*plVar16;
          if ((plVar19 == (long *)0x0) ||
             (plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1f0)),
             plVar19 == (long *)0x0)) goto LAB_0685eebc;
          uVar14 = (**(code **)(*plVar19 + 0x358))(plVar19,*(undefined8 *)(*plVar19 + 0x360));
          uVar23 = DAT_083bd0a8;
          if (iVar7 < (int)uVar8) {
            unaff_x27 = in_stack_00000028;
            if ((uVar14 & 1) != 0) {
              if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
              plVar19 = (long *)*plVar16;
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar23 = FUN_0683eca4(uVar23,0);
              if (plVar19 == (long *)0x0) goto LAB_0685eebc;
              uVar14 = (**(code **)(*plVar19 + 0x218))
                                 (plVar19,uVar23,1,*(undefined8 *)(*plVar19 + 0x220));
              if ((uVar14 & 1) != 0) {
                if (unaff_x23 == 0) goto LAB_0685eebc;
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar21 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                if (lVar21 == 0) goto LAB_0685eebc;
                if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
                if (*(uint *)(lVar21 + lVar10 * 4 + 0x20) == uVar9) {
LAB_0685f2d4:
                  if (uVar9 < *(uint *)(lVar22 + 0x18)) {
                    plVar16 = (long *)*plVar16;
                    if (plVar16 != (long *)0x0) goto LAB_0685fb8c;
                    goto LAB_0685eebc;
                  }
                  goto LAB_0685fd5c;
                }
              }
            }
            goto LAB_0685fbc4;
          }
          if ((uVar14 & 1) != 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
            plVar19 = (long *)*plVar16;
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar23 = FUN_0683eca4(uVar23,0);
            if (plVar19 == (long *)0x0) goto LAB_0685eebc;
            uVar14 = (**(code **)(*plVar19 + 0x218))
                               (plVar19,uVar23,1,*(undefined8 *)(*plVar19 + 0x220));
            if ((uVar14 & 1) == 0) {
              plVar19 = (long *)0x0;
              goto LAB_0685f360;
            }
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar21 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            if (lVar21 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
            if (*(uint *)(lVar21 + lVar10 * 4 + 0x20) == uVar9) {
              if (uVar9 < *(uint *)(lVar22 + 0x18)) {
                plVar19 = (long *)*plVar16;
                if ((plVar19 != (long *)0x0) &&
                   (plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                                (plVar19,*(undefined8 *)(*plVar19 + 0x1f0)),
                   unaff_x26 != 0)) {
                  if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
                    if (plVar19 != (long *)0x0) {
                      uVar14 = (**(code **)(*plVar19 + 0x2b8))
                                         (plVar19,*(undefined8 *)(unaff_x26 + lVar10 * 8 + 0x20),
                                          *(undefined8 *)(*plVar19 + 0x2c0));
                      if ((uVar14 & 1) == 0) goto LAB_0685f2d4;
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
          }
LAB_0685f35c:
          plVar19 = (long *)0x0;
        }
LAB_0685f360:
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
          if (plVar19 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
          uVar8 = *(int *)(lVar22 + 0x18) - 1;
        }
        else {
          if (plVar19 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
          if (*unaff_x28 == 0) goto LAB_0685eebc;
          uVar8 = *(uint *)(*unaff_x28 + 0x18);
        }
        if ((int)uVar8 < 1) {
          uVar17 = 0;
        }
        else {
          uVar9 = 0;
          plVar16 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          do {
            if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
            lVar10 = (long)(int)uVar9;
            plVar12 = *(long **)(lVar22 + lVar10 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x1f0)),
               plVar12 == (long *)0x0)) goto LAB_0685eebc;
            uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
            if ((uVar14 & 1) != 0) {
              plVar12 = (long *)(**(code **)(*plVar12 + 0x448))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x450));
            }
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar21 = *plVar16;
            if (lVar21 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
            if (unaff_x26 == 0) goto LAB_0685eebc;
            uVar17 = *(uint *)(lVar21 + lVar10 * 4 + 0x20);
            if (*(uint *)(unaff_x26 + 0x18) <= uVar17) goto LAB_0685fd5c;
            plVar20 = *(long **)(unaff_x26 + (long)(int)uVar17 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            unaff_x28 = in_stack_00000048;
            if (plVar20 != plVar12) {
              if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar21 = *plVar16;
                if (lVar21 == 0) goto LAB_0685eebc;
                if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
                lVar25 = *in_stack_00000048;
                if (lVar25 == 0) goto LAB_0685eebc;
                uVar17 = *(uint *)(lVar21 + lVar10 * 4 + 0x20);
                if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_0685fd5c;
                lVar21 = *(long *)(lVar25 + (long)(int)uVar17 * 8 + 0x20);
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                if (lVar21 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
              }
              uVar23 = DAT_083bd010;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar21 = *plVar16;
              if (lVar21 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
              lVar25 = *in_stack_00000048;
              if (lVar25 == 0) goto LAB_0685eebc;
              uVar17 = *(uint *)(lVar21 + lVar10 * 4 + 0x20);
              if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_0685fd5c;
              if (*(long *)(lVar25 + (long)(int)uVar17 * 8 + 0x20) != 0) {
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar20 = (long *)FUN_0683eca4(uVar23,0);
                if (plVar20 != plVar12) {
                  if (plVar12 == (long *)0x0) goto LAB_0685eebc;
                  uVar14 = (**(code **)(*plVar12 + 0x608))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x610));
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar21 = *plVar16;
                  if (lVar21 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
                     (uVar17 = *(uint *)(lVar21 + lVar10 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar17)) goto LAB_0685fd5c;
                  lVar21 = *(long *)(unaff_x26 + (long)(int)uVar17 * 8 + 0x20);
                  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  uVar17 = uVar9;
                  if ((uVar14 & 1) == 0) {
                    if (lVar21 != 0) {
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                      lVar21 = *plVar16;
                      if (lVar21 == 0) goto LAB_0685eebc;
                      if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
                         (uVar4 = *(uint *)(lVar21 + lVar10 * 4 + 0x20),
                         *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                      uVar14 = (**(code **)(*plVar12 + 0x2b8))
                                         (plVar12,*(undefined8 *)
                                                   (unaff_x26 + (long)(int)uVar4 * 8 + 0x20),
                                          *(undefined8 *)(*plVar12 + 0x2c0));
                      if ((uVar14 & 1) == 0) {
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                        lVar21 = *plVar16;
                        if (lVar21 == 0) goto LAB_0685eebc;
                        if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
                           (uVar4 = *(uint *)(lVar21 + lVar10 * 4 + 0x20),
                           *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                        plVar20 = *(long **)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
                        if (plVar20 == (long *)0x0) goto LAB_0685eebc;
                        uVar14 = (**(code **)(*plVar20 + 0x588))
                                           (plVar20,*(undefined8 *)(*plVar20 + 0x590));
                        if ((uVar14 & 1) != 0) {
                          if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                            lVar21 = *plVar16;
                            if (lVar21 != 0) {
                              if (uVar9 < *(uint *)(lVar21 + 0x18)) {
                                lVar25 = *in_stack_00000048;
                                if (lVar25 != 0) {
                                  uVar4 = *(uint *)(lVar21 + lVar10 * 4 + 0x20);
                                  if (uVar4 < *(uint *)(lVar25 + 0x18)) {
                                    uVar14 = (**(code **)(*plVar12 + 0x908))
                                                       (plVar12,*(undefined8 *)
                                                                 (lVar25 + (long)(int)uVar4 * 8 +
                                                                 0x20),
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
                    if (lVar21 == 0) break;
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar21 = *plVar16;
                    if (lVar21 == 0) goto LAB_0685eebc;
                    if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
                    lVar25 = *in_stack_00000048;
                    if (lVar25 == 0) goto LAB_0685eebc;
                    uVar4 = *(uint *)(lVar21 + lVar10 * 4 + 0x20);
                    if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_0685fd5c;
                    uVar23 = *(undefined8 *)(lVar25 + (long)(int)uVar4 * 8 + 0x20);
                    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar12 + 200) +
                                  (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_033d1fec(plVar12);
                    }
                    uVar14 = FUN_06861228(uVar23,plVar12);
joined_r0x0685f778:
                    if ((uVar14 & 1) == 0) break;
                  }
                }
              }
            }
LAB_0685f77c:
            uVar9 = uVar9 + 1;
            uVar17 = uVar8;
          } while (uVar8 != uVar9);
        }
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((plVar19 != (long *)0x0) && (uVar17 == *(int *)(lVar22 + 0x18) - 1U)) {
          lVar22 = *unaff_x28;
          if (lVar22 == 0) goto LAB_0685eebc;
          lVar10 = (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3) + 0x20;
          while ((int)uVar17 < *(int *)(lVar22 + 0x18)) {
            uVar14 = (**(code **)(*plVar19 + 0x608))(plVar19,*(undefined8 *)(*plVar19 + 0x610));
            if (unaff_x26 == 0) goto LAB_0685eebc;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar17) goto LAB_0685fd5c;
            lVar22 = *(long *)(unaff_x26 + lVar10);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
              if ((uVar14 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
              if (lVar22 == 0) break;
              lVar22 = *unaff_x28;
              if (lVar22 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_0685fd5c;
              uVar23 = *(undefined8 *)(lVar22 + lVar10);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar19);
              }
              uVar14 = FUN_06861228(uVar23,plVar19);
joined_r0x0685f89c:
              if ((uVar14 & 1) == 0) break;
            }
            else {
              if ((uVar14 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
              if (lVar22 != 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar17) goto LAB_0685fd5c;
                uVar14 = (**(code **)(*plVar19 + 0x2b8))
                                   (plVar19,*(undefined8 *)(unaff_x26 + lVar10),
                                    *(undefined8 *)(*plVar19 + 0x2c0));
                if ((uVar14 & 1) != 0) goto LAB_0685f934;
                if (*(uint *)(unaff_x26 + 0x18) <= uVar17) goto LAB_0685fd5c;
                plVar16 = *(long **)(unaff_x26 + lVar10);
                if (plVar16 == (long *)0x0) goto LAB_0685eebc;
                uVar14 = (**(code **)(*plVar16 + 0x588))(plVar16,*(undefined8 *)(*plVar16 + 0x590));
                if ((uVar14 & 1) != 0) {
                  lVar22 = *unaff_x28;
                  if (lVar22 != 0) {
                    if (uVar17 < *(uint *)(lVar22 + 0x18)) {
                      uVar14 = (**(code **)(*plVar19 + 0x908))
                                         (plVar19,*(undefined8 *)(lVar22 + lVar10),
                                          *(undefined8 *)(*plVar19 + 0x910));
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
            lVar22 = *unaff_x28;
            uVar17 = uVar17 + 1;
            lVar10 = lVar10 + 8;
            if (lVar22 == 0) goto LAB_0685eebc;
          }
        }
        if (*unaff_x28 == 0) goto LAB_0685eebc;
        unaff_x27 = in_stack_00000028;
        if (uVar17 == *(uint *)(*unaff_x28 + 0x18)) {
          if (unaff_x23 == 0) goto LAB_0685eebc;
          if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
             (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)) goto LAB_0685fd5c;
          lVar22 = (long)(int)unaff_w24;
          puVar1 = (undefined8 *)(unaff_x23 + 0x20 + lVar22 * 8);
          *puVar1 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
          if ((plVar19 != (long *)0x0) &&
             (lVar10 = FUN_0339898c(plVar19,*(undefined8 *)(*in_stack_00000020 + 0x40)), lVar10 == 0
             )) goto LAB_06860ed8;
          if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
          plVar16 = in_stack_00000020 + lVar22 + 4;
          *plVar16 = (long)plVar19;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar16 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar8 = *(uint *)(in_stack_00000028 + 3);
          if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
          lVar10 = *unaff_x20;
          if (lVar10 != 0) {
            lVar21 = FUN_0339898c(lVar10,*(undefined8 *)(*in_stack_00000028 + 0x40));
            if (lVar21 == 0) goto LAB_06860ed8;
            uVar8 = (uint)in_stack_00000028[3];
          }
          if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
          plVar19 = in_stack_00000028 + lVar22 + 4;
          *plVar19 = lVar10;
          unaff_w24 = unaff_w24 + 1;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar19 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        goto LAB_0685fbc4;
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
          in_stack_00000028 = unaff_x27;
          in_stack_00000048 = unaff_x28;
          goto LAB_0685fdf8;
        }
        if (uVar8 == 0) goto LAB_0685fd5c;
        if (unaff_x23 == 0) goto LAB_0685eebc;
        lVar22 = 0;
        uVar8 = 0;
        uVar15 = (ulong)unaff_w24;
        uVar18 = 1;
        bVar6 = false;
        goto LAB_0685fc30;
      }
      if (in_stack_00000030 == 0) goto LAB_0685ff98;
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
      lVar22 = FUN_03398738();
      lVar10 = *unaff_x28;
      if ((lVar10 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar21 = in_stack_00000020[4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar25 = FUN_03398a84(DAT_083d57e0);
      uVar23 = DAT_083c7838;
      if (lVar22 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_0339898c(lVar22,DAT_083c7838);
        if (lVar11 == 0) goto LAB_0685fe90;
      }
      uVar3 = *(undefined4 *)(lVar10 + 0x18);
      plVar19 = (long *)(lVar25 + 0x10);
      *plVar19 = lVar11;
      if (DAT_08908cd0 == 0) {
        *(undefined4 *)(lVar25 + 0x18) = uVar3;
        *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
        *in_stack_00000008 = lVar25;
      }
      else {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar19 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(undefined4 *)(lVar25 + 0x18) = uVar3;
        *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
        *in_stack_00000008 = lVar25;
        puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
      uVar23 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar22 = *unaff_x28;
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_068613a0(uVar23,lVar22);
      uVar8 = (uint)unaff_x27[3];
LAB_0685ff98:
      if (uVar8 == 0) goto LAB_0685fd5c;
      plVar16 = unaff_x27 + 4;
      plVar19 = (long *)*plVar16;
      if (((plVar19 == (long *)0x0) ||
          (lVar22 = (**(code **)(*plVar19 + 1000))(plVar19,*(undefined8 *)(*plVar19 + 0x3f0)),
          lVar22 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
      iVar7 = *(int *)(*unaff_x28 + 0x18);
      iVar13 = (int)*(ulong *)(lVar22 + 0x18);
      if (iVar13 == iVar7) {
        if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar10 = in_stack_00000020[4];
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (lVar10 != 0) {
          plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
          uVar8 = *(int *)(lVar22 + 0x18) - 1;
          FUN_068537e0(*unaff_x28,0,plVar19,0,uVar8,0);
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar10 = in_stack_00000020[4];
          lVar22 = FUN_03398188(DAT_083c7838,1);
          if (lVar22 == 0) goto LAB_0685eebc;
          if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
          *(undefined4 *)(lVar22 + 0x20) = 1;
          lVar22 = FUN_06852fd0(lVar10);
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          if ((lVar22 != 0) &&
             (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
          goto LAB_06860ed8;
          uVar9 = *(uint *)(plVar19 + 3);
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          plVar12 = plVar19 + (long)(int)uVar8 + 4;
          *plVar12 = lVar22;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar9 = *(uint *)(plVar19 + 3);
          }
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          lVar22 = *unaff_x28;
          if (lVar22 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_0685fd5c;
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_0685eebc;
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
              != DAT_083c8a28)) goto LAB_06860fdc;
          FUN_06853274(plVar12,*(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20),0,0);
          *unaff_x28 = (long)plVar19;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
LAB_06860db0:
        if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
        goto LAB_06860eb4;
      }
      if (iVar13 <= iVar7) {
        if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
        plVar19 = (long *)*plVar16;
        if (plVar19 == (long *)0x0) goto LAB_0685eebc;
        uVar8 = (**(code **)(*plVar19 + 0x288))(plVar19,*(undefined8 *)(*plVar19 + 0x290));
        if ((uVar8 >> 1 & 1) == 0) {
          plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
          uVar8 = *(int *)(lVar22 + 0x18) - 1;
          FUN_068537e0(*unaff_x28,0,plVar19,0,uVar8,0);
          if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar10 = in_stack_00000020[4];
          lVar22 = FUN_03398188(DAT_083c7838,1);
          if ((*unaff_x28 == 0) || (lVar22 == 0)) goto LAB_0685eebc;
          if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
          *(uint *)(lVar22 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
          lVar22 = FUN_06852fd0(lVar10);
          if (plVar19 == (long *)0x0) goto LAB_0685eebc;
          if ((lVar22 != 0) &&
             (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
          goto LAB_06860ed8;
          uVar9 = *(uint *)(plVar19 + 3);
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          plVar12 = plVar19 + (long)(int)uVar8 + 4;
          *plVar12 = lVar22;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar9 = *(uint *)(plVar19 + 3);
          }
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          lVar22 = *unaff_x28;
          if (lVar22 == 0) goto LAB_0685eebc;
          plVar12 = (long *)*plVar12;
          if (plVar12 != (long *)0x0) {
            if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 +
                         -8) != DAT_083c8a28)) goto LAB_06860fdc;
          }
          FUN_068537e0(lVar22,uVar8,plVar12,0,*(int *)(lVar22 + 0x18) - uVar8,0);
          *unaff_x28 = (long)plVar19;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        goto LAB_06860db0;
      }
      plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar22 + 0x18) & 0xffffffff);
      lVar10 = *unaff_x28;
      if (lVar10 == 0) goto LAB_0685eebc;
      uVar15 = 0;
      while( true ) {
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
          uVar8 = *(uint *)(lVar22 + 0x18);
          if ((int)uVar15 < (int)(uVar8 - 1)) {
            do {
              uVar9 = (uint)uVar15;
              if (uVar8 <= uVar9) goto LAB_0685fd5c;
              plVar12 = *(long **)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
              if ((plVar12 == (long *)0x0) ||
                 (lVar10 = (**(code **)(*plVar12 + 0x208))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x210)),
                 plVar19 == (long *)0x0)) goto LAB_0685eebc;
              if ((lVar10 != 0) &&
                 (lVar21 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar19 + 0x40)), lVar21 == 0))
              goto LAB_06860ed8;
              if (*(uint *)(plVar19 + 3) <= uVar9) goto LAB_0685fd5c;
              plVar12 = plVar19 + (long)(int)uVar9 + 4;
              *plVar12 = lVar10;
              if (DAT_08908cd0 != 0) {
                puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uVar8 = *(uint *)(lVar22 + 0x18);
              uVar15 = (ulong)(uVar9 + 1);
            } while ((int)(uVar9 + 1) < (int)(uVar8 - 1));
          }
          if (in_stack_00000020 == (long *)0x0) break;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar10 = in_stack_00000020[4];
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = (uint)uVar15;
          if (lVar10 == 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_0685fd5c;
            plVar12 = *(long **)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (lVar22 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
               plVar19 == (long *)0x0)) break;
            if ((lVar22 != 0) &&
               (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar19 + 3);
          }
          else {
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar22 = in_stack_00000020[4];
            uVar23 = FUN_03398188(DAT_083c7838,1);
            lVar22 = FUN_06852fd0(lVar22,uVar23);
            if (plVar19 == (long *)0x0) break;
            if ((lVar22 != 0) &&
               (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar19 + 3);
          }
          if (uVar9 <= uVar8) goto LAB_0685fd5c;
          plVar12 = plVar19 + (long)(int)uVar8 + 4;
          *plVar12 = lVar22;
          if (DAT_08908cd0 == 0) {
            *unaff_x28 = (long)plVar19;
          }
          else {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            *unaff_x28 = (long)plVar19;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          goto LAB_06860db0;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0685fd5c;
        if (plVar19 == (long *)0x0) break;
        lVar10 = *(long *)(lVar10 + uVar15 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (lVar21 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar19 + 0x40)), lVar21 == 0))
        goto LAB_06860ed8;
        if (*(uint *)(plVar19 + 3) <= uVar15) goto LAB_0685fd5c;
        plVar12 = plVar19 + uVar15 + 4;
        *plVar12 = lVar10;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        lVar10 = *unaff_x28;
        uVar15 = uVar15 + 1;
        if (lVar10 == 0) break;
      }
      goto LAB_0685eebc;
    }
  }
  goto LAB_0685fd5c;
LAB_0685f008:
  unaff_x27 = in_stack_00000028;
  if (unaff_x23 == 0) goto LAB_0685eebc;
  goto code_r0x0685f00c;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar8) || (uVar14 <= uVar18)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar18)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar18)) goto LAB_0685fd5c;
  lVar10 = in_stack_00000020[lVar22 + 4];
  lVar21 = unaff_x27[lVar22 + 4];
  uVar23 = *(undefined8 *)(unaff_x23 + lVar22 * 8 + 0x20);
  lVar25 = unaff_x27[uVar18 + 4];
  uVar24 = *(undefined8 *)(unaff_x23 + uVar18 * 8 + 0x20);
  lVar22 = in_stack_00000020[uVar18 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar7 = FUN_06861580(lVar21,uVar23,lVar10,lVar25,uVar24,lVar22);
  if (iVar7 == 0) {
    if (uVar18 + 1 == uVar15) {
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
    uVar18 = uVar18 + 1;
    uVar14 = in_stack_00000028[3] & 0xffffffff;
    lVar22 = (long)(int)uVar8;
    unaff_x27 = in_stack_00000028;
    if ((uint)in_stack_00000028[3] <= uVar8) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar7 == 2) {
    uVar8 = (uint)uVar18;
    if (uVar18 + 1 == uVar15) goto LAB_0685fdf8;
    bVar6 = false;
    goto LAB_0685fd44;
  }
  if (uVar18 + 1 != uVar15) goto LAB_0685fd44;
  if (bVar6) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar19 = (long *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20);
    if (*plVar19 == 0) goto LAB_0685eebc;
    lVar22 = FUN_03398738();
    lVar10 = *in_stack_00000048;
    if ((lVar10 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar21 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar23 = DAT_083c7838;
    if (lVar22 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_0339898c(lVar22,DAT_083c7838);
      if (lVar11 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar22,uVar23);
      }
    }
    uVar3 = *(undefined4 *)(lVar10 + 0x18);
    plVar16 = (long *)(lVar25 + 0x10);
    *plVar16 = lVar11;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
    }
    else {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar16 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
      puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    lVar22 = *plVar19;
    lVar10 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar22,lVar10);
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
  plVar16 = in_stack_00000028 + (long)(int)uVar8 + 4;
  plVar19 = (long *)*plVar16;
  if (((plVar19 == (long *)0x0) ||
      (lVar22 = (**(code **)(*plVar19 + 1000))(plVar19,*(undefined8 *)(*plVar19 + 0x3f0)),
      lVar22 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar7 = *(int *)(*in_stack_00000048 + 0x18);
  iVar13 = (int)*(ulong *)(lVar22 + 0x18);
  if (iVar13 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar10 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar10 != 0) {
      plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
      uVar9 = *(int *)(lVar22 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar19,0,uVar9,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar22 = FUN_03398188(DAT_083c7838,1);
      if (lVar22 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar22 + 0x20) = 1;
      lVar22 = FUN_06852fd0(lVar10);
      if (plVar19 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar22 != 0) &&
         (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar17 = *(uint *)(plVar19 + 3);
      if (uVar17 <= uVar9) goto LAB_0685fd5c;
      plVar12 = plVar19 + (long)(int)uVar9 + 4;
      *plVar12 = lVar22;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar17 = *(uint *)(plVar19 + 3);
      }
      if (uVar17 <= uVar9) goto LAB_0685fd5c;
      lVar22 = *in_stack_00000048;
      if (lVar22 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar12);
      }
      FUN_06853274(plVar12,*(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar19;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  else {
    if (iVar7 < iVar13) {
      plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar22 + 0x18) & 0xffffffff);
      lVar10 = *in_stack_00000048;
      if (lVar10 != 0) {
        uVar15 = 0;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
            uVar9 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar15 < (int)(uVar9 - 1)) goto LAB_06860788;
            goto LAB_06860c2c;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0685fd5c;
          if (plVar19 == (long *)0x0) break;
          lVar10 = *(long *)(lVar10 + uVar15 * 8 + 0x20);
          if ((lVar10 != 0) &&
             (lVar21 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar19 + 0x40)), lVar21 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar19 + 3) <= uVar15) goto LAB_0685fd5c;
          plVar12 = plVar19 + uVar15 + 4;
          *plVar12 = lVar10;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar10 = *in_stack_00000048;
          uVar15 = uVar15 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
    plVar19 = (long *)*plVar16;
    if (plVar19 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar19 + 0x288))(plVar19,*(undefined8 *)(*plVar19 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar19 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
      uVar9 = *(int *)(lVar22 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar19,0,uVar9,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar22 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar22 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar22 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar9;
      lVar22 = FUN_06852fd0(lVar10);
      if (plVar19 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar22 != 0) &&
         (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar17 = *(uint *)(plVar19 + 3);
      if (uVar17 <= uVar9) goto LAB_0685fd5c;
      plVar12 = plVar19 + (long)(int)uVar9 + 4;
      *plVar12 = lVar22;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar17 = *(uint *)(plVar19 + 3);
      }
      if (uVar17 <= uVar9) goto LAB_0685fd5c;
      lVar22 = *in_stack_00000048;
      if (lVar22 == 0) goto LAB_0685eebc;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar22,uVar9,plVar12,0,*(int *)(lVar22 + 0x18) - uVar9,0);
      *in_stack_00000048 = (long)plVar19;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
  while( true ) {
    plVar12 = *(long **)(lVar22 + (long)(int)uVar17 * 8 + 0x20);
    if ((plVar12 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
       plVar19 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar21 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar19 + 0x40)), lVar21 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar19 + 3) <= uVar17) goto LAB_0685fd5c;
    plVar12 = plVar19 + (long)(int)uVar17 + 4;
    *plVar12 = lVar10;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar22 + 0x18);
    uVar15 = (ulong)(uVar17 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar17 + 1)) break;
LAB_06860788:
    uVar17 = (uint)uVar15;
    if (uVar9 <= uVar17) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
  lVar10 = in_stack_00000020[(long)(int)uVar8 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar15;
  if (lVar10 == 0) {
    if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar12 = *(long **)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar12 == (long *)0x0) ||
       (lVar22 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210)),
       plVar19 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar22 != 0) &&
       (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
    goto LAB_06860ed8;
    uVar17 = *(uint *)(plVar19 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar22 = in_stack_00000020[(long)(int)uVar8 + 4];
    uVar23 = FUN_03398188(DAT_083c7838,1);
    lVar22 = FUN_06852fd0(lVar22,uVar23);
    if (plVar19 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar22 != 0) &&
       (lVar10 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0)) {
LAB_06860ed8:
      uVar23 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar23,0);
    }
    uVar17 = *(uint *)(plVar19 + 3);
  }
  if (uVar17 <= uVar9) goto LAB_0685fd5c;
  plVar12 = plVar19 + (long)(int)uVar9 + 4;
  *plVar12 = lVar22;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar19;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar19;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_06860ea8:
  if (uVar8 < *(uint *)(in_stack_00000028 + 3)) {
LAB_06860eb4:
    return *plVar16;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


