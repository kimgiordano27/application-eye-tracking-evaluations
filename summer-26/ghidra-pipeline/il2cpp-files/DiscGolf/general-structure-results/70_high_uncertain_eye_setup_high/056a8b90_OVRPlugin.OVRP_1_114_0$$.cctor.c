/*
FUNCTION_NAME: OVRPlugin.OVRP_1_114_0$$.cctor
ENTRY_POINT: 056a8b90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_114_0___cctor(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8(UnityEngine_UIElements_TextValueField<double>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xa61) = 1;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar3 = FUN_056a4794(uVar1,unaff_x19 + 0x10,unaff_x19 + 0x34);
  puVar2 = System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo;
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
    return;
  }
  lVar4 = **(long **)(*(long *)System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo + 0xb8);
  if (lVar4 == 0) {
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_UIElements_TextInputBaseField<Hash128>_TypeInfo);
    FUN_04df7850(uVar5,*(undefined8 *)
                        UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_TypeInfo);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
    LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  FUN_04df85f0(lVar4,*(undefined4 *)(unaff_x19 + 0x34));
  return;
}


