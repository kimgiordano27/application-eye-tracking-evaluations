/*
FUNCTION_NAME: FUN_0230628c
ENTRY_POINT: 0230628c
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


/* WARNING: Removing unreachable block (ram,0x0230667c) */

undefined8 FUN_0230628c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ecafa0(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar7 = FUN_03971094(uVar7,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    plVar5 = (long *)thunk_FUN_01f116d0(param_1,lVar8);
    if (plVar5 == (long *)0x0) {
      lVar8 = **(long **)(param_2 + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar10 = *param_1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0230645c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_1,lVar8,0);
LAB_0230645c:
      plVar5 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_023064c4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_023064c4:
      uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        uVar7 = FUN_03971224(0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,param_2);
      }
      lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02306538;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_02306538:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02306594;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02306594:
      uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      bVar3 = (uVar11 & 1) == 0;
      uVar9 = 8;
      if (bVar3) {
        uVar9 = 0xf;
      }
      uVar1 = 0;
      if (bVar3) {
        uVar1 = uVar7;
      }
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02306610;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_02306610:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      if ((uVar9 | 8) != 8) {
        return uVar1;
      }
    }
    else {
      lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_023063bc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_023063bc:
      iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar4 == 1) {
        lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02306434;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_02306434:
                    /* WARNING: Could not recover jumptable at 0x0230644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)*puVar6)(plVar5,0,puVar6[1]);
        return uVar7;
      }
      if (iVar4 == 0) {
        uVar7 = FUN_03971224(0);
        goto LAB_02306670;
      }
    }
    uVar7 = FUN_0397114c(0);
  }
LAB_02306670:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_2);
}


