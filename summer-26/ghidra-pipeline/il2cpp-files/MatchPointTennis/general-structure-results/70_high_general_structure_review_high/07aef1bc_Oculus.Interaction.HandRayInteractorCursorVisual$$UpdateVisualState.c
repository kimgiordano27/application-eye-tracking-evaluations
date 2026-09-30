/*
FUNCTION_NAME: Oculus.Interaction.HandRayInteractorCursorVisual$$UpdateVisualState
ENTRY_POINT: 07aef1bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void Oculus_Interaction_HandRayInteractorCursorVisual__UpdateVisualState(ulong param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined2 uStack0000000000000048;
  ushort uStack000000000000004c;
  
code_r0x07aef1bc:
  uVar4 = FUN_07b2b3cc(param_1,0);
  if ((uVar4 & 1) != 0) {
    do {
      *(undefined1 *)(unaff_x19 + 0x1e) = 0;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar10 = FUN_07ad9570();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      auVar11 = FUN_06894b08(lVar10,0,*unaff_x23);
      _in_stack_00000020 = auVar11;
      uVar4 = FUN_07140620(&stack0x00000020,*unaff_x24);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04b55690(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar4 = FUN_0714066c(&stack0x00000020,*unaff_x22);
      if ((uVar4 & 1) == 0) {
LAB_07aef824:
        *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar10 = *(long *)(unaff_x20 + 0x80);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar9 = *(uint *)(unaff_x20 + 0x8c);
        if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(short *)(lVar10 + (long)(int)uVar9 * 2 + 0x20) != 0x5c) goto LAB_07aef824;
        if (*(uint *)(lVar10 + 0x18) <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(short *)(lVar10 + (long)(int)(uVar9 + 1) * 2 + 0x20) != 0x75) goto LAB_07aef824;
        *(undefined2 *)((long)unaff_x19 + 0x7a) = *(undefined2 *)(unaff_x19 + 0x11);
        *(uint *)(unaff_x20 + 0x8c) = uVar9 + 2;
        lVar10 = FUN_07ad9790();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar11 = FUN_068973d8(lVar10,0,*(undefined8 *)PTR_DAT_09f48e10);
        _in_stack_00000010 = auVar11;
        uVar4 = FUN_07140854(&stack0x00000010,*(undefined8 *)PTR_DAT_09f48e08);
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
          thunk_FUN_044bb4b4(unaff_x19 + 0x1a,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04b55880(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        uVar5 = FUN_071408a0(&stack0x00000010,*(undefined8 *)PTR_DAT_09f48e00);
        *(short *)(unaff_x19 + 0x11) = (short)uVar5;
        uVar4 = FUN_07b2b400(uVar5,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_07b2b3cc(*(undefined2 *)(unaff_x19 + 0x11),0);
          *(undefined2 *)((long)unaff_x19 + 0x7a) = 0xfffd;
          if ((uVar4 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x1e) = 1;
          }
        }
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07adbc80();
        FUN_07adf880();
        unaff_x19[0xf] = *(undefined4 *)(unaff_x20 + 0x8c);
      }
    } while (*(char *)(unaff_x19 + 0x1e) != '\0');
  }
LAB_07aef1c8:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  unaff_x19[0xd] = *(undefined4 *)(unaff_x20 + 0x8c);
LAB_07aef1e0:
  FUN_07adbc80();
  FUN_07adf880();
  unaff_x19[0xf] = unaff_x19[0xd];
LAB_07aeee4c:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar9 = unaff_x19[0xd];
  lVar10 = *(long *)(unaff_x20 + 0x80);
  do {
    uVar1 = uVar9 + 1;
    unaff_x19[0xd] = uVar1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar2 = *(ushort *)(lVar10 + (long)(int)uVar9 * 2 + 0x20);
    if (uVar2 < 0xe) {
      if (uVar2 == 0) {
        if (*(uint *)(unaff_x20 + 0x88) == uVar9) {
          unaff_x19[0xd] = uVar9;
          lVar10 = FUN_07ad920c();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar11 = DG_Tweening_Core_TweenerCore<Vector3,_Vector3,_VectorOptions>__SetFrom
                              (lVar10,0,*(undefined8 *)PTR_DAT_09f43628);
          _in_stack_00000030 = auVar11;
          uVar4 = FUN_07140da4(&stack0x00000030,*(undefined8 *)PTR_DAT_09f435f0);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_044bb4b4(unaff_x19 + 0x12,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04b55b68(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          iVar3 = FUN_07140df0(&stack0x00000030,*(undefined8 *)PTR_DAT_09f435e8);
          if (iVar3 == 0) {
            if (unaff_x20 != 0) {
              *(undefined4 *)(unaff_x20 + 0x8c) = unaff_x19[0xd];
              lVar10 = thunk_FUN_044adef4(PTR_DAT_09f21428);
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar5 = FUN_079ca01c(0);
              uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
              uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x88),&stack0x00000048);
              uVar7 = thunk_FUN_044adef4(PTR_DAT_09f48870);
              FUN_07b2a738(uVar7,uVar5,uVar6,0);
              uVar5 = FUN_07acf760();
              uVar6 = thunk_FUN_044adef4(PTR_DAT_09f48e18);
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar5,uVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          goto LAB_07aeee4c;
        }
      }
      else if (uVar2 == 10) {
        *(uint *)(unaff_x20 + 0x8c) = uVar9;
        FUN_07ade848();
        uVar1 = *(uint *)(unaff_x20 + 0x8c);
        unaff_x19[0xd] = uVar1;
      }
      else if (uVar2 == 0xd) break;
    }
    else if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
      if (uVar2 == *(ushort *)(unaff_x19 + 0xc)) {
        FUN_07adf8d0();
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_0795995c(unaff_x19 + 2,0);
        return;
      }
    }
    else if (uVar2 == 0x5c) {
      *(uint *)(unaff_x20 + 0x8c) = uVar1;
      lVar10 = FUN_07ad9570();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      auVar11 = FUN_06894b08(lVar10,0,*unaff_x23);
      _in_stack_00000020 = auVar11;
      uVar4 = FUN_07140620(&stack0x00000020,*unaff_x24);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04b55690(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar4 = FUN_0714066c(&stack0x00000020,*unaff_x22);
      if ((uVar4 & 1) == 0) {
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09f21428);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = FUN_079ca01c(0);
        uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
        uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x88),&stack0x00000048);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09f48870);
        FUN_07b2a738(uVar7,uVar5,uVar6,0);
        uVar5 = FUN_07acf760();
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f48e18);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar5,uVar6);
      }
      uVar9 = unaff_x19[0xd];
      unaff_x19[0x10] = uVar9 - 1;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar10 = *(long *)(unaff_x20 + 0x80);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uStack000000000000004c = *(ushort *)(lVar10 + (long)(int)uVar9 * 2 + 0x20);
      iVar3 = uVar9 + 1;
      unaff_x19[0xd] = iVar3;
      if (uStack000000000000004c < 0x5d) {
        if (uStack000000000000004c < 0x28) {
          if ((uStack000000000000004c != 0x22) && (uStack000000000000004c != 0x27))
          goto switchD_07aef058_caseD_6f;
        }
        else if (uStack000000000000004c != 0x2f) {
          if (uStack000000000000004c != 0x5c) goto switchD_07aef058_caseD_6f;
          uVar8 = 0x5c;
          goto LAB_07aef1dc;
        }
        *(ushort *)(unaff_x19 + 0x11) = uStack000000000000004c;
        goto LAB_07aef1e0;
      }
      if (uStack000000000000004c < 0x67) {
        if (uStack000000000000004c == 0x62) {
          uVar8 = 8;
        }
        else {
          if (uStack000000000000004c != 0x66) goto switchD_07aef058_caseD_6f;
          uVar8 = 0xc;
        }
      }
      else {
        switch(uStack000000000000004c) {
        case 0x6e:
          uVar8 = 10;
          break;
        default:
switchD_07aef058_caseD_6f:
          *(int *)(unaff_x20 + 0x8c) = iVar3;
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09f21428);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar5 = FUN_079ca01c(0);
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar6 = FUN_079932d0((long)&stack0x00000048 + 4,0);
          uVar7 = thunk_FUN_044adef4(PTR_DAT_09f443a8);
          uVar6 = FUN_078a7764(uVar7,uVar6,0);
          uVar7 = thunk_FUN_044adef4(PTR_DAT_09f48878);
          FUN_07b2a738(uVar7,uVar5,uVar6,0);
          uVar5 = FUN_07acf760();
          uVar6 = thunk_FUN_044adef4(PTR_DAT_09f48e18);
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar5,uVar6);
        case 0x72:
          uVar8 = 0xd;
          break;
        case 0x74:
          uVar8 = 9;
          break;
        case 0x75:
          *(int *)(unaff_x20 + 0x8c) = iVar3;
          lVar10 = FUN_07ad9790();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar11 = FUN_068973d8(lVar10,0,*(undefined8 *)PTR_DAT_09f48e10);
          _in_stack_00000010 = auVar11;
          uVar4 = FUN_07140854(&stack0x00000010,*(undefined8 *)PTR_DAT_09f48e08);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
            thunk_FUN_044bb4b4(unaff_x19 + 0x1a,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04b55880(unaff_x19 + 2,&stack0x00000010);
            return;
          }
          uVar5 = FUN_071408a0(&stack0x00000010,*(undefined8 *)PTR_DAT_09f48e00);
          *(short *)(unaff_x19 + 0x11) = (short)uVar5;
          uVar4 = FUN_07b2b400(uVar5,0);
          if ((uVar4 & 1) == 0) {
            param_1 = (ulong)*(ushort *)(unaff_x19 + 0x11);
            goto code_r0x07aef1bc;
          }
          *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
          goto LAB_07aef1c8;
        }
      }
LAB_07aef1dc:
      *(undefined2 *)(unaff_x19 + 0x11) = uVar8;
      goto LAB_07aef1e0;
    }
    uVar9 = uVar1;
    lVar10 = *(long *)(unaff_x20 + 0x80);
  } while( true );
  *(uint *)(unaff_x20 + 0x8c) = uVar9;
  lVar10 = FUN_07ad9470();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  auVar11 = FUN_07ab3be8(lVar10,0,0);
  uVar4 = FUN_0795b3e4();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = auVar11;
    thunk_FUN_044bb4b4(unaff_x19 + 0x20,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b62c30(unaff_x19 + 2);
    return;
  }
  FUN_0795b400();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  unaff_x19[0xd] = *(undefined4 *)(unaff_x20 + 0x8c);
  goto LAB_07aeee4c;
}


