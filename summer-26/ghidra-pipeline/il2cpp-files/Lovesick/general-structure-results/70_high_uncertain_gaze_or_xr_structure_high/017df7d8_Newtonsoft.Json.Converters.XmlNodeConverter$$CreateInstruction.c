/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XmlNodeConverter$$CreateInstruction
ENTRY_POINT: 017df7d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Converters_XmlNodeConverter__CreateInstruction(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x20 + 0x1c8) = 1;
  puVar2 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
  puVar1 = Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if (lVar5 != 0) {
    lVar3 = *(long *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_017da14c(lVar5,uVar6);
    return;
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (*plVar4 == *(long *)PTR_DAT_033ee288) {
                    /* WARNING: Could not recover jumptable at 0x017df884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar4[3])(plVar4[8],plVar4[5]);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


