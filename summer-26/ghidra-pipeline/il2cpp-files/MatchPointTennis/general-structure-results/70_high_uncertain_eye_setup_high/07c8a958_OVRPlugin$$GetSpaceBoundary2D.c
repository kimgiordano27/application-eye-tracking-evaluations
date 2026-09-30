/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 07c8a958
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined8 *)(param_1 + 0xc) = param_2;
  lVar3 = FUN_04447c90(*unaff_x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = DAT_01c74678;
    uVar2 = DAT_01c73d70;
    if (uVar1 != 1) {
      *(undefined8 *)(lVar3 + 0x28) = DAT_01c73d70;
      if (((2 < uVar1) && (*(undefined8 *)(lVar3 + 0x30) = uVar2, uVar1 != 3)) &&
         (*(undefined8 *)(lVar3 + 0x38) = uVar2, 4 < uVar1)) {
        *(undefined8 *)(lVar3 + 0x40) = DAT_01c74060;
        *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = lVar3;
        thunk_FUN_044bb4b4();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


