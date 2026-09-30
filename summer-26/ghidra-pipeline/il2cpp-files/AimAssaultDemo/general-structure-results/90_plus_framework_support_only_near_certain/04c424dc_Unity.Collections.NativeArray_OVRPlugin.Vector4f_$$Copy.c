/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04c424dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c42690) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long *plVar1;
  void *__src;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined8 *__dest;
  ulong __n;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((*(byte *)(unaff_x21 + 0x7ca) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d99120);
    FUN_0373b518(PTR_DAT_07d99128);
    *(undefined1 *)(unaff_x21 + 0x7ca) = 1;
  }
                    /* try { // try from 04c42518 to 04d42527 has its CatchHandler @ 04c42528 */
  lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar3 + 0x18) + 0xfc);
                    /* catch() { ... } // from try @ 04c4249c with catch @ 04c42528
                       catch() { ... } // from try @ 04c42518 with catch @ 04c42528 */
                    /* try { // try from 04c4252c to 04d4252f has its CatchHandler @ 04c42538 */
                    /* try { // try from 04c42530 to 04d4253b has its CatchHandler @ 04c423e4 */
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c4252c with catch @ 04c42538
                        */
  plVar1 = (long *)thunk_FUN_03799158(param_2,*(long *)(*(long *)(lVar3 + 0x10) + 0x80) + 0x40);
  if (*plVar1 != 0) {
    FUN_04586ac4(*plVar1,param_3,param_4,*(undefined8 *)PTR_DAT_07d99120);
    plVar1 = (long *)thunk_FUN_03799158(param_2,*(long *)(*(long *)(*(long *)(*(long *)(param_5 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x10) + 0x80) + 0x40);
    if (*plVar1 != 0) {
      if (*(int *)(*plVar1 + 0x20) == 0) {
        __src = (void *)thunk_FUN_03799158(param_2,*(long *)(*(long *)(*(long *)(*(long *)(param_5 +
                                                                                          0x20) +
                                                                                0xc0) + 0x10) + 0x80
                                                            ) + 0x20);
        memcpy(__dest,__src,__n);
        lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
        puVar4 = *(undefined8 **)(lVar3 + 0x20);
        uVar5 = *puVar4;
        uVar2 = thunk_FUN_03799158(param_2,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x80));
        if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18) + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x10) = __dest;
        (*(code *)puVar4[2])(uVar5,puVar4,uVar2,unaff_x29 + -0x10,__dest);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x30))(param_2);
      }
      if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


