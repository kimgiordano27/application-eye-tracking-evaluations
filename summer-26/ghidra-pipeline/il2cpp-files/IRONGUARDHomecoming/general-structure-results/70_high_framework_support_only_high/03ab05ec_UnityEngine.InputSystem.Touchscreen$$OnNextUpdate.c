/*
FUNCTION_NAME: UnityEngine.InputSystem.Touchscreen$$OnNextUpdate
ENTRY_POINT: 03ab05ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_InputSystem_Touchscreen__OnNextUpdate(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04838fe2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838fe2 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_03ab0684;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,1);
LAB_03ab0684:
    plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) ==
          *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
        puVar1 = (undefined8 *)thunk_FUN_01f11920();
        return *puVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


