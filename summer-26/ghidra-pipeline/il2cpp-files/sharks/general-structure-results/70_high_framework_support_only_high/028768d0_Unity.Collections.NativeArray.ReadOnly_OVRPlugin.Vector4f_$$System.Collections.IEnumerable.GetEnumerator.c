/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 028768d0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_x9;
  ulong in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *__dest;
  long lVar9;
  undefined8 uVar10;
  long unaff_x29;
  
  __dest = (undefined8 *)(in_x11 - (in_x12 + 0xfU & 0x1fffffff0));
  if ((in_x10 & 1) == 0) {
                    /* try { // try from 028768e4 to 0297693f has its CatchHandler @ 028767c0 */
    param_1 = FUN_0185daa4(param_1);
    in_x9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  FUN_017fce8c(param_1,*(undefined8 *)(in_x9 + 0xf0));
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (lVar5 == 0) {
Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar2 = *(uint *)(unaff_x29 + -0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x1c);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar1 = uVar2 - uVar3 * uVar1;
                    /* try { // try from 02876940 to 0297694f has its CatchHandler @ 02876950 */
  if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_02876af0:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
  uVar1 = *(uint *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
                    /* catch() { ... } // from try @ 028768cc with catch @ 02876950
                       catch() { ... } // from try @ 02876940 with catch @ 02876950 */
  while (uVar1 != 0) {
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
    if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_02876af0;
    lVar5 = (long)(int)uVar1;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar6 +
                                        (ulong)*(uint *)(*plVar6 + 0x104) * lVar5 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x40);
    if (*puVar4 == uVar2) {
      plVar6 = *(long **)(unaff_x20 + 0x28);
      if (plVar6 == (long *)0x0)
      goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      __src = *(void **)(unaff_x29 + -0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x60) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x28));
      lVar7 = *(long *)(lVar9 + 0xc0);
      lVar9 = *(long *)(lVar7 + 0x60);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4(lVar9);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_02876af0;
      uVar10 = *(undefined8 *)(lVar7 + 0xe0);
      thunk_FUN_018445e8((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar5 + 0x20,
                         *(long *)(*(long *)(lVar7 + 0xa0) + 0x80) + 0x60);
      puVar8 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_017fce8c(lVar9,uVar10);
      if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    }
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
    if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_02876af0;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar6 +
                                        (ulong)*(uint *)(*plVar6 + 0x104) * lVar5 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x20);
    uVar1 = *puVar4;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


