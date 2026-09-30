/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<HashSet.Slot<Vector3Int>>
ENTRY_POINT: 023f85c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f8884) */

void System_Array__InternalArray__ICollection_Remove<HashSet_Slot<Vector3Int>>(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long lVar6;
  size_t unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if (*(int *)(**(long **)(param_1 + 0x7b0) + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 023f85d8 to 024f85ff has its CatchHandler @ 023f8774 */
  lVar1 = (**(code **)**(undefined8 **)(unaff_x24 + 0x38))();
  lVar6 = *(long *)(unaff_x24 + 0x38);
  if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x23,unaff_x22,unaff_x25);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar3 = *(undefined8 **)(lVar6 + 0x18);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
  *(long **)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar3[2])(uVar2,puVar3,lVar1,unaff_x29 + -0x18);
  lVar1 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x28) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
        ;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();

  System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
  :
  (*(code *)*puVar3)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar1 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f87ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_023f87ec:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


