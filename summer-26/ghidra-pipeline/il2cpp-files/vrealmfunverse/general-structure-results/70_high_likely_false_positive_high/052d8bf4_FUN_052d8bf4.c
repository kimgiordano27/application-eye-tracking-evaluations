/*
FUNCTION_NAME: FUN_052d8bf4
ENTRY_POINT: 052d8bf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void FUN_052d8bf4(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_24;
  
  if ((DAT_066d020f & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    DAT_066d020f = 1;
  }
  if (-1 < param_2) {
    plVar3 = *(long **)(param_1 + 0x40);
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      if (iVar2 <= param_2) goto LAB_052d8cb0;
      plVar3 = *(long **)(param_1 + 0x40);
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))
                                   (plVar3,param_2,*(undefined8 *)(*plVar3 + 0x2f0));
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44();
          }
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_052d8cb0:
  local_24 = param_2;
  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_24);
  uVar4 = FUN_052b7e90(uVar4,0);
  uVar5 = thunk_FUN_02ba3594(
                            UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24_PostfixBurstDelegate_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar5);
}


