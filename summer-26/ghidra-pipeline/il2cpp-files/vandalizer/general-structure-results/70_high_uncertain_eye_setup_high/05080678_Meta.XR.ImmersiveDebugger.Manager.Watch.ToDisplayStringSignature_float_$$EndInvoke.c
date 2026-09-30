/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<float>$$EndInvoke
ENTRY_POINT: 05080678
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>__EndInvoke
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  undefined8 *puVar3;
  ulong in_x10;
  ulong in_x11;
  ulong uVar4;
  undefined8 *in_x12;
  
  while( true ) {
    in_x12[2] = param_3;
    in_x12[3] = param_4;
    in_x12[4] = param_3;
    in_x12[5] = param_4;
    in_x12[6] = param_3;
    in_x12[7] = param_4;
    if (in_x11 <= in_x10) break;
    in_x10 = in_x10 + 8;
    in_x12[8] = param_3;
    in_x12[9] = param_4;
    in_x12[10] = param_3;
    in_x12[0xb] = param_4;
    in_x12[0xc] = param_3;
    in_x12[0xd] = param_4;
    in_x12[0xe] = param_3;
    in_x12[0xf] = param_4;
    in_x12[0x10] = param_3;
    in_x12[0x11] = param_4;
    in_x12 = in_x12 + 0x10;
  }
  if (in_x10 < (param_1 & 0xfffffffc)) {
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


