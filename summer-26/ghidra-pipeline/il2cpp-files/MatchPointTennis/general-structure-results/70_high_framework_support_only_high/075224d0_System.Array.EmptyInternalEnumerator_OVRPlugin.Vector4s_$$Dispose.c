/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 075224d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__Dispose
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_07522dbc(param_2,param_3,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x110));
  if ((int)uVar1 < 0) {
    uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70)
                               ,&stack0x00000008);
    FUN_07a5fa20(uVar2,0);
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = lVar3 + (ulong)uVar1 * 0x38;
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    param_1[4] = *(undefined8 *)(lVar3 + 0x50);
    param_1[1] = uVar6;
    *param_1 = uVar5;
    param_1[3] = uVar4;
    param_1[2] = uVar2;
  }
  return;
}


