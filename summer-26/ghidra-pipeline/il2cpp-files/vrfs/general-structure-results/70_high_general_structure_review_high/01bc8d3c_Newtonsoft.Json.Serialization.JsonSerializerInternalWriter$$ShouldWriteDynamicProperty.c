/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 01bc8d3c
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc8d8c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
               (undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if (param_2 != 1) {
    FUN_03e1bcc0(&stack0x00000020,*unaff_x22);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_03e1bcc0(&stack0x00000020,*unaff_x22);
  if (lVar3 == 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*unaff_x24);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar1 = FUN_03e1bcc4(&stack0x00000020,*unaff_x23);
      lVar3 = in_stack_00000030;
      if ((uVar1 & 1) == 0) {
        FUN_03e1bcc0(&stack0x00000020,*unaff_x22);
        return;
      }
      if (in_stack_00000030 == 0) break;
      FUN_01bc8f20(in_stack_00000030);
      FUN_01bc9030(lVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0164c380(lVar3);
}


