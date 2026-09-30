/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04b18d80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  void *unaff_x19;
  long unaff_x20;
  undefined8 *__dest;
  ulong __n;
  long unaff_x25;
  long lVar11;
  long lVar12;
  long unaff_x29;
  
                    /* try { // try from 04b18d84 to 04c18d93 has its CatchHandler @ 04b18d94 */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x25 + 0x28);
  lVar6 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x20) = param_2;
                    /* catch() { ... } // from try @ 04b18ca8 with catch @ 04b18d94
                       catch() { ... } // from try @ 04b18ce4 with catch @ 04b18d94
                       catch() { ... } // from try @ 04b18d10 with catch @ 04b18d94
                       catch() { ... } // from try @ 04b18d84 with catch @ 04b18d94 */
  plVar9 = *(long **)(lVar6 + 0xc0);
                    /* try { // try from 04b18d98 to 04c18d9b has its CatchHandler @ 04b18da4 */
  lVar6 = plVar9[4];
                    /* try { // try from 04b18d9c to 04c18da7 has its CatchHandler @ 04b18b38 */
  uVar5 = *(uint *)(lVar6 + 0xfc);
  __n = (ulong)uVar5;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04b18d98 with catch @ 04b18da4
                        */
                    /* catch() { ... } // from try @ 04b18e3c with catch @ 04b18da8
                       catch() { ... } // from try @ 04b18e88 with catch @ 04b18da8
                       catch() { ... } // from try @ 04b18eb4 with catch @ 04b18da8
                       catch() { ... } // from try @ 04b18f28 with catch @ 04b18da8 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
    uVar5 = *(uint *)(lVar6 + 0xfc);
    plVar9 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  lVar6 = (long)&stack0x00000000 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
                    /* try { // try from 04b18de4 to 04c18de7 has its CatchHandler @ 04b18e50 */
  __dest = (undefined8 *)(lVar6 - (__n + 0xf & 0x1fffffff0));
  plVar9 = (long *)thunk_FUN_036a1ed0(param_1,*(long *)(*plVar9 + 0x80) + 0xe0);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  plVar7 = *(long **)(lVar11 + 0xc0);
  if (*plVar9 == 0) {
    pvVar1 = unaff_x19;
    if (-1 < *(int *)(plVar7[4] + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,pvVar1,__n);
    uVar3 = FUN_03642bb8(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20),__dest);
    if ((uVar3 & 1) != 0) {
      plVar9 = (long *)thunk_FUN_036a1ed0(param_1,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0x80) + 0x40);
      lVar12 = *(long *)(unaff_x20 + 0x20);
      lVar11 = *plVar9;
      pvVar1 = unaff_x19;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x20) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      pvVar1 = memcpy(__dest,pvVar1,__n);
      if (lVar11 == 0) goto LAB_04b18fec;
      lVar12 = *(long *)(lVar12 + 0xc0);
      puVar4 = *(undefined8 **)(lVar12 + 0x40);
      uVar2 = *puVar4;
      if (-1 < *(int *)(*(long *)(lVar12 + 0x20) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar8 = (code *)puVar4[2];
      *(undefined8 **)(unaff_x29 + -0x10) = __dest;
      (*pcVar8)(uVar2,puVar4,lVar11,unaff_x29 + -0x10,unaff_x29 + -0x18);
      if (*(char *)(unaff_x29 + -0x18) != '\0') {
        lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar12 = *(long *)(lVar10 + 0x20);
        lVar11 = lVar12;
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_0367c9fc(lVar12);
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          lVar11 = *(long *)(lVar10 + 0x20);
        }
        if (-1 < *(int *)(lVar11 + 0x28)) {
          unaff_x19 = (void *)(unaff_x29 + -0x20);
        }
        FUN_036436fc(lVar12,*(undefined8 *)(lVar10 + 0x30),lVar6,unaff_x19,0,unaff_x29 + -0x10);
        goto LAB_04b18e8c;
      }
    }
    pvVar1 = (void *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
  }
  else {
    plVar9 = (long *)thunk_FUN_036a1ed0(param_1,*(long *)(*plVar7 + 0x80) + 0xe0);
    lVar11 = *(long *)(unaff_x20 + 0x20);
    lVar6 = *plVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x20) + 0x28)) {
      unaff_x19 = (void *)(unaff_x29 + -0x20);
    }
    pvVar1 = memcpy(__dest,unaff_x19,__n);
    if (lVar6 == 0) {
LAB_04b18fec:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04b19000;
    }
    lVar11 = *(long *)(lVar11 + 0xc0);
    puVar4 = *(undefined8 **)(lVar11 + 0x28);
    uVar2 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar11 + 0x20) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar8 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x18) = __dest;
    (*pcVar8)(uVar2,puVar4,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
LAB_04b18e8c:
    pvVar1 = *(void **)(unaff_x29 + -0x10);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04b19000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar1);
}


