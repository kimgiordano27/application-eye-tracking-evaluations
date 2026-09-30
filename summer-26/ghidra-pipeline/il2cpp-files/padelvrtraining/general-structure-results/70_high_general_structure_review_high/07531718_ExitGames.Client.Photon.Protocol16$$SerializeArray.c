/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeArray
ENTRY_POINT: 07531718
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeArray(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar1 = FUN_03d2d3ac();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 2) {
      if (unaff_x20 == 0) {
        uVar2 = thunk_FUN_03d3be88(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar2,0);
      }
      goto LAB_07531758;
    }
    pcVar3 = FUN_03c658d0;
  }
  else {
    if (unaff_w22 != 3) {
LAB_07531758:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_07531768;
    }
    pcVar3 = FUN_03c658f8;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
LAB_07531768:
  *(code **)(unaff_x19 + 0x38) = FUN_03c65868;
  return;
}


