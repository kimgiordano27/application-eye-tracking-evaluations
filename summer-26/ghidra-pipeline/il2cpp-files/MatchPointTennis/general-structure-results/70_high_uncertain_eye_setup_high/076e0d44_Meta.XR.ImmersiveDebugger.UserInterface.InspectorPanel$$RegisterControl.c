/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$RegisterControl
ENTRY_POINT: 076e0d44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__RegisterControl(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int unaff_w19;
  int unaff_w21;
  uint uVar15;
  int iVar16;
  undefined8 *unaff_x24;
  undefined8 uVar17;
  undefined8 uVar18;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  do {
    iVar16 = unaff_w21;
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *unaff_x28;
    }
    plVar11 = *(long **)(lVar7 + 0xb8);
    if (*plVar11 == 0) goto LAB_076e172c;
    if (*(int *)(*plVar11 + 0x18) + -1 <= iVar16) break;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      plVar11 = *(long **)(*unaff_x28 + 0xb8);
    }
    if (*plVar11 == 0) goto LAB_076e172c;
    plVar14 = (long *)plVar11[6];
    lVar7 = FUN_05badb74(*plVar11,iVar16 + 1,*unaff_x24);
    if ((lVar7 == 0) || (plVar14 == (long *)0x0)) goto LAB_076e172c;
    iVar6 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(lVar7 + 0x28));
    unaff_w21 = iVar16 + 1;
  } while (iVar6 == 0);
  puVar5 = PTR_DAT_09f2eff0;
  puVar4 = PTR_DAT_09f2ef58;
  if (iVar16 < unaff_w19) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    do {
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *unaff_x28;
      }
      if ((**(long **)(lVar7 + 0xb8) == 0) ||
         (lVar7 = FUN_05badb74(**(long **)(lVar7 + 0xb8),unaff_w19,*unaff_x24), lVar7 == 0))
      goto LAB_076e172c;
      uVar10 = FUN_076db918();
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar7);
        lVar7 = *unaff_x28;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_076e172c;
      if ((uVar10 & 1) == 0) {
        FUN_05baf638(lVar7,unaff_w19,*(undefined8 *)puVar4);
        iVar16 = iVar16 + -1;
      }
      else {
        lVar7 = FUN_05badb74(lVar7,unaff_w19,*unaff_x24);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_076e172c;
        plVar11 = *(long **)(*unaff_x28 + 0xb8);
        if (plVar11[4] == 0) goto LAB_076e172c;
        if (*(int *)(plVar11[4] + 0x18) + -1 == *(int *)(*(long *)(lVar7 + 0x18) + 0x18)) {
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            plVar11 = *(long **)(*unaff_x28 + 0xb8);
          }
          if (*plVar11 == 0) goto LAB_076e172c;
          lVar7 = plVar11[1];
          uVar8 = FUN_05badb74(*plVar11,unaff_w19,*unaff_x24);
          if (lVar7 == 0) goto LAB_076e172c;
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_076e172c;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          uVar15 = 1;
        }
        unaff_w19 = unaff_w19 + 1;
      }
    } while (unaff_w19 <= iVar16);
  }
  lVar7 = *unaff_x28;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *unaff_x28;
  }
  lVar12 = *(long *)(lVar7 + 0xb8);
  if (*(long *)(lVar12 + 8) != 0) {
    iVar16 = *(int *)(*(long *)(lVar12 + 8) + 0x18);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar12 = *(long *)(*unaff_x28 + 0xb8);
    }
    lVar7 = *(long *)(lVar12 + 0x20);
    if (lVar7 != 0) {
      if (iVar16 == 0) {
        lVar7 = FUN_05badb74(lVar7,0,*unaff_x29);
        FUN_076dea40(lVar7,uVar15 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8));
        puVar4 = PTR_DAT_09f2ef68;
        lVar12 = *unaff_x28;
        lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x18) == 0) {
            uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f2efe8,lVar7,
                                 *(undefined8 *)PTR_DAT_09f25150,0);
            lVar7 = *(long *)PTR_DAT_09f1e540;
            iVar16 = *(int *)(lVar7 + 0xe4);
