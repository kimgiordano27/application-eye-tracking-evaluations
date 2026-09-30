/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.BufferInterpolatedRigidBodiesMotion.__codegen__OnUpdate_00000A44$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0326752c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


ulong Unity_Physics_GraphicsIntegration_BufferInterpolatedRigidBodiesMotion___codegen__OnUpdate_00000A44_PostfixBurstDelegate___ctor
                (long param_1)

{
  byte bVar1;
  ulong uVar2;
  long *unaff_x19;
  
  bVar1 = *(byte *)(**(long **)(param_1 + 0xa00) + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(param_1 + 0xa00)
     )) {
    return (ulong)*(uint *)(unaff_x19 + 0x33);
  }
  uVar2 = FUN_03938f50();
  return uVar2;
}


