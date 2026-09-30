/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 05cd0de8
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
      goto LAB_05cd0e24;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_05cd0e24:
  (*(code *)*puVar2)();
  if (unaff_x20 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 200);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar3 = thunk_FUN_03d2ef40();
    FUN_06dd8080(uVar3,0x32,uVar5,uVar1,5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
    *(undefined8 *)(unaff_x20 + 0x138) = uVar3;
    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