joined_r0x076e14b0:
            if (iVar16 == 0) {
              thunk_FUN_044a54b4(lVar7);
            }
            FUN_094c33b0(uVar8,0);
            return;
          }
          if (lVar7 != 0) {
            iVar6 = 0;
            iVar16 = *(int *)(lVar7 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar12 = *unaff_x28;
              }
              lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
              if (lVar13 == 0) goto LAB_076e172c;
              if (*(int *)(lVar13 + 0x18) <= iVar6) break;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar13 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
                if (lVar13 == 0) goto LAB_076e172c;
              }
              lVar13 = FUN_05badb74(lVar13,iVar6,*(undefined8 *)puVar4);
              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) goto LAB_076e172c;
              lVar12 = *unaff_x28;
              iVar6 = iVar6 + 1;
              iVar16 = iVar16 + *(int *)(*(long *)(lVar13 + 0x30) + 0x10) + 7;
            }
            plVar11 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
            FUN_078bb6f4(plVar11,iVar16,0);
            if (plVar11 != (long *)0x0) {
              if (uVar15 == 0) {
                lVar12 = FUN_078bb7b4(plVar11,*(undefined8 *)PTR_DAT_09f2efe8,0);
                if (lVar12 == 0) goto LAB_076e172c;
                lVar7 = FUN_078bb7b4(lVar12,lVar7,0);
                puVar3 = (undefined8 *)PTR_DAT_09f2f140;
              }
              else {
                lVar12 = FUN_078bb7b4(plVar11,*(undefined8 *)PTR_DAT_09f2f148,0);
                if ((lVar12 == 0) || (lVar7 = FUN_078bb7b4(lVar12,lVar7,0), lVar7 == 0))
                goto LAB_076e172c;
                lVar7 = FUN_078bb7b4(lVar7,*(undefined8 *)PTR_DAT_09f2f150,0);
                lVar12 = *unaff_x28;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(lVar12);
                  lVar12 = *unaff_x28;
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
                if ((lVar12 == 0) || (lVar7 == 0)) goto LAB_076e172c;
                lVar7 = FUN_078c3d80(lVar7,*(int *)(lVar12 + 0x18) + -1,0);
                puVar3 = (undefined8 *)PTR_DAT_09f2f158;
              }
              if (lVar7 != 0) {
                FUN_078bb7b4(lVar7,*puVar3,0);
                puVar5 = PTR_DAT_09f2efa8;
                iVar16 = 0;
                goto LAB_076e1550;
              }
            }
          }
        }
      }
      else {
        plVar11 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,*(int *)(lVar7 + 0x18) + -1);
        puVar5 = PTR_DAT_09f2f130;
        puVar4 = PTR_DAT_09f259e0;
        iVar16 = 0;
        uVar17 = 0;
        lVar7 = 0;
        while( true ) {
          lVar12 = *unaff_x28;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar12 = *unaff_x28;
          }
          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
          if (lVar13 == 0) goto LAB_076e172c;
          if (*(int *)(lVar13 + 0x18) <= iVar16) break;
          if (lVar7 != 0) goto LAB_076e1300;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar13 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
            if (lVar13 == 0) goto LAB_076e172c;
          }
          lVar7 = FUN_05badb74(lVar13,iVar16,*(undefined8 *)PTR_DAT_09f2ef68);
          if ((lVar7 == 0) || (lVar12 = *(long *)(lVar7 + 0x18), lVar12 == 0)) goto LAB_076e172c;
          bVar2 = true;
          uVar10 = 0;
          while ((bVar2 && ((long)uVar10 < (long)*(int *)(lVar12 + 0x18)))) {
            lVar12 = *unaff_x28;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar12 = *unaff_x28;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar8 = FUN_05badb74(lVar12,uVar10 + 1 & 0xffffffff,*unaff_x29);
            lVar12 = *(long *)(lVar7 + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar18 = *(undefined8 *)(lVar12 + uVar10 * 8 + 0x20);
            uVar9 = FUN_076e19f4(uVar8,uVar18,&stack0x00000008);
            lVar12 = in_stack_00000008;
            if ((uVar9 & 1) == 0) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar17 = FUN_076e0214(uVar18);
              uVar17 = FUN_078b56f4(*(undefined8 *)puVar5,uVar8,*(undefined8 *)puVar4,uVar17,0);
              bVar2 = false;
            }
            else {
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if ((in_stack_00000008 != 0) &&
                 (lVar13 = thunk_FUN_04485110(in_stack_00000008,*(undefined8 *)(*plVar11 + 0x40)),
                 lVar13 == 0)) {
                uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar8,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar11[uVar10 + 4] = lVar12;
              thunk_FUN_044bb4b4(plVar11 + uVar10 + 4,lVar12);
              bVar2 = true;
            }
            lVar12 = *(long *)(lVar7 + 0x18);
            uVar10 = uVar10 + 1;
            if (lVar12 == 0) goto LAB_076e172c;
          }
          if (!bVar2) {
            lVar7 = 0;
          }
          iVar16 = iVar16 + 1;
        }
        if (lVar7 == 0) {
          uVar10 = FUN_078b4450(uVar17,0);
          lVar7 = *(long *)PTR_DAT_09f1e540;
          iVar16 = *(int *)(lVar7 + 0xe4);
          uVar8 = *(undefined8 *)PTR_DAT_09f2f138;
          if ((uVar10 & 1) == 0) {
            uVar8 = uVar17;
          }
          goto joined_r0x076e14b0;
        }
