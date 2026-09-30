/*
FUNCTION_NAME: FUN_056a49e4
ENTRY_POINT: 056a49e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_056a49e4(long param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 056a49e4 to 057a4a0b has its CatchHandler @ 056a530c */
  if ((DAT_066d1f33 & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate>_get_Value__
                );
    DAT_066d1f33 = 1;
  }
  iVar1 = thunk_FUN_02b75cb0(param_1 + 0x118,1,0,0);
  if (iVar1 != 1) {
    *(undefined1 *)(param_1 + 0x88) = 1;
    if (*(long *)(param_1 + 0x110) != 0) {
      FUN_056a4afc();
    }
    if (*(long *)(param_1 + 0x108) != 0) {
                    /* try { // try from 056a4a48 to 057a4a73 has its CatchHandler @ 056a5304 */
      FUN_0424ee14(*(long *)(param_1 + 0x108),
                   *(undefined8 *)
                    Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate>_get_Value__
                  );
    }
    plVar2 = *(long **)(param_1 + 0x100);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      *(undefined8 *)(param_1 + 0x100) = 0;
      thunk_FUN_02bb0e9c(param_1 + 0x100,0);
    }
  }
  return;
}


