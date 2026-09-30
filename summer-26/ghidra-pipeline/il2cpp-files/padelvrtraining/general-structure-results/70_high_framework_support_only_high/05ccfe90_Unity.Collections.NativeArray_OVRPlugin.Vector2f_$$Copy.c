/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ccfe90
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (ulong param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
                    /* try { // try from 05ccfe90 to 05dcfea7 has its CatchHandler @ 05ccff78 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 05ccfea8 to 05dcfec7 has its CatchHandler @ 05ccfde4 */
    FUN_03d2d2b0(PTR_DAT_091fcbf0);
    *(undefined1 *)(unaff_x27 + 0x4f4) = 1;
  }
  in_stack_000000a8 = unaff_x19[3];
  in_stack_000000a0 = unaff_x19[2];
  in_stack_000000b8 = unaff_x19[5];
  in_stack_000000b0 = unaff_x19[4];
  in_stack_00000098 = unaff_x19[1];
  in_stack_00000090 = *unaff_x19;
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 05ccfec8 to 05dcfedf has its CatchHandler @ 05ccff78 */
  lVar3 = *unaff_x26;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
                    /* try { // try from 05ccfee0 to 05dcfef3 has its CatchHandler @ 05ccfde4 */
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_091fcbf0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05ccff1c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_05ccff1c:
  uVar1 = (*(code *)*puVar2)();
  in_stack_00000080 = unaff_x25[4];
  in_stack_00000068 = unaff_x25[1];
  in_stack_00000060 = *unaff_x25;
  in_stack_00000078 = unaff_x25[3];
  in_stack_00000070 = unaff_x25[2];
  in_stack_00000048 = in_stack_000000a8;
  in_stack_00000040 = in_stack_000000a0;
  in_stack_00000058 = in_stack_000000b8;
  in_stack_00000050 = in_stack_000000b0;
  in_stack_00000038 = in_stack_00000098;
  in_stack_00000030 = in_stack_00000090;
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x38))
            (param_2,param_3,param_4,&stack0x00000030,uVar1,unaff_w20);
  *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(unaff_x19 + 1);
  return;
}