LAB_076e1300:
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar11 = (long *)FUN_0796aedc(*(long *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x20),
                                         plVar11,0);
          plVar14 = *(long **)(lVar7 + 0x10);
          if (plVar14 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar14 + 0x3d8))(plVar14,*(undefined8 *)(*plVar14 + 0x3e0));
            lVar7 = *(long *)(PTR_DAT_09f1e5b8 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar17 = FUN_07a4ce38(lVar7 + 0x20,0);
            uVar10 = FUN_07a56f5c(uVar8,uVar17,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            if ((plVar11 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar11 + 0x138))
                                   (plVar11,0,*(undefined8 *)(*plVar11 + 0x140)), (uVar10 & 1) != 0)
               ) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar8 = *(undefined8 *)PTR_DAT_09f2f168;
            }
            else {
              uVar8 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f2f160,uVar8,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
            }
            FUN_094c652c(uVar8,0);
            return;
          }
        }
      }
    }
  }
LAB_076e172c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076e1550:
  lVar7 = *unaff_x28;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *unaff_x28;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_076e172c;
  if (*(int *)(lVar7 + 0x18) <= iVar16) {
    uVar8 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c33b0(uVar8,0);
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    puVar4 = PTR_DAT_09f2efb8;
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = FUN_0952fedc(uVar8,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      FUN_076de438(**(long **)(*(long *)puVar4 + 0xb8),1,1);
      return;
    }
    goto LAB_076e172c;
  }
  lVar7 = FUN_078bb7b4(plVar11,*(undefined8 *)puVar5,0);
  lVar12 = *unaff_x28;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar12);
    lVar12 = *unaff_x28;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (((lVar12 == 0) || (lVar12 = FUN_05badb74(lVar12,iVar16,*(undefined8 *)puVar4), lVar12 == 0))
     || (lVar7 == 0)) goto LAB_076e172c;
  FUN_078bb7b4(lVar7,*(undefined8 *)(lVar12 + 0x30),0);
  iVar16 = iVar16 + 1;
  goto LAB_076e1550;
}


