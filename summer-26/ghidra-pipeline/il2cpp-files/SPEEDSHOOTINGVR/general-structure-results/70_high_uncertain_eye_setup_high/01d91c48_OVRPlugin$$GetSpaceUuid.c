/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 01d91c48
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


long * OVRPlugin__GetSpaceUuid(void)

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
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  ulong unaff_x22;
  long unaff_x23;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long in_stack_00000008;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_02359908);
  FUN_00fdc2e4(PTR_DAT_02359910);
  FUN_00fdc2e4(PTR_DAT_02352158);
  FUN_00fdc2e4(PTR_DAT_0234be70);
  FUN_00fdc2e4(PTR_DAT_02359918);
  FUN_00fdc2e4(PTR_DAT_02354070);
  FUN_00fdc2e4(PTR_DAT_0234bd08);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x20 + 0x87e) = 1;
  puVar14 = PTR_DAT_0234bc58;
  in_stack_00000008 = 0;
  if (unaff_x23 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar17 = thunk_FUN_010400dc();
    puVar14 = PTR_DAT_02352818;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d603ec();
    puVar2 = PTR_DAT_02354070;
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)PTR_DAT_02359918;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d5e86c(uVar17,0);
      uVar7 = FUN_01d603ec();
      plVar12 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar12 = unaff_x19;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
      lVar8 = FUN_01d91a18();
      if ((unaff_x22 & 1) == 0) {
        if (lVar8 == 0) goto LAB_01d92128;
        if (*(int *)(lVar8 + 0x18) == 1) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar7 = FUN_01d611c4(plVar12,0,0);
            if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01d92580:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            if (*(long *)(lVar8 + 0x20) != 0) {
              plVar11 = (long *)FUN_0105d828();
              if ((uVar7 & 1) != 0) {
                if (plVar12 == (long *)0x0) goto LAB_01d92128;
                uVar7 = (**(code **)(*plVar12 + 0x288))
                                  (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x290));
                plVar11 = plVar12;
                if ((uVar7 & 1) == 0) {
                  lVar8 = FUN_01d6df4c(plVar12,0,0);
                  if (lVar8 == 0) {
                    return (long *)0x0;
                  }
                  uVar17 = *(undefined8 *)PTR_DAT_0234bd08;
                  plVar12 = (long *)thunk_FUN_0103ffe0(lVar8,uVar17);
                  if (plVar12 != (long *)0x0) {
                    return plVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc8d0(lVar8,uVar17);
                }
              }
              lVar9 = FUN_01d6df4c(plVar11,1,0);
              if (lVar9 == 0) {
                if (*(int *)(lVar8 + 0x18) != 0) goto LAB_01d92128;
              }
              else {
                uVar17 = *(undefined8 *)PTR_DAT_0234bd08;
                plVar12 = (long *)thunk_FUN_0103ffe0(lVar9,uVar17);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc8d0(lVar9,uVar17);
                }
                if (*(int *)(lVar8 + 0x18) != 0) {
                  lVar8 = *(long *)(lVar8 + 0x20);
                  if (lVar8 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar10 = thunk_FUN_0103ffe0(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                    lVar9 = lVar8;
                    if (lVar10 == 0) {
                      uVar17 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc400(uVar17,0);
                    }
                  }
                  if ((int)plVar12[3] != 0) {
                    plVar12[4] = lVar9;
                    thunk_FUN_0106e12c(plVar12 + 4,lVar8);
                    return plVar12;
                  }
                }
              }
              goto LAB_01d92580;
            }
            goto LAB_01d92128;
          }
