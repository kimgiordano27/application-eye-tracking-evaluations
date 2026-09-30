/*
FUNCTION_NAME: FUN_0144ec68
ENTRY_POINT: 0144ec68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0144ec68(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_03776a70 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    DAT_03776a70 = 1;
  }
  puVar1 = UnityEngine_Pose___TypeInfo;
  if (param_3 != 0) {
    FUN_010e5800(param_3,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_010e5800(param_3,*(undefined8 *)puVar1);
    lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (param_3,0);
    FUN_02698b6c(0,0,0,0);
    if (lVar2 != 0) {
      FUN_0269f894(lVar2,0);
      lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (param_3,0);
      if (lVar2 != 0) {
        FUN_0269f618(0,0,0x3f000000,lVar2,0);
        lVar2 = FUN_0268b334(param_3,0);
        if ((lVar2 != 0) && (FUN_0268aca4(lVar2,param_8,0), param_2 != 0)) {
          *(undefined4 *)(param_2 + 0x10) = param_8;
          *(undefined4 *)(param_2 + 0x14) = param_5;
          *(undefined4 *)(param_2 + 0x18) = param_6;
          *(undefined4 *)(param_2 + 0x1c) = param_7;
          *(undefined4 *)(param_2 + 0x20) = param_9;
          *(undefined1 *)(param_2 + 0x24) = 1;
          FUN_0144edbc(param_2,param_4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


