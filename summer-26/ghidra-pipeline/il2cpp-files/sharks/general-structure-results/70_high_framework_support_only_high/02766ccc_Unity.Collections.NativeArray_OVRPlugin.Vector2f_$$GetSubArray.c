/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 02766ccc
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray
               (undefined8 param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint in_w10;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 < in_w10) {
    lVar1 = unaff_x19 + (long)(int)param_2 * 0x20;
    uVar9 = *(undefined8 *)(lVar1 + 0x28);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    if (param_3 < in_w10) {
      puVar2 = (undefined8 *)(unaff_x19 + 0x20 + (long)(int)param_3 * 0x20);
      uVar8 = *puVar2;
      uVar6 = puVar2[3];
      uVar4 = puVar2[2];
      *(undefined8 *)(lVar1 + 0x28) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar8;
      *(undefined8 *)(lVar1 + 0x38) = uVar6;
      *(undefined8 *)(lVar1 + 0x30) = uVar4;
      thunk_FUN_0188fd20(unaff_x19 + 0x20 + (long)(int)param_2 * 0x20,0);
      if (param_3 < *(uint *)(unaff_x19 + 0x18)) {
        puVar2[1] = uVar9;
        *puVar2 = uVar7;
        puVar2[3] = uVar5;
        puVar2[2] = uVar3;
        thunk_FUN_0188fd20(unaff_x19 + (long)(int)param_3 * 0x20 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


