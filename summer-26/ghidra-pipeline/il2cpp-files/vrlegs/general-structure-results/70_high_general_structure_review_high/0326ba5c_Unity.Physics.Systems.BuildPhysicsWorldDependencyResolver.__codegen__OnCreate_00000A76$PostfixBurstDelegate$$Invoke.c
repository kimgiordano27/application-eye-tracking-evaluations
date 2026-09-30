/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorldDependencyResolver.__codegen__OnCreate_00000A76$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0326ba5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_PostfixBurstDelegate__Invoke
          (long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x14) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar1 + (iVar2 >> 1) != 0) {
      uStack0000000000000000 = 0;
      uStack0000000000000008 = 0;
      FUN_03297974();
      goto LAB_0326baa4;
    }
  }
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
LAB_0326baa4:
  auVar3._8_8_ = uStack0000000000000008;
  auVar3._0_8_ = uStack0000000000000000;
  return auVar3;
}


