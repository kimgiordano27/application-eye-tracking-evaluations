/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 02c51f24
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_43_0___cctor(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long *unaff_x23;
  undefined2 *unaff_x24;
  
  lVar2 = FUN_017fc3f4(*param_1,unaff_w21);
  if (0 < (int)unaff_w21) {
    if (lVar2 == 0) goto LAB_02c52004;
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) goto LAB_02c52000;
      *(undefined2 *)(lVar2 + 0x20 + uVar3 * 2) = *unaff_x24;
      uVar3 = uVar3 + 1;
      unaff_x24 = unaff_x24 + 1;
    } while (unaff_w21 != uVar3);
  }
  lVar2 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,unaff_w20);
  uVar1 = (**(code **)(*unaff_x23 + 0x1a8))();
  if ((int)unaff_w20 <= (int)uVar1) {
    uVar1 = unaff_w20;
  }
  if (0 < (int)uVar1) {
    if (lVar2 == 0) {
LAB_02c52004:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_02c52000:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(undefined1 *)(unaff_x19 + uVar3) = *(undefined1 *)(lVar2 + 0x20 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


