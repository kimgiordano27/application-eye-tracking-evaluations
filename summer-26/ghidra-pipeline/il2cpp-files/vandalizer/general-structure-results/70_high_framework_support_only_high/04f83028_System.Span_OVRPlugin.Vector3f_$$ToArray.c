/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 04f83028
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_Vector3f>__ToArray(void)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong unaff_x19;
  long unaff_x20;
  uint uVar4;
  ulong uVar5;
  long unaff_x21;
  undefined1 auVar6 [16];
  
  uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  }
  uVar5 = unaff_x19 >> 0x20;
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
  }
  uVar3 = (uint)unaff_x19;
  uVar4 = (uint)(unaff_x19 >> 0x20);
  if (unaff_x20 == 0) {
    if (uVar4 != 0 || uVar3 != 0) {
      FUN_05e21fe0(0);
    }
    uVar5 = 0;
    lVar2 = 0;
  }
  else {
    if ((*(uint *)(unaff_x20 + 0x18) < uVar3) || (*(uint *)(unaff_x20 + 0x18) - uVar3 < uVar4)) {
      FUN_05e21fe0(0);
    }
    lVar2 = unaff_x20 + ((long)(unaff_x19 << 0x20) >> 0x1c) + 0x20;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar2;
  return auVar6;
}


