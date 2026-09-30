/*
FUNCTION_NAME: FUN_0545243c
ENTRY_POINT: 0545243c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long * FUN_0545243c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06a53913 & 1) == 0) {
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    DAT_06a53913 = 1;
  }
  if (param_3 == 0) {
    uVar4 = thunk_FUN_02db45e8(System_Timers_Timer_TypeInfo);
    uVar4 = FUN_0542fb04(uVar4,0);
  }
  else {
    iVar2 = FUN_054628b0(param_1,param_2,param_3);
    if (iVar2 != -2) {
      if (iVar2 < 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8(0,iVar2);
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))
                                   (plVar3,iVar2,*(undefined8 *)(*plVar3 + 0x2f0));
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var + 0x130
                           );
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268();
          }
        }
      }
      return plVar3;
    }
    uVar4 = FUN_0543832c(param_2,0);
  }
  uVar5 = thunk_FUN_02db45e8(System_Threading_TimerCallback_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar4,uVar5);
}


