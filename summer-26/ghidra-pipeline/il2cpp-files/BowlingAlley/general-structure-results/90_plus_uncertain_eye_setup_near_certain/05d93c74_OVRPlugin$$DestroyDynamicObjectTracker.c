/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 05d93c74
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyDynamicObjectTracker(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_07289798);
  thunk_FUN_032e1da0(PTR_DAT_072897a0);
  thunk_FUN_032e1da0(PTR_DAT_072897a8);
                    /* try { // try from 05d93ca0 to 05e93d0f has its CatchHandler @ 05d93af8 */
  thunk_FUN_032e1da0(PTR_DAT_0727e208);
  thunk_FUN_032e1da0(PTR_DAT_0727b5a0);
  thunk_FUN_032e1da0(PTR_DAT_0727b5a8);
  thunk_FUN_032e1da0(PTR_DAT_0727e478);
  *(undefined1 *)(unaff_x20 + 0xa19) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d93bc8 with catch @ 05d93cec
                        */
    thunk_FUN_032cd7c0();
  }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d93bcc with catch @ 05d93cf0
                        */
  puVar2 = PTR_DAT_0727e208;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d93ba4 with catch @ 05d93cf4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d93c10 with catch @ 05d93cf8
                        */
  pvVar6 = (void *)FUN_05d92b8c();
  if (unaff_x22 == 0) {
    iVar5 = 0;
  }
  else {
                    /* try { // try from 05d93d10 to 05e93d13 has its CatchHandler @ 05d93d30 */
                    /* try { // try from 05d93d14 to 05e93d33 has its CatchHandler @ 05d93af8 */
    iVar5 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose();
  }
                    /* catch() { ... } // from try @ 05d93d10 with catch @ 05d93d30 */
  lVar7 = FUN_032d5d3c(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_072897a0;
  puVar2 = PTR_DAT_07289798;
                    /* try { // try from 05d93d34 to 05e93d3b has its CatchHandler @ 05d93d50 */
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto LAB_05d93ed4;
    FUN_050f8f40(&stack0x00000008);
    uVar11 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_05391a64(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_05d92b8c(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_05d92b8c(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_05391b84(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_0727e478;
  uVar9 = FUN_0597d8c0((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x24);
  }
  FUN_05d93f50(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_05d93ed4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


