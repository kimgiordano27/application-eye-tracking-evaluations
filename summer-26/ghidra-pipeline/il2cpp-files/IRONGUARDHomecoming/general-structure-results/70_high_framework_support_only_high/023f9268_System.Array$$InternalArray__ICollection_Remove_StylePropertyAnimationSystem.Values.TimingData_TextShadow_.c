/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<StylePropertyAnimationSystem.Values.TimingData<TextShadow>>
ENTRY_POINT: 023f9268
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f93d0) */
/* WARNING: Removing unreachable block (ram,0x023f93dc) */

void System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_TimingData<TextShadow>>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *in_stack_00000008;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 023f9270 to 024f9297 has its CatchHandler @ 023f92ac */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
                    /* try { // try from 023f92a4 to 024f92ab has its CatchHandler @ 023f92ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f9270 with catch @ 023f92ac
                       catch(type#2 @ 00000000) { ... } // from try @ 023f92a4 with catch @ 023f92ac
                        */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_023f92b4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 023f9298 to 024f92a3 has its CatchHandler @ 023f8f04 */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f92b4:
  (*(code *)*puVar1)();
  FUN_023f7cf8();
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_023f9338;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f9338:
    (*(code *)*puVar1)();
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *in_stack_00000008;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f93a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_023f93a8:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


