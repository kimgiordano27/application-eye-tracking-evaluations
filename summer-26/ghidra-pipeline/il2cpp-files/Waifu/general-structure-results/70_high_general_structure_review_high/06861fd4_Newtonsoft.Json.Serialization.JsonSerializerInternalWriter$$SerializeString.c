/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 06861fd4
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  long unaff_x21;
  undefined1 unaff_w22;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uStack0000000000000014;
  long *in_stack_00000018;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08423540,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d57d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xe68) = unaff_w22;
  if (unaff_x19 != 0) {
    if (*(int *)(DAT_083d57d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (*(long *)(*(long *)(DAT_083d57d8 + 0xb8) + 8) == 0) {
      if (*(int *)(DAT_083d57d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar15 = **(undefined8 **)(DAT_083d57d8 + 0xb8);
      uVar5 = FUN_03398a84(DAT_083c6260);
      FUN_0507250c(uVar5,uVar15,DAT_08423540,0);
      puVar11 = (undefined8 *)(*(long *)(DAT_083d57d8 + 0xb8) + 8);
      *puVar11 = uVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uVar6 = FUN_03c8e504();
    if ((uVar6 & 1) == 0) {
      FUN_033d1ba8(&DAT_083c8a10);
      uVar5 = thunk_FUN_03398a84();
      uVar15 = FUN_033d1ba8(&DAT_08453eb8);
      FUN_0677f140(uVar5,uVar15,0);
      uVar15 = FUN_033d1ba8(&DAT_08407e28);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar5,uVar15);
    }
  }
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) {
    uVar15 = FUN_033d1ba8(&DAT_08433d90);
    FUN_033d1ba8(&DAT_083c8a08);
    uVar5 = thunk_FUN_03398a84();
    uVar10 = FUN_033d1ba8(&DAT_08455470);
    FUN_0677f1f8(uVar5,uVar15,uVar10,0);
    goto LAB_068628e4;
  }
  lVar7 = FUN_03398738();
  uVar5 = DAT_083c7ad0;
  if (lVar7 == 0) {
    plVar8 = (long *)0x0;
    if (unaff_x19 != 0) goto LAB_06862110;
LAB_06862124:
    uVar18 = 0;
  }
  else {
    plVar8 = (long *)FUN_0339898c(lVar7,DAT_083c7ad0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(lVar7,uVar5);
    }
    if (unaff_x19 == 0) goto LAB_06862124;
LAB_06862110:
    uVar18 = *(uint *)(unaff_x19 + 0x18);
  }
  if (plVar8 != (long *)0x0) {
    if (0 < (int)plVar8[3]) {
      uVar20 = 0;
      uVar6 = 0;
      uVar12 = plVar8[3] & 0xffffffff;
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
              uVar19 = *(uint *)(plVar8 + 3);
              if (uVar19 <= uVar6) goto LAB_0686287c;
              lVar7 = plVar8[uVar6 + 4];
              if (lVar7 != 0) {
                lVar13 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar13 == 0) {
                  uVar5 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                  FUN_033d1c20(uVar5,0);
                }
                uVar19 = (uint)plVar8[3];
              }
              if (uVar19 <= uStack0000000000000014) goto LAB_0686287c;
              plVar9 = plVar8 + (long)(int)uStack0000000000000014 + 4;
              *plVar9 = lVar7;
              uStack0000000000000014 = uStack0000000000000014 + 1;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
            }
            else {
              if (*(uint *)(plVar8 + 3) <= uVar6) goto LAB_0686287c;
              plVar14 = plVar8 + uVar6 + 4;
              plVar9 = (long *)*plVar14;
              if ((plVar9 == (long *)0x0) ||
                 (plVar9 = (long *)(**(code **)(*plVar9 + 600))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x260)),
                 plVar9 == (long *)0x0)) goto LAB_06862880;
              uVar12 = (**(code **)(*plVar9 + 0x608))(plVar9,*(undefined8 *)(*plVar9 + 0x610));
              if ((uVar12 & 1) == 0) {
                if (*(uint *)(plVar8 + 3) <= uVar6) goto LAB_0686287c;
                plVar14 = (long *)*plVar14;
                if ((plVar14 == (long *)0x0) ||
                   (plVar9 = (long *)(**(code **)(*plVar14 + 600))
                                               (plVar14,*(undefined8 *)(*plVar14 + 0x260)),
                   plVar9 == (long *)0x0)) goto LAB_06862880;
                uVar12 = (**(code **)(*plVar9 + 0x2b8))
                                   (plVar9,in_stack_00000018,*(undefined8 *)(*plVar9 + 0x2c0));
joined_r0x0686255c:
                if ((uVar12 & 1) != 0) goto LAB_06862560;
              }
              else {
                plVar9 = (long *)(**(code **)(*in_stack_00000018 + 0x338))
                                           (in_stack_00000018,
                                            *(undefined8 *)(*in_stack_00000018 + 0x340));
                if (plVar9 != (long *)0x0) {
                  if ((*(byte *)(DAT_083d0c20 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) +
                                (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) == DAT_083d0c20)) {
                    plVar16 = (long *)(**(code **)(*in_stack_00000018 + 0x338))
                                                (in_stack_00000018,
                                                 *(undefined8 *)(*in_stack_00000018 + 0x340));
                    if (uVar6 < *(uint *)(plVar8 + 3)) {
                      plVar14 = (long *)*plVar14;
                      if ((plVar14 != (long *)0x0) &&
                         (plVar9 = (long *)(**(code **)(*plVar14 + 600))
                                                     (plVar14,*(undefined8 *)(*plVar14 + 0x260)),
                         plVar9 != (long *)0x0)) {
                        plVar9 = (long *)(**(code **)(*plVar9 + 0x338))
                                                   (plVar9,*(undefined8 *)(*plVar9 + 0x340));
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
                        if (plVar9 != (long *)0x0) {
                          if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                             (*(long *)(*(long *)(*plVar9 + 200) +
                                        (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
                              DAT_083d0c20)) {
LAB_06862884:
                    /* WARNING: Subroutine does not return */
                            FUN_033d1fec(plVar9);
                          }
                        }
                        uVar12 = FUN_06862958(plVar16,plVar9);
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
          if (uVar12 <= uVar6) goto LAB_0686287c;
          plVar9 = (long *)plVar8[uVar6 + 4];
          if ((plVar9 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270)),
             lVar7 == 0)) goto LAB_06862880;
          if (uVar18 == *(uint *)(lVar7 + 0x18)) {
            if ((int)uVar18 < 1) {
              uVar20 = 0;
              goto LAB_06862398;
            }
            lVar13 = 0;
            uVar19 = 1;
            while( true ) {
              plVar9 = *(long **)(lVar7 + lVar13 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_06862880;
              uVar20 = uVar19 - 1;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar20) goto LAB_0686287c;
              plVar14 = (long *)(unaff_x19 + lVar13 * 8 + 0x20);
              plVar16 = (long *)*plVar14;
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar5 = DAT_083bd010;
              if (plVar16 != plVar9) {
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar16 = (long *)FUN_0683eca4(uVar5,0);
                if (plVar16 != plVar9) {
                  if (plVar9 == (long *)0x0) goto LAB_06862880;
                  uVar12 = (**(code **)(*plVar9 + 0x608))(plVar9,*(undefined8 *)(*plVar9 + 0x610));
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar20) goto LAB_0686287c;
                  plVar16 = (long *)*plVar14;
                  if ((uVar12 & 1) == 0) {
                    uVar12 = (**(code **)(*plVar9 + 0x2b8))
                                       (plVar9,plVar16,*(undefined8 *)(*plVar9 + 0x2c0));
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
                    plVar14 = (long *)*plVar14;
                    if (plVar14 == (long *)0x0) goto LAB_06862880;
                    plVar14 = (long *)(**(code **)(*plVar14 + 0x338))
                                                (plVar14,*(undefined8 *)(*plVar14 + 0x340));
                    plVar9 = (long *)(**(code **)(*plVar9 + 0x338))
                                               (plVar9,*(undefined8 *)(*plVar9 + 0x340));
                    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                      FUN_033b9870(DAT_083ca578);
                    }
                    if (plVar14 != (long *)0x0) {
                      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar14 + 200) +
                                    (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20
                         )) {
                    /* WARNING: Subroutine does not return */
                        FUN_033d1fec(plVar14);
                      }
                    }
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) +
                                    (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20
                         )) goto LAB_06862884;
                    }
                    uVar12 = FUN_06862958(plVar14,plVar9);
                  }
                  if ((uVar12 & 1) == 0) goto LAB_06862398;
                }
              }
              if (uVar18 == uVar19) break;
              lVar13 = (long)(int)uVar19;
              bVar3 = *(uint *)(lVar7 + 0x18) <= uVar19;
              uVar19 = uVar19 + 1;
              if (bVar3) goto LAB_0686287c;
            }
            goto LAB_068623a0;
          }
        }
        uVar19 = *(uint *)(plVar8 + 3);
        uVar12 = (ulong)uVar19;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar19);
      if (uStack0000000000000014 != 0) {
        if (uStack0000000000000014 == 1) {
          if (uVar19 != 0) {
            return plVar8[4];
          }
        }
        else {
          lVar7 = FUN_03398188(DAT_083c7838,(ulong)uVar18);
          if (0 < (int)uVar18) {
            if (lVar7 == 0) goto LAB_06862880;
            uVar20 = *(uint *)(lVar7 + 0x18);
            uVar6 = 0;
            do {
              if (uVar20 == uVar6) goto LAB_0686287c;
              *(int *)(lVar7 + 0x20 + uVar6 * 4) = (int)uVar6;
              uVar6 = uVar6 + 1;
            } while (uVar18 != uVar6);
          }
          if ((int)uStack0000000000000014 < 2) {
            uVar18 = 0;
          }
          else {
            bVar3 = false;
            uVar20 = 1;
            uVar19 = 0;
            do {
              if (*(uint *)(plVar8 + 3) <= uVar19) goto LAB_0686287c;
              plVar14 = plVar8 + (long)(int)uVar19 + 4;
              plVar9 = (long *)*plVar14;
              if (plVar9 == (long *)0x0) goto LAB_06862880;
              uVar5 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
              if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_0686287c;
              plVar16 = plVar8 + (long)(int)uVar20 + 4;
              plVar9 = (long *)*plVar16;
              if (plVar9 == (long *)0x0) goto LAB_06862880;
              uVar15 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870(DAT_083ca578);
              }
              iVar4 = FUN_06862b7c(uVar5,uVar15,in_stack_00000018);
              if ((unaff_x19 != 0) && (iVar4 == 0)) {
                if (*(uint *)(plVar8 + 3) <= uVar19) goto LAB_0686287c;
                plVar9 = (long *)*plVar14;
                if (plVar9 == (long *)0x0) goto LAB_06862880;
                uVar5 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
                if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_0686287c;
                plVar9 = (long *)*plVar16;
                if (plVar9 == (long *)0x0) goto LAB_06862880;
                uVar15 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083ca578);
                }
                iVar4 = FUN_06862f20(uVar5,lVar7,0,uVar15,lVar7,0);
              }
              if (iVar4 == 0) {
                if ((*(uint *)(plVar8 + 3) <= uVar19) || (*(uint *)(plVar8 + 3) <= uVar20))
                goto LAB_0686287c;
                lVar13 = *plVar14;
                lVar17 = *plVar16;
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                iVar4 = FUN_068632bc(lVar13,lVar17);
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
              uVar15 = FUN_033d1ba8(&DAT_08433710);
              FUN_033d1ba8(&DAT_083c8758);
              uVar5 = thunk_FUN_03398a84();
              FUN_0673e2f4(uVar5,uVar15,0);
LAB_068628e4:
              uVar15 = FUN_033d1ba8(&DAT_08407e28);
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar5,uVar15);
            }
          }
          if (uVar18 < *(uint *)(plVar8 + 3)) {
            return plVar8[(long)(int)uVar18 + 4];
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


