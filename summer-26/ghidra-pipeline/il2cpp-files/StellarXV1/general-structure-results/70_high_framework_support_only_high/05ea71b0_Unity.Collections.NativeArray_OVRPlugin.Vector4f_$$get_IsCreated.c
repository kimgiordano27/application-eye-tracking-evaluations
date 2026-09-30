/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_IsCreated
ENTRY_POINT: 05ea71b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool in_ZR;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar7 [16];
  
  if (in_ZR) {
    lVar4 = FUN_074e3264();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(uint *)(unaff_x21 + 0x10);
    uVar3 = *(ushort *)(lVar5 + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_040b1acc(lVar5);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar5 + 0x135);
    }
    uVar1 = *(uint *)(unaff_x20 + 8);
    uVar6 = *(uint *)(unaff_x20 + 0xc);
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb0);
    if ((uVar2 < uVar1) || (uVar2 - uVar1 < uVar6)) {
      FUN_0769a508(0);
    }
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar4 = lVar4 + (long)(int)uVar1 * 2;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(uint *)(unaff_x20 + 8);
    uVar6 = *(uint *)(unaff_x20 + 0xc);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if ((*(ushort *)(**(long **)(lVar4 + 0xc0) + 0x135) & 1) == 0) {
      FUN_040b1acc(**(long **)(lVar4 + 0xc0));
    }
    lVar4 = thunk_FUN_040b4e00();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar6 = uVar6 & 0x7fffffff;
    if ((*(uint *)(lVar4 + 0x18) < uVar2) || (*(uint *)(lVar4 + 0x18) - uVar2 < uVar6)) {
      FUN_0769a508(0);
    }
    lVar4 = lVar4 + (long)(int)uVar2 * 2 + 0x20;
  }
  auVar7._8_4_ = uVar6;
  auVar7._0_8_ = lVar4;
  auVar7._12_4_ = 0;
  return auVar7;
}


