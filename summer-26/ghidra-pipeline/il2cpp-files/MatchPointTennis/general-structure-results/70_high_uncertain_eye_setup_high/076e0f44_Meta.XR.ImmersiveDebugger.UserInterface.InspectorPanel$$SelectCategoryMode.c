/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectCategoryMode
ENTRY_POINT: 076e0f44
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


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectCategoryMode(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int unaff_w19;
  int iVar14;
  uint unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  int iVar15;
  undefined8 *unaff_x24;
  undefined8 uVar16;
  undefined8 *unaff_x25;
  undefined8 uVar17;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  while (unaff_w19 <= unaff_w23) {
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *unaff_x28;
    }
    if ((**(long **)(lVar6 + 0xb8) == 0) ||
       (lVar6 = FUN_05badb74(**(long **)(lVar6 + 0xb8),unaff_w19,*unaff_x24), lVar6 == 0))
    goto LAB_076e172c;
    uVar10 = FUN_076db918();
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar6);
      lVar6 = *unaff_x28;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_076e172c;
    if ((uVar10 & 1) == 0) {
      FUN_05baf638(lVar6,unaff_w19,*unaff_x25);
      unaff_w23 = unaff_w23 + -1;
    }
    else {
      lVar6 = FUN_05badb74(lVar6,unaff_w19,*unaff_x24);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_076e172c;
      plVar7 = *(long **)(*unaff_x28 + 0xb8);
      if (plVar7[4] == 0) goto LAB_076e172c;
      if (*(int *)(plVar7[4] + 0x18) + -1 == *(int *)(*(long *)(lVar6 + 0x18) + 0x18)) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          plVar7 = *(long **)(*unaff_x28 + 0xb8);
        }
        if (*plVar7 == 0) goto LAB_076e172c;
        lVar6 = plVar7[1];
        uVar16 = FUN_05badb74(*plVar7,unaff_w19,*unaff_x24);
        if (lVar6 == 0) goto LAB_076e172c;
        lVar11 = *(long *)(lVar6 + 0x10);
        lVar12 = *unaff_x22;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_076e172c;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar6,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        unaff_w21 = 1;
      }
      unaff_w19 = unaff_w19 + 1;
    }
  }
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar6 = *unaff_x28;
  }
  lVar11 = *(long *)(lVar6 + 0xb8);
  if (*(long *)(lVar11 + 8) != 0) {
    iVar15 = *(int *)(*(long *)(lVar11 + 8) + 0x18);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar11 = *(long *)(*unaff_x28 + 0xb8);
    }
    lVar6 = *(long *)(lVar11 + 0x20);
    if (lVar6 != 0) {
      if (iVar15 == 0) {
        lVar6 = FUN_05badb74(lVar6,0,*unaff_x29);
        FUN_076dea40(lVar6,unaff_w21 & 1 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8));
        puVar4 = PTR_DAT_09f2ef68;
        lVar11 = *unaff_x28;
        lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) == 0) {
            uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f2efe8,lVar6,
                                 *(undefined8 *)PTR_DAT_09f25150,0);
            lVar6 = *(long *)PTR_DAT_09f1e540;
            iVar15 = *(int *)(lVar6 + 0xe4);
