/*
FUNCTION_NAME: UnityEngine.Object$$Instantiate
ENTRY_POINT: 03f76b08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f773e8) */

long * UnityEngine_Object__Instantiate(long *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483b5b3 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3607);
    thunk_FUN_01efb3a4(StringLiteral_4033);
    thunk_FUN_01efb3a4(StringLiteral_3592);
    thunk_FUN_01efb3a4(PTR_DAT_045813f0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5819);
    thunk_FUN_01efb3a4(StringLiteral_5820);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045813d8);
    thunk_FUN_01efb3a4(PTR_DAT_045813e0);
    thunk_FUN_01efb3a4(PTR_DAT_045813f8);
    DAT_0483b5b3 = 1;
  }
  puVar2 = PTR_DAT_045813e0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_03ec8718(*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_045813d8;
  puVar1 = Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__;
  if (lVar6 != 0) {
    FUN_022df844(lVar6,param_1,
                 *(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    lVar6 = FUN_03ec8718(*(undefined8 *)puVar2,0);
    puVar2 = PTR_DAT_045813f8;
    if (lVar6 == 0) goto LAB_03f77380;
    FUN_022df844(lVar6,param_2,*(undefined8 *)puVar1);
    lVar6 = FUN_03ec8718(*(undefined8 *)puVar2,0);
    if (lVar6 == 0) goto LAB_03f77380;
    FUN_022df844(lVar6,param_3,*(undefined8 *)PTR_DAT_045813f0);
    if ((param_4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03f762bc(param_1,param_2);
      if ((uVar7 & 1) == 0) goto LAB_03f77388;
    }
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03582560(param_1,param_2,0);
    if ((uVar7 & 1) != 0) {
      return param_1;
    }
    if (param_1 != (long *)0x0) {
      uVar7 = (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
      if ((uVar7 & 1) == 0) {
        uVar7 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
        if ((uVar7 & 1) == 0) {
          return param_1;
        }
        uVar7 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_035841e4(param_1,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = FUN_035841f4(param_1,0);
            if ((uVar7 & 1) == 0) {
              thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
              uVar8 = thunk_FUN_01f117cc();
              FUN_0356d160(uVar8,0);
LAB_03f7740c:
              uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar8,uVar9);
            }
            if (param_2 != (long *)0x0) {
              uVar7 = FUN_035841f4(param_2,0);
              if ((uVar7 & 1) == 0) goto LAB_03f77388;
              uVar8 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
              uVar9 = (**(code **)(*param_2 + 0x438))(param_2,*(undefined8 *)(*param_2 + 0x440));
              if (*(int *)(*(long *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                                  );
              }
              plVar10 = (long *)FUN_03f76b04(uVar8,uVar9,param_3,0);
              if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f77060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar10 = (long *)(**(code **)(*plVar10 + 0x918))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x920));
                return plVar10;
              }
            }
          }
          else {
            iVar4 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
            if (param_2 != (long *)0x0) {
              uVar7 = FUN_035841e4(param_2,0);
              if (((uVar7 & 1) == 0) ||
                 (iVar5 = (**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450))
                 , iVar5 != iVar4)) goto LAB_03f77388;
              uVar8 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
              uVar9 = (**(code **)(*param_2 + 0x438))(param_2,*(undefined8 *)(*param_2 + 0x440));
              if (*(int *)(*(long *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                                  );
              }
              plVar10 = (long *)FUN_03f76b04(uVar8,uVar9,param_3,0);
              if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f76f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar10 = (long *)(**(code **)(*plVar10 + 0x908))
                                            (plVar10,iVar4,*(undefined8 *)(*plVar10 + 0x910));
                return plVar10;
              }
            }
          }
        }
        else {
          plVar10 = (long *)(**(code **)(*param_1 + 0x458))
                                      (param_1,*(undefined8 *)(*param_1 + 0x460));
          lVar6 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          if (*(int *)(*(long *)
                        Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                              );
          }
          plVar11 = (long *)FUN_03f755fc(param_2);
          if (plVar11 != (long *)0x0) {
            lVar16 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_5819) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_03f77070;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)StringLiteral_5819,0);
LAB_03f77070:
            plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            puVar3 = StringLiteral_5820;
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              do {
                lVar16 = *plVar11;
                uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar7 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_03f770e0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar7 != 0);
                }
                puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f770e0:
                uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                if ((uVar7 & 1) == 0) {
                  plVar10 = (long *)0x0;
                  iVar5 = 0x12;
                  iVar4 = 0x12;
                  goto joined_r0x03f772e8;
                }
                lVar16 = *plVar11;
                uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar7 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_03f7713c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar7 != 0);
                }
                puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03f7713c:
                plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = (**(code **)(*plVar13 + 0x3c8))(plVar13,*(undefined8 *)(*plVar13 + 0x3d0));
              } while ((uVar7 & 1) == 0);
              uVar8 = (**(code **)(*plVar13 + 0x458))(plVar13,*(undefined8 *)(*plVar13 + 0x460));
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar7 = FUN_03582560(uVar8,plVar10,0);
            } while ((uVar7 & 1) == 0);
            lVar16 = (**(code **)(*plVar13 + 0x478))(plVar13,*(undefined8 *)(*plVar13 + 0x480));
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                           ,*(undefined4 *)(lVar6 + 0x18));
            if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
              uVar7 = 0;
              uVar17 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
              plVar19 = plVar13 + 4;
              do {
                if (uVar17 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar16 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar9 = *(undefined8 *)(lVar16 + 0x20 + uVar7 * 8);
                uVar8 = *(undefined8 *)(lVar6 + 0x20 + uVar7 * 8);
                if (*(int *)(*(long *)
                              Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                lVar14 = FUN_03f76b04(uVar8,uVar9,param_3,0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if ((lVar14 != 0) &&
                   (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar15 == 0)) {
                  uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar8,0);
                }
                if (*(uint *)(plVar13 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *plVar19 = lVar14;
                thunk_FUN_01f51358(plVar19,lVar14);
                uVar7 = uVar7 + 1;
                plVar19 = plVar19 + 1;
                uVar17 = (ulong)*(uint *)(lVar6 + 0x18);
              } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar10 = (long *)(**(code **)(*plVar10 + 0x928))
                                        (plVar10,plVar13,*(undefined8 *)(*plVar10 + 0x930));
            iVar5 = 0x11;
            iVar4 = 0x11;
joined_r0x03f772e8:
            if (plVar11 != (long *)0x0) {
              lVar6 = *plVar11;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar12 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_03f77340;
                  }
                  uVar7 = uVar7 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar7 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01ecb238(plVar11,*(long *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     ,0);
LAB_03f77340:
              (*(code *)*puVar12)(plVar11,puVar12[1]);
              iVar4 = iVar5;
            }
            if ((iVar4 != 0x12) && (iVar4 != 0)) {
              return plVar10;
            }
LAB_03f77388:
            thunk_FUN_01efb3a4(PTR_DAT_04581408);
            uVar8 = thunk_FUN_01f117cc();
            FUN_03ee3bac(uVar8,param_1,param_2,0);
            uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar8,uVar9);
          }
        }
      }
      else if (param_2 != (long *)0x0) {
        uVar7 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        if ((uVar7 & 1) == 0) {
          if (param_3 == 0) goto LAB_03f77380;
          uVar7 = FUN_02b6b4d8(param_3,param_1,*(undefined8 *)StringLiteral_4033);
          if ((uVar7 & 1) == 0) {
            FUN_02b6b2e4(param_3,param_1,param_2,*(undefined8 *)StringLiteral_3607);
          }
          else {
            uVar8 = FUN_02b6b264(param_3,param_1,*(undefined8 *)StringLiteral_3592);
            lVar6 = *(long *)puVar1;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar6);
            }
            uVar7 = FUN_03583338(uVar8,param_2,0);
            if ((uVar7 & 1) != 0) {
              thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
              uVar8 = thunk_FUN_01f117cc();
              uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04581400);
              FUN_0356adc8(uVar8,uVar9,0);
              goto LAB_03f7740c;
            }
          }
        }
        return param_2;
      }
    }
  }
LAB_03f77380:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


