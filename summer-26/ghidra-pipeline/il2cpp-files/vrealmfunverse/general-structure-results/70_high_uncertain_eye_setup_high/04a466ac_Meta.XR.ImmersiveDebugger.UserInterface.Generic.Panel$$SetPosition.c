/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 04a466ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x25;
  ulong unaff_x26;
  
  do {
    uVar1 = FUN_04a44b0c();
    unaff_w22 = unaff_w22 + (uVar1 & 1);
    do {
      unaff_x26 = unaff_x26 + 1;
      unaff_x25 = unaff_x25 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x24) <= (long)unaff_x26) {
        return unaff_w22;
      }
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar3 = lVar3 + unaff_x25;
    } while ((*(int *)(lVar3 + 0x20) < 0) ||
            (uVar2 = (**(code **)(unaff_x20 + 0x18))
                               (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + 0x28),
                                *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(unaff_x20 + 0x28)),
            (uVar2 & 1) == 0));
  } while( true );
}


