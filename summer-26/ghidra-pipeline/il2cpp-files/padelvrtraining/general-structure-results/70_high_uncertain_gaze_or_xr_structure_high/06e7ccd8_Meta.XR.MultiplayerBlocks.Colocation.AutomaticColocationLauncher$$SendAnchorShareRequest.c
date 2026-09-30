/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 06e7ccd8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  bool in_ZR;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  
  if (!in_ZR) {
    FUN_07199bdc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_06e7cd68:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar3 = uVar2;
    if (uVar1 <= uVar3) {
      unaff_x19[2] = 0;
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      *(undefined4 *)(unaff_x19 + 3) = 0;
      goto LAB_06e7cd58;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar3 + 1;
    if (lVar4 == 0) goto LAB_06e7cd68;
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = lVar4 + (long)(int)uVar3 * 0x20;
    uVar2 = uVar3 + 1;
  } while (*(int *)(lVar4 + 0x20) < 0);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(lVar4 + 0x38);
  unaff_x19[2] = lVar5;
LAB_06e7cd58:
  return uVar3 < uVar1;
}


