/*
FUNCTION_NAME: FUN_022feec8
ENTRY_POINT: 022feec8
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


long FUN_022feec8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03781b61 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    DAT_03781b61 = 1;
  }
  lVar2 = FUN_022fede0(param_2);
  puVar1 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  if (lVar2 != 0) {
    FUN_0268b75c(lVar2,param_1,0);
    lVar3 = FUN_010e5800(lVar2,*(undefined8 *)puVar1);
    puVar1 = UnityEngine_Pose___TypeInfo;
    if (lVar3 != 0) {
      FUN_02666150(lVar3,param_3,0);
      lVar3 = FUN_010e5800(lVar2,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_026689d4(lVar3,param_4,0);
        FUN_0268c458(lVar2,0x3d,0);
        if ((param_5 & 1) != 0) {
          lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar2,0);
          if ((param_2 == 0) || (uVar4 = FUN_0269fe30(param_2,0), lVar3 == 0)) goto LAB_022fefe0;
          FUN_026a0040(lVar3,uVar4,0,0);
        }
        return lVar2;
      }
    }
  }
LAB_022fefe0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


