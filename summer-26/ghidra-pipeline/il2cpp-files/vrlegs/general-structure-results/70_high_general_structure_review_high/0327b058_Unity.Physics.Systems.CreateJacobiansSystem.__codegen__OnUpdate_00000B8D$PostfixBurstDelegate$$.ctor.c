/*
FUNCTION_NAME: Unity.Physics.Systems.CreateJacobiansSystem.__codegen__OnUpdate_00000B8D$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0327b058
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


void Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate___ctor
               (undefined8 param_1,long *param_2,uint param_3)

{
  uint in_w8;
  long in_x9;
  int in_w10;
  long lVar1;
  int in_w11;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_2 = in_x9 + in_w11;
  if (0 < (int)in_w8) {
    lVar1 = 0;
    lVar3 = 0;
    do {
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 2;
      lVar4 = lVar1 >> 0x1d;
      lVar1 = lVar1 + 0x200000000;
      *(long *)(lVar4 + in_x9 + in_w10) = in_x9;
      *(ulong *)(in_x9 + in_w10 + (long)(iVar2 + 1) * 8) = in_x9 + (ulong)param_3;
    } while ((ulong)in_w8 * 2 - lVar3 != 0);
  }
  return;
}


