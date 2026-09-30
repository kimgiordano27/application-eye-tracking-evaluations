/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBodyBiped$$set_pullBodyOffset
ENTRY_POINT: 029a271c
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


/* WARNING: Removing unreachable block (ram,0x029a2818) */

void RootMotion_FinalIK_IKSolverFullBodyBiped__set_pullBodyOffset(undefined8 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_0279cdc8(param_1,0);
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x20 != 0) {
    uVar4 = *unaff_x19;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 < uVar1) {
      puVar5 = (undefined1 *)(unaff_x20 + (int)uVar4 + 0x20);
      uVar2 = *puVar5;
      if ((uVar4 + 1 < uVar1) && (uVar4 + 3 < uVar1)) {
        uVar3 = *(undefined1 *)(unaff_x20 + (int)(uVar4 + 1) + 0x20);
        *puVar5 = *(undefined1 *)(unaff_x20 + (int)(uVar4 + 3) + 0x20);
        uVar1 = *unaff_x19 + 2;
        if ((uVar1 < *(uint *)(unaff_x20 + 0x18)) &&
           (uVar4 = *unaff_x19 + 1, uVar4 < *(uint *)(unaff_x20 + 0x18))) {
          *(undefined1 *)(unaff_x20 + 0x20 + (long)(int)uVar4) =
               *(undefined1 *)(unaff_x20 + 0x20 + (long)(int)uVar1);
          if (*unaff_x19 + 2 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined1 *)(unaff_x20 + (int)(*unaff_x19 + 2) + 0x20) = uVar3;
            if (*unaff_x19 + 3 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined1 *)(unaff_x20 + (int)(*unaff_x19 + 3) + 0x20) = uVar2;
              *unaff_x19 = *unaff_x19 + 4;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