joined_r0x076e14fc:
            if (iVar15 == 0) {
              thunk_FUN_044a54b4(lVar6);
            }
            FUN_094c33b0(uVar8,0);
            return;
          }
          if (lVar6 != 0) {
            iVar14 = 0;
            iVar15 = *(int *)(lVar6 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar11 = *unaff_x28;
              }
              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_076e172c;
              if (*(int *)(lVar12 + 0x18) <= iVar14) break;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
                if (lVar12 == 0) goto LAB_076e172c;
              }
              lVar12 = FUN_05badb74(lVar12,iVar14,*(undefined8 *)puVar4);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x30) == 0)) goto LAB_076e172c;
              lVar11 = *unaff_x28;
              iVar14 = iVar14 + 1;
              iVar15 = iVar15 + *(int *)(*(long *)(lVar12 + 0x30) + 0x10) + 7;
            }
            plVar7 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
            FUN_078bb6f4(plVar7,iVar15,0);
            if (plVar7 != (long *)0x0) {
              if ((unaff_w21 & 1) == 0) {
                lVar11 = FUN_078bb7b4(plVar7,*(undefined8 *)PTR_DAT_09f2efe8,0);
                if (lVar11 == 0) goto LAB_076e172c;
                lVar6 = FUN_078bb7b4(lVar11,lVar6,0);
                puVar3 = (undefined8 *)PTR_DAT_09f2f140;
              }
              else {
                lVar11 = FUN_078bb7b4(plVar7,*(undefined8 *)PTR_DAT_09f2f148,0);
                if ((lVar11 == 0) || (lVar6 = FUN_078bb7b4(lVar11,lVar6,0), lVar6 == 0))
                goto LAB_076e172c;
                lVar6 = FUN_078bb7b4(lVar6,*(undefined8 *)PTR_DAT_09f2f150,0);
                lVar11 = *unaff_x28;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(lVar11);
                  lVar11 = *unaff_x28;
                }
                lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
                if ((lVar11 == 0) || (lVar6 == 0)) goto LAB_076e172c;
                lVar6 = FUN_078c3d80(lVar6,*(int *)(lVar11 + 0x18) + -1,0);
                puVar3 = (undefined8 *)PTR_DAT_09f2f158;
              }
              if (lVar6 != 0) {
                FUN_078bb7b4(lVar6,*puVar3,0);
                puVar5 = PTR_DAT_09f2efa8;
                iVar15 = 0;
                goto LAB_076e1550;
              }
            }
          }
        }
      }
      else {
        plVar7 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,*(int *)(lVar6 + 0x18) + -1);
        puVar5 = PTR_DAT_09f2f130;
        puVar4 = PTR_DAT_09f259e0;
        iVar15 = 0;
        uVar16 = 0;
        lVar6 = 0;
        while( true ) {
          lVar11 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar11 = *unaff_x28;
          }
          lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_076e172c;
          if (*(int *)(lVar12 + 0x18) <= iVar15) break;
          if (lVar6 != 0) goto LAB_076e1300;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_076e172c;
          }
          lVar6 = FUN_05badb74(lVar12,iVar15,*(undefined8 *)PTR_DAT_09f2ef68);
          if ((lVar6 == 0) || (lVar11 = *(long *)(lVar6 + 0x18), lVar11 == 0)) goto LAB_076e172c;
          bVar2 = true;
          uVar10 = 0;
          while ((bVar2 && ((long)uVar10 < (long)*(int *)(lVar11 + 0x18)))) {
            lVar11 = *unaff_x28;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar11 = *unaff_x28;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar8 = FUN_05badb74(lVar11,uVar10 + 1 & 0xffffffff,*unaff_x29);
            lVar11 = *(long *)(lVar6 + 0x18);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar17 = *(undefined8 *)(lVar11 + uVar10 * 8 + 0x20);
            uVar9 = FUN_076e19f4(uVar8,uVar17,&stack0x00000008);
            lVar11 = in_stack_00000008;
            if ((uVar9 & 1) == 0) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar16 = FUN_076e0214(uVar17);
              uVar16 = FUN_078b56f4(*(undefined8 *)puVar5,uVar8,*(undefined8 *)puVar4,uVar16,0);
              bVar2 = false;
            }
            else {
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if ((in_stack_00000008 != 0) &&
                 (lVar12 = thunk_FUN_04485110(in_stack_00000008,*(undefined8 *)(*plVar7 + 0x40)),
                 lVar12 == 0)) {
                uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar16,0);
              }
              if (*(uint *)(plVar7 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar7[uVar10 + 4] = lVar11;
              thunk_FUN_044bb4b4(plVar7 + uVar10 + 4,lVar11);
              bVar2 = true;
            }
            lVar11 = *(long *)(lVar6 + 0x18);
            uVar10 = uVar10 + 1;
            if (lVar11 == 0) goto LAB_076e172c;
          }
          if (!bVar2) {
            lVar6 = 0;
          }
          iVar15 = iVar15 + 1;
        }
        if (lVar6 == 0) {
          uVar10 = FUN_078b4450(uVar16,0);
          lVar6 = *(long *)PTR_DAT_09f1e540;
          iVar15 = *(int *)(lVar6 + 0xe4);
          uVar8 = *(undefined8 *)PTR_DAT_09f2f138;
          if ((uVar10 & 1) == 0) {
            uVar8 = uVar16;
          }
          goto joined_r0x076e14fc;
        }
LAB_076e1300:
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar7 = (long *)FUN_0796aedc(*(long *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x20),plVar7
                                        ,0);
          plVar13 = *(long **)(lVar6 + 0x10);
          if (plVar13 != (long *)0x0) {
            uVar16 = (**(code **)(*plVar13 + 0x3d8))(plVar13,*(undefined8 *)(*plVar13 + 0x3e0));
            lVar6 = *(long *)(PTR_DAT_09f1e5b8 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar8 = FUN_07a4ce38(lVar6 + 0x20,0);
            uVar10 = FUN_07a56f5c(uVar16,uVar8,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            if ((plVar7 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar7 + 0x138))(plVar7,0,*(undefined8 *)(*plVar7 + 0x140)),
               (uVar10 & 1) != 0)) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar16 = *(undefined8 *)PTR_DAT_09f2f168;
            }
            else {
              uVar16 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
              uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f2f160,uVar16,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
            }
            FUN_094c652c(uVar16,0);
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
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar6 = *unaff_x28;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_076e172c;
  if (*(int *)(lVar6 + 0x18) <= iVar15) {
    uVar16 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c33b0(uVar16,0);
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    puVar4 = PTR_DAT_09f2efb8;
    uVar16 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = FUN_0952fedc(uVar16,0);
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
  lVar6 = FUN_078bb7b4(plVar7,*(undefined8 *)puVar5,0);
  lVar11 = *unaff_x28;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar11);
    lVar11 = *unaff_x28;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (((lVar11 == 0) || (lVar11 = FUN_05badb74(lVar11,iVar15,*(undefined8 *)puVar4), lVar11 == 0))
     || (lVar6 == 0)) goto LAB_076e172c;
  FUN_078bb7b4(lVar6,*(undefined8 *)(lVar11 + 0x30),0);
  iVar15 = iVar15 + 1;
  goto LAB_076e1550;
}


