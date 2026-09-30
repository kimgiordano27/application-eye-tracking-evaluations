/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 027ec1d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSimultaneousHandsAndControllersEnabled(long param_1)

{
  long lVar1;
  char in_NG;
  char in_OV;
  long in_x9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *puVar2;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  do {
    lVar1 = unaff_x19;
    if (in_NG == in_OV) {
      lVar1 = in_x9;
    }
    unaff_x24 = unaff_x24 + 0x20;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x28) = lVar1;
    if (unaff_x25 == unaff_x26) {
      return;
    }
    if (unaff_x27 == 0) {
LAB_027ec208:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_x25) {
LAB_027ec204:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(unaff_x27 + unaff_x24 + 0x20) = lVar1;
    thunk_FUN_01a4b338();
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_x25) goto LAB_027ec204;
    puVar2 = (undefined8 *)(unaff_x27 + unaff_x24 + 0x30);
    *puVar2 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar2,0);
    unaff_x27 = *unaff_x21;
    if (unaff_x27 == 0) goto LAB_027ec208;
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_x25) goto LAB_027ec204;
    in_x9 = lVar1 + unaff_x23;
    unaff_x25 = unaff_x25 + 1;
    in_OV = in_x9 <= unaff_x19 && SBORROW8(in_x9,lVar1);
    in_NG = unaff_x19 < in_x9 || in_x9 - lVar1 < 0;
    param_1 = unaff_x27 + unaff_x24;
  } while( true );
}


