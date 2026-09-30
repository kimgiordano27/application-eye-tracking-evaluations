/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 08e7ff18
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  int in_stack_00000018;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000010 + (long)in_stack_00000018 * 8) = uVar2;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac6c7b8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac6dd30);
    FUN_07b6c824(unaff_x19 + 2,uVar2,uVar5);
    return;
  }
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&PTR_PTR_0a568bf8,0);
}


