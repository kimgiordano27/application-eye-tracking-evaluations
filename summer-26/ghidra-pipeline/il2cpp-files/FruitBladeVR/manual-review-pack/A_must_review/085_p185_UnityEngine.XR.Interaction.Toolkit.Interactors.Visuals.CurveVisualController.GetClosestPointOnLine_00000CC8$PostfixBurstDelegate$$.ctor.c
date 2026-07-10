/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.GetClosestPointOnLine_00000CC8$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 03678be0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_PostfixBurstDelegate___ctor
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_01cc8040();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_01c5ca30(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x03') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_01c9c974(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01c5ca98(uVar3,0);
      }
      goto LAB_03678c50;
    }
    pcVar4 = FUN_01c332c4;
  }
  else {
    if (cVar1 != '\x04') {
LAB_03678c50:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_03678c60;
    }
    pcVar4 = FUN_01c332e0;
  }
  *(code **)(param_1 + 0x18) = pcVar4;
LAB_03678c60:
  *(code **)(param_1 + 0x38) = FUN_01c33254;
  return;
}


