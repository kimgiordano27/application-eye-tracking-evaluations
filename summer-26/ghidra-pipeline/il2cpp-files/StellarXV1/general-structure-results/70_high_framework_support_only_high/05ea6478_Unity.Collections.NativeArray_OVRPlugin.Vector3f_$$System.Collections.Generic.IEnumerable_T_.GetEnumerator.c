/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05ea6478
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  uint uVar3;
  long unaff_x20;
  ulong uVar4;
  long *unaff_x21;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_040b1acc(param_2);
  }
  lVar2 = *unaff_x21;
  if ((*(byte *)(param_2 + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
     (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) == param_2)) {
    auVar6 = (**(code **)(lVar2 + 0x178))();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(uint *)(unaff_x20 + 0xc);
    uVar4 = (ulong)*(uint *)(unaff_x20 + 8) & 0x7fffffff;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xb0);
    uVar3 = (uint)uVar4;
    if ((auVar6._8_4_ < uVar3) || (auVar6._8_4_ - uVar3 < uVar1)) {
      FUN_0769a508(0);
    }
    if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    auVar5._8_4_ = uVar1;
    auVar5._0_8_ = auVar6._0_8_ + uVar4;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0();
}


