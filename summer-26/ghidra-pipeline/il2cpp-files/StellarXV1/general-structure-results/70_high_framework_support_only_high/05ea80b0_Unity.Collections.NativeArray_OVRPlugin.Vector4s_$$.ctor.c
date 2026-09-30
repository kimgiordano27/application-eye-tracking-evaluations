/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05ea80b0
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
Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
          (ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  uint uVar4;
  long unaff_x20;
  ulong uVar5;
  long *unaff_x21;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_040b1acc(param_3);
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(byte *)(param_3 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) == param_3
     )) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      auVar7 = (**(code **)(lVar3 + 0x178))();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(uint *)(unaff_x20 + 0xc);
      uVar5 = (ulong)*(uint *)(unaff_x20 + 8) & 0x7fffffff;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xb0);
      uVar4 = (uint)uVar5;
      if ((auVar7._8_4_ < uVar4) || (auVar7._8_4_ - uVar4 < uVar1)) {
        FUN_0769a508(0);
      }
      if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      auVar6._8_4_ = uVar1;
      auVar6._0_8_ = auVar7._0_8_ + uVar5 * 8;
      auVar6._12_4_ = 0;
      return auVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0();
}


