/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 05316b14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x201) = 1;
  lVar1 = FUN_03356cdc();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x20);
  }
  uVar2 = FUN_060f078c(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x130);
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)System_Xml_Schema_Datatype_byte_TypeInfo);
    FUN_03abf234(uVar3,uVar4,*(undefined8 *)System_Xml_Schema_Datatype_boolean_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  }
                    /* try { // try from 05316b8c to 05416c83 has its CatchHandler @ 05316b8c
                       catch() { ... } // from try @ 05316b8c with catch @ 05316b8c
                       catch() { ... } // from try @ 05316cb4 with catch @ 05316b8c
                       catch() { ... } // from try @ 05316ce4 with catch @ 05316b8c
                       catch() { ... } // from try @ 05316d20 with catch @ 05316b8c
                       catch() { ... } // from try @ 05316d44 with catch @ 05316b8c */
  return;
}


