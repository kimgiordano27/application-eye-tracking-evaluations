/*
FUNCTION_NAME: OVRPlugin$$get_premultipliedAlphaLayersSupported
ENTRY_POINT: 02c1a940
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__get_premultipliedAlphaLayersSupported(ulong param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  ulong unaff_x22;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lStack0000000000000000;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380b818);
    FUN_017fc350(PTR_DAT_0380ab10);
    FUN_017fc350(PTR_DAT_0380b820);
    FUN_017fc350(PTR_DAT_0380b828);
    FUN_017fc350(PTR_DAT_0380b830);
    FUN_017fc350(PTR_DAT_0380b838);
    FUN_017fc350(PTR_DAT_03802c48);
    FUN_017fc350(PTR_DAT_0380b840);
    FUN_017fc350(PTR_DAT_0380b848);
    FUN_017fc350(PTR_DAT_0380b850);
    FUN_017fc350(PTR_DAT_03802c38);
    FUN_017fc350(PTR_DAT_037f2b80);
    FUN_017fc350(PTR_DAT_0380b858);
    FUN_017fc350(PTR_DAT_03804428);
    FUN_017fc350(PTR_DAT_037f2f98);
    FUN_017fc350(PTR_DAT_037f2c78);
    *(undefined1 *)(unaff_x20 + 0xec6) = 1;
  }
  puVar14 = PTR_DAT_037f2c78;
  in_stack_00000008 = 0;
  if (param_2 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar17 = thunk_FUN_01861bbc();
    puVar14 = PTR_DAT_03802810;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar7 = FUN_02be66d0(param_3,0,0);
    puVar2 = PTR_DAT_03804428;
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)PTR_DAT_0380b858;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar17 = FUN_02bddb5c(uVar17,0);
      uVar7 = FUN_02be66d0(param_3,uVar17,0);
      plVar12 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar12 = param_3;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)puVar2);
      }
      lVar8 = FUN_02c1a778(param_2,plVar12,0);
      if ((unaff_x22 & 1) == 0) {
        if (lVar8 == 0) goto LAB_02c1ae88;
        if (*(int *)(lVar8 + 0x18) == 1) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar7 = FUN_02be74a8(plVar12,0,0);
            if (*(int *)(lVar8 + 0x18) == 0) {
LAB_02c1b2e0:
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            if (*(long *)(lVar8 + 0x20) != 0) {
              plVar11 = (long *)FUN_0187f3ac();
              if ((uVar7 & 1) != 0) {
                if (plVar12 == (long *)0x0) goto LAB_02c1ae88;
                uVar7 = (**(code **)(*plVar12 + 0x288))
                                  (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x290));
                plVar11 = plVar12;
                if ((uVar7 & 1) == 0) {
                  lVar8 = FUN_02bf4718(plVar12,0,0);
                  if (lVar8 == 0) {
                    return (long *)0x0;
                  }
                  uVar17 = *(undefined8 *)PTR_DAT_037f2f98;
                  plVar12 = (long *)thunk_FUN_01861ac0(lVar8,uVar17);
                  if (plVar12 != (long *)0x0) {
                    return plVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(lVar8,uVar17);
                }
              }
              lVar9 = FUN_02bf4718(plVar11,1,0);
              if (lVar9 == 0) {
                if (*(int *)(lVar8 + 0x18) != 0) goto LAB_02c1ae88;
              }
              else {
                uVar17 = *(undefined8 *)PTR_DAT_037f2f98;
                plVar12 = (long *)thunk_FUN_01861ac0(lVar9,uVar17);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(lVar9,uVar17);
                }
                if (*(int *)(lVar8 + 0x18) != 0) {
                  lVar8 = *(long *)(lVar8 + 0x20);
                  if (lVar8 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar10 = thunk_FUN_01861ac0(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                    lVar9 = lVar8;
                    if (lVar10 == 0) {
                      uVar17 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                      FUN_017fc474(uVar17,0);
                    }
                  }
                  if ((int)plVar12[3] != 0) {
                    plVar12[4] = lVar9;
                    thunk_FUN_0188fd20(plVar12 + 4,lVar8);
                    return plVar12;
                  }
                }
              }
              goto LAB_02c1b2e0;
            }
            goto LAB_02c1ae88;
          }
LAB_02c1b23c:
          thunk_FUN_01851c08(PTR_DAT_0380b860);
          uVar17 = thunk_FUN_01861bbc();
          uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b868);
          FUN_02b0d540(uVar17,uVar13,0);
          goto LAB_02c1b26c;
        }
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar9 = FUN_02c1b2f0(param_2);
        bVar4 = lVar9 != 0;
      }
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar7 = FUN_02be74a8(plVar12,0,0);
      if ((uVar7 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar12 == (long *)0x0) goto LAB_02c1ae88;
        bVar5 = FUN_02be87b8(plVar12,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & bVar4) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar9 = FUN_02c1b6b4(plVar12);
        if (lVar9 == 0) goto LAB_02c1ae88;
        bVar4 = (bool)(bVar4 & *(char *)(lVar9 + 0x15) != '\0');
      }
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar6 = FUN_02bd01a8(*(undefined4 *)(lVar8 + 0x18),0x10,0);
        if (bVar4 != false) {
          lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b838);
          FUN_021ffd80(lVar9,uVar6,*(undefined8 *)PTR_DAT_0380b830);
          lVar10 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
          FUN_02709c80(lVar10,uVar6,*(undefined8 *)PTR_DAT_0380b848);
          puVar2 = PTR_DAT_0380b828;
          iVar21 = 0;
          lStack0000000000000000 = param_2;
          do {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar20 = 0;
              do {
                if (uVar1 <= uVar20) goto LAB_02c1b2e0;
                lVar18 = *(long *)(lVar8 + (long)(int)uVar20 * 8 + 0x20);
                if (lVar18 == 0) goto LAB_02c1b23c;
                uVar17 = FUN_0187f3ac(lVar18);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)puVar14);
                }
                uVar7 = FUN_02be74a8(plVar12,0,0);
                if ((uVar7 & 1) == 0) {
LAB_02c1acec:
                  if (lVar9 == 0) goto LAB_02c1ae88;
                  uVar7 = FUN_0220216c(lVar9,uVar17,&stack0x00000008,*(undefined8 *)puVar2);
                  if ((uVar7 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                    }
                    lVar19 = FUN_02c1b6b4(uVar17);
                    if (iVar21 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
                    if (lVar19 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
                    if (((*(char *)(lVar19 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                       (*(int *)(in_stack_00000008 + 0x18) == iVar21)) {
                      if (lVar10 == 0) goto LAB_02c1ae88;
                      lVar15 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)PTR_DAT_03802c48;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_02c1ae88;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar18;
                        thunk_FUN_0188fd20(plVar11,lVar18);
                      }
                      else {
                        FUN_0270a444(lVar10,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (in_stack_00000008 == 0) goto LAB_02c1ae88;
                    lVar19 = *(long *)(in_stack_00000008 + 0x10);
                    if (iVar21 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
                    if (lVar19 == 0) goto LAB_02c1ae88;
                    if (*(char *)(lVar19 + 0x15) != '\0') goto LAB_02c1ad54;
                  }
                  if (in_stack_00000008 == 0) {
                    lVar18 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
                    *(long *)(lVar18 + 0x10) = lVar19;
                    thunk_FUN_0188fd20((long *)(lVar18 + 0x10),lVar19);
                    *(int *)(lVar18 + 0x18) = iVar21;
                    FUN_02200638(lVar9,uVar17,lVar18,*(undefined8 *)PTR_DAT_0380b820);
                  }
                }
                else {
                  if (plVar12 == (long *)0x0) goto LAB_02c1ae88;
                  uVar7 = (**(code **)(*plVar12 + 0x288))
                                    (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
                  if ((uVar7 & 1) != 0) goto LAB_02c1acec;
                }
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)uVar1);
            }
            puVar3 = PTR_DAT_03804428;
            if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lStack0000000000000000 = FUN_02c1b2f0(lStack0000000000000000);
            if (lStack0000000000000000 == 0) {
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              uVar7 = FUN_02be66d0(plVar12,0,0);
              if ((uVar7 & 1) == 0) {
                if (plVar12 == (long *)0x0) break;
                uVar7 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal(plVar12,0);
                if ((uVar7 & 1) == 0) {
                  if (lVar10 != 0) {
                    uVar17 = FUN_02bf4718(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
                    plVar12 = (long *)thunk_FUN_01861ac0(uVar17,*(undefined8 *)PTR_DAT_037f2f98);
                    goto LAB_02c1b200;
                  }
                  break;
                }
              }
              if (lVar10 != 0) {
                plVar12 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,
                                               *(undefined4 *)(lVar10 + 0x18));
                goto LAB_02c1b200;
              }
              break;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            iVar21 = iVar21 + 1;
            lVar8 = FUN_02c1a778(lStack0000000000000000,plVar12,1);
          } while (lVar8 != 0);
          goto LAB_02c1ae88;
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar7 = FUN_02be66d0(plVar12,0,0);
        if ((uVar7 & 1) != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            lVar9 = 0;
            do {
              if (uVar1 <= (uint)lVar9) goto LAB_02c1b2e0;
              if (*(long *)(lVar8 + 0x20 + lVar9 * 8) == 0) goto LAB_02c1b23c;
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar1);
          }
          plVar12 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10);
          FUN_02bf1554(lVar8,plVar12,0,0);
          return plVar12;
        }
        lVar10 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
        FUN_02709c80(lVar10,uVar6,*(undefined8 *)PTR_DAT_0380b848);
        puVar2 = PTR_DAT_03802c48;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            if (uVar1 <= (uint)lVar9) goto LAB_02c1b2e0;
            lVar18 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
            if (lVar18 == 0) goto LAB_02c1b23c;
            uVar17 = FUN_0187f3ac(lVar18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar14);
            }
            uVar7 = FUN_02be74a8(plVar12,0,0);
            if ((uVar7 & 1) == 0) {
LAB_02c1b008:
              if (lVar10 == 0) goto LAB_02c1ae88;
              lVar19 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_02c1ae88;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar18;
                thunk_FUN_0188fd20(plVar11,lVar18);
              }
              else {
                FUN_0270a444(lVar10,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar12 == (long *)0x0) goto LAB_02c1ae88;
              uVar7 = (**(code **)(*plVar12 + 0x288))
                                (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
              if ((uVar7 & 1) != 0) goto LAB_02c1b008;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar7 = FUN_02be66d0(plVar12,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_02c1ae88;
          uVar7 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal(plVar12,0);
          if ((uVar7 & 1) == 0) {
            if (lVar10 == 0) goto LAB_02c1ae88;
            uVar17 = FUN_02bf4718(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
            plVar12 = (long *)thunk_FUN_01861ac0(uVar17,*(undefined8 *)PTR_DAT_037f2f98);
            goto LAB_02c1b200;
          }
        }
        if (lVar10 != 0) {
          plVar12 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,
                                         *(undefined4 *)(lVar10 + 0x18));
LAB_02c1b200:
          FUN_0270a9f4(lVar10,plVar12,0,*(undefined8 *)PTR_DAT_0380b840);
          return plVar12;
        }
      }
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar17 = thunk_FUN_01861bbc();
    puVar14 = PTR_DAT_03804808;
  }
  uVar13 = thunk_FUN_01851c08(puVar14);
  FUN_02b3cbec(uVar17,uVar13,0);
LAB_02c1b26c:
  uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar17,uVar13);
}


