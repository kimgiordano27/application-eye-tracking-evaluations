/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<StylePropertyAnimationSystem.ElementPropertyPair,-object>>
ENTRY_POINT: 023f7e70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f804c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_object>>
               (void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  
  lVar1 = FUN_023f9e30();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02710938();
  lVar1 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_023f7f8c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f7f8c:
  (*(code *)*puVar2)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar1 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f8008;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023f8008:
  (*(code *)*puVar2)();
  return;
}


