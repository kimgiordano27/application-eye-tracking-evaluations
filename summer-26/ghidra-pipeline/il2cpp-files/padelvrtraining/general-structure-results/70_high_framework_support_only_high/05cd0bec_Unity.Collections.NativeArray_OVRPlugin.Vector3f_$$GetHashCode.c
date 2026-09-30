/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 05cd0bec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_03d8f370();
      goto FUN_05cd0e40;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
FUN_05cd0e40:
  (*(code *)*puVar4)();
  if (unaff_x20 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uVar3 = *(undefined4 *)(unaff_x20 + 0x130);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar5 = thunk_FUN_03d2ef40();
    FUN_06dd8080(uVar5,0x32,uVar6,uVar3,5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
    *(undefined8 *)(unaff_x20 + 0x138) = uVar5;
    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


