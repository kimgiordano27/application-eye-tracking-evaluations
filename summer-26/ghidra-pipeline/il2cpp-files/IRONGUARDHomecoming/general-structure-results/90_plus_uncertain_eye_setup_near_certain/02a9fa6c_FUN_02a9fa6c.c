/*
FUNCTION_NAME: FUN_02a9fa6c
ENTRY_POINT: 02a9fa6c
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


void FUN_02a9fa6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_0483102b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483102b = 1;
  }
  FUN_01bc52e4(param_1,*(undefined8 *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80),
               0xffffffff);
  plVar1 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0x100);
  if (*plVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80
                                               ) + 0x100);
  plVar1 = (long *)*puVar2;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02a9fb60;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02a9fb60:
                    /* WARNING: Could not recover jumptable at 0x02a9fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


