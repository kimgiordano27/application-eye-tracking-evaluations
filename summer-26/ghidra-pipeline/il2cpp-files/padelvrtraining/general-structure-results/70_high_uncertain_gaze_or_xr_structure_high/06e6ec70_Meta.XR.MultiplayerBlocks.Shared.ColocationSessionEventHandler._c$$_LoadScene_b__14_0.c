/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c$$<LoadScene>b__14_0
ENTRY_POINT: 06e6ec70
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


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__<LoadScene>b__14_0(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
LAB_06e6ecf4:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      goto LAB_06e6ece0;
    }
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar5 == 0) goto LAB_06e6ecf4;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar5 + 0x20) < 0);
  unaff_x19[2] = *(long *)(lVar5 + 0x28);
  thunk_FUN_03d1023c(unaff_x19 + 2);
LAB_06e6ece0:
  return uVar4 < uVar1;
}


