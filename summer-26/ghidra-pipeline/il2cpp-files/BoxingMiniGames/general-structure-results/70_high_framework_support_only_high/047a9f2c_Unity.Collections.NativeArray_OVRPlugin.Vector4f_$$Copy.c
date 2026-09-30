/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 047a9f2c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)thunk_FUN_0367ff68();
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x20;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(lVar3 + 0x38) = uVar7;
      *(undefined8 *)(lVar3 + 0x30) = uVar6;
      thunk_FUN_036b7ad0(lVar3 + 0x20,0);
    }
    else {
      FUN_047a9e48();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


