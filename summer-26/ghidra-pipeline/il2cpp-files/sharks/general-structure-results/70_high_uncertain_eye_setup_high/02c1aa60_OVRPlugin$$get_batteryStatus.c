/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 02c1aa60
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__get_batteryStatus(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int in_w9;
  long lVar14;
  long *unaff_x19;
  undefined8 uVar15;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long in_stack_00000008;
  
  uVar15 = *param_1;
  plVar16 = *(long **)(unaff_x24 + 0x428);
  if (in_w9 == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar15,0);
  uVar8 = FUN_02be66d0();
  plVar1 = (long *)0x0;
  if ((uVar8 & 1) == 0) {
    plVar1 = unaff_x19;
  }
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*plVar16);
  }
  lVar9 = FUN_02c1a778();
  if ((unaff_x22 & 1) == 0) {
    if (lVar9 == 0) goto LAB_02c1ae88;
    if (*(int *)(lVar9 + 0x18) == 1) {
      if (*(long *)(lVar9 + 0x20) == 0) {
LAB_02c1b23c:
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar15 = thunk_FUN_01861bbc();
        uVar12 = thunk_FUN_01851c08(PTR_DAT_0380b868);
        FUN_02b0d540(uVar15,uVar12,0);
        uVar12 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar15,uVar12);
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar8 = FUN_02be74a8(plVar1,0,0);
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_02c1b2e0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (*(long *)(lVar9 + 0x20) != 0) {
        plVar16 = (long *)FUN_0187f3ac();
        if ((uVar8 & 1) != 0) {
          if (plVar1 == (long *)0x0) goto LAB_02c1ae88;
          uVar8 = (**(code **)(*plVar1 + 0x288))(plVar1,plVar16,*(undefined8 *)(*plVar1 + 0x290));
          plVar16 = plVar1;
          if ((uVar8 & 1) == 0) {
            lVar9 = FUN_02bf4718(plVar1,0,0);
            if (lVar9 == 0) {
              return (long *)0x0;
            }
            uVar15 = *(undefined8 *)PTR_DAT_037f2f98;
            plVar16 = (long *)thunk_FUN_01861ac0(lVar9,uVar15);
            if (plVar16 != (long *)0x0) {
              return plVar16;
            }
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar9,uVar15);
          }
        }
        lVar10 = FUN_02bf4718(plVar16,1,0);
        if (lVar10 == 0) {
          if (*(int *)(lVar9 + 0x18) != 0) goto LAB_02c1ae88;
        }
        else {
          uVar15 = *(undefined8 *)PTR_DAT_037f2f98;
          plVar16 = (long *)thunk_FUN_01861ac0(lVar10,uVar15);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar10,uVar15);
          }
          if (*(int *)(lVar9 + 0x18) != 0) {
            lVar9 = *(long *)(lVar9 + 0x20);
            if (lVar9 == 0) {
              lVar10 = 0;
            }
            else {
              lVar11 = thunk_FUN_01861ac0(lVar9,*(undefined8 *)(*plVar16 + 0x40));
              lVar10 = lVar9;
              if (lVar11 == 0) {
                uVar15 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                FUN_017fc474(uVar15,0);
              }
            }
            if ((int)plVar16[3] != 0) {
              plVar16[4] = lVar10;
              thunk_FUN_0188fd20(plVar16 + 4,lVar9);
              return plVar16;
            }
          }
        }
        goto LAB_02c1b2e0;
      }
      goto LAB_02c1ae88;
    }
    bVar5 = false;
  }
  else {
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar10 = FUN_02c1b2f0();
    bVar5 = lVar10 != 0;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar8 = FUN_02be74a8(plVar1,0,0);
  if ((uVar8 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_02c1ae88;
    bVar6 = FUN_02be87b8(plVar1,0);
    bVar6 = bVar6 & 1;
  }
  if ((bVar6 & bVar5) != 0) {
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar10 = FUN_02c1b6b4(plVar1);
    if (lVar10 == 0) goto LAB_02c1ae88;
    bVar5 = (bool)(bVar5 & *(char *)(lVar10 + 0x15) != '\0');
  }
  if (lVar9 != 0) {
    if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar7 = FUN_02bd01a8(*(undefined4 *)(lVar9 + 0x18),0x10,0);
    if (bVar5 != false) {
      lVar10 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b838);
      FUN_021ffd80(lVar10,uVar7,*(undefined8 *)PTR_DAT_0380b830);
      lVar11 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
      FUN_02709c80(lVar11,uVar7,*(undefined8 *)PTR_DAT_0380b848);
      puVar3 = PTR_DAT_0380b828;
      iVar20 = 0;
      do {
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar2) {
          uVar19 = 0;
          do {
            if (uVar2 <= uVar19) goto LAB_02c1b2e0;
            lVar17 = *(long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_02c1b23c;
            uVar15 = FUN_0187f3ac(lVar17);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*unaff_x21);
            }
            uVar8 = FUN_02be74a8(plVar1,0,0);
            if ((uVar8 & 1) == 0) {
LAB_02c1acec:
              if (lVar10 == 0) goto LAB_02c1ae88;
              uVar8 = FUN_0220216c(lVar10,uVar15,&stack0x00000008,*(undefined8 *)puVar3);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar18 = FUN_02c1b6b4(uVar15);
                if (iVar20 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
                if (lVar18 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
                if (((*(char *)(lVar18 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                   (*(int *)(in_stack_00000008 + 0x18) == iVar20)) {
                  if (lVar11 == 0) goto LAB_02c1ae88;
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)PTR_DAT_03802c48;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_02c1ae88;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    plVar16 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar16 = lVar17;
                    thunk_FUN_0188fd20(plVar16,lVar17);
                  }
                  else {
                    FUN_0270a444(lVar11,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (in_stack_00000008 == 0) goto LAB_02c1ae88;
                lVar18 = *(long *)(in_stack_00000008 + 0x10);
                if (iVar20 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
                if (lVar18 == 0) goto LAB_02c1ae88;
                if (*(char *)(lVar18 + 0x15) != '\0') goto LAB_02c1ad54;
              }
              if (in_stack_00000008 == 0) {
                lVar17 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
                *(long *)(lVar17 + 0x10) = lVar18;
                thunk_FUN_0188fd20((long *)(lVar17 + 0x10),lVar18);
                *(int *)(lVar17 + 0x18) = iVar20;
                FUN_02200638(lVar10,uVar15,lVar17,*(undefined8 *)PTR_DAT_0380b820);
              }
            }
            else {
              if (plVar1 == (long *)0x0) goto LAB_02c1ae88;
              uVar8 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar15,*(undefined8 *)(*plVar1 + 0x290))
              ;
              if ((uVar8 & 1) != 0) goto LAB_02c1acec;
            }
            uVar2 = *(uint *)(lVar9 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)uVar2);
        }
        puVar4 = PTR_DAT_03804428;
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        unaff_x23 = FUN_02c1b2f0(unaff_x23);
        if (unaff_x23 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar8 = FUN_02be66d0(plVar1,0,0);
          if ((uVar8 & 1) == 0) {
            if (plVar1 == (long *)0x0) break;
            uVar8 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal(plVar1,0);
            if ((uVar8 & 1) == 0) {
              if (lVar11 != 0) {
                uVar15 = FUN_02bf4718(plVar1,*(undefined4 *)(lVar11 + 0x18),0);
                plVar16 = (long *)thunk_FUN_01861ac0(uVar15,*(undefined8 *)PTR_DAT_037f2f98);
                goto LAB_02c1b200;
              }
              break;
            }
          }
          if (lVar11 != 0) {
            plVar16 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,
                                           *(undefined4 *)(lVar11 + 0x18));
            goto LAB_02c1b200;
          }
          break;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        iVar20 = iVar20 + 1;
        lVar9 = FUN_02c1a778(unaff_x23,plVar1,1);
      } while (lVar9 != 0);
      goto LAB_02c1ae88;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02be66d0(plVar1,0,0);
    if ((uVar8 & 1) != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar2) {
        lVar10 = 0;
        do {
          if (uVar2 <= (uint)lVar10) goto LAB_02c1b2e0;
          if (*(long *)(lVar9 + 0x20 + lVar10 * 8) == 0) goto LAB_02c1b23c;
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < (int)uVar2);
      }
      plVar16 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10);
      FUN_02bf1554(lVar9,plVar16,0,0);
      return plVar16;
    }
    lVar11 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
    FUN_02709c80(lVar11,uVar7,*(undefined8 *)PTR_DAT_0380b848);
    puVar3 = PTR_DAT_03802c48;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar2) {
      lVar10 = 0;
      do {
        if (uVar2 <= (uint)lVar10) goto LAB_02c1b2e0;
        lVar17 = *(long *)(lVar9 + 0x20 + lVar10 * 8);
        if (lVar17 == 0) goto LAB_02c1b23c;
        uVar15 = FUN_0187f3ac(lVar17);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*unaff_x21);
        }
        uVar8 = FUN_02be74a8(plVar1,0,0);
        if ((uVar8 & 1) == 0) {
LAB_02c1b008:
          if (lVar11 == 0) goto LAB_02c1ae88;
          lVar18 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_02c1ae88;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            plVar16 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *plVar16 = lVar17;
            thunk_FUN_0188fd20(plVar16,lVar17);
          }
          else {
            FUN_0270a444(lVar11,lVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (plVar1 == (long *)0x0) goto LAB_02c1ae88;
          uVar8 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar15,*(undefined8 *)(*plVar1 + 0x290));
          if ((uVar8 & 1) != 0) goto LAB_02c1b008;
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar2);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02be66d0(plVar1,0,0);
    if ((uVar8 & 1) == 0) {
      if (plVar1 == (long *)0x0) goto LAB_02c1ae88;
      uVar8 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal(plVar1,0);
      if ((uVar8 & 1) == 0) {
        if (lVar11 == 0) goto LAB_02c1ae88;
        uVar15 = FUN_02bf4718(plVar1,*(undefined4 *)(lVar11 + 0x18),0);
        plVar16 = (long *)thunk_FUN_01861ac0(uVar15,*(undefined8 *)PTR_DAT_037f2f98);
        goto LAB_02c1b200;
      }
    }
    if (lVar11 != 0) {
      plVar16 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(lVar11 + 0x18))
      ;
LAB_02c1b200:
      FUN_0270a9f4(lVar11,plVar16,0,*(undefined8 *)PTR_DAT_0380b840);
      return plVar16;
    }
  }
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


