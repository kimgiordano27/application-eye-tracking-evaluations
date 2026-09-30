/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 01d91d24
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__QuerySpaces(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long in_stack_00000008;
  
  uVar7 = FUN_01d603ec(param_1,param_2,0);
  plVar13 = (long *)0x0;
  if ((uVar7 & 1) == 0) {
    plVar13 = unaff_x19;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x24);
  }
  lVar8 = FUN_01d91a18();
  if ((unaff_x22 & 1) == 0) {
    if (lVar8 == 0) goto LAB_01d92128;
    if (*(int *)(lVar8 + 0x18) == 1) {
      if (*(long *)(lVar8 + 0x20) == 0) {
LAB_01d924dc:
        thunk_FUN_010303a8(PTR_DAT_02359920);
        uVar11 = thunk_FUN_010400dc();
        uVar14 = thunk_FUN_010303a8(PTR_DAT_02359928);
        FUN_01cc6734(uVar11,uVar14,0);
        uVar14 = thunk_FUN_010303a8(PTR_DAT_02359930);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar11,uVar14);
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar7 = FUN_01d611c4(plVar13,0,0);
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01d92580:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (*(long *)(lVar8 + 0x20) != 0) {
        plVar12 = (long *)FUN_0105d828();
        if ((uVar7 & 1) != 0) {
          if (plVar13 == (long *)0x0) goto LAB_01d92128;
          uVar7 = (**(code **)(*plVar13 + 0x288))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 0x290))
          ;
          plVar12 = plVar13;
          if ((uVar7 & 1) == 0) {
            lVar8 = FUN_01d6df4c(plVar13,0,0);
            if (lVar8 == 0) {
              return (long *)0x0;
            }
            uVar11 = *(undefined8 *)PTR_DAT_0234bd08;
            plVar13 = (long *)thunk_FUN_0103ffe0(lVar8,uVar11);
            if (plVar13 != (long *)0x0) {
              return plVar13;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(lVar8,uVar11);
          }
        }
        lVar9 = FUN_01d6df4c(plVar12,1,0);
        if (lVar9 == 0) {
          if (*(int *)(lVar8 + 0x18) != 0) goto LAB_01d92128;
        }
        else {
          uVar11 = *(undefined8 *)PTR_DAT_0234bd08;
          plVar13 = (long *)thunk_FUN_0103ffe0(lVar9,uVar11);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(lVar9,uVar11);
          }
          if (*(int *)(lVar8 + 0x18) != 0) {
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) {
              lVar9 = 0;
            }
            else {
              lVar10 = thunk_FUN_0103ffe0(lVar8,*(undefined8 *)(*plVar13 + 0x40));
              lVar9 = lVar8;
              if (lVar10 == 0) {
                uVar11 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar11,0);
              }
            }
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar9;
              thunk_FUN_0106e12c(plVar13 + 4,lVar8);
              return plVar13;
            }
          }
        }
        goto LAB_01d92580;
      }
      goto LAB_01d92128;
    }
    bVar4 = false;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar9 = FUN_01d92590();
    bVar4 = lVar9 != 0;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar7 = FUN_01d611c4(plVar13,0,0);
  if ((uVar7 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    if (plVar13 == (long *)0x0) goto LAB_01d92128;
    bVar5 = FUN_01d62314(plVar13,0);
    bVar5 = bVar5 & 1;
  }
  if ((bVar5 & bVar4) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar9 = FUN_01d92954(plVar13);
    if (lVar9 == 0) goto LAB_01d92128;
    bVar4 = (bool)(bVar4 & *(char *)(lVar9 + 0x15) != '\0');
  }
  if (lVar8 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0234be70 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar6 = FUN_01d4b018(*(undefined4 *)(lVar8 + 0x18),0x10,0);
    if (bVar4 != false) {
      lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598f8);
      FUN_01468810(lVar9,uVar6,*(undefined8 *)PTR_DAT_023598f0);
      lVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352158);
      FUN_017d2874(lVar10,uVar6,*(undefined8 *)PTR_DAT_02359908);
      puVar2 = PTR_DAT_023598e8;
      iVar20 = 0;
      do {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar19 = 0;
          do {
            if (uVar1 <= uVar19) goto LAB_01d92580;
            lVar17 = *(long *)(lVar8 + (long)(int)uVar19 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_01d924dc;
            uVar11 = FUN_0105d828(lVar17);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01022c14(*unaff_x21);
            }
            uVar7 = FUN_01d611c4(plVar13,0,0);
            if ((uVar7 & 1) == 0) {
LAB_01d91f8c:
              if (lVar9 == 0) goto LAB_01d92128;
              uVar7 = FUN_0146ab1c(lVar9,uVar11,&stack0x00000008,*(undefined8 *)puVar2);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                }
                lVar18 = FUN_01d92954(uVar11);
                if (iVar20 != 0) goto LAB_01d91fe8;
LAB_01d91fb8:
                if (lVar18 == 0) goto LAB_01d92128;
LAB_01d91ff4:
                if (((*(char *)(lVar18 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                   (*(int *)(in_stack_00000008 + 0x18) == iVar20)) {
                  if (lVar10 == 0) goto LAB_01d92128;
                  lVar15 = *(long *)(lVar10 + 0x10);
                  lVar16 = *(long *)PTR_DAT_02352168;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_01d92128;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar12 = lVar17;
                    thunk_FUN_0106e12c(plVar12,lVar17);
                  }
                  else {
                    FUN_017d3030(lVar10,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (in_stack_00000008 == 0) goto LAB_01d92128;
                lVar18 = *(long *)(in_stack_00000008 + 0x10);
                if (iVar20 == 0) goto LAB_01d91fb8;
LAB_01d91fe8:
                if (lVar18 == 0) goto LAB_01d92128;
                if (*(char *)(lVar18 + 0x15) != '\0') goto LAB_01d91ff4;
              }
              if (in_stack_00000008 == 0) {
                lVar17 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
                *(long *)(lVar17 + 0x10) = lVar18;
                thunk_FUN_0106e12c((long *)(lVar17 + 0x10),lVar18);
                *(int *)(lVar17 + 0x18) = iVar20;
                FUN_01468fe8(lVar9,uVar11,lVar17,*(undefined8 *)PTR_DAT_023598e0);
              }
            }
            else {
              if (plVar13 == (long *)0x0) goto LAB_01d92128;
              uVar7 = (**(code **)(*plVar13 + 0x288))
                                (plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x290));
              if ((uVar7 & 1) != 0) goto LAB_01d91f8c;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)uVar1);
        }
        puVar3 = PTR_DAT_02354070;
        if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        unaff_x23 = FUN_01d92590(unaff_x23);
        if (unaff_x23 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar7 = FUN_01d603ec(plVar13,0,0);
          if ((uVar7 & 1) == 0) {
            if (plVar13 == (long *)0x0) break;
            uVar7 = FUN_01d6237c(plVar13,0);
            if ((uVar7 & 1) == 0) {
              if (lVar10 != 0) {
                uVar11 = FUN_01d6df4c(plVar13,*(undefined4 *)(lVar10 + 0x18),0);
                plVar13 = (long *)thunk_FUN_0103ffe0(uVar11,*(undefined8 *)PTR_DAT_0234bd08);
                goto LAB_01d924a0;
              }
              break;
            }
          }
          if (lVar10 != 0) {
            plVar13 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,
                                           *(undefined4 *)(lVar10 + 0x18));
            goto LAB_01d924a0;
          }
          break;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iVar20 = iVar20 + 1;
        lVar8 = FUN_01d91a18(unaff_x23,plVar13,1);
      } while (lVar8 != 0);
      goto LAB_01d92128;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d603ec(plVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        lVar9 = 0;
        do {
          if (uVar1 <= (uint)lVar9) goto LAB_01d92580;
          if (*(long *)(lVar8 + 0x20 + lVar9 * 8) == 0) goto LAB_01d924dc;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar1);
      }
      plVar13 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0);
      FUN_01d6ad30(lVar8,plVar13,0,0);
      return plVar13;
    }
    lVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352158);
    FUN_017d2874(lVar10,uVar6,*(undefined8 *)PTR_DAT_02359908);
    puVar2 = PTR_DAT_02352168;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) goto LAB_01d92580;
        lVar17 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
        if (lVar17 == 0) goto LAB_01d924dc;
        uVar11 = FUN_0105d828(lVar17);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x21);
        }
        uVar7 = FUN_01d611c4(plVar13,0,0);
        if ((uVar7 & 1) == 0) {
LAB_01d922a8:
          if (lVar10 == 0) goto LAB_01d92128;
          lVar18 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar2;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_01d92128;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar17;
            thunk_FUN_0106e12c(plVar12,lVar17);
          }
          else {
            FUN_017d3030(lVar10,lVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (plVar13 == (long *)0x0) goto LAB_01d92128;
          uVar7 = (**(code **)(*plVar13 + 0x288))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x290));
          if ((uVar7 & 1) != 0) goto LAB_01d922a8;
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d603ec(plVar13,0,0);
    if ((uVar7 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_01d92128;
      uVar7 = FUN_01d6237c(plVar13,0);
      if ((uVar7 & 1) == 0) {
        if (lVar10 == 0) goto LAB_01d92128;
        uVar11 = FUN_01d6df4c(plVar13,*(undefined4 *)(lVar10 + 0x18),0);
        plVar13 = (long *)thunk_FUN_0103ffe0(uVar11,*(undefined8 *)PTR_DAT_0234bd08);
        goto LAB_01d924a0;
      }
    }
    if (lVar10 != 0) {
      plVar13 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,*(undefined4 *)(lVar10 + 0x18))
      ;
LAB_01d924a0:
      FUN_017d35e0(lVar10,plVar13,0,*(undefined8 *)PTR_DAT_02359900);
      return plVar13;
    }
  }
LAB_01d92128:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


