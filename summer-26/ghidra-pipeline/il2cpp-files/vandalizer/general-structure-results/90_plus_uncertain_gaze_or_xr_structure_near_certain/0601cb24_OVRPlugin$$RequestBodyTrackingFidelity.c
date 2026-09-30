/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 0601cb24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__RequestBodyTrackingFidelity(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar1;
  float unaff_s11;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    uStack0000000000000000 = param_1;
    fVar1 = (float)FUN_0601d5ac();
    if (fVar1 <= unaff_s11) {
      unaff_s11 = fVar1;
    }
    unaff_x24 = unaff_x24 + unaff_x23;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x21) {
      return unaff_s11;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x21) {
LAB_0601cb8c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_0601cb90:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06034378(&stack0x00000010,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x22 + unaff_x21 * 4),0);
    unaff_x21 = unaff_x21 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_0601cb8c;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_0601cb90;
    FUN_06034378(&stack0x00000010,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + (unaff_x24 >> 0x1e) + 0x20),0);
    param_1 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  } while( true );
}


