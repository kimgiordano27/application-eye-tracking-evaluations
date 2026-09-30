/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointRotationActiveState$$GetWorldTargetAxis
ENTRY_POINT: 018d3a44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_PoseDetection_JointRotationActiveState__GetWorldTargetAxis(void)

{
  byte bVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 == (long *)0x0) {
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x018d3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x658))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 300);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 300)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__)) {
    if (unaff_x19 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__
                       + 300);
      if ((bVar1 <= *(byte *)(*unaff_x19 + 300)) &&
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)
           Method_System_Collections_Generic_IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__))
      {
        FUN_018d3b1c();
        return;
      }
    }
    FUN_018d3c54();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


