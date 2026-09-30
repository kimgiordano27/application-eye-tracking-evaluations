/*
FUNCTION_NAME: FUN_053cdb2c
ENTRY_POINT: 053cdb2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_053cdb2c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  
  if ((DAT_066d09d3 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_LogLevel_TypeInfo);
    DAT_066d09d3 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
    if ((uVar1 & 1) != 0) {
      param_1 = (long *)(**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    }
    plVar2 = (long *)FUN_053d5044(0);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)OVRPlugin_LogLevel_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_053cdbf4;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)OVRPlugin_LogLevel_TypeInfo,4);
LAB_053cdbf4:
                    /* WARNING: Could not recover jumptable at 0x053cdc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,param_1,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


