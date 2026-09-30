/*
FUNCTION_NAME: FUN_06325230
ENTRY_POINT: 06325230
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06325230(long param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_076de82e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279468);
    thunk_FUN_032e1da0(UnityEngine_UIElements_GroupBox_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292148);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl_0000011B_PostfixBurstDelegate_var
                      );
    DAT_076de82e = 1;
  }
  FUN_06314a34(param_1,0);
  puVar2 = 
  UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl_0000011B_PostfixBurstDelegate_var
  ;
  puVar1 = PTR_DAT_07292148;
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar6 = thunk_FUN_032a56a0();
    uVar3 = thunk_FUN_032e1da0(Oculus_Interaction_ICollidersRef_TypeInfo);
    FUN_05897d14(uVar6,uVar3,0);
  }
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      uVar3 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_UIElements_GroupBox_TypeInfo);
      FUN_06314264(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x10),uVar3);
      *(byte *)(param_1 + 0x20) = param_3 & 1;
      lVar4 = FUN_05946a30(param_2,0);
      puVar1 = PTR_DAT_07279468;
      if (lVar4 == 0) {
        lVar5 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        uVar3 = *(undefined8 *)PTR_DAT_07279468;
        lVar5 = thunk_FUN_032a55a4(lVar4,uVar3);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar4,uVar3);
        }
        *(long *)(param_1 + 0x28) = lVar5;
        uVar3 = *(undefined8 *)puVar1;
        lVar5 = thunk_FUN_032a55a4(lVar4,uVar3);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar4,uVar3);
        }
      }
      thunk_FUN_0333a630(param_1 + 0x28,lVar5);
      uVar3 = FUN_06325410(param_1);
      FUN_06314ac4(param_1,uVar3,0);
      return;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar6 = thunk_FUN_032a56a0();
    uVar3 = thunk_FUN_032e1da0(Oculus_Interaction_ICollidersRef_TypeInfo);
    FUN_0589e7ac(uVar6,uVar3,0);
  }
  uVar3 = thunk_FUN_032e1da0(UnityEngine_UIElements_ICommandEvent_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar3);
}


