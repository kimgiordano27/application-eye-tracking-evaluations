/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 01998f34
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator
               (undefined8 param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  long unaff_x23;
  long unaff_x24;
  code *pcVar4;
  
  while (memcpy(&stack0x00000000,param_2,0x6c), unaff_x20 != 0) {
    pcVar4 = *(code **)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000070,&stack0x00000000,0x6c);
    uVar1 = (*pcVar4)(uVar3,&stack0x00000070,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 0x6c;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    param_2 = (void *)(lVar2 + unaff_x23);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


