/*
FUNCTION_NAME: FUN_015dc358
ENTRY_POINT: 015dc358
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x015dca04) */
/* WARNING: Removing unreachable block (ram,0x015dc80c) */
/* WARNING: Removing unreachable block (ram,0x015dcbc0) */
/* WARNING: Removing unreachable block (ram,0x015dcbb4) */

bool FUN_015dc358(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((DAT_03777f34 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<LogType,_SeverityEntry>__ctor__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f4070);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Dynamic_Utils_ExpressionUtils_RequiresCanRead__);
    thunk_FUN_00d48444(StringLiteral_11035);
    thunk_FUN_00d48444(System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation_PostAction__
                      );
    thunk_FUN_00d48444(Method_System_Net_IPAddress__ctor__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>_get_Data__);
    thunk_FUN_00d48444(StringLiteral_11514);
    thunk_FUN_00d48444(StringLiteral_6743);
    DAT_03777f34 = 1;
  }
  puVar5 = StringLiteral_6743;
  puVar4 = Method_System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation_PostAction__;
  puVar3 = Method_System_Net_IPAddress__ctor__;
  puVar2 = Method_System_Collections_Generic_Dictionary<LogType,_SeverityEntry>__ctor__;
  puVar1 = System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo;
  if ((param_2 != 0) && (lVar18 = *(long *)(param_2 + 0x38), lVar18 != 0)) {
    iVar9 = 0;
    lVar20 = 0;
    uVar21 = 0;
    while (plVar10 = *(long **)(lVar18 + 0x20), plVar10 != (long *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      if (iVar8 <= iVar9) {
        uVar12 = FUN_015fe7e8(uVar21,*(undefined8 *)StringLiteral_11514,0);
        if (lVar20 == 0) {
          return false;
        }
        if ((uVar12 & 1) != 0) {
          return false;
        }
        uVar12 = FUN_015be644(lVar20,param_3,0);
        puVar1 = StringLiteral_10310;
        if ((uVar12 & 1) == 0) {
          return false;
        }
        if (param_4 != (long *)0x0) {
          uVar21 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
          if (*(int *)(*(long *)PTR_DAT_033f4070 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)PTR_DAT_033f4070);
          }
          uVar21 = FUN_0163fe38(uVar21,0);
          plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (plVar10 != (long *)0x0) {
            System_Reflection_Emit_DynamicMethod__get_DeclaringType(plVar10,0x31,0);
            if ((*(long *)(param_2 + 0x38) != 0) &&
               (plVar13 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar13 != (long *)0x0)) {
              plVar13 = (long *)(**(code **)(*plVar13 + 0x388))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x390));
              puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              goto LAB_015dc684;
            }
          }
        }
        break;
      }
      if (((*(long *)(param_2 + 0x38) == 0) ||
          (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar10 == (long *)0x0)) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                      (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x2f0)),
         plVar10 == (long *)0x0)) break;
      bVar7 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      uVar11 = FUN_015bee9c(plVar10,0,0);
      uVar11 = FUN_015bf838(uVar11,0);
      uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar3,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar1,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar4,0);
          if ((uVar12 & 1) == 0) {
            thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar5,0);
          }
        }
        else {
          lVar18 = FUN_015bee9c(plVar10,1,0);
          if (lVar18 == 0) break;
          lVar20 = FUN_015bee9c(lVar18,0,0);
        }
      }
      else {
        lVar18 = FUN_015bee9c(plVar10,1,0);
        if (lVar18 == 0) break;
        uVar21 = FUN_015bee9c(lVar18,0,0);
        uVar21 = FUN_015bf838(uVar21,0);
      }
      lVar18 = *(long *)(param_2 + 0x38);
      iVar9 = iVar9 + 1;
      if (lVar18 == 0) break;
    }
  }
  goto LAB_015dc5a8;
LAB_015dc684:
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar3;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12a);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_015dc6d0;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_00d59724(plVar13,lVar18,0);
LAB_015dc6d0:
  uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if ((uVar12 & 1) == 0) {
    plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)puVar1);
    if (plVar13 == (long *)0x0) goto LAB_015dc800;
    lVar20 = *plVar13;
    lVar18 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar12 == 0) goto LAB_015dc7d8;
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    goto LAB_015dc7c0;
  }
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar3;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12a);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_015dc730;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_00d59724(plVar13,lVar18,1);
LAB_015dc730:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 != (long *)0x0) {
    bVar7 = *(byte *)(*(long *)puVar2 + 300);
    if ((*(byte *)(*plVar15 + 300) < bVar7) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar15);
    }
  }
  FUN_015be654(plVar10,plVar15,0);
  goto LAB_015dc684;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar19 = piVar19 + 4;
    if (uVar12 == 0) break;
