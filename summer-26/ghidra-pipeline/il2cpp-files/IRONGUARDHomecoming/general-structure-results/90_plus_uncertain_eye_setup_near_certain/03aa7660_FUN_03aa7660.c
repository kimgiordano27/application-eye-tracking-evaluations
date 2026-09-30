/*
FUNCTION_NAME: FUN_03aa7660
ENTRY_POINT: 03aa7660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03aa774c) */
/* WARNING: Removing unreachable block (ram,0x03aa7750) */
/* WARNING: Removing unreachable block (ram,0x03aa77b8) */

void FUN_03aa7660(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04838f74 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Empty<PointableCanvasModule_Pointer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04838f74 = 1;
  }
  FUN_03a5d1e8(0);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if ((param_2 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(param_1 + 0x10);
        lVar2 = *plVar5;
        if (lVar2 != 0) {
          FUN_03a973e8(lVar2,2);
          *(undefined4 *)(lVar2 + 0x1c) = 0;
          FUN_03a9c6d4(lVar2);
          *plVar5 = 0;
          thunk_FUN_01f51358(plVar5,0);
        }
      }
      else {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_03aa776c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03aa776c:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
      }
      if (*(int *)(*(long *)Method_System_Array_Empty<PointableCanvasModule_Pointer>__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      Oculus_Interaction_Input_Hand__get_Handedness(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  FUN_03a5d1e8(0);
  return;
}


