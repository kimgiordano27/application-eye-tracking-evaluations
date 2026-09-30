/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03ec0f2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (ulong param_1)

{
  byte bVar1;
  void *__src;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong __n;
  long unaff_x24;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 03ec0f30 to 03fc0f3b has its CatchHandler @ 03ec0b84 */
    FUN_02d6084c(PTR_DAT_0676a110);
                    /* try { // try from 03ec0f3c to 03fc0f43 has its CatchHandler @ 03ec0f44 */
    *(undefined1 *)(unaff_x22 + 0x1ff) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ec0f08 with catch @ 03ec0f44
                       catch(type#2 @ 00000000) { ... } // from try @ 03ec0f3c with catch @ 03ec0f44
                        */
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10) + 0xfc);
  __src = (void *)thunk_FUN_02dbdd9c();
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__src,__n);
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10),
                     &stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if (unaff_x19 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0676a110 + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0676a110))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


