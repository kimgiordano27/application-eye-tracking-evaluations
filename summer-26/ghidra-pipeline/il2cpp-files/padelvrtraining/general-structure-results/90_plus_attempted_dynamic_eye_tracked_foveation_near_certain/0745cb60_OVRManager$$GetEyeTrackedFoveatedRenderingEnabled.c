/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0745cb60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xa38));
  FUN_03d2d2b0(PTR_DAT_09222ed8);
  FUN_03d2d2b0(PTR_DAT_09222ed0);
  *(undefined1 *)(unaff_x20 + 0x7eb) = 1;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x42340000;
  uVar1 = FUN_08a08900(0,0,0x3f800000,0x42c80000,0);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x48),uVar1);
  *(undefined1 *)(unaff_x19 + 0x50) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51754_09222a38);
    FUN_06aee7bc(lVar4,uVar1,*(undefined8 *)PTR_DAT_09222ed8,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_03d1023c(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x68) = lVar4;
  thunk_FUN_03d1023c((long *)(unaff_x19 + 0x68),lVar4);
  thunk_FUN_08a4cf1c();
  return;
}


