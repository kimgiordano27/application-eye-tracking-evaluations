/*
FUNCTION_NAME: FUN_02f1efcc
ENTRY_POINT: 02f1efcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02f1f3f4) */

void FUN_02f1efcc(int *param_1,long *param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0483195f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Encode__);
    DAT_0483195f = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<SimpleCapsuleWithStickMovement>__
                              );
    FUN_034efd20(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_5);
  }
  if (param_3 < 0) {
    lVar9 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    param_3 = FUN_022f1850(param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x88));
  }
  if (param_4 < 0) {
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    param_4 = *param_1;
  }
  if (param_3 != 0) {
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    if ((DAT_0483195a & 1) == 0) {
      thunk_FUN_01efb3a4(
                        Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                        );
      DAT_0483195a = 1;
    }
    iVar8 = 0;
    if (*(long *)(param_1 + 2) != 0) {
      iVar8 = param_1[4];
    }
    iVar1 = *param_1;
    if (iVar8 < iVar1 + param_3) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0356bc8c(iVar1 + param_3,10,0);
      lVar9 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      FUN_02f1e5d4(param_1,uVar3,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
    }
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar8 = *param_1;
    if (param_4 < iVar8) {
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar7 = *(undefined8 *)(param_1 + 4);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
        iVar8 = *param_1;
      }
      FUN_032ea8c8(uVar6,uVar7,param_4,uVar6,uVar7,param_4 + param_3,iVar8 - param_4,
                   *(undefined8 *)Method_System_Globalization_Bootstring_Encode__);
    }
    lVar9 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02f1f200;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
LAB_02f1f200:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f1f268;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02f1f268:
      uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar11 & 1) == 0) break;
      lVar9 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f1f2ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_02f1f2ec:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar6 = FUN_02f1fe48(uVar6);
      param_3 = param_3 + -1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_4 * 8) = uVar6;
      param_4 = param_4 + 1;
      *param_1 = *param_1 + 1;
    } while (param_3 != 0);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f1f390;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02f1f390:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
  }
  return;
}


