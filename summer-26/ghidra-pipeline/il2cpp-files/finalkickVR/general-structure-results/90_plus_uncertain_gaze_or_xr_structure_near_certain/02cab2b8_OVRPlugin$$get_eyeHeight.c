/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 02cab2b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPlugin__get_eyeHeight(void)

{
  int in_w8;
  void *pvVar1;
  long unaff_x29;
  MethodInfo *in_stack_00000008;
  undefined4 uStack000000000000002c;
  int iStack000000000000003c;
  OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C *pOStack0000000000000040;
  int iStack000000000000004c;
  
  pOStack0000000000000040 =
       *(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
        (*(long *)(unaff_x29 + -8) + 0x58);
  iStack000000000000004c = in_w8;
  NullCheck(pOStack0000000000000040);
  iStack000000000000003c =
       OVRLipSyncContextBase_get_Smoothing_mBFAC8B1ADE67B5A7FC8161E148A80E2326C8863E_inline
                 (pOStack0000000000000040,in_stack_00000008);
  if (iStack000000000000004c != iStack000000000000003c) {
    pvVar1 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
    uStack000000000000002c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x50);
    NullCheck(pvVar1);
    OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC
              (pvVar1,uStack000000000000002c,0);
  }
  return;
}


