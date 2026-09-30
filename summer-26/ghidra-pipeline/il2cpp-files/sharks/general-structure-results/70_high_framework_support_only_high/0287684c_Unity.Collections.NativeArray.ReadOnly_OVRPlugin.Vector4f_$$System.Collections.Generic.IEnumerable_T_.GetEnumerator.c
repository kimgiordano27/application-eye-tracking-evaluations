/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0287684c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  void *__src;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined8 *__dest;
  long unaff_x24;
  undefined8 uVar14;
  long unaff_x29;
  
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar11 + 0x60);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar9 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar12 = *(uint *)(lVar6 + 0xfc);
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar12;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
    uVar12 = *(uint *)(lVar6 + 0xfc);
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar6 = *(long *)(lVar11 + 0x60);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02876804 with catch @ 028768b4
                       try { // try from 028768b4 to 029768cb has its CatchHandler @ 028767c0 */
  lVar13 = lVar9 - ((ulong)(uVar12 + 0x10) + 0xf & 0x1fffffff0);
                    /* try { // try from 028768cc to 029768e3 has its CatchHandler @ 02876950 */
  __dest = (undefined8 *)(lVar13 - (*(long *)(unaff_x29 + -0x28) + 0xfU & 0x1fffffff0));
  lVar7 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar7 = *(long *)(lVar11 + 0x60);
  }
  if (-1 < *(int *)(lVar7 + 0x28)) {
    unaff_x24 = unaff_x29 + -0x20;
  }
  FUN_017fce8c(lVar6,*(undefined8 *)(lVar11 + 0xf0),lVar9,unaff_x24,0,unaff_x29 + -0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 == 0) {
Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = *(uint *)(unaff_x29 + -0x18);
  uVar12 = *(uint *)(unaff_x20 + 0x1c);
  uVar3 = 0;
  if (uVar12 != 0) {
    uVar3 = uVar1 / uVar12;
  }
  uVar12 = uVar1 - uVar3 * uVar12;
  if (*(uint *)(lVar6 + 0x18) <= uVar12) {
LAB_02876af0:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
  uVar12 = *(uint *)(lVar6 + (long)(int)uVar12 * 4 + 0x20);
  while (uVar12 != 0) {
    plVar8 = *(long **)(unaff_x20 + 0x28);
    if (plVar8 == (long *)0x0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
    if (*(uint *)(plVar8 + 3) <= uVar12) goto LAB_02876af0;
    lVar6 = (long)(int)uVar12;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar8 +
                                        (ulong)*(uint *)(*plVar8 + 0x104) * lVar6 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x40);
    if (*puVar4 == uVar1) {
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 == (long *)0x0)
      goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
      lVar11 = *(long *)(unaff_x19 + 0x20);
      __src = *(void **)(unaff_x29 + -0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x60) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x28));
      lVar9 = *(long *)(lVar11 + 0xc0);
      lVar11 = *(long *)(lVar9 + 0x60);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0185daa4(lVar11);
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar12) goto LAB_02876af0;
      uVar14 = *(undefined8 *)(lVar9 + 0xe0);
      uVar5 = thunk_FUN_018445e8((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * lVar6 + 0x20,
                                 *(long *)(*(long *)(lVar9 + 0xa0) + 0x80) + 0x60);
      puVar10 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_017fce8c(lVar11,uVar14,lVar13,uVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    }
    plVar8 = *(long **)(unaff_x20 + 0x28);
    if (plVar8 == (long *)0x0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
    if (*(uint *)(plVar8 + 3) <= uVar12) goto LAB_02876af0;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar8 +
                                        (ulong)*(uint *)(*plVar8 + 0x104) * lVar6 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x20);
    uVar12 = *puVar4;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


