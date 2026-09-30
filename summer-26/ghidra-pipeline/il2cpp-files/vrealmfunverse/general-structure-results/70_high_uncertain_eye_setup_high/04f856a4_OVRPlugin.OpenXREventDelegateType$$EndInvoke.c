/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$EndInvoke
ENTRY_POINT: 04f856a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__EndInvoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xd1a) & 1) == 0) {
    FUN_02b3c81c(Meta_XR_MRUtilityKit_LabelFilter_var);
    *(undefined1 *)(unaff_x21 + 0xd1a) = 1;
  }
  plVar5 = *(long **)(unaff_x20 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)Meta_XR_MRUtilityKit_LabelFilter_var) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_04f85720;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)Meta_XR_MRUtilityKit_LabelFilter_var,9);
LAB_04f85720:
                    /* WARNING: Could not recover jumptable at 0x04f85734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5);
  return;
}


