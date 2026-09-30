/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 01f60298
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_tiledMultiResLevel(long param_1)

{
  undefined1 in_CY;
  uint uVar1;
  ulong uVar2;
  int *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  uint uVar3;
  
  do {
    if ((bool)in_CY) {
LAB_01f602f0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (unaff_x21 == 0) {
LAB_01f602f4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = (ulong)((int)param_1 + 2);
    while( true ) {
      FUN_01fe27d4();
      uVar1 = (uint)uVar2;
      if ((int)unaff_w22 <= (int)uVar1) {
        return 0;
      }
      if (unaff_w22 <= uVar1) goto LAB_01f602f0;
      param_1 = (long)(int)uVar1;
      uVar2 = param_1 + 1;
      uVar1 = (uint)*(ushort *)(unaff_x23 + param_1 * 2);
      uVar3 = (uint)uVar2;
      if (uVar1 == unaff_w24) {
        *unaff_x19 = uVar3 - unaff_w20;
        return 1;
      }
      if (uVar1 == 0x5c) break;
      if (unaff_x21 == 0) goto LAB_01f602f4;
    }
    if ((int)unaff_w22 <= (int)uVar3) {
      return 0;
    }
    in_CY = unaff_w22 <= uVar3;
  } while( true );
}


