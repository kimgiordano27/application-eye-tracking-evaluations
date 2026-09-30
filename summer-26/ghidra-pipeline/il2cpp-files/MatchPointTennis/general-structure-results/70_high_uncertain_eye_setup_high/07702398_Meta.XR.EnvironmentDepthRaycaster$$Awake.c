/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Awake
ENTRY_POINT: 07702398
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Awake(void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_0952fedc(uVar3,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x40);
      goto joined_r0x077023d0;
    }
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
joined_r0x077023d0:
  if ((lVar2 != 0) && (unaff_x19 != 0)) {
    FUN_07702144(*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
                 *(undefined4 *)(lVar2 + 0x30),*(undefined4 *)(lVar2 + 0x34));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


