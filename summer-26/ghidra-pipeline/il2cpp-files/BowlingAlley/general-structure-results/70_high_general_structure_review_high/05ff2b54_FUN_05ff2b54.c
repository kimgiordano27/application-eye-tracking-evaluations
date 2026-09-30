/*
FUNCTION_NAME: FUN_05ff2b54
ENTRY_POINT: 05ff2b54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8
*/


undefined8 FUN_05ff2b54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000987_PostfixBurstDelegate_var
  ;
  if ((DAT_076dcfd3 & 1) == 0) {
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000098F_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000990_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000995_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000987_PostfixBurstDelegate_var
                      );
    DAT_076dcfd3 = 1;
  }
  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar3,0);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x10);
    *plVar6 = param_1;
    thunk_FUN_0333a630(plVar6,param_1);
    puVar2 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000995_PostfixBurstDelegate_var
    ;
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000990_PostfixBurstDelegate_var
    ;
    if (*plVar6 != 0) {
      if (*(long *)(*plVar6 + 0x10) == 0) {
        uVar5 = 0;
      }
      else {
        uVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000098F_PostfixBurstDelegate_var
                                  );
        FUN_0638cb24(uVar4,lVar3,*(undefined8 *)puVar2,0);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
        FUN_06355068(uVar5,uVar4,0);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


