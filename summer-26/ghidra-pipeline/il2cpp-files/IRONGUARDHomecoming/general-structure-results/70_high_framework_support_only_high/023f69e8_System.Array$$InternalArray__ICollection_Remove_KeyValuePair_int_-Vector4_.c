/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<int,-Vector4>>
ENTRY_POINT: 023f69e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f6bfc) */
/* WARNING: Removing unreachable block (ram,0x023f6c54) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<int,_Vector4>>
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *plVar5;
  long unaff_x27;
  long unaff_x29;
  
                    /* try { // try from 023f69f0 to 024f69f7 has its CatchHandler @ 023f69f8 */
  (*param_1)(param_2,param_3,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f69bc with catch @ 023f69f8
                       catch(type#2 @ 00000000) { ... } // from try @ 023f69f0 with catch @ 023f69f8
                        */
                    /* try { // try from 023f69fc to 024f6c17 has its CatchHandler @ 023f69fc
                       catch() { ... } // from try @ 023f69fc with catch @ 023f69fc
                       catch() { ... } // from try @ 023f6cc8 with catch @ 023f69fc
                       catch() { ... } // from try @ 023f6d88 with catch @ 023f69fc
                       catch() { ... } // from try @ 023f6e34 with catch @ 023f69fc */
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  plVar5 = *(long **)(unaff_x29 + -0x20);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f6be4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f6be4:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


