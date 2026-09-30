/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 0337e3c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_rotation(void)

{
  ushort uVar1;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  do {
    unaff_w20 = unaff_w20 | 4;
    do {
      while( true ) {
        while( true ) {
          unaff_w21 = unaff_w21 + 1;
          if (*(int *)(unaff_x19 + 0x10) <= unaff_w21) {
            return unaff_w20;
          }
          uVar1 = FUN_0314e438();
          if (0x6d < uVar1) break;
          if (uVar1 == 0x69) {
            unaff_w20 = unaff_w20 | 1;
          }
          else if (uVar1 == 0x6d) {
            unaff_w20 = unaff_w20 | 2;
          }
        }
        if (uVar1 != 0x73) break;
        unaff_w20 = unaff_w20 | 0x10;
      }
    } while (uVar1 != 0x78);
  } while( true );
}


