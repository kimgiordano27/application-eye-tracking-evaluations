/*
FUNCTION_NAME: FUN_022fa310
ENTRY_POINT: 022fa310
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x022fa6f8) */

ulong FUN_022fa310(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ecafa0(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar5 = FUN_03971094(uVar5,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    plVar3 = (long *)thunk_FUN_01f116d0(param_1,lVar6);
    if (plVar3 == (long *)0x0) {
      lVar6 = **(long **)(param_2 + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_022fa4e0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(param_1,lVar6,0);
LAB_022fa4e0:
      plVar3 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_022fa548;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_022fa548:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
        iVar11 = 6;
        iVar2 = 6;
      }
      else {
        do {
          lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x38);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44(lVar6);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_022fa5bc;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022fa5bc:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar6 = *plVar3;
          uVar8 = uVar8 & 0xffffffff;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_022fa618;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_022fa618:
          uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        } while ((uVar9 & 1) != 0);
        iVar11 = 9;
        iVar2 = 9;
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022fa69c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_022fa69c:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        iVar2 = iVar11;
      }
      if ((iVar2 != 6) && (iVar2 != 0)) {
        return uVar8;
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_022fa440;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022fa440:
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar2) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022fa4b8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022fa4b8:
                    /* WARNING: Could not recover jumptable at 0x022fa4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        return uVar8;
      }
    }
    uVar5 = FUN_03971224(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_2);
}


