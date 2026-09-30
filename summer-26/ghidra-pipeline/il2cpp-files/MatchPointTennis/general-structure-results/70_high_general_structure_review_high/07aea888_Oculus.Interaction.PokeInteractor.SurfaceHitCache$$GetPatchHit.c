/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractor.SurfaceHitCache$$GetPatchHit
ENTRY_POINT: 07aea888
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_PokeInteractor_SurfaceHitCache__GetPatchHit(void)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 uVar11;
  long *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uVar10;
  
LAB_07aea88c:
  do {
    uVar5 = *(uint *)(unaff_x20 + 0x8c);
                    /* try { // try from 07aea894 to 07bea8ab has its CatchHandler @ 07aea994 */
    if (*(uint *)(in_x9 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar1 = *(ushort *)(in_x9 + (long)(int)uVar5 * 2 + 0x20);
    uVar9 = (uint)uVar1;
    uVar10 = (uint)uVar1;
    if (0x4e < uVar1) {
      if (uVar1 < 0x67) {
        if (uVar9 == 0x5b) {
          *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
          FUN_07ad09ac();
        }
        else {
                    /* try { // try from 07aea8ec to 07bea903 has its CatchHandler @ 07aea994 */
          if (uVar9 == 0x5d) {
            *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
            FUN_07ad09ac();
          }
          else {
            if (uVar9 != 0x66) goto switchD_07aea91c_caseD_23;
            lVar6 = FUN_07ada180();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            auVar12 = FUN_07ab3be8(lVar6,0,0);
            _in_stack_00000020 = auVar12;
            uVar7 = FUN_0795b3e4(&stack0x00000020,0);
            if ((uVar7 & 1) == 0) {
              *unaff_x19 = 3;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0795b400(&stack0x00000020,0);
          }
        }
      }
      else if (uVar9 < 0x75) {
        if (uVar9 == 0x6e) {
          lVar6 = FUN_07ad9570();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          _in_stack_00000010 = FUN_06894b08(lVar6,0,*(undefined8 *)PTR_DAT_09f2b7e8);
          uVar7 = FUN_07140620(&stack0x00000010,*(undefined8 *)PTR_DAT_09f2b7e0);
          if ((uVar7 & 1) == 0) {
            *unaff_x19 = 4;
            *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
            thunk_FUN_044bb4b4(unaff_x19 + 0x14,0);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04630c54(unaff_x19 + 2,&stack0x00000010);
            return;
          }
          uVar7 = FUN_0714066c(&stack0x00000010,*(undefined8 *)PTR_DAT_09f2b7d8);
          if ((uVar7 & 1) == 0) {
            if (unaff_x20 != 0) {
              *(int *)(unaff_x20 + 0x8c) = *(int *)(unaff_x20 + 0x8c) + 1;
              uVar11 = FUN_07ad254c();
              uVar8 = thunk_FUN_044adef4(PTR_DAT_09f48d48);
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,uVar8);
            }
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar6 = *(long *)(unaff_x20 + 0x80);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar5 = *(uint *)(unaff_x20 + 0x8c) + 1;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          sVar2 = *(short *)(lVar6 + (long)(int)uVar5 * 2 + 0x20);
          if (sVar2 == 0x65) {
            lVar6 = FUN_07ada290();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            auVar12 = FUN_07ab3be8(lVar6,0,0);
            _in_stack_00000020 = auVar12;
            uVar7 = FUN_0795b3e4(&stack0x00000020,0);
            if ((uVar7 & 1) == 0) {
              *unaff_x19 = 6;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0795b400(&stack0x00000020,0);
          }
          else {
            if (sVar2 != 0x75) {
              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x20 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar11 = FUN_07ade744();
              uVar8 = thunk_FUN_044adef4(PTR_DAT_09f48d48);
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,uVar8);
            }
            lVar6 = FUN_07ada218();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            auVar12 = FUN_07ab3be8(lVar6,0,0);
            _in_stack_00000020 = auVar12;
            uVar7 = FUN_0795b3e4(&stack0x00000020,0);
            if ((uVar7 & 1) == 0) {
              *unaff_x19 = 5;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0795b400(&stack0x00000020,0);
          }
        }
        else {
          if (uVar9 != 0x74) goto switchD_07aea91c_caseD_23;
          lVar6 = FUN_07ada0e4();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar12 = FUN_07ab3be8(lVar6,0,0);
          _in_stack_00000020 = auVar12;
          uVar7 = FUN_0795b3e4(&stack0x00000020,0);
          if ((uVar7 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
            thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
            return;
          }
          FUN_0795b400(&stack0x00000020,0);
        }
      }
      else {
        if (uVar9 != 0x75) {
          if (uVar9 == 0x7b) {
            uVar11 = 1;
            *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
            FUN_07ad09ac();
            goto LAB_07aeae74;
          }
          goto switchD_07aea91c_caseD_23;
        }
        lVar6 = FUN_07ada838();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar12 = FUN_07ab3be8(lVar6,0,0);
        _in_stack_00000020 = auVar12;
        uVar7 = FUN_0795b3e4(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 0xd;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
          thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_0795b400(&stack0x00000020,0);
      }
      goto LAB_07aeae70;
    }
                    /* try { // try from 07aea8ac to 07bea8eb has its CatchHandler @ 07aea6a4 */
    if (0x20 < uVar9) {
      if (uVar9 < 0x30) {
                    /* try { // try from 07aea904 to 07bea983 has its CatchHandler @ 07aea6a4 */
        if (uVar9 - 0x22 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x07aea91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(unaff_x24 + (ulong)(uVar9 - 0x22) * 2 + 0xc8c) * 4 +
                    0x7aea960))();
          return;
        }
switchD_07aea91c_caseD_23:
        if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar7 = FUN_079a0ce0(uVar1,0);
        if ((uVar7 & 1) != 0) {
          uVar5 = *(uint *)(unaff_x20 + 0x8c);
                    /* try { // try from 07aea984 to 07bea993 has its CatchHandler @ 07aea994 */
          goto LAB_07aea988;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = System_Threading_CancellationTokenSource__Dispose(uVar1,0);
        if (1 < uVar10 - 0x2d && (uVar5 & 1) == 0) {
          uVar11 = FUN_07ade744();
          uVar8 = thunk_FUN_044adef4(PTR_DAT_09f48d48);
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar11,uVar8);
        }
        lVar6 = FUN_07ada72c();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar12 = FUN_07ab3be8(lVar6,0,0);
        _in_stack_00000020 = auVar12;
        uVar7 = FUN_0795b3e4(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 0xf;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
          thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_0795b400(&stack0x00000020,0);
      }
      else if (uVar9 == 0x49) {
        lVar6 = FUN_07ada4c4();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar12 = FUN_068a4fd0(lVar6,0,*(undefined8 *)PTR_DAT_09f48b38);
        uVar7 = FUN_07141468();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 8;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
          thunk_FUN_044bb4b4(unaff_x19 + 0x18,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04631cf4(unaff_x19 + 2);
          return;
        }
        FUN_071414b4();
      }
      else {
        if (uVar9 != 0x4e) goto switchD_07aea91c_caseD_23;
        lVar6 = FUN_07ada390();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar12 = FUN_068a4fd0(lVar6,0,*(undefined8 *)PTR_DAT_09f48b38);
        uVar7 = FUN_07141468();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 7;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
          thunk_FUN_044bb4b4(unaff_x19 + 0x18,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04631cf4(unaff_x19 + 2);
          return;
        }
        FUN_071414b4();
      }
LAB_07aeae70:
      uVar11 = 1;
LAB_07aeae74:
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_09f2ce18;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066e2370(unaff_x19 + 2,uVar11,*(undefined8 *)puVar3);
      return;
    }
    if (uVar1 < 10) {
                    /* try { // try from 07aea998 to 07bea99b has its CatchHandler @ 07aea9a4 */
      if (uVar10 == 0) {
        if (*(uint *)(unaff_x20 + 0x88) == uVar5) {
          lVar6 = FUN_07ad920c();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar12 = DG_Tweening_Core_TweenerCore<Vector3,_Vector3,_VectorOptions>__SetFrom
                              (lVar6,0,*(undefined8 *)PTR_DAT_09f43628);
          _in_stack_00000030 = auVar12;
          uVar7 = FUN_07140da4(&stack0x00000030,*(undefined8 *)PTR_DAT_09f435f0);
          if ((uVar7 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000030;
            thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_046316b8(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          iVar4 = FUN_07140df0(&stack0x00000030,*(undefined8 *)PTR_DAT_09f435e8);
          if (iVar4 == 0) {
            uVar11 = 0;
            goto LAB_07aeae74;
          }
switchD_07aea840_default:
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_x9 = *(long *)(unaff_x20 + 0x80);
          if (in_x9 == 0) goto Oculus_Interaction_PokeInteractableVisual__get__postProcessHandler;
          unaff_x24 = &DAT_01e1c000;
          unaff_x23 = PTR_DAT_09f1e5b8;
          goto LAB_07aea88c;
        }
      }
      else {
                    /* try { // try from 07aea99c to 07bea9a7 has its CatchHandler @ 07aea6a4 */
        if (uVar9 != 9) goto switchD_07aea91c_caseD_23;
      }
LAB_07aea988:
      *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
    }
    else {
      if (uVar9 != 10) {
        if (uVar10 != 0x20) {
          if (uVar10 == 0xd) {
            lVar6 = FUN_07ad9470();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            auVar12 = FUN_07ab3be8(lVar6,0,0);
            _in_stack_00000020 = auVar12;
            uVar7 = FUN_0795b3e4(&stack0x00000020,0);
            if ((uVar7 & 1) == 0) {
              *unaff_x19 = 0xe;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_0463b2f0(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0795b400(&stack0x00000020,0);
            goto switchD_07aea840_default;
          }
          goto switchD_07aea91c_caseD_23;
        }
        goto LAB_07aea988;
      }
      FUN_07ade848();
    }
    in_x9 = *(long *)(unaff_x20 + 0x80);
    if (in_x9 == 0) {
Oculus_Interaction_PokeInteractableVisual__get__postProcessHandler:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  } while( true );
}


