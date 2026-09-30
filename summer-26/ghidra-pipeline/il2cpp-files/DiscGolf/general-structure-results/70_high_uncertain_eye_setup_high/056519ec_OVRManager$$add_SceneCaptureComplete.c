/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 056519ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x24;
  long lVar5;
  long *unaff_x27;
  
  uVar3 = FUN_036ec914(*unaff_x24,unaff_x24[1],*(undefined8 *)(param_1 + 0x18));
  FUN_055339f0(uVar3,0);
  lVar5 = *unaff_x27;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x22[1]) && (*unaff_x22 != 0)) &&
     (lVar4 = FUN_036eca00(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
  lVar5 = *(long *)puVar1;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x20[1]) && (*unaff_x20 != 0)) &&
     (lVar4 = FUN_036ec9e8(*unaff_x20,unaff_x20[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    FUN_036ec8f8(*unaff_x20,unaff_x20[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  puVar2 = 
  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<AffordanceStateData>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05651b5c();
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


