/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 02c1aab0
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


long * OVRPlugin__GetEyeFrustum(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long in_stack_00000008;
  
  lVar7 = FUN_02c1a778(param_1,param_2,0);
  if ((unaff_x22 & 1) == 0) {
    if (lVar7 == 0) goto LAB_02c1ae88;
    if (*(int *)(lVar7 + 0x18) == 1) {
      if (*(long *)(lVar7 + 0x20) == 0) {
LAB_02c1b23c:
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar11 = thunk_FUN_01861bbc();
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b868);
        FUN_02b0d540(uVar11,uVar13,0);
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar11,uVar13);
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar9 = FUN_02be74a8();
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_02c1b2e0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        FUN_0187f3ac();
        if ((uVar9 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
          uVar9 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar9 & 1) == 0) {
            lVar7 = FUN_02bf4718();
            if (lVar7 == 0) {
              return (long *)0x0;
            }
            uVar11 = *(undefined8 *)PTR_DAT_037f2f98;
            plVar12 = (long *)thunk_FUN_01861ac0(lVar7,uVar11);
            if (plVar12 != (long *)0x0) {
              return plVar12;
            }
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar7,uVar11);
          }
        }
        lVar8 = FUN_02bf4718();
        if (lVar8 == 0) {
          if (*(int *)(lVar7 + 0x18) != 0) goto LAB_02c1ae88;
        }
        else {
          uVar11 = *(undefined8 *)PTR_DAT_037f2f98;
          plVar12 = (long *)thunk_FUN_01861ac0(lVar8,uVar11);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar8,uVar11);
          }
          if (*(int *)(lVar7 + 0x18) != 0) {
            lVar7 = *(long *)(lVar7 + 0x20);
            if (lVar7 == 0) {
              lVar8 = 0;
            }
            else {
              lVar10 = thunk_FUN_01861ac0(lVar7,*(undefined8 *)(*plVar12 + 0x40));
              lVar8 = lVar7;
              if (lVar10 == 0) {
                uVar11 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                FUN_017fc474(uVar11,0);
              }
            }
            if ((int)plVar12[3] != 0) {
              plVar12[4] = lVar8;
              thunk_FUN_0188fd20(plVar12 + 4,lVar7);
              return plVar12;
            }
          }
        }
        goto LAB_02c1b2e0;
      }
      goto LAB_02c1ae88;
    }
    bVar4 = false;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar8 = FUN_02c1b2f0();
    bVar4 = lVar8 != 0;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar9 = FUN_02be74a8();
  if ((uVar9 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
    bVar5 = FUN_02be87b8();
    bVar5 = bVar5 & 1;
  }
  if ((bVar5 & bVar4) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar8 = FUN_02c1b6b4();
    if (lVar8 == 0) goto LAB_02c1ae88;
    bVar4 = (bool)(bVar4 & *(char *)(lVar8 + 0x15) != '\0');
  }
  if (lVar7 != 0) {
    if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar6 = FUN_02bd01a8(*(undefined4 *)(lVar7 + 0x18),0x10,0);
    if (bVar4 != false) {
      lVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b838);
      FUN_021ffd80(lVar8,uVar6,*(undefined8 *)PTR_DAT_0380b830);
      lVar10 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
      FUN_02709c80(lVar10,uVar6,*(undefined8 *)PTR_DAT_0380b848);
      puVar2 = PTR_DAT_0380b828;
      iVar19 = 0;
      do {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          uVar18 = 0;
          do {
            if (uVar1 <= uVar18) goto LAB_02c1b2e0;
            lVar16 = *(long *)(lVar7 + (long)(int)uVar18 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_02c1b23c;
            uVar11 = FUN_0187f3ac(lVar16);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*unaff_x21);
            }
            uVar9 = FUN_02be74a8();
            if ((uVar9 & 1) == 0) {
LAB_02c1acec:
              if (lVar8 == 0) goto LAB_02c1ae88;
              uVar9 = FUN_0220216c(lVar8,uVar11,&stack0x00000008,*(undefined8 *)puVar2);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar17 = FUN_02c1b6b4(uVar11);
                if (iVar19 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
                if (lVar17 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
                if (((*(char *)(lVar17 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                   (*(int *)(in_stack_00000008 + 0x18) == iVar19)) {
                  if (lVar10 == 0) goto LAB_02c1ae88;
                  lVar14 = *(long *)(lVar10 + 0x10);
                  lVar15 = *(long *)PTR_DAT_03802c48;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_02c1ae88;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar12 = lVar16;
                    thunk_FUN_0188fd20(plVar12,lVar16);
                  }
                  else {
                    FUN_0270a444(lVar10,lVar16,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (in_stack_00000008 == 0) goto LAB_02c1ae88;
                lVar17 = *(long *)(in_stack_00000008 + 0x10);
                if (iVar19 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
                if (lVar17 == 0) goto LAB_02c1ae88;
                if (*(char *)(lVar17 + 0x15) != '\0') goto LAB_02c1ad54;
              }
              if (in_stack_00000008 == 0) {
                lVar16 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
                *(long *)(lVar16 + 0x10) = lVar17;
                thunk_FUN_0188fd20((long *)(lVar16 + 0x10),lVar17);
                *(int *)(lVar16 + 0x18) = iVar19;
                FUN_02200638(lVar8,uVar11,lVar16,*(undefined8 *)PTR_DAT_0380b820);
              }
            }
            else {
              if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
              uVar9 = (**(code **)(*unaff_x19 + 0x288))();
              if ((uVar9 & 1) != 0) goto LAB_02c1acec;
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar1);
        }
        puVar3 = PTR_DAT_03804428;
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        unaff_x23 = FUN_02c1b2f0(unaff_x23);
        if (unaff_x23 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar9 = FUN_02be66d0();
          if ((uVar9 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) break;
            uVar9 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
            if ((uVar9 & 1) == 0) {
              if (lVar10 != 0) {
                uVar11 = FUN_02bf4718();
                plVar12 = (long *)thunk_FUN_01861ac0(uVar11,*(undefined8 *)PTR_DAT_037f2f98);
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
        iVar19 = iVar19 + 1;
        lVar7 = FUN_02c1a778(unaff_x23);
      } while (lVar7 != 0);
      goto LAB_02c1ae88;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar9 = FUN_02be66d0();
    if ((uVar9 & 1) != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        lVar8 = 0;
        do {
          if (uVar1 <= (uint)lVar8) goto LAB_02c1b2e0;
          if (*(long *)(lVar7 + 0x20 + lVar8 * 8) == 0) goto LAB_02c1b23c;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar1);
      }
      plVar12 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10);
      FUN_02bf1554(lVar7,plVar12,0,0);
      return plVar12;
    }
    lVar10 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
    FUN_02709c80(lVar10,uVar6,*(undefined8 *)PTR_DAT_0380b848);
    puVar2 = PTR_DAT_03802c48;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) goto LAB_02c1b2e0;
        lVar16 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
        if (lVar16 == 0) goto LAB_02c1b23c;
        FUN_0187f3ac(lVar16);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*unaff_x21);
        }
        uVar9 = FUN_02be74a8();
        if ((uVar9 & 1) == 0) {
LAB_02c1b008:
          if (lVar10 == 0) goto LAB_02c1ae88;
          lVar17 = *(long *)(lVar10 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_02c1ae88;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar16;
            thunk_FUN_0188fd20(plVar12,lVar16);
          }
          else {
            FUN_0270a444(lVar10,lVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
          uVar9 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar9 & 1) != 0) goto LAB_02c1b008;
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar9 = FUN_02be66d0();
    if ((uVar9 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
      uVar9 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
      if ((uVar9 & 1) == 0) {
        if (lVar10 == 0) goto LAB_02c1ae88;
        uVar11 = FUN_02bf4718();
        plVar12 = (long *)thunk_FUN_01861ac0(uVar11,*(undefined8 *)PTR_DAT_037f2f98);
        goto LAB_02c1b200;
      }
    }
    if (lVar10 != 0) {
      plVar12 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(lVar10 + 0x18))
      ;
LAB_02c1b200:
      FUN_0270a9f4(lVar10,plVar12,0,*(undefined8 *)PTR_DAT_0380b840);
      return plVar12;
    }
  }
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


