/*
FUNCTION_NAME: FluffyUnderware.Curvy.Components.CurvyGLRenderer$$.ctor
ENTRY_POINT: 02ed6404
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ed64b4) */

void FluffyUnderware_Curvy_Components_CurvyGLRenderer___ctor
               (ulong param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  long unaff_x19;
  long lVar2;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd9660);
    *(undefined1 *)(unaff_x19 + 0x781) = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*param_3 != *(long *)PTR_DAT_03cd9660) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_3);
  }
  lVar2 = param_3[6];
  cStack000000000000000c = '\0';
  FUN_027e0bd8(lVar2,&stack0x0000000c,0);
  if (1 < *(uint *)(param_3 + 0xb) - 5) {
    uVar1 = 5;
    if (1 < *(uint *)(param_3 + 0xb)) {
      uVar1 = 6;
    }
    *(undefined4 *)(param_3 + 0xb) = uVar1;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar2,0);
  }
  return;
}


