/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04c41ee8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if (0 < param_1) {
    do {
      FUN_06240534((long)&stack0x00000008 + 4,0);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18))();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4();
      }
      iVar1 = in_stack_00000008._4_4_ + 1;
      in_stack_00000008._4_4_ = iVar1;
      iVar3 = (**(code **)(*unaff_x20 + 0x618))();
    } while (iVar1 < iVar3);
  }
  return;
}


