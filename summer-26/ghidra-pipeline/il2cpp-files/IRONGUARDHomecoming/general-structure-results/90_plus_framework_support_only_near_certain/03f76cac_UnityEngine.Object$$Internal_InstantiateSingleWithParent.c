/*
FUNCTION_NAME: UnityEngine.Object$$Internal_InstantiateSingleWithParent
ENTRY_POINT: 03f76cac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f773e8) */

long * UnityEngine_Object__Internal_InstantiateSingleWithParent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int in_w8;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar19;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03f762bc();
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar6 & 1) == 0) {
LAB_03f77388:
    thunk_FUN_01efb3a4(PTR_DAT_04581408);
    uVar7 = thunk_FUN_01f117cc();
    FUN_03ee3bac();
    uVar8 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03582560();
  if ((uVar6 & 1) != 0) {
    return unaff_x20;
  }
  if (unaff_x20 != (long *)0x0) {
    uVar6 = (**(code **)(*unaff_x20 + 0x3a8))();
    if ((uVar6 & 1) == 0) {
      uVar6 = (**(code **)(*unaff_x20 + 0x288))();
      if ((uVar6 & 1) == 0) {
        return unaff_x20;
      }
      uVar6 = (**(code **)(*unaff_x20 + 0x3c8))();
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_035841e4();
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_035841f4();
          if ((uVar6 & 1) == 0) {
            thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
            uVar7 = thunk_FUN_01f117cc();
            FUN_0356d160(uVar7,0);
LAB_03f7740c:
            uVar8 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,uVar8);
          }
          if (unaff_x19 != (long *)0x0) {
            uVar6 = FUN_035841f4();
            if ((uVar6 & 1) == 0) goto LAB_03f77388;
            uVar7 = (**(code **)(*unaff_x20 + 0x438))();
            uVar8 = (**(code **)(*unaff_x19 + 0x438))();
            if (*(int *)(*(long *)
                          Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                                );
            }
            plVar9 = (long *)FUN_03f76b04(uVar7,uVar8);
            if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f77060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar9 = (long *)(**(code **)(*plVar9 + 0x918))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x920));
              return plVar9;
            }
          }
        }
        else {
          iVar4 = (**(code **)(*unaff_x20 + 0x448))();
          if (unaff_x19 != (long *)0x0) {
            uVar6 = FUN_035841e4();
            if (((uVar6 & 1) == 0) || (iVar5 = (**(code **)(*unaff_x19 + 0x448))(), iVar5 != iVar4))
            goto LAB_03f77388;
            uVar7 = (**(code **)(*unaff_x20 + 0x438))();
            uVar8 = (**(code **)(*unaff_x19 + 0x438))();
            if (*(int *)(*(long *)
                          Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                                );
            }
            plVar9 = (long *)FUN_03f76b04(uVar7,uVar8);
            if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f76f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar9 = (long *)(**(code **)(*plVar9 + 0x908))
                                         (plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x910));
              return plVar9;
            }
          }
        }
      }
      else {
        plVar9 = (long *)(**(code **)(*unaff_x20 + 0x458))();
        lVar15 = (**(code **)(*unaff_x20 + 0x478))();
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                            );
        }
        plVar10 = (long *)FUN_03f755fc();
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar6 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_5819) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03f77070;
              }
              uVar6 = uVar6 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_5819,0);
LAB_03f77070:
          plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar3 = StringLiteral_5820;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            do {
              lVar16 = *plVar10;
              uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar6 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_03f770e0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03f770e0:
              uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar6 & 1) == 0) {
                plVar9 = (long *)0x0;
                iVar5 = 0x12;
                iVar4 = 0x12;
                goto joined_r0x03f772e8;
              }
              lVar16 = *plVar10;
              uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar6 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_03f7713c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03f7713c:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar6 = (**(code **)(*plVar12 + 0x3c8))(plVar12,*(undefined8 *)(*plVar12 + 0x3d0));
            } while ((uVar6 & 1) == 0);
            uVar7 = (**(code **)(*plVar12 + 0x458))(plVar12,*(undefined8 *)(*plVar12 + 0x460));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar6 = FUN_03582560(uVar7,plVar9,0);
          } while ((uVar6 & 1) == 0);
          lVar16 = (**(code **)(*plVar12 + 0x478))(plVar12,*(undefined8 *)(*plVar12 + 0x480));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar12 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                         ,*(undefined4 *)(lVar15 + 0x18));
          if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
            uVar6 = 0;
            uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
            plVar19 = plVar12 + 4;
            do {
              if (uVar17 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar8 = *(undefined8 *)(lVar16 + 0x20 + uVar6 * 8);
              uVar7 = *(undefined8 *)(lVar15 + 0x20 + uVar6 * 8);
              if (*(int *)(*(long *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar13 = FUN_03f76b04(uVar7,uVar8);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)
                 ) {
                uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar7,0);
              }
              if (*(uint *)(plVar12 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *plVar19 = lVar13;
              thunk_FUN_01f51358(plVar19,lVar13);
              uVar6 = uVar6 + 1;
              plVar19 = plVar19 + 1;
              uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar9 = (long *)(**(code **)(*plVar9 + 0x928))
                                     (plVar9,plVar12,*(undefined8 *)(*plVar9 + 0x930));
          iVar5 = 0x11;
          iVar4 = 0x11;
joined_r0x03f772e8:
          if (plVar10 != (long *)0x0) {
            lVar15 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar6 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_03f77340;
                }
                uVar6 = uVar6 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar10,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_03f77340:
            (*(code *)*puVar11)(plVar10,puVar11[1]);
            iVar4 = iVar5;
          }
          if ((iVar4 != 0x12) && (iVar4 != 0)) {
            return plVar9;
          }
          goto LAB_03f77388;
        }
      }
    }
    else if (unaff_x19 != (long *)0x0) {
      uVar6 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar6 & 1) == 0) {
        if (unaff_x21 == 0) goto LAB_03f77380;
        uVar6 = FUN_02b6b4d8();
        if ((uVar6 & 1) == 0) {
          FUN_02b6b2e4();
        }
        else {
          uVar7 = FUN_02b6b264();
          lVar15 = *(long *)puVar1;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar15);
          }
          uVar6 = FUN_03583338(uVar7);
          if ((uVar6 & 1) != 0) {
            thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
            uVar7 = thunk_FUN_01f117cc();
            uVar8 = thunk_FUN_01efb3a4(PTR_DAT_04581400);
            FUN_0356adc8(uVar7,uVar8,0);
            goto LAB_03f7740c;
          }
        }
      }
      return unaff_x19;
    }
  }
LAB_03f77380:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


