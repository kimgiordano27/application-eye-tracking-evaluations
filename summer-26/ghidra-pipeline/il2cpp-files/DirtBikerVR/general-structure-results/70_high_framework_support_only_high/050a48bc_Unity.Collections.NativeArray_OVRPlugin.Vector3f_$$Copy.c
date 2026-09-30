/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 050a48bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  bool in_ZR;
  bool in_CY;
  int in_w8;
  int in_w9;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  lVar2 = unaff_x20 + (long)in_w8 * (long)in_w9;
  uStack0000000000000008 = *(undefined8 *)(lVar2 + 0x28);
  uStack0000000000000000 = *(undefined8 *)(lVar2 + 0x20);
  uStack0000000000000010 = *(undefined8 *)(lVar2 + 0x30);
  if (in_CY && !in_ZR) {
    lVar1 = unaff_x20 + 0x20;
    puVar3 = (undefined8 *)(lVar1 + (long)(int)unaff_w19 * 0x18);
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    *(undefined8 *)(lVar2 + 0x30) = puVar3[2];
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    thunk_FUN_03afed3c(lVar1 + (long)in_w8 * 0x18 + 8,0);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      puVar3[1] = uStack0000000000000008;
      *puVar3 = uStack0000000000000000;
      puVar3[2] = uStack0000000000000010;
      thunk_FUN_03afed3c(lVar1 + (long)(int)unaff_w19 * 0x18 + 8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


