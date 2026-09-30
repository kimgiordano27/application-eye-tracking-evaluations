/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 05080694
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  undefined8 *puVar3;
  ulong in_x10;
  ulong in_x11;
  ulong uVar4;
  
  if (in_x10 < in_x11) {
    uVar4 = in_x10 << 4;
    puVar3 = (undefined8 *)(in_x9 + in_x10 * 0x10);
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3 = (undefined8 *)(in_x9 + (uVar4 | 0x10));
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3 = (undefined8 *)(in_x9 + (uVar4 | 0x20));
    puVar1 = (undefined8 *)(in_x9 + (uVar4 | 0x30));
    in_x10 = in_x10 | 4;
    *puVar3 = param_3;
    puVar3[1] = param_4;
    *puVar1 = param_3;
    puVar1[1] = param_4;
  }
  if (in_x10 < param_1) {
    lVar2 = param_1 - in_x10;
    puVar3 = (undefined8 *)(in_x9 + in_x10 * 0x10 + 8);
    do {
      puVar3[-1] = param_3;
      *puVar3 = param_4;
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 2;
    } while (lVar2 != 0);
  }
  return;
}


