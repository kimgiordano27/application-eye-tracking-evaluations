/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 04d43cf4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
               (undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x21;
  long in_stack_00000008;
  int *in_stack_00000010;
  long *in_stack_00000018;
  int in_stack_00000028;
  undefined4 *in_stack_00000048;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar2;
    in_stack_00000008 = lVar7;
    __cxa_end_catch();
    if (*in_stack_00000010 < 0) {
      if (*(long *)(*in_stack_00000018 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04de299c(*(long *)(*in_stack_00000018 + 0x30),0);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar7);
    }
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
    thunk_FUN_02bb0e9c(in_stack_00000048 + 0xc,0);
    puVar1 = in_stack_00000048;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caac50(puVar1 + 2,0);
  }
  else {
    FUN_02a9fb64(&stack0x00000008);
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
    *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000028 * 8) = uVar4;
    in_stack_00000028 = in_stack_00000028 + 1;
    __cxa_end_catch();
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
    thunk_FUN_02bb0e9c(in_stack_00000048 + 0xc,0);
    puVar1 = in_stack_00000048;
    lVar7 = thunk_FUN_02ba3594(PTR_DAT_06312b70);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caacf4(puVar1 + 2,uVar4,0);
  }
  return;
}


