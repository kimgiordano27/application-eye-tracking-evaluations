/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bab5e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02bab78c) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<__Il2CppFullySharedGenericStructType>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  void *unaff_x22;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
code_r0x02bab5e8:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_02bab724;
                    /* try { // try from 02bab704 to 02cab763 has its CatchHandler @ 02bab7e4 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 02bab628 to 02cab66b has its CatchHandler @ 02bab7e0 */
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
                    /* try { // try from 02bab674 to 02cab69f has its CatchHandler @ 02bab7fc */
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02bab5b8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02bab5b8:
    (*(code *)*puVar1)(&stack0x00000008);
    memcpy(&stack0x000000a0,unaff_x22,0x48);
    memcpy(&stack0x00000008,&stack0x000000a0,0x48);
                    /* try { // try from 02bab6cc to 02cab6d3 has its CatchHandler @ 02bab7e0 */
    FUN_02bac7e4();
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 == 0) goto code_r0x02bab5e8;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    /* try { // try from 02bab5d4 to 02cab5fb has its CatchHandler @ 02bab7e8 */
    while (*(long *)(piVar5 + -2) != *unaff_x25) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x02bab5e8;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02bab740;
    }
  }
LAB_02bab724:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02bab740:
  (*(code *)*puVar1)();
  return;
}


