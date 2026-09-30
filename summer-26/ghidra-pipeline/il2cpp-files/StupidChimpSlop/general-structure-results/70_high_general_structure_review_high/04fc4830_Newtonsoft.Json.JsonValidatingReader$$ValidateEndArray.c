/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 04fc4830
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  int in_stack_00000018;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ce7c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_02db45e8(PTR_DAT_06647b18);
  uVar3 = thunk_FUN_02db0278(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000010 + (long)in_stack_00000018 * 8) = uVar2;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar4 = thunk_FUN_02db45e8(PTR_DAT_06647d58);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_04f31208(unaff_x19 + 2,uVar2,0);
    return;
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_06204328,0);
}


