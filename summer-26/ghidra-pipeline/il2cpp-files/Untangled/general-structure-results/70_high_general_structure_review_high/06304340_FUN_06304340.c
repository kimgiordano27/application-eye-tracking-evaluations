/*
FUNCTION_NAME: FUN_06304340
ENTRY_POINT: 06304340
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_06304340(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000000071cd014 & 1) == 0) {
    FUN_02f07e70(PlayFab_ProfilesModels_GetEntityProfileRequest_var);
    FUN_02f07e70(PlayFab_ProgressionModels_GetEntityLeaderboardResponse_var);
    FUN_02f07e70(PlayFab_ExperimentationModels_GetExperimentsRequest_var);
    bRam00000000071cd014 = 1;
  }
  puVar2 = PlayFab_ExperimentationModels_GetExperimentsRequest_var;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 <= iVar4) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05624da8(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          return;
        }
        return;
      }
      lVar3 = FUN_03fd09cc(lVar3,iVar4,*(undefined8 *)puVar2);
      if (lVar3 == 0) break;
      uStack_48 = *(undefined8 *)(lVar3 + 0x38);
      uStack_50 = *(undefined8 *)(lVar3 + 0x30);
      uStack_38 = *(undefined8 *)(lVar3 + 0x48);
      uStack_40 = *(undefined8 *)(lVar3 + 0x40);
      uStack_58 = *(undefined8 *)(lVar3 + 0x28);
      uStack_60 = *(undefined8 *)(lVar3 + 0x20);
      FUN_06301e60(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),&uStack_60);
      TMPro_TMP_Text__AddFloatToInternalTextBackingArray
                (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      lVar3 = *(long *)(param_1 + 0x58);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


