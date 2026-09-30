/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 056536bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_gpuLevel(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long lVar3;
  long *unaff_x27;
  
  lVar3 = *unaff_x27;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02dcfd74(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar2 = FUN_036eca2c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)),
     lVar2 != 0)) {
    FUN_036ec948(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
  }
  lVar3 = *unaff_x27;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02dcfd74(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar2 = FUN_036eca2c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)),
     lVar2 != 0)) {
    FUN_036ec948(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
  }
  lVar3 = *(long *)puVar1;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02dcfd74(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x21[1]) && (*unaff_x21 != 0)) &&
     (lVar2 = FUN_036ec9e8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)),
     lVar2 != 0)) {
    FUN_036ec8f8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05653440();
  return;
}


