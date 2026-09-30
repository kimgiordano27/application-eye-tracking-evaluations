/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 041a2054
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w22;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02dcfd18(param_3);
  }
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto FUN_041a20f0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
FUN_041a20f0:
  (*(code *)*puVar1)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


