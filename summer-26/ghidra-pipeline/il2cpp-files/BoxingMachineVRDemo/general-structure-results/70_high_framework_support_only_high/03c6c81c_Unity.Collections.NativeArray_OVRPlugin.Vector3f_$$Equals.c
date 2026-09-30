/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 03c6c81c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals
               (long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack0000000000000038;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  lStack0000000000000038 = param_1;
  if (uVar1 < param_3) {
    FUN_05027b00(0xd,0x1b,0);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (uVar1 == *(uint *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_03c6be50();
      uVar1 = *(uint *)(unaff_x19 + 0x18);
    }
    if (uVar1 - param_3 != 0 && (int)param_3 <= (int)uVar1) {
      FUN_05029918(*(undefined8 *)(unaff_x19 + 0x10),param_3,*(undefined8 *)(unaff_x19 + 0x10),
                   param_3 + 1,uVar1 - param_3,0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    uVar4 = param_4[1];
    uVar3 = *param_4;
    if (lVar2 != 0) {
                    /* try { // try from 03c6c8c8 to 03d6c8ef has its CatchHandler @ 03c6ca60 */
      if (*(uint *)(lVar2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar2 = lVar2 + (long)(int)param_3 * 0x18;
      *(undefined8 *)(lVar2 + 0x30) = param_4[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


