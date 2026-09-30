/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 07a4b1dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionAdvertisement(int *param_1,long param_2)

{
  undefined1 in_ZR;
  uint *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int *unaff_x23;
  int *unaff_x24;
  int *unaff_x25;
  int *unaff_x26;
  int unaff_w27;
  
code_r0x07a4b1dc:
  if (((!(bool)in_ZR) && (param_1 = unaff_x24, unaff_w22 != 3)) &&
     (param_1 = unaff_x23, unaff_w22 != 4)) goto LAB_07a4b218;
  do {
    if (*param_1 != 0) goto LAB_07a4b228;
LAB_07a4b218:
    do {
      *unaff_x19 = *unaff_x19 & (unaff_w27 << (ulong)(unaff_w22 & 0x1f) ^ 0xffffffffU);
LAB_07a4b228:
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == 5) {
        return;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_2 = *unaff_x21;
      }
      if (1 < (int)unaff_w22) {
        in_ZR = unaff_w22 == 2;
        param_1 = unaff_x25;
        goto code_r0x07a4b1dc;
      }
      param_1 = unaff_x20;
    } while ((unaff_w22 != 0) && (param_1 = unaff_x26, unaff_w22 != 1));
  } while( true );
}


