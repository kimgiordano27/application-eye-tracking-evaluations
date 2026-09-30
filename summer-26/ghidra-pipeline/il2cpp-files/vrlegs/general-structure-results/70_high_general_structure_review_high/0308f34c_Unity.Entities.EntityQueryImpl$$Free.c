/*
FUNCTION_NAME: Unity.Entities.EntityQueryImpl$$Free
ENTRY_POINT: 0308f34c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_EntityQueryImpl__Free(long param_1)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w9;
  undefined8 *unaff_x19;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_ZR) {
    FUN_030975ac(&stack0x00000008);
  }
  else if (in_w9 == 0x1403) {
    FUN_030972ac(&stack0x00000008);
  }
  else {
    if (in_w9 != 0x1401) {
      FUN_018748a8(param_1);
      uStack0000000000000008 = *(undefined4 *)(param_1 + 0x28);
      uVar1 = thunk_FUN_01a6ca08(System_NullReferenceException_var);
      uVar1 = thunk_FUN_01a89a98(uVar1,&stack0x00000008);
      uVar2 = thunk_FUN_01a6ca08(
                                Unity_Physics_Systems_BroadphaseSystem___codegen__OnUpdate_00000B7C_PostfixBurstDelegate_var
                                );
      uVar1 = FUN_025b4d3c(uVar2,uVar1,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
      uVar2 = thunk_FUN_01a89e68();
      FUN_0276e9b0(uVar2,uVar1,0);
      uVar1 = thunk_FUN_01a6ca08(
                                Unity_Physics_GraphicsIntegration_BufferInterpolatedRigidBodiesMotion___codegen__OnUpdate_00000A44_PostfixBurstDelegate_var
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,uVar1);
    }
    FUN_03096f94(&stack0x00000008);
  }
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
  return;
}


