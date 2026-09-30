/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 0563d498
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_02df485c();
  lVar2 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = unaff_x19;
        LeanTween__value(puVar4);
      }
      else {
        FUN_040101ec();
      }
      in_stack_00000008 = unaff_x19;
      LeanTween__value(&stack0x00000008);
      return in_stack_00000008;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


