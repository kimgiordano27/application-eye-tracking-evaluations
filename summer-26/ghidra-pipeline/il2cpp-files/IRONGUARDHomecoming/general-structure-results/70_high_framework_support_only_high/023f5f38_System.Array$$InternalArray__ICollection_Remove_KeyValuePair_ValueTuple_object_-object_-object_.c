/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<ValueTuple<object,-object>,-object>>
ENTRY_POINT: 023f5f38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f6024) */

long System_Array__InternalArray__ICollection_Remove<KeyValuePair<ValueTuple<object,_object>,_object>>
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  long lVar6;
  
  lVar1 = (**(code **)(param_1 + 0x178))();
  lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01f116d0(lVar1,lVar6);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar6);
    }
  }
  lVar1 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f5fe8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_023f5fe8:
  (*(code *)*puVar3)();
  return lVar2;
}