LAB_01d924dc:
          thunk_FUN_010303a8(PTR_DAT_02359920);
          uVar17 = thunk_FUN_010400dc();
          uVar13 = thunk_FUN_010303a8(PTR_DAT_02359928);
          FUN_01cc6734(uVar17,uVar13,0);
          goto LAB_01d9250c;
        }
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar9 = FUN_01d92590();
        bVar4 = lVar9 != 0;
      }
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar7 = FUN_01d611c4(plVar12,0,0);
      if ((uVar7 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar12 == (long *)0x0) goto LAB_01d92128;
        bVar5 = FUN_01d62314(plVar12,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & bVar4) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar9 = FUN_01d92954(plVar12);
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
          iVar21 = 0;
          do {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar20 = 0;
              do {
                if (uVar1 <= uVar20) goto LAB_01d92580;
                lVar18 = *(long *)(lVar8 + (long)(int)uVar20 * 8 + 0x20);
                if (lVar18 == 0) goto LAB_01d924dc;
                uVar17 = FUN_0105d828(lVar18);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  thunk_FUN_01022c14(*(long *)puVar14);
                }
                uVar7 = FUN_01d611c4(plVar12,0,0);
                if ((uVar7 & 1) == 0) {
LAB_01d91f8c:
                  if (lVar9 == 0) goto LAB_01d92128;
                  uVar7 = FUN_0146ab1c(lVar9,uVar17,&stack0x00000008,*(undefined8 *)puVar2);
                  if ((uVar7 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
                      thunk_FUN_01022c14();
                    }
                    lVar19 = FUN_01d92954(uVar17);
                    if (iVar21 != 0) goto LAB_01d91fe8;
LAB_01d91fb8:
                    if (lVar19 == 0) goto LAB_01d92128;
LAB_01d91ff4:
                    if (((*(char *)(lVar19 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                       (*(int *)(in_stack_00000008 + 0x18) == iVar21)) {
                      if (lVar10 == 0) goto LAB_01d92128;
                      lVar15 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)PTR_DAT_02352168;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_01d92128;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar18;
                        thunk_FUN_0106e12c(plVar11,lVar18);
                      }
                      else {
                        FUN_017d3030(lVar10,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (in_stack_00000008 == 0) goto LAB_01d92128;
                    lVar19 = *(long *)(in_stack_00000008 + 0x10);
                    if (iVar21 == 0) goto LAB_01d91fb8;
LAB_01d91fe8:
                    if (lVar19 == 0) goto LAB_01d92128;
                    if (*(char *)(lVar19 + 0x15) != '\0') goto LAB_01d91ff4;
                  }
                  if (in_stack_00000008 == 0) {
                    lVar18 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
                    *(long *)(lVar18 + 0x10) = lVar19;
                    thunk_FUN_0106e12c((long *)(lVar18 + 0x10),lVar19);
                    *(int *)(lVar18 + 0x18) = iVar21;
                    FUN_01468fe8(lVar9,uVar17,lVar18,*(undefined8 *)PTR_DAT_023598e0);
                  }
                }
                else {
                  if (plVar12 == (long *)0x0) goto LAB_01d92128;
                  uVar7 = (**(code **)(*plVar12 + 0x288))
                                    (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
                  if ((uVar7 & 1) != 0) goto LAB_01d91f8c;
                }
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)uVar1);
            }
            puVar3 = PTR_DAT_02354070;
            if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            unaff_x23 = FUN_01d92590(unaff_x23);
            if (unaff_x23 == 0) {
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              uVar7 = FUN_01d603ec(plVar12,0,0);
              if ((uVar7 & 1) == 0) {
                if (plVar12 == (long *)0x0) break;
                uVar7 = FUN_01d6237c(plVar12,0);
                if ((uVar7 & 1) == 0) {
                  if (lVar10 != 0) {
                    uVar17 = FUN_01d6df4c(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
                    plVar12 = (long *)thunk_FUN_0103ffe0(uVar17,*(undefined8 *)PTR_DAT_0234bd08);
                    goto LAB_01d924a0;
                  }
                  break;
                }
              }
              if (lVar10 != 0) {
                plVar12 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,
                                               *(undefined4 *)(lVar10 + 0x18));
                goto LAB_01d924a0;
              }
              break;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iVar21 = iVar21 + 1;
            lVar8 = FUN_01d91a18(unaff_x23,plVar12,1);
          } while (lVar8 != 0);
          goto LAB_01d92128;
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar7 = FUN_01d603ec(plVar12,0,0);
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
          plVar12 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0);
          FUN_01d6ad30(lVar8,plVar12,0,0);
          return plVar12;
        }
        lVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352158);
        FUN_017d2874(lVar10,uVar6,*(undefined8 *)PTR_DAT_02359908);
        puVar2 = PTR_DAT_02352168;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            if (uVar1 <= (uint)lVar9) goto LAB_01d92580;
            lVar18 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
            if (lVar18 == 0) goto LAB_01d924dc;
            uVar17 = FUN_0105d828(lVar18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)puVar14);
            }
            uVar7 = FUN_01d611c4(plVar12,0,0);
            if ((uVar7 & 1) == 0) {
LAB_01d922a8:
              if (lVar10 == 0) goto LAB_01d92128;
              lVar19 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_01d92128;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar18;
                thunk_FUN_0106e12c(plVar11,lVar18);
              }
              else {
                FUN_017d3030(lVar10,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar12 == (long *)0x0) goto LAB_01d92128;
              uVar7 = (**(code **)(*plVar12 + 0x288))
                                (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
              if ((uVar7 & 1) != 0) goto LAB_01d922a8;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar7 = FUN_01d603ec(plVar12,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_01d92128;
          uVar7 = FUN_01d6237c(plVar12,0);
          if ((uVar7 & 1) == 0) {
            if (lVar10 == 0) goto LAB_01d92128;
            uVar17 = FUN_01d6df4c(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
            plVar12 = (long *)thunk_FUN_0103ffe0(uVar17,*(undefined8 *)PTR_DAT_0234bd08);
            goto LAB_01d924a0;
          }
        }
        if (lVar10 != 0) {
          plVar12 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,
                                         *(undefined4 *)(lVar10 + 0x18));
LAB_01d924a0:
          FUN_017d35e0(lVar10,plVar12,0,*(undefined8 *)PTR_DAT_02359900);
          return plVar12;
        }
      }
LAB_01d92128:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar17 = thunk_FUN_010400dc();
    puVar14 = PTR_DAT_02353ae0;
  }
  uVar13 = thunk_FUN_010303a8(puVar14);
  FUN_01c5e120(uVar17,uVar13,0);
LAB_01d9250c:
  uVar13 = thunk_FUN_010303a8(PTR_DAT_02359930);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar17,uVar13);
}


