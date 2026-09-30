/*
FUNCTION_NAME: FUN_05ff2c50
ENTRY_POINT: 05ff2c50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6
*/


undefined8 FUN_05ff2c50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000994_PostfixBurstDelegate_var
  ;
  if ((DAT_076dd002 & 1) == 0) {
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000983_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000993_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000994_PostfixBurstDelegate_var
                      );
    DAT_076dd002 = 1;
  }
  lVar2 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar2,0);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x10);
    *plVar4 = param_1;
    thunk_FUN_0333a630(plVar4,param_1);
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000993_PostfixBurstDelegate_var
    ;
    if (*plVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_00000983_PostfixBurstDelegate_var
                                );
      FUN_0638cc44(uVar3,lVar2,*(undefined8 *)puVar1,0);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


