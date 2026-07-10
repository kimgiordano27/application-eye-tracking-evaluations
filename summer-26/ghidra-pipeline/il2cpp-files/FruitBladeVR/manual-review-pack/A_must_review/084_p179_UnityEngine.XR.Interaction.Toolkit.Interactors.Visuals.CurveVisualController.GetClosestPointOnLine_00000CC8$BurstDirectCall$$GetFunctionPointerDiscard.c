/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.GetClosestPointOnLine_00000CC8$BurstDirectCall$$GetFunctionPointerDiscard
ENTRY_POINT: 03678d98
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_12;telemetry_or_network_hits_6
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall__GetFunctionPointerDiscard
               (long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo_03ce50f8
  ;
  if ((DAT_03ef6d56 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate>___03ce5100
                );
    FUN_01c5c92c(PTR_Unity_Burst_BurstCompiler_TypeInfo_03cb63f8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine___03ce5108
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate>_get_Value___03ce5110
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo_03ce50f8
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate_TypeInfo_03ce5118
                );
    DAT_03ef6d56 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate_TypeInfo_03ce5118
                              );
    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate___ctor
              (uVar3,0,*(undefined8 *)
                        PTR_Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine___03ce5108
              );
    if (*(int *)(*(long *)PTR_Unity_Burst_BurstCompiler_TypeInfo_03cb63f8 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar2 = Unity_Burst_BurstCompiler__CompileFunctionPointer<object>
                      (uVar3,*(undefined8 *)
                              PTR_Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate>___03ce5100
                      );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


