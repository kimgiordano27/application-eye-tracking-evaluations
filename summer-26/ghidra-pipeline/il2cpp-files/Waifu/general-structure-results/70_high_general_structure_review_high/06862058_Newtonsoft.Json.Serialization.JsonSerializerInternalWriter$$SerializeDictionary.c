/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 06862058
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long *plVar15;
  long unaff_x21;
  long *plVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uStack0000000000000014;
  long *in_stack_00000018;
  
  FUN_0507250c();
  puVar12 = (undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x7d8) + 0xb8) + 8);
  *puVar12 = param_1;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = FUN_03c8e504();
  if ((uVar5 & 1) == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar9 = thunk_FUN_03398a84();
    uVar10 = FUN_033d1ba8(&DAT_08453eb8);
    FUN_0677f140(uVar9,uVar10,0);
    uVar10 = FUN_033d1ba8(&DAT_08407e28);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar9,uVar10);
  }
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) {
    uVar10 = FUN_033d1ba8(&DAT_08433d90);
    FUN_033d1ba8(&DAT_083c8a08);
    uVar9 = thunk_FUN_03398a84();
    uVar11 = FUN_033d1ba8(&DAT_08455470);
    FUN_0677f1f8(uVar9,uVar10,uVar11,0);
    goto LAB_068628e4;
  }
  lVar6 = FUN_03398738();
  uVar9 = DAT_083c7ad0;
  if (lVar6 == 0) {
    plVar7 = (long *)0x0;
    if (unaff_x19 != 0) goto LAB_06862110;
LAB_06862124:
    uVar18 = 0;
  }
  else {
    plVar7 = (long *)FUN_0339898c(lVar6,DAT_083c7ad0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(lVar6,uVar9);
    }
    if (unaff_x19 == 0) goto LAB_06862124;
LAB_06862110:
    uVar18 = *(uint *)(unaff_x19 + 0x18);
  }
  if (plVar7 != (long *)0x0) {
    if (0 < (int)plVar7[3]) {
      uVar20 = 0;
      uVar5 = 0;
      uVar13 = plVar7[3] & 0xffffffff;
      uStack0000000000000014 = 0;
      do {
        if (unaff_x19 == 0) {
LAB_06862398:
          if (uVar20 == uVar18) {
LAB_068623a0:
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar20 = uVar18;
            if (in_stack_00000018 == (long *)0x0) {
LAB_06862560:
              uVar19 = *(uint *)(plVar7 + 3);
              if (uVar19 <= uVar5) goto LAB_0686287c;
              lVar6 = plVar7[uVar5 + 4];
              if (lVar6 != 0) {
                lVar14 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar14 == 0) {
                  uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                  FUN_033d1c20(uVar9,0);
                }
                uVar19 = (uint)plVar7[3];
              }
              if (uVar19 <= uStack0000000000000014) goto LAB_0686287c;
              plVar8 = plVar7 + (long)(int)uStack0000000000000014 + 4;
              *plVar8 = lVar6;
              uStack0000000000000014 = uStack0000000000000014 + 1;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
            }
            else {
              if (*(uint *)(plVar7 + 3) <= uVar5) goto LAB_0686287c;
              plVar15 = plVar7 + uVar5 + 4;
              plVar8 = (long *)*plVar15;
              if ((plVar8 == (long *)0x0) ||
                 (plVar8 = (long *)(**(code **)(*plVar8 + 600))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x260)),
                 plVar8 == (long *)0x0)) goto LAB_06862880;
              uVar13 = (**(code **)(*plVar8 + 0x608))(plVar8,*(undefined8 *)(*plVar8 + 0x610));
              if ((uVar13 & 1) == 0) {
                if (*(uint *)(plVar7 + 3) <= uVar5) goto LAB_0686287c;
                plVar15 = (long *)*plVar15;
                if ((plVar15 == (long *)0x0) ||
                   (plVar8 = (long *)(**(code **)(*plVar15 + 600))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x260)),
                   plVar8 == (long *)0x0)) goto LAB_06862880;
                uVar13 = (**(code **)(*plVar8 + 0x2b8))
                                   (plVar8,in_stack_00000018,*(undefined8 *)(*plVar8 + 0x2c0));
joined_r0x0686255c:
                if ((uVar13 & 1) != 0) goto LAB_06862560;
              }
              else {
                plVar8 = (long *)(**(code **)(*in_stack_00000018 + 0x338))
                                           (in_stack_00000018,
                                            *(undefined8 *)(*in_stack_00000018 + 0x340));
                if (plVar8 != (long *)0x0) {
                  if ((*(byte *)(DAT_083d0c20 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar8 + 200) +
                                (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) == DAT_083d0c20)) {
                    plVar16 = (long *)(**(code **)(*in_stack_00000018 + 0x338))
                                                (in_stack_00000018,
                                                 *(undefined8 *)(*in_stack_00000018 + 0x340));
                    if (uVar5 < *(uint *)(plVar7 + 3)) {
                      plVar15 = (long *)*plVar15;
                      if ((plVar15 != (long *)0x0) &&
                         (plVar8 = (long *)(**(code **)(*plVar15 + 600))
                                                     (plVar15,*(undefined8 *)(*plVar15 + 0x260)),
                         plVar8 != (long *)0x0)) {
                        plVar8 = (long *)(**(code **)(*plVar8 + 0x338))
                                                   (plVar8,*(undefined8 *)(*plVar8 + 0x340));
                        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                          FUN_033b9870(DAT_083ca578);
                        }
                        if (plVar16 != (long *)0x0) {
                          if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                             (*(long *)(*(long *)(*plVar16 + 200) +
                                        (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
                              DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                            FUN_033d1fec(plVar16);
                          }
                        }
                        if (plVar8 != (long *)0x0) {
                          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                             (*(long *)(*(long *)(*plVar8 + 200) +
                                        (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
                              DAT_083d0c20)) {
LAB_06862884:
                    /* WARNING: Subroutine does not return */
                            FUN_033d1fec(plVar8);
                          }
                        }
                        uVar13 = FUN_06862958(plVar16,plVar8);
                        goto joined_r0x0686255c;
                      }
                      goto LAB_06862880;
                    }
                    goto LAB_0686287c;
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar13 <= uVar5) goto LAB_0686287c;
          plVar8 = (long *)plVar7[uVar5 + 4];
          if ((plVar8 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270)),
             lVar6 == 0)) goto LAB_06862880;
          if (uVar18 == *(uint *)(lVar6 + 0x18)) {
            if ((int)uVar18 < 1) {
              uVar20 = 0;
              goto LAB_06862398;
            }
            lVar14 = 0;
            uVar19 = 1;
            while( true ) {
              plVar8 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
              if (plVar8 == (long *)0x0) goto LAB_06862880;
              uVar20 = uVar19 - 1;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar20) goto LAB_0686287c;
              plVar15 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
              plVar16 = (long *)*plVar15;
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar9 = DAT_083bd010;
              if (plVar16 != plVar8) {
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar16 = (long *)FUN_0683eca4(uVar9,0);
                if (plVar16 != plVar8) {
                  if (plVar8 == (long *)0x0) goto LAB_06862880;
                  uVar13 = (**(code **)(*plVar8 + 0x608))(plVar8,*(undefined8 *)(*plVar8 + 0x610));
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar20) goto LAB_0686287c;
                  plVar16 = (long *)*plVar15;
                  if ((uVar13 & 1) == 0) {
                    uVar13 = (**(code **)(*plVar8 + 0x2b8))
                                       (plVar8,plVar16,*(undefined8 *)(*plVar8 + 0x2c0));
                  }
                  else {
                    if (plVar16 == (long *)0x0) goto LAB_06862880;
                    plVar16 = (long *)(**(code **)(*plVar16 + 0x338))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x340));
                    if (plVar16 == (long *)0x0) goto LAB_06862398;
                    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar16 + 200) +
                                  (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20))
                    goto LAB_06862398;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar20) goto LAB_0686287c;
                    plVar15 = (long *)*plVar15;
                    if (plVar15 == (long *)0x0) goto LAB_06862880;
                    plVar15 = (long *)(**(code **)(*plVar15 + 0x338))
                                                (plVar15,*(undefined8 *)(*plVar15 + 0x340));
                    plVar8 = (long *)(**(code **)(*plVar8 + 0x338))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x340));
                    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                      FUN_033b9870(DAT_083ca578);
                    }
                    if (plVar15 != (long *)0x0) {
                      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar15 + 200) +
                                    (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20
                         )) {
                    /* WARNING: Subroutine does not return */
                        FUN_033d1fec(plVar15);
                      }
                    }
                    if (plVar8 != (long *)0x0) {
                      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar8 + 200) +
                                    (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20
                         )) goto LAB_06862884;
                    }
                    uVar13 = FUN_06862958(plVar15,plVar8);
                  }
                  if ((uVar13 & 1) == 0) goto LAB_06862398;
                }
              }
              if (uVar18 == uVar19) break;
              lVar14 = (long)(int)uVar19;
              bVar3 = *(uint *)(lVar6 + 0x18) <= uVar19;
              uVar19 = uVar19 + 1;
              if (bVar3) goto LAB_0686287c;
            }
            goto LAB_068623a0;
          }
        }
        uVar19 = *(uint *)(plVar7 + 3);
        uVar13 = (ulong)uVar19;
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar19);
      if (uStack0000000000000014 != 0) {
        if (uStack0000000000000014 == 1) {
          if (uVar19 != 0) {
            return plVar7[4];
          }
        }
        else {
          lVar6 = FUN_03398188(DAT_083c7838,(ulong)uVar18);
          if (0 < (int)uVar18) {
            if (lVar6 == 0) goto LAB_06862880;
            uVar20 = *(uint *)(lVar6 + 0x18);
            uVar5 = 0;
            do {
              if (uVar20 == uVar5) goto LAB_0686287c;
              *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
              uVar5 = uVar5 + 1;
            } while (uVar18 != uVar5);
          }
          if ((int)uStack0000000000000014 < 2) {
            uVar18 = 0;
          }
          else {
            bVar3 = false;
            uVar20 = 1;
            uVar19 = 0;
            do {
              if (*(uint *)(plVar7 + 3) <= uVar19) goto LAB_0686287c;
              plVar15 = plVar7 + (long)(int)uVar19 + 4;
              plVar8 = (long *)*plVar15;
              if (plVar8 == (long *)0x0) goto LAB_06862880;
              uVar9 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
              if (*(uint *)(plVar7 + 3) <= uVar20) goto LAB_0686287c;
              plVar16 = plVar7 + (long)(int)uVar20 + 4;
              plVar8 = (long *)*plVar16;
              if (plVar8 == (long *)0x0) goto LAB_06862880;
              uVar10 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870(DAT_083ca578);
              }
              iVar4 = FUN_06862b7c(uVar9,uVar10,in_stack_00000018);
              if ((unaff_x19 != 0) && (iVar4 == 0)) {
                if (*(uint *)(plVar7 + 3) <= uVar19) goto LAB_0686287c;
                plVar8 = (long *)*plVar15;
                if (plVar8 == (long *)0x0) goto LAB_06862880;
                uVar9 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
                if (*(uint *)(plVar7 + 3) <= uVar20) goto LAB_0686287c;
                plVar8 = (long *)*plVar16;
                if (plVar8 == (long *)0x0) goto LAB_06862880;
                uVar10 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083ca578);
                }
                iVar4 = FUN_06862f20(uVar9,lVar6,0,uVar10,lVar6,0);
              }
              if (iVar4 == 0) {
                if ((*(uint *)(plVar7 + 3) <= uVar19) || (*(uint *)(plVar7 + 3) <= uVar20))
                goto LAB_0686287c;
                lVar14 = *plVar15;
                lVar17 = *plVar16;
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                iVar4 = FUN_068632bc(lVar14,lVar17);
                bVar3 = (bool)(bVar3 | iVar4 == 0);
              }
              uVar18 = uVar20;
              if (iVar4 != 2) {
                uVar18 = uVar19;
              }
              uVar20 = uVar20 + 1;
              bVar3 = (bool)(bVar3 & iVar4 != 2);
              uVar19 = uVar18;
            } while (uStack0000000000000014 != uVar20);
            if (bVar3) {
              uVar10 = FUN_033d1ba8(&DAT_08433710);
              FUN_033d1ba8(&DAT_083c8758);
              uVar9 = thunk_FUN_03398a84();
              FUN_0673e2f4(uVar9,uVar10,0);
LAB_068628e4:
              uVar10 = FUN_033d1ba8(&DAT_08407e28);
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar9,uVar10);
            }
          }
          if (uVar18 < *(uint *)(plVar7 + 3)) {
            return plVar7[(long)(int)uVar18 + 4];
          }
        }
LAB_0686287c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
    }
    return 0;
  }
LAB_06862880:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


