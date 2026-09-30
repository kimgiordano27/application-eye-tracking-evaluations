/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 03133ed4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusLost(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  long lVar5;
  long *unaff_x22;
  ulong uVar6;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ae9f78();
      goto LAB_03133f00;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 3) * 0x10 + 0x138);
LAB_03133f00:
  (*(code *)*puVar3)();
  lVar5 = *unaff_x22;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar6 = 0;
    uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      FUN_03133f70();
      uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return;
}


