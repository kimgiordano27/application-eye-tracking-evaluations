/*
FUNCTION_NAME: FUN_041a80e0
ENTRY_POINT: 041a80e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x041a833c) */
/* WARNING: Removing unreachable block (ram,0x041a8314) */

undefined4 FUN_041a80e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_04840d12 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04840d12 = 1;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (lVar6 != 0) {
      FUN_041ab944(lVar6);
      plVar7 = *(long **)(lVar6 + 0x20);
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_041a81ac;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                              ,0);
LAB_041a81ac:
        plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
        puVar2 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar6 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_041a821c;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_041a821c:
          uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto LAB_041a8308;
            lVar6 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 == 0) goto LAB_041a82e0;
            piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_041a82c8;
          }
          lVar6 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_041a8278;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_041a8278:
          lVar6 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(lVar6 + 0x5c);
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_041a831c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_041a82c8:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_041a82fc;
    }
  }
LAB_041a82e0:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_041a82fc:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
LAB_041a8308:
  *(undefined1 *)(param_1 + 0x2c) = 0;
LAB_041a831c:
  return *(undefined4 *)(param_1 + 0x28);
}


