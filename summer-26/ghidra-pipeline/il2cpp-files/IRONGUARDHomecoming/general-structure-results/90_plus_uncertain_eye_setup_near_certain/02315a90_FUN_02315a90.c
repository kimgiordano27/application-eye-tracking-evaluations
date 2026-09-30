/*
FUNCTION_NAME: FUN_02315a90
ENTRY_POINT: 02315a90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02315e4c) */

uint FUN_02315a90(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02315b44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02315b44:
    iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (param_1 != (long *)0x0) {
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *param_1;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02315bbc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_02315bbc:
      iVar3 = (*(code *)*puVar5)(param_1,puVar5[1]);
      if (iVar3 == iVar2) {
        if (iVar2 == 0) {
          uVar4 = 1;
        }
        else {
          lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44(lVar7);
          }
          lVar8 = *param_1;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02315c48;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_02315c48:
          plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar2 = 0;
          do {
            lVar7 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02315cb4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02315cb4:
            uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            if ((uVar4 & 1) == 0) break;
            lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44(lVar7);
            }
            lVar8 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02315d2c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_02315d2c:
            lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            lVar8 = **(long **)(param_3 + 0x38);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01ecaf44(lVar8);
            }
            lVar9 = *param_2;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02315da0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_02315da0:
            lVar8 = (*(code *)*puVar5)(param_2,iVar2,puVar5[1]);
            iVar2 = iVar2 + 1;
          } while (lVar7 == lVar8);
          uVar4 = uVar4 ^ 1;
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02315e1c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ecb238(plVar6,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_02315e1c:
            (*(code *)*puVar5)(plVar6,puVar5[1]);
          }
        }
      }
      else {
        uVar4 = 0;
      }
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


