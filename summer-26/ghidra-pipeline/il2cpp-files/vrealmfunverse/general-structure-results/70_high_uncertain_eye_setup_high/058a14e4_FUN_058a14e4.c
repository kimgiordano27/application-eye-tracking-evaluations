/*
FUNCTION_NAME: FUN_058a14e4
ENTRY_POINT: 058a14e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool FUN_058a14e4(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar3 = (long *)Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
  puVar4 = (undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
  if ((DAT_066d319c & 1) == 0) {
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    DAT_066d319c = 1;
    plVar3 = (long *)Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
    puVar4 = (undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
  }
  do {
    iVar1 = (int)param_1[1] + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (*param_1 == 0) {
LAB_058a15a8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar5 = *(long *)(*param_1 + 0x60);
    if ((*(ushort *)(*(long *)(*plVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    iVar2 = *(int *)(lVar5 + 8);
    if (iVar2 <= iVar1) break;
    if (*param_1 == 0) goto LAB_058a15a8;
    lVar5 = FUN_03ab1904(*param_1 + 0x60,(int)param_1[1],*puVar4);
  } while (*(int *)(lVar5 + 0x2a0) < 1);
  return iVar1 < iVar2;
}


