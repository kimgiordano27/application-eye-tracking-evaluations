/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03cb7050
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      uVar5 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      *(undefined8 *)(lVar2 + 0x48) = param_2[5];
      *(undefined8 *)(lVar2 + 0x40) = uVar5;
      *(undefined8 *)(lVar2 + 0x58) = uVar4;
      *(undefined8 *)(lVar2 + 0x50) = uVar3;
      *(undefined8 *)(lVar2 + 0x28) = uVar7;
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar8;
    }
    else {
      FUN_03cb70cc();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


