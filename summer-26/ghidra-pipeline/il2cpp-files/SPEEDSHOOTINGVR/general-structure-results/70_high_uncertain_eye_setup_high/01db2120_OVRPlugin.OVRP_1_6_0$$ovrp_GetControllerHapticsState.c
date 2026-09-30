/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 01db2120
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 unaff_x25;
  long *unaff_x26;
  
  while( true ) {
    *unaff_x19 = unaff_x21;
    thunk_FUN_0106e12c();
    if (unaff_x21 != 0) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da8120(&stack0x00000008);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_01db214c;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_01db21a4;
    unaff_x21 = *(long *)(lVar2 + unaff_x22 * 8 + 0x20);
    thunk_FUN_00ffe618();
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if (unaff_w23 < *(uint *)(lVar2 + 0x18)) {
      puVar1 = (undefined8 *)(lVar2 + unaff_x22 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_0106e12c(puVar1,0);
      return unaff_w24 != ((uint)((ulong)unaff_x25 >> 0x10) & 0xffff);
    }
LAB_01db21a4:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_01db214c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


