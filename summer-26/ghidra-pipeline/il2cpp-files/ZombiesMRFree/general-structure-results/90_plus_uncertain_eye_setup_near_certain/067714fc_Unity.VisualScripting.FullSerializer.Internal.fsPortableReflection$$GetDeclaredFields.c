/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$GetDeclaredFields
ENTRY_POINT: 067714fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__GetDeclaredFields(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  plVar4 = *(long **)(unaff_x19 + 0x348);
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x20;
  }
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  uVar5 = **(undefined8 **)(param_1 + 0xb8);
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*plVar4);
  }
  FUN_03dbda3c(uVar5,*(undefined8 *)puVar1);
  lVar3 = *unaff_x20;
  lVar2 = **(long **)(lVar3 + 0xb8);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar3);
        lVar2 = **(long **)(*unaff_x20 + 0xb8);
        if (lVar2 == 0) goto LAB_067715a8;
      }
      lVar2 = FUN_04430018(lVar2,0,*(undefined8 *)PTR_DAT_06f8ade0);
      if (lVar2 != 0) {
        return 1;
      }
    }
    return 0;
  }
LAB_067715a8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


