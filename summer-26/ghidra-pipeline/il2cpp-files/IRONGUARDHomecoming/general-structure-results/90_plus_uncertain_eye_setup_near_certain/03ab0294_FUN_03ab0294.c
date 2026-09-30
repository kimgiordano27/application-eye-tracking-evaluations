/*
FUNCTION_NAME: FUN_03ab0294
ENTRY_POINT: 03ab0294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_03ab0294(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 local_30 [16];
  
  if ((DAT_04838fe0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838fe0 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_03ab0408;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,1);
LAB_03ab0408:
      plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
      if (plVar6 != (long *)0x0) {
        if (*(long *)(*plVar6 + 0x40) ==
            *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
          lVar3 = thunk_FUN_01f11920();
          return *(undefined8 *)(lVar3 + 8);
        }
        goto LAB_03ab0454;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      local_30 = FUN_03ab0458(param_1);
      uVar2 = thunk_FUN_01f113fc(*(undefined8 *)Method_System_Linq_Enumerable_ToList<BezierKnot>__,
                                 local_30);
      return uVar2;
    }
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_03ab03bc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,1);
LAB_03ab03bc:
      plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
      if (plVar6 != (long *)0x0) {
        if (*(long *)(*plVar6 + 0x40) ==
            *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
          puVar1 = (undefined8 *)thunk_FUN_01f11920();
          return *puVar1;
        }
LAB_03ab0454:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


