/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 05653630
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


void OVRManager__get_gpuLevel(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar3;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x770));
  *(undefined1 *)(unaff_x25 + 0x34e) = 1;
  puVar1 = System_Collections_Generic_ICollection<int>_TypeInfo;
  if (*unaff_x22 != 0) {
    lVar3 = *(long *)System_Collections_Generic_ICollection<JToken>_TypeInfo;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_02dcfd74(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 8);
    if (*(long *)(lVar2 + 0x38) == 0) {
      FUN_02dcfd74(lVar2);
    }
    if (((0 < (int)unaff_x22[1]) && (*unaff_x22 != 0)) &&
       (lVar2 = FUN_036eca30(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)
                            ), lVar2 != 0)) {
      FUN_036ec94c(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
    }
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
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar2 = FUN_036eca2c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)),
     lVar2 != 0)) {
    FUN_036ec948(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
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


