/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorld.__codegen__OnUpdate_00000A87$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0326cffc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnUpdate_00000A87_PostfixBurstDelegate___ctor
               (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  int unaff_w21;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  FUN_0225809c(&stack0x000000e8,
               *(undefined8 *)System_Linq_Expressions_Interpreter_BranchInstruction_TypeInfo);
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w21 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar3 = thunk_FUN_01a6848c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) != 0) {
      __cxa_end_catch();
      lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbe438);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar2 = thunk_FUN_01a6ca08(System_Linq_Expressions_Interpreter_BranchLabel_TypeInfo);
      FUN_036772fc(uVar2,0);
      uVar2 = thunk_FUN_01a6ca08(System_Xml_BitStack_TypeInfo);
      FUN_01f909ac(in_stack_00000010,&stack0x000000a0,uVar2);
      in_stack_00000008[3] = in_stack_000000b8;
      in_stack_00000008[2] = in_stack_000000b0;
      in_stack_00000008[5] = in_stack_000000c8;
      in_stack_00000008[4] = in_stack_000000c0;
      in_stack_00000008[1] = in_stack_000000a8;
      *in_stack_00000008 = in_stack_000000a0;
      return;
    }
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b3fef0(param_1);
}


