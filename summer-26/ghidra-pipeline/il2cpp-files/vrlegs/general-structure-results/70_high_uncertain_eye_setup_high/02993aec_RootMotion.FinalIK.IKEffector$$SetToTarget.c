/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$SetToTarget
ENTRY_POINT: 02993aec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02993c68) */

void RootMotion_FinalIK_IKEffector__SetToTarget(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  int unaff_w22;
  long lVar5;
  long unaff_x23;
  int unaff_w25;
  char cStack000000000000000c;
  long in_stack_00000018;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(int *)(unaff_x23 + -8) = unaff_w25 + unaff_w22;
  *(int *)(unaff_x23 + 8) = unaff_w25;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x100);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  puVar2 = PTR_DAT_03d07b80;
  puVar1 = PTR_DAT_03d07b78;
  lVar3 = *(long *)(unaff_x20 + 0x100);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(int *)(lVar3 + 0x18) == 0) || (*(char *)(unaff_x20 + 0x20) == '\x01')) {
    FUN_02210dd4(lVar3);
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      do {
        FUN_01ea4674(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (unaff_w25 + unaff_w22 <= *(int *)(in_stack_00000018 + 0x18)) {
          if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_0221099c(*(long *)(unaff_x20 + 0x100),lVar5);
          goto LAB_02993be0;
        }
        lVar5 = FUN_0220fecc(lVar5,*(undefined8 *)puVar1);
      } while (lVar5 != 0);
      lVar3 = *(long *)(unaff_x20 + 0x100);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02210dd4(lVar3);
  }
LAB_02993be0:
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return;
}


