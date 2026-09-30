/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0379c2a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_01e7d1e8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fde8);
    FUN_028c0c18(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2d90,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x198,uVar2);
  }
  FUN_01e7c4c8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc70);
    FUN_028c0f9c(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2d98,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1a0,uVar2);
  }
  FUN_01e7d530();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fda8);
    FUN_028c0ccc(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2da0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1a8,uVar2);
  }
  FUN_01e7c810();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9feb0);
    FUN_028c4964(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2da8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1b0,uVar2);
  }
  FUN_01e86248();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcd0);
    FUN_028c4e50(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2db0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1b8,uVar2);
  }
  FUN_01e87940();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff28);
    FUN_028c4f04(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2db8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1c0,uVar2);
  }
  FUN_01e87c88();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdf0);
    FUN_028c4fb8(uVar2,uVar3,*(undefined8 *)PTR_DAT_03da2dc0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1c8,uVar2);
  }
  FUN_01e87fd0();
  return;
}


