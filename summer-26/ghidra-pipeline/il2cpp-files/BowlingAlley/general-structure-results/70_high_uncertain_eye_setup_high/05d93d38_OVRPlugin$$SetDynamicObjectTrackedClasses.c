/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 05d93d38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDynamicObjectTrackedClasses(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char in_NG;
  char in_OV;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  uint uVar8;
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
  
  puVar3 = PTR_DAT_072897a0;
  puVar2 = PTR_DAT_07289798;
                    /* try { // try from 05d93d3c to 05e93d47 has its CatchHandler @ 05d93af8 */
  if (in_NG == in_OV) {
    if (unaff_x22 == 0) goto LAB_05d93ed4;
                    /* try { // try from 05d93d48 to 05e93d4f has its CatchHandler @ 05d93d50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d93d34 with catch @ 05d93d50
                       catch(type#2 @ 00000000) { ... } // from try @ 05d93d48 with catch @ 05d93d50
                        */
    FUN_050f8f40(&stack0x00000008);
    uVar8 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar5 = FUN_05391a64(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar6 = in_stack_00000040, (uVar5 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_05d92b8c(uVar6);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(param_1 + 0x18) <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(param_1 + (long)(int)(uVar8 - 1) * 8 + 0x20) = uVar6;
      uVar6 = FUN_05d92b8c(uVar4);
      if (*(uint *)(param_1 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar1 = (long)(int)uVar8;
      uVar8 = uVar8 + 2;
      *(undefined8 *)(param_1 + lVar1 * 8 + 0x20) = uVar6;
    }
    FUN_05391b84(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_0727e478;
  FUN_0597d8c0((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x24);
  }
  FUN_05d93f50();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  free(unaff_x20);
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar5 = 0;
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        __ptr = *(void **)(param_1 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        free(__ptr);
        uVar7 = (ulong)*(uint *)(param_1 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    return;
  }
LAB_05d93ed4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


