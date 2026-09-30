/*
FUNCTION_NAME: Unity.Physics.Systems.BroadphaseSystem.__codegen__OnCreate_00000B7B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 032793e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Physics_Systems_BroadphaseSystem___codegen__OnCreate_00000B7B_PostfixBurstDelegate__Invoke
               (float param_1)

{
  undefined2 uVar1;
  undefined2 *unaff_x19;
  double dVar2;
  
  if (1.0 <= param_1) {
    uVar1 = 0x7fff;
  }
  else {
    dVar2 = (double)param_1 * DAT_00d38138 + -32768.0;
    uVar1 = 0;
    if (dVar2 != INFINITY) {
      uVar1 = (short)(int)dVar2;
    }
  }
  *unaff_x19 = uVar1;
  return;
}


