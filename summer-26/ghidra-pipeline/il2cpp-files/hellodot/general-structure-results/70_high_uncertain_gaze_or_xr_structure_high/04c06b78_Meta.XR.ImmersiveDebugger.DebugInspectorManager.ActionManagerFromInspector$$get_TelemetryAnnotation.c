/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ActionManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 04c06b78
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ActionManagerFromInspector__get_TelemetryAnnotation
               (void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x24;
  double dVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  
  *(undefined1 *)(unaff_x24 + 0x566) = 1;
  uStack0000000000000028 = 0;
  lVar4 = thunk_FUN_02cea894(*unaff_x22);
  FUN_04bdb420(lVar4,0);
  puVar2 = PTR_DAT_065e5010;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    puVar3 = PTR_DAT_065e13b0;
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
    puVar2 = PTR_DAT_065c9598;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar3 = PTR_DAT_065c98d0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_065e2728;
    uStack0000000000000028 = FUN_04f13a54();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar3);
    }
    dVar6 = (double)FUN_04f47984(&stack0x00000028,0);
    lVar1 = -0x8000000000000000;
    if (dVar6 != INFINITY) {
      lVar1 = (long)dVar6;
    }
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_03c87038(&stack0x00000010,lVar1,*(undefined8 *)puVar2);
    *(undefined8 *)(lVar4 + 0x58) = in_stack_00000018;
    *(undefined8 *)(lVar4 + 0x50) = in_stack_00000010;
    uStack0000000000000028 = FUN_04f13a54();
    FUN_04f47984(&stack0x00000028,0);
    FUN_03c87038();
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    if (unaff_x20 != 0) {
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x20 + 0x10);
      FUN_04c06928();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


