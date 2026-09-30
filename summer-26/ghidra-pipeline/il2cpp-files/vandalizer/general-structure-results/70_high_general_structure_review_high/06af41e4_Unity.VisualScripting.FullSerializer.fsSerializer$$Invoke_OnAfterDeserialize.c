/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterDeserialize
ENTRY_POINT: 06af41e4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterDeserialize
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  
  lVar1 = FUN_05e47444(param_1,param_2,0);
  if (lVar1 == 0) {
    *unaff_x21 = 0;
  }
  else {
    uVar3 = *unaff_x24;
    lVar2 = thunk_FUN_0322f04c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar1,uVar3);
    }
    *unaff_x21 = lVar2;
    uVar3 = *unaff_x24;
    lVar2 = thunk_FUN_0322f04c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar1,uVar3);
    }
  }
  thunk_FUN_0329bf60();
  return;
}


