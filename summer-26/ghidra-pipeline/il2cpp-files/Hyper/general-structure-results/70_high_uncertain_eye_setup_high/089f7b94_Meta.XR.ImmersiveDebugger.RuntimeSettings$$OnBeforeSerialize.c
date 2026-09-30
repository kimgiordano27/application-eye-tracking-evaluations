/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 089f7b94
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  
  FUN_04947ee4(PTR_DAT_0ac511d0);
  FUN_04947ee4(PTR_DAT_0ac511b0);
  *(undefined1 *)(unaff_x20 + 2) = 1;
  puVar5 = PTR_DAT_0ac511d0;
  puVar4 = PTR_DAT_0ac511c8;
  puVar3 = PTR_DAT_0ac511c0;
  puVar2 = PTR_DAT_0ac511b8;
  puVar1 = PTR_DAT_0ac4e2c8;
  lVar6 = *unaff_x19;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x19;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_063d4f5c(uVar7,uVar8,*(undefined8 *)puVar5,0);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
  FUN_06ec46b8(uVar8,uVar7,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar8;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar8);
  return;
}