LAB_015dc7c0:
    if (*(long *)(piVar19 + -2) == lVar18) {
      puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_015dc7f4;
    }
  }
LAB_015dc7d8:
  puVar14 = (undefined8 *)FUN_00d59724(plVar13,lVar18,0);
LAB_015dc7f4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_015dc800:
  (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
  uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
  uVar11 = FUN_0162cbac(param_4,uVar11,0);
  if (*(long *)(param_2 + 0x38) != 0) {
    lVar18 = FUN_015c1afc(*(long *)(param_2 + 0x38),0);
    lVar20 = *(long *)(param_2 + 0x38);
    if (lVar20 != 0) {
      uVar22 = *(undefined8 *)(lVar20 + 0x38);
      uVar16 = FUN_015c1a70(lVar20,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        lVar20 = FUN_015c496c(*(long *)(param_1 + 0x58),0);
        puVar1 = Method_System_Dynamic_Utils_ExpressionUtils_RequiresCanRead__;
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          do {
            do {
              uVar12 = FUN_015c4d58(lVar20,0);
              if ((uVar12 & 1) == 0) goto LAB_015dc980;
              plVar10 = (long *)FUN_015c49cc(lVar20,0);
              uVar12 = FUN_015dcda0(plVar10,uVar22,uVar16,plVar10);
            } while ((uVar12 & 1) == 0);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar17 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          } while (*(int *)(lVar17 + 0x18) <= *(int *)(lVar18 + 0x18) >> 3);
          *(long **)(param_1 + 0x70) = plVar10;
          plVar13 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*plVar13 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          uVar12 = FUN_01638364(plVar13,uVar11,uVar21,lVar18,0);
        } while ((uVar12 & 1) == 0);
        if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_015cd670(*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x58),0);
        if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar7 = FUN_015cd688(*(long *)(param_1 + 0x88),plVar10,0);
        *(byte *)(param_1 + 0x7c) = bVar7 & 1;
LAB_015dc980:
        puVar1 = StringLiteral_10310;
        plVar10 = (long *)thunk_FUN_00d6225c(lVar20,*(undefined8 *)StringLiteral_10310);
        if (plVar10 != (long *)0x0) {
          lVar20 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar12 != 0) {
            piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_015dc9ec;
              }
              uVar12 = uVar12 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar12 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,0);
LAB_015dc9ec:
          (*(code *)*puVar14)(plVar10,puVar14[1]);
        }
        puVar1 = Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>_get_Data__;
        if ((*(long *)(param_2 + 0x38) != 0) &&
           (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 != (long *)0x0)) {
          iVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
          if (iVar9 == 0) {
            *(undefined1 *)(param_1 + 0x7d) = 1;
LAB_015dcb4c:
            bVar6 = false;
            if (*(char *)(param_1 + 0x7c) != '\0') {
              bVar6 = *(char *)(param_1 + 0x7d) != '\0';
            }
            return bVar6;
          }
          lVar20 = *(long *)(param_2 + 0x38);
          if (lVar20 != 0) {
            iVar9 = 0;
            while (plVar10 = *(long **)(lVar20 + 0x28), plVar10 != (long *)0x0) {
              iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              if (iVar8 <= iVar9) goto LAB_015dcb4c;
              if (((*(long *)(param_2 + 0x38) == 0) ||
                  (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 == (long *)0x0))
                 || (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                                 (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x2f0)),
                    plVar10 == (long *)0x0)) break;
              bVar7 = *(byte *)(*(long *)puVar2 + 300);
              if ((*(byte *)(*plVar10 + 300) < bVar7) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2))
              {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar10);
              }
              uVar21 = FUN_015bee9c(plVar10,0,0);
              uVar21 = FUN_015bf838(uVar21,0);
              uVar12 = thunk_FUN_015fe514(uVar21,*(undefined8 *)puVar1,0);
              if ((uVar12 & 1) != 0) {
                uVar21 = FUN_015bee9c(plVar10,1,0);
                lVar20 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11035);
                if (lVar20 == 0) break;
                FUN_015c133c(lVar20,uVar21,0);
                bVar7 = FUN_015dce94(param_1,lVar20,lVar18);
                *(byte *)(param_1 + 0x7d) = bVar7 & 1;
              }
              lVar20 = *(long *)(param_2 + 0x38);
              iVar9 = iVar9 + 1;
              if (lVar20 == 0) break;
            }
          }
        }
      }
    }
  }
LAB_015dc5a8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


