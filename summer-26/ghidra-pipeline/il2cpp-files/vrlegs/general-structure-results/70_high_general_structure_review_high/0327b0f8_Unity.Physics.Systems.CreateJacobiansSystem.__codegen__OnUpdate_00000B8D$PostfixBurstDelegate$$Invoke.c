/*
FUNCTION_NAME: Unity.Physics.Systems.CreateJacobiansSystem.__codegen__OnUpdate_00000B8D$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0327b0f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  
  puVar1 = PTR_DAT_03cdbb60;
  if (unaff_x19[4] != 0) {
    FUN_0366b81c(unaff_x19[4],4,0);
    unaff_x19[4] = 0;
  }
  unaff_x19[5] = 0;
  lVar2 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = 0;
  plVar3 = *(long **)(lVar2 + 0xb8);
  if (*plVar3 == unaff_x19[1]) {
    *plVar3 = 0;
    plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  unaff_x19[1] = 0;
  if (plVar3[1] == unaff_x19[2]) {
    plVar3[1] = 0;
  }
  if (plVar3[2] == unaff_x19[3]) {
    plVar3[2] = 0;
  }
  *unaff_x19 = 0;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  return;
}


