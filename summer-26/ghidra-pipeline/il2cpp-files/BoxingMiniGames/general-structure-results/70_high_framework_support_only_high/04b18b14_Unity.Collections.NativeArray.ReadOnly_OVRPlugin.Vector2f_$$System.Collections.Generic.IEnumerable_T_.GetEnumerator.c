/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04b18b14
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *__src;
  long lVar9;
  ulong __n;
  void *__s;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  uVar5 = *(uint *)(*(long *)(unaff_x26 + 0x20) + 0xfc);
  __n = (ulong)uVar5;
  if ((*(ushort *)(*(long *)(unaff_x26 + 0x20) + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
    uVar5 = *(uint *)(lVar2 + 0xfc);
                    /* catch() { ... } // from try @ 04b18c84 with catch @ 04b18b38
                       catch() { ... } // from try @ 04b18cc0 with catch @ 04b18b38
                       catch() { ... } // from try @ 04b18cfc with catch @ 04b18b38
                       catch() { ... } // from try @ 04b18d28 with catch @ 04b18b38
                       catch() { ... } // from try @ 04b18d9c with catch @ 04b18b38 */
  }
  lVar2 = (long)&stack0x00000000 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(lVar2 - uVar8);
                    /* try { // try from 04b18b6c to 04c18b6f has its CatchHandler @ 04b18c84 */
  __s = (void *)((long)__src - uVar8);
  memset(__s,0,__n);
                    /* try { // try from 04b18b8c to 04c18c83 has its CatchHandler @ 04b18c90 */
  plVar3 = (long *)thunk_FUN_036a1ed0();
  if (*plVar3 == 0) {
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      (**(code **)(*(long *)(lVar9 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar9 + 0xa30) + 8));
      uVar8 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20),
                           __src);
      if ((uVar8 & 1) == 0) {
        plVar3 = (long *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
      }
      else {
        lVar9 = *unaff_x20;
        *(undefined8 **)(unaff_x29 + -0x10) = __src;
        (**(code **)(*(long *)(lVar9 + 0xa30) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar9 + 0xa30) + 8));
        memcpy(__s,__src,__n);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar9 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0367c9fc();
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_036436fc(lVar9,*(undefined8 *)(lVar7 + 0x30),lVar2,__s,0,unaff_x29 + -0x10);
        uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
        if (*(int *)(*(long *)PTR_DAT_07a00bc8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        plVar3 = (long *)FUN_0736c2bc(uVar4,0);
      }
LAB_04b18d10:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_04b18d50;
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_036a1ed0();
    if (unaff_x20 != (long *)0x0) {
      lVar2 = *unaff_x20;
      lVar9 = *plVar3;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      plVar3 = (long *)(**(code **)(*(long *)(lVar2 + 0xa30) + 0x10))
                                 (*(undefined8 *)(*(long *)(lVar2 + 0xa30) + 8));
      if (lVar9 != 0) {
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar1 = *(undefined8 **)(lVar2 + 0x28);
        uVar4 = *puVar1;
        if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
          __src = (undefined8 *)*__src;
        }
        pcVar6 = (code *)puVar1[2];
        *(undefined8 **)(unaff_x29 + -0x18) = __src;
        (*pcVar6)(uVar4,puVar1,lVar9,unaff_x29 + -0x18,unaff_x29 + -0x10);
        plVar3 = *(long **)(unaff_x29 + -0x10);
        goto LAB_04b18d10;
      }
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_04b18d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


