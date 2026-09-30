/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-BodyPoseComparerActiveState.BodyPoseComparerFeatureState>>
ENTRY_POINT: 023f7330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f740c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *in_x9;
  ulong uVar3;
  int *piVar4;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long unaff_x28;
  long unaff_x29;
  
  (*in_x9)(param_1,param_3,0);
                    /* try { // try from 023f7348 to 024f7353 has its CatchHandler @ 023f6e4c */
  memcpy(unaff_x23,unaff_x22,unaff_x21);
                    /* try { // try from 023f7354 to 024f735b has its CatchHandler @ 023f735c */
  lVar2 = *unaff_x20;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f7320 with catch @ 023f735c
                       catch(type#2 @ 00000000) { ... } // from try @ 023f7354 with catch @ 023f735c
                        */
                    /* try { // try from 023f7360 to 024f745f has its CatchHandler @ 023f7360
                       catch() { ... } // from try @ 023f7360 with catch @ 023f7360
                       catch() { ... } // from try @ 023f7514 with catch @ 023f7360
                       catch() { ... } // from try @ 023f75f4 with catch @ 023f7360
                       catch() { ... } // from try @ 023f76a4 with catch @ 023f7360 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f73a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f73a8:
  (*(code *)*puVar1)();
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


