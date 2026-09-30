/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 03217794
PROGRAM: vrfs-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(void)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  short *unaff_x21;
  long *unaff_x23;
  
  sVar1 = FUN_02521d48();
  if (sVar1 == 0x78) {
    sVar1 = *unaff_x21;
    if (DAT_0722c536 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dfcf08);
      DAT_0722c536 = '\x01';
    }
    uVar2 = FUN_02524ea0();
                    /* try { // try from 032177d8 to 0331782f has its CatchHandler @ 032177d8
                       catch() { ... } // from try @ 032177d8 with catch @ 032177d8
                       catch() { ... } // from try @ 032178a8 with catch @ 032177d8
                       catch() { ... } // from try @ 032178d8 with catch @ 032177d8
                       catch() { ... } // from try @ 0321794c with catch @ 032177d8 */
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x23);
    }
    FUN_03217888(sVar1,uVar2,uVar3);
    return;
  }
  sVar1 = *unaff_x21;
  if (DAT_0722c536 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    DAT_0722c536 = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_02524ea0();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_032172bc((int)sVar1,uVar2,uVar3);
  return;
}


