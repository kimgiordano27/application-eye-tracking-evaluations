/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectKeyboardSupported
ENTRY_POINT: 01dbfd04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x25;
  
code_r0x01dbfd04:
  do {
    lVar1 = (*(code *)*param_1)();
    if ((lVar1 != 0) && (uVar2 = FUN_01db86c8(lVar1,0), (uVar2 & 1) == 0)) {
                    /* try { // try from 01dbfd34 to 01ebfd5f has its CatchHandler @ 01dc0130 */
      FUN_01db751c(lVar1);
    }
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w23 == unaff_w22) {
      *unaff_x20 = 0;
      thunk_FUN_0106e12c();
      return;
    }
    lVar1 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar1 + (long)*piVar3 * 0x10 + 0x138);
          goto code_r0x01dbfd04;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    param_1 = (undefined8 *)FUN_0103c348();
  } while( true );
}


