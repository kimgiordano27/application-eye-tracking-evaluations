/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 04d457b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
               (undefined8 param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  long lVar7;
  long *unaff_x22;
  long in_stack_00000018;
  int *in_stack_00000020;
  long *in_stack_00000028;
  int in_stack_00000038;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar2;
    in_stack_00000018 = lVar7;
    __cxa_end_catch();
    if (*in_stack_00000020 < 0) {
      if ((*in_stack_00000028 == 0) || (lVar1 = FUN_04d40734(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04de299c(lVar1,0);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar7);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caac50(unaff_x19 + 2,0);
  }
  else {
    FUN_02a9fbc8(&stack0x00000018);
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02c2be1c(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar5 = thunk_FUN_02b9f224(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_05fbf508,0);
    }
    uVar4 = *puVar3;
    *(undefined8 *)(&stack0x00000030 + (long)in_stack_00000038 * 8) = uVar4;
    in_stack_00000038 = in_stack_00000038 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar7 = thunk_FUN_02ba3594(PTR_DAT_06312b70);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caacf4(unaff_x19 + 2,uVar4,0);
  }
  return;
}


