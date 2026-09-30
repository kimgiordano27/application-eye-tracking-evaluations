/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$get_OvrPluginHandTrackingPoseProvider
ENTRY_POINT: 0727927c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Oculus_Avatar2_OvrAvatarManager__get_OvrPluginHandTrackingPoseProvider
               (long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long unaff_x22;
  long in_stack_00000008;
  
  if ((*(byte *)(unaff_x22 + 0xac1) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09218280);
    FUN_03d2d2b0(PTR_DAT_09218288);
    *(undefined1 *)(unaff_x22 + 0xac1) = 1;
  }
  puVar1 = PTR_DAT_09218288;
  in_stack_00000008 = 0;
  if (param_3 == 4) {
    uVar2 = FUN_07279354(param_1,param_2,&stack0x00000008);
    if ((uVar2 & 1) == 0) {
      in_stack_00000008 = 0;
    }
    return in_stack_00000008;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return 0;
      }
      lVar3 = FUN_05a39464(lVar3,iVar4,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      uVar2 = FUN_06fd1900(param_2,*(undefined8 *)(lVar3 + 0x30),param_3,0);
      if ((uVar2 & 1) != 0) {
        return lVar3;
      }
      lVar3 = *(long *)(param_1 + 0x38);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


