/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0565391c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar2;
  long lVar3;
  long *unaff_x27;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  if (((0 < (int)unaff_x22[1]) && (*unaff_x22 != 0)) &&
     (lVar3 = FUN_036eca58(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec990(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x18));
  }
  lVar2 = *unaff_x27;
  lVar3 = *(long *)(lVar2 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar2);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar3 = FUN_036eca54(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec98c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x18));
  }
  lVar2 = *unaff_x27;
  lVar3 = *(long *)(lVar2 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar2);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar3 = FUN_036eca54(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec98c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x18));
  }
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar2);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x21[1]) && (*unaff_x21 != 0)) &&
     (lVar3 = FUN_036ec9e8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec8f8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x18));
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05653440();
  return;
}


