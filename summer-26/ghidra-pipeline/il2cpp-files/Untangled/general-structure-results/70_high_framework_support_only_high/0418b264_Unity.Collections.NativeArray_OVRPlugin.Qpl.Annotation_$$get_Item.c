/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Item
ENTRY_POINT: 0418b264
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0418b484) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Item(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* try { // try from 0418b264 to 0428b29f has its CatchHandler @ 0418b2a0 */
  puVar1 = PTR_DAT_06d02048;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar3 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* try { // try from 0418b2b8 to 0428b2cf has its CatchHandler @ 0418b33c */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0418b2c4;
        }
        uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0418b1a8 with catch @ 0418b2a0
                       catch(type#1 @ 069384f8) { ... } // from try @ 0418b264 with catch @ 0418b2a0
                       try { // try from 0418b2a0 to 0428b2b7 has its CatchHandler @ 0418b160 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar1,0);
LAB_0418b2c4:
    uVar6 = (*(code *)*puVar2)(param_1,puVar2[1]);
                    /* try { // try from 0418b2d0 to 0428b32b has its CatchHandler @ 0418b160 */
    if ((uVar6 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      lVar3 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_0418b42c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0418b33c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_1,lVar3,0);
LAB_0418b33c:
    (*(code *)*puVar2)(&stack0x00000020,param_1,puVar2[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000030;
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_041898d8();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000030 = in_stack_00000050;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * 0x18;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000050;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000040;
    thunk_FUN_02f411dc(lVar3 + 0x20,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0418b448;
    }
  }
LAB_0418b42c:
  puVar2 = (undefined8 *)FUN_02eea86c(param_1,*unaff_x22,0);
LAB_0418b448:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


