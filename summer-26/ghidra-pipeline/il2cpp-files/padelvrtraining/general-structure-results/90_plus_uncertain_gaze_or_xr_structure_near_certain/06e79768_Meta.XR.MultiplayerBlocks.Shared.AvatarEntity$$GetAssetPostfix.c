/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$GetAssetPostfix
ENTRY_POINT: 06e79768
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__GetAssetPostfix(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_07199bdc(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_06e79814;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar4 = uVar2;
      if (uVar1 <= uVar4) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        goto LAB_06e79800;
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_06e79814;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
      uVar2 = uVar4 + 1;
    } while (*(int *)(lVar5 + 0x20) < 0);
    param_1[2] = *(long *)(lVar5 + 0x28);
    thunk_FUN_03d1023c(param_1 + 2);
LAB_06e79800:
    return uVar4 < uVar1;
  }
LAB_06e79814:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


