/*
FUNCTION_NAME: FUN_058a4270
ENTRY_POINT: 058a4270
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058a4270(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  if ((DAT_066d31a6 & 1) == 0) {
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    DAT_066d31a6 = 1;
  }
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
  puVar1 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(lVar4 + 0x60);
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar4 + 8) <= iVar5) {
        return;
      }
      if (*(long *)(param_1 + 0x30) == 0) break;
      uVar3 = FUN_03ab1904(*(long *)(param_1 + 0x30) + 0x60,iVar5,*(undefined8 *)puVar1);
      FUN_058a43e4(param_1,uVar3);
      lVar4 = *(long *)(param_1 + 0x30);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


