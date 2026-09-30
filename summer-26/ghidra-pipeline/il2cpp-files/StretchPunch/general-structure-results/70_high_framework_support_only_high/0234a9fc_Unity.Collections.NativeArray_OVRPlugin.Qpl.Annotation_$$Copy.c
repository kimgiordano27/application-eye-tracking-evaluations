/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 0234a9fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(*unaff_x20 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c();
  }
  puVar2 = (undefined8 *)thunk_FUN_01de290c();
  uVar3 = puVar2[4];
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      lVar4 = lVar4 + (long)(int)uVar1 * 0x28;
      *(undefined8 *)(lVar4 + 0x40) = uVar3;
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      *(undefined8 *)(lVar4 + 0x20) = uVar7;
      *(undefined8 *)(lVar4 + 0x38) = uVar6;
      *(undefined8 *)(lVar4 + 0x30) = uVar5;
      thunk_FUN_01e10808(lVar4 + 0x20,0);
    }
    else {
      FUN_0234a8f8();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


