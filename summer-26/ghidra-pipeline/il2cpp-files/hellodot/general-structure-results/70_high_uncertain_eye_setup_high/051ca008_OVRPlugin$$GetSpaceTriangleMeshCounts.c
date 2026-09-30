/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 051ca008
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSpaceTriangleMeshCounts(float param_1)

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float unaff_s11;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  do {
    if (param_1 <= unaff_s11) {
      unaff_s11 = param_1;
    }
    unaff_x24 = unaff_x24 + unaff_x23;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x21) {
      return unaff_s11;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x21) {
LAB_051ca060:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_051ca064:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_051deef8(&stack0x00000010,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x22 + unaff_x21 * 4),0);
    unaff_x21 = unaff_x21 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_051ca060;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_051ca064;
    FUN_051deef8(&stack0x00000010,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + (unaff_x24 >> 0x1e) + 0x20),0);
    param_1 = (float)FUN_051caa80();
  } while( true );
}


