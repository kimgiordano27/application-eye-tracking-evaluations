/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$set_Item
ENTRY_POINT: 0418b2f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0418b484) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__set_Item(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
LAB_0418b2f4:
  lVar2 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0418b33c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
                    /* try { // try from 0418b32c to 0428b33b has its CatchHandler @ 0418b33c */
LAB_0418b33c:
                    /* catch() { ... } // from try @ 0418b2b8 with catch @ 0418b33c
                       catch() { ... } // from try @ 0418b32c with catch @ 0418b33c */
                    /* try { // try from 0418b340 to 0428b343 has its CatchHandler @ 0418b34c */
                    /* try { // try from 0418b344 to 0428b34f has its CatchHandler @ 0418b160 */
  (*(code *)*puVar1)(&stack0x00000020);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0418b340 with catch @ 0418b34c
                        */
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000030;
  lVar2 = *(long *)(unaff_x21 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar3 = *(uint *)(unaff_x21 + 0x18);
  if (uVar3 == *(uint *)(lVar2 + 0x18)) {
    FUN_041898d8();
    lVar2 = *(long *)(unaff_x21 + 0x10);
    uVar3 = *(uint *)(unaff_x21 + 0x18);
  }
  *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = in_stack_00000040;
  in_stack_00000030 = in_stack_00000050;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar2 = lVar2 + (int)uVar3 * unaff_x24;
  *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
  *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
  thunk_FUN_02f411dc(lVar2 + 0x20,0);
  lVar2 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0418b2c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0418b2c4:
  uVar4 = (*(code *)*puVar1)();
  if ((uVar4 & 1) != 0) {
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02eea768(param_1);
    }
    goto LAB_0418b2f4;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0418b448;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0418b448:
    (*(code *)*puVar1)();
  }
  return;
}


