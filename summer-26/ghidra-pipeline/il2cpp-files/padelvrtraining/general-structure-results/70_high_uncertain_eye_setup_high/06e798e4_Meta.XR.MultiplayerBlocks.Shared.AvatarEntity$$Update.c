/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$Update
ENTRY_POINT: 06e798e4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__Update(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != 0) {
    if (*(int *)((long)param_2 + 0xc) != *(int *)(param_1 + 0x2c)) {
      FUN_07199bdc(0);
      param_1 = *param_2;
      if (param_1 == 0) goto LAB_06e7997c;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_2 + 1);
    do {
      uVar3 = uVar2;
      if (uVar1 <= uVar3) {
        *(uint *)(param_2 + 1) = uVar1 + 1;
        param_2[2] = 0;
        param_2[3] = 0;
        goto LAB_06e7996c;
      }
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)(param_2 + 1) = uVar3 + 1;
      if (lVar4 == 0) goto LAB_06e7997c;
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar4 = lVar4 + (long)(int)uVar3 * 0x20;
      uVar2 = uVar3 + 1;
    } while (*(int *)(lVar4 + 0x20) < 0);
    lVar5 = *(long *)(lVar4 + 0x30);
    param_2[3] = *(long *)(lVar4 + 0x38);
    param_2[2] = lVar5;
LAB_06e7996c:
    return uVar3 < uVar1;
  }
LAB_06e7997c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


