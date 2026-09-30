/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsDesc
ENTRY_POINT: 05d46b90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsDesc(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  do {
    if (*(long *)(unaff_x19 + 0x68) == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = FUN_04430018(*(long *)(unaff_x19 + 0x68),unaff_w21,*unaff_x24);
    if (lVar1 == 0) break;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    FUN_0696e19c(uVar2,uVar3,0);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) break;
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
      do {
        unaff_w20 = unaff_w26;
        if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
          return;
        }
        unaff_w26 = unaff_w20 + 1;
        unaff_w21 = unaff_w26;
      } while (*(int *)(lVar1 + 0x18) <= unaff_w26);
    }
    param_1 = FUN_04430018(lVar1,unaff_w20,*unaff_x24);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


