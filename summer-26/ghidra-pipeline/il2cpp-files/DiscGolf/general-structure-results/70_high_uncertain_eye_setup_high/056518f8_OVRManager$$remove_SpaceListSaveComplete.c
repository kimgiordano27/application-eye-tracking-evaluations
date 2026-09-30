/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 056518f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceListSaveComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar5;
  long *unaff_x27;
  
  lVar3 = FUN_036eca1c();
  if (lVar3 != 0) {
    FUN_036ec938(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x18));
  }
  lVar5 = *unaff_x27;
  lVar3 = *(long *)(lVar5 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar5);
    lVar3 = *(long *)(lVar5 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    FUN_055339f0(uVar4,0);
  }
  lVar5 = *unaff_x27;
  lVar3 = *(long *)(lVar5 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar5);
    lVar3 = *(long *)(lVar5 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    FUN_055339f0(uVar4,0);
  }
  lVar5 = *unaff_x27;
  lVar3 = *(long *)(lVar5 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar5);
    lVar3 = *(long *)(lVar5 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x22[1]) && (*unaff_x22 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    FUN_055339f0(uVar4,0);
  }
  lVar5 = *(long *)puVar1;
  lVar3 = *(long *)(lVar5 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar5);
    lVar3 = *(long *)(lVar5 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x20[1]) && (*unaff_x20 != 0)) &&
     (lVar3 = FUN_036ec9e8(*unaff_x20,unaff_x20[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec8f8(*unaff_x20,unaff_x20[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  puVar2 = 
  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<AffordanceStateData>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_05651b5c();
  FUN_055efebc(uVar4,*(undefined8 *)puVar2,0,0);
  return;
}


