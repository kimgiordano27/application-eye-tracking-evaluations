/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0379c0ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_028c0948();
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x178) = param_1;
  thunk_FUN_01b4f09c(lVar2 + 0x178,param_1);
  FUN_01e7b7a8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd08);
    FUN_028c0d80(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2d70,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x180) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x180,uVar1);
  }
  FUN_01e7cb58();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fec8);
    FUN_028c0b64(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2d78,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x188,uVar1);
  }
  FUN_01e7c180();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd50);
    FUN_028c0ee8(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2d80,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 400) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 400,uVar1);
  }
  FUN_01e7d1e8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fde8);
    FUN_028c0c18(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2d90,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x198) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x198,uVar1);
  }
  FUN_01e7c4c8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc70);
    FUN_028c0f9c(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2d98,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a0) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1a0,uVar1);
  }
  FUN_01e7d530();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fda8);
    FUN_028c0ccc(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2da0,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1a8,uVar1);
  }
  FUN_01e7c810();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9feb0);
    FUN_028c4964(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2da8,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1b0,uVar1);
  }
  FUN_01e86248();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcd0);
    FUN_028c4e50(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2db0,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1b8,uVar1);
  }
  FUN_01e87940();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff28);
    FUN_028c4f04(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2db8,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1c0,uVar1);
  }
  FUN_01e87c88();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdf0);
    FUN_028c4fb8(uVar1,uVar3,*(undefined8 *)PTR_DAT_03da2dc0,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar1;
    thunk_FUN_01b4f09c(lVar2 + 0x1c8,uVar1);
  }
  FUN_01e87fd0();
  return;
}


