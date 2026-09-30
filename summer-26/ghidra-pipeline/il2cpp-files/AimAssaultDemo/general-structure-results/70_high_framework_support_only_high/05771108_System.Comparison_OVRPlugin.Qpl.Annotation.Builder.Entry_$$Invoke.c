/*
FUNCTION_NAME: System.Comparison<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 05771108
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Comparison<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  
  uVar2 = FUN_062519f8(param_1,0);
  uVar3 = FUN_062519f8(*(long *)(unaff_x21 + 0x68) + 0x20,0);
  uVar4 = FUN_0625ad04(uVar2,uVar3,0);
  uVar1 = 0;
  if ((uVar4 & 1) == 0) {
    uVar1 = unaff_w23;
  }
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x21 + 0xe0));
    }
    uVar2 = FUN_062519f8(uVar2,0);
    uVar3 = FUN_062519f8(*(long *)(unaff_x21 + 0x78) + 0x20,0);
    uVar4 = FUN_0625ad04(uVar2,uVar3,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(unaff_x21 + 0xe0));
      }
      uVar2 = FUN_062519f8(uVar2,0);
      uVar3 = FUN_062519f8(*(long *)(unaff_x21 + 0x80) + 0x20,0);
      uVar4 = FUN_0625ad04(uVar2,uVar3,0);
      if ((uVar4 & 1) == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07d86550);
        uVar2 = thunk_FUN_037788cc();
        uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d97f20);
        FUN_0623e2f4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar2);
      }
      uVar6 = 8;
      unaff_w23 = uVar1;
    }
    else {
      uVar6 = 4;
    }
  }
  else {
    uVar6 = 8;
    unaff_w23 = unaff_w24;
  }
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = unaff_w23 / uVar6;
  }
  return uVar1;
}


