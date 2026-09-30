/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 08a41b2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int in_stack_00000048;
  undefined4 *in_stack_00000068;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
  uVar4 = thunk_FUN_049a9d1c(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) != 0) {
    uVar3 = *puVar2;
    *(undefined8 *)(&stack0x00000038 + (long)in_stack_00000048 * 8) = uVar3;
    in_stack_00000048 = in_stack_00000048 + 1;
    __cxa_end_catch();
    *in_stack_00000068 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000068 + 10) = 0;
    thunk_FUN_049ee3d8(in_stack_00000068 + 10,0);
    puVar1 = in_stack_00000068;
    lVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac10910);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac10a98);
    FUN_07b6c824(puVar1 + 2,uVar3,uVar6);
    return;
  }
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = *puVar2;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar7,&PTR_PTR_0a568bf8,0);
}


