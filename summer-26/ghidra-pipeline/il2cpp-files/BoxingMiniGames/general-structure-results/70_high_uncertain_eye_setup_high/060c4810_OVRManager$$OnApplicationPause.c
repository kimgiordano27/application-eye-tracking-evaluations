/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 060c4810
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnApplicationPause(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x20;
  float fVar3;
  float unaff_s8;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    if (*(int *)(unaff_x20 + 0x18) < 2) {
      return 0;
    }
    lVar1 = FUN_071bd0d0();
    if (lVar1 == 0) goto LAB_060c4928;
    fVar3 = (float)FUN_071d2870(lVar1,0);
                    /* try { // try from 060c487c to 061c48a3 has its CatchHandler @ 060c4a30 */
    FUN_060be338(unaff_s8 / fVar3);
    if (in_stack_00000028 == 0) goto LAB_060c4928;
    if ((*(char *)(in_stack_00000028 + 0x38) == '\0') ||
       (lVar1 = *(long *)(in_stack_00000028 + 0x48), lVar1 == 0)) {
      if (in_stack_00000020 == 0) goto LAB_060c4928;
      if (*(char *)(in_stack_00000020 + 0x38) == '\0') {
        return 0;
      }
      lVar1 = *(long *)(in_stack_00000020 + 0x48);
      if (lVar1 == 0) {
        return 0;
      }
    }
    else {
      if (in_stack_00000020 == 0) goto LAB_060c4928;
      if ((*(char *)(in_stack_00000020 + 0x38) != '\0') &&
         (*(long *)(in_stack_00000020 + 0x48) != 0)) {
        in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
        in_stack_00000010 = lVar1;
        FUN_060be6b8(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
        return 1;
      }
    }
    lVar2 = *unaff_x19;
  }
  else {
    lVar2 = *unaff_x19;
    lVar1 = FUN_0459ed6c();
    if (lVar1 == 0) goto LAB_060c4928;
    if (*(char *)(lVar1 + 0x38) == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x48);
    }
  }
  if (lVar2 != 0) {
    FUN_060be5d8(lVar2,lVar1,0);
    return 1;
  }
LAB_060c4928:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


