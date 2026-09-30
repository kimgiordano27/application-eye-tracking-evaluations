/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 055ff830
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int in_w8;
  uint uVar5;
  uint unaff_w19;
  long unaff_x21;
  undefined8 *puVar6;
  long lVar7;
  undefined8 in_stack_00000008;
  
  puVar3 = PTR_DAT_072862d0;
  puVar2 = PTR_DAT_07280bd8;
  puVar1 = PTR_DAT_07280b98;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  puVar6 = (undefined8 *)(unaff_x21 + (long)(int)unaff_w19 * 0x10 + 0x20);
  lVar7 = (long)in_w8 - (long)(int)unaff_w19;
  while (uVar5 = *(uint *)(unaff_x21 + 0x18), unaff_w19 < uVar5) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    if (uVar5 <= unaff_w19) break;
    if (DAT_076d3859 == '\0') {
      thunk_FUN_032e1da0(puVar3);
      thunk_FUN_032e1da0(puVar2);
      DAT_076d3859 = '\x01';
    }
    in_stack_00000008 = *puVar6;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_03e6995c(&stack0x00000008);
    if ((uVar4 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 2;
    if (lVar7 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


