/*
FUNCTION_NAME: Unity.Collections.NativeQueue<__Il2CppFullySharedGenericStructType>$$ToArray
ENTRY_POINT: 0321b32c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0321b440) */
/* WARNING: Removing unreachable block (ram,0x0321b43c) */
/* WARNING: Removing unreachable block (ram,0x0321b484) */

void Unity_Collections_NativeQueue<__Il2CppFullySharedGenericStructType>__ToArray(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
LAB_0321b330:
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0321b2b4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0321b2b4:
  (*(code *)*puVar1)(&stack0x00000030);
  FUN_0321ad40();
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0321b300;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0321b2e4 to 0331b2e7 has its CatchHandler @ 0321b3f0 */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0321b300:
                    /* try { // try from 0321b300 to 0331b3ef has its CatchHandler @ 0321b3fc */
  uVar3 = (*(code *)*puVar1)();
  if ((uVar3 & 1) != 0) {
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_01ecaf44(param_1);
    }
    goto LAB_0321b330;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0321b2e4 with catch @ 0321b3f0
                       try { // try from 0321b3f0 to 0331b413 has its CatchHandler @ 0321b2b0 */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0321b424;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0321b300 with catch @ 0321b3fc
                        */
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 0321b414 to 0331b42b has its CatchHandler @ 0321b500 */
LAB_0321b424:
                    /* try { // try from 0321b42c to 0331b44f has its CatchHandler @ 0321b2b0 */
    (*(code *)*puVar1)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 0321b468 to 0331b47b has its CatchHandler @ 0321b2b0 */
  return;
}


