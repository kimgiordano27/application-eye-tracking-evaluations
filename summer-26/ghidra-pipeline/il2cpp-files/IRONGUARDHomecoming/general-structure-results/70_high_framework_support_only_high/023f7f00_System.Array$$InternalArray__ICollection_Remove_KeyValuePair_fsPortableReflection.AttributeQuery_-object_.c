/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<fsPortableReflection.AttributeQuery,-object>>
ENTRY_POINT: 023f7f00
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


/* WARNING: Removing unreachable block (ram,0x023f804c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<fsPortableReflection_AttributeQuery,_object>>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
                    /* catch() { ... } // from try @ 023f7efc with catch @ 023f7f18 */
  if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(param_1 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1
     )) {
    FUN_0390f94c();
  }
  else {
    FUN_02710938();
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_023f7f8c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f7f8c:
  (*(code *)*puVar1)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f8008;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f8008:
  (*(code *)*puVar1)();
  return;
}


