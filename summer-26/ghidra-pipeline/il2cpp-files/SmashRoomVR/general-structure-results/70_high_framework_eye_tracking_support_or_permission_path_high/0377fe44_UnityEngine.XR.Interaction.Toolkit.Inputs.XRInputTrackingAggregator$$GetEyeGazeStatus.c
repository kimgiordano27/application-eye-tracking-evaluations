/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 0377fe44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_1;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  *(undefined8 *)(param_1 + 0xd8) = unaff_x20;
  thunk_FUN_01b4f09c();
  FUN_01e5cb14();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fed8);
    FUN_028bfbec(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2010,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar3 = uVar2;
    thunk_FUN_01b4f09c(puVar3,uVar2);
  }
  FUN_01e5bdf4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff58);
    FUN_028bfd54(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2018,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar3 = uVar2;
    thunk_FUN_01b4f09c(puVar3,uVar2);
  }
  FUN_01e5c484();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc68);
    FUN_028bf91c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2020,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar3 = uVar2;
    thunk_FUN_01b4f09c(puVar3,uVar2);
  }
  FUN_01e5b0d4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fea8);
    FUN_028bf9d0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2030,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar3 = uVar2;
    thunk_FUN_01b4f09c(puVar3,uVar2);
  }
  FUN_01e5b41c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc48);
    FUN_028c39ec(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2038,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x100) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x100,uVar2);
  }
  FUN_01e81a18();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdb8);
    FUN_028c3e24(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2040,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x108,uVar2);
  }
  FUN_01e82dc8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fca0);
    FUN_028c3c08(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2048,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x110,uVar2);
  }
  FUN_01e823f0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdb0);
    FUN_028c3f8c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2050,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x118,uVar2);
  }
  FUN_01e83458();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fef8);
    FUN_028c3cbc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2058,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x120) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x120,uVar2);
  }
  FUN_01e82738();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdd8);
    FUN_028c4040(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2060,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x128,uVar2);
  }
  FUN_01e837a0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd60);
    FUN_028c3d70(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2068,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x130,uVar2);
  }
  FUN_01e82a80();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff40);
    FUN_028c40f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2070,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x138) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x138,uVar2);
  }
  FUN_01e83ae8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe90);
    FUN_028c3ed8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2078,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x140) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x140,uVar2);
  }
  FUN_01e83110();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc10);
    FUN_028c3aa0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2088,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x148) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x148,uVar2);
  }
  FUN_01e81d60();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc50);
    FUN_028c3b54(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2090,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x150,uVar2);
  }
  FUN_01e820a8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe88);
    FUN_028bff70(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2098,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x158) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x158,uVar2);
  }
  System_Runtime_CompilerServices_Unsafe__Add<byte>();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd80);
    FUN_028c05c4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20a0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x160) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x160,uVar2);
  }
  FUN_01e5e20c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe10);
    FUN_028c018c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20a8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x168) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x168,uVar2);
  }
  System_Runtime_CompilerServices_Unsafe__As<byte,_HID_HIDCollectionDescriptor>();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd98);
    FUN_028c072c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20b0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x170,uVar2);
  }
  FUN_01e7b118();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe60);
    FUN_028c02f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20b8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x178,uVar2);
  }
  FUN_01e5db7c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc60);
    FUN_028c07e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20c0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x180,uVar2);
  }
  FUN_01e7b460();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc40);
    FUN_028c03a8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20c8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x188,uVar2);
  }
  FUN_01e5dec4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc90);
    FUN_028c0678(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20d0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 400,uVar2);
  }
  FUN_01e5e554();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd30);
    FUN_028c0024(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20e0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x198,uVar2);
  }
  FUN_01e5d1a4();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe68);
    FUN_028c00d8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20e8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1a0,uVar2);
  }
  FUN_01e5d4ec();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff68);
    FUN_028c41a8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20f0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1a8,uVar2);
  }
  FUN_01e83e30();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe08);
    FUN_028c45e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da20f8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1b0,uVar2);
  }
  FUN_01e851e0();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd10);
    FUN_028c43c4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2100,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1b8,uVar2);
  }
  FUN_01e84808();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd38);
    FUN_028c4748(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2108,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1c0,uVar2);
  }
  FUN_01e85870();
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
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc20);
    FUN_028c4478(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2110,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1c8,uVar2);
  }
  FUN_01e84b50();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe70);
    FUN_028c47fc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2118,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1d0,uVar2);
  }
  FUN_01e85bb8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcb0);
    FUN_028c452c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2120,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1d8,uVar2);
  }
  FUN_01e84e98();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd90);
    FUN_028c48b0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2128,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1e0,uVar2);
  }
  FUN_01e85f00();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc30);
    FUN_028c4694(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2138,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1e8,uVar2);
  }
  FUN_01e85528();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe98);
    FUN_028c425c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2140,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1f0,uVar2);
  }
  FUN_01e84178();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe20);
    FUN_028c4310(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2148,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x1f8,uVar2);
  }
  FUN_01e844c0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fca8);
    FUN_028c0948(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2150,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x200) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x200,uVar2);
  }
  FUN_01e7b7a8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd08);
    FUN_028c0d80(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2158,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x208) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x208,uVar2);
  }
  FUN_01e7cb58();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fec8);
    FUN_028c0b64(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2160,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x210,uVar2);
  }
  FUN_01e7c180();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd50);
    FUN_028c0ee8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2168,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x218,uVar2);
  }
  FUN_01e7d1e8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fde8);
    FUN_028c0c18(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2170,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x220,uVar2);
  }
  FUN_01e7c4c8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc70);
    FUN_028c0f9c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2178,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x228,uVar2);
  }
  FUN_01e7d530();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fda8);
    FUN_028c0ccc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2180,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x230,uVar2);
  }
  FUN_01e7c810();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff60);
    FUN_028c0e34(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2190,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x238) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x238,uVar2);
  }
  FUN_01e7cea0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd58);
    FUN_028c09fc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2198,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x240,uVar2);
  }
  FUN_01e7baf0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcb8);
    FUN_028c0ab0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21a0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x248,uVar2);
  }
  FUN_01e7be38();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9feb0);
    FUN_028c4964(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21a8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x250,uVar2);
  }
  FUN_01e86248();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcd0);
    FUN_028c4e50(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21b0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 600) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 600,uVar2);
  }
  FUN_01e87940();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff28);
    FUN_028c4f04(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21b8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x260) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x260,uVar2);
  }
  FUN_01e87c88();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdf0);
    FUN_028c4fb8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21c0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x268,uVar2);
  }
  FUN_01e87fd0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fce8);
    FUN_028c4d9c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21c8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x270) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x270,uVar2);
  }
  FUN_01e875f8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fea0);
    FUN_028c4a18(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21d0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x278) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x278,uVar2);
  }
  FUN_01e86590();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd48);
    System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_Callback<object>>>__System_Collections_IEnumerator_Reset
              (uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21d8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x280) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x280,uVar2);
  }
  FUN_01e868d8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcf0);
    FUN_028c2f54(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21e8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x288) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x288,uVar2);
  }
  FUN_01e7f948();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fec0);
    FUN_028c32d8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21f0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x290) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x290,uVar2);
  }
  FUN_01e809b0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff30);
    FUN_028c30bc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da21f8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x298) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x298,uVar2);
  }
  FUN_01e7ffd8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff50);
    FUN_028c34f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2200,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2a0,uVar2);
  }
  FUN_01e81040();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe80);
    FUN_028c3170(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2208,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2a8,uVar2);
  }
  FUN_01e80320();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd28);
    System_Array_InternalEnumerator<Dictionary_Entry<ValueTuple<Int32Enum,_object>,_EnumData>>__Dispose
              (uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2210,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2b0,uVar2);
  }
  FUN_01e81388();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc18);
    FUN_028c3224(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2218,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2b8,uVar2);
  }
  FUN_01e80668();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdd0);
    FUN_028c365c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2220,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2c0,uVar2);
  }
  FUN_01e816d0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd78);
    FUN_028c3440(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2228,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2c8,uVar2);
  }
  FUN_01e80cf8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff20);
    FUN_028c3008(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2230,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2d0,uVar2);
  }
  FUN_01e7fc90();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff10);
    FUN_028be9a4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2240,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2d8,uVar2);
  }
  FUN_01e56f34();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff00);
    FUN_028bed28(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2248,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2e0,uVar2);
  }
  FUN_01e57f9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdc8);
    FUN_028beb0c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2250,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2e8,uVar2);
  }
  FUN_01e575c4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fce0);
    FUN_028beddc(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2258,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2f0,uVar2);
  }
  FUN_01e582e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc58);
    FUN_028bebc0(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2260,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x2f8,uVar2);
  }
  FUN_01e5790c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe78);
    FUN_028bee90(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2268,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x300) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x300,uVar2);
  }
  FUN_01e5862c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd70);
    FUN_028bec74(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2270,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x308) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x308,uVar2);
  }
  FUN_01e57c54();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd18);
    OVRTask_InternalDataRemover<bool>__EndInvoke(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2278,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x310) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x310,uVar2);
  }
  FUN_01e58974();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fcf8);
    FUN_028bea58(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2280,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x318,uVar2);
  }
  FUN_01e5727c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9feb8);
    FUN_028beff8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da2288,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 800) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 800,uVar2);
  }
  FUN_01e58cbc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fd68);
    FUN_028bf37c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f38,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x328) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x328,uVar2);
  }
  FUN_01e59d24();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fc28);
    FUN_028bf160(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f40,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x330) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x330,uVar2);
  }
  FUN_01e5934c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe28);
    FUN_028bf4e4(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f48,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x338) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x338,uVar2);
  }
  FUN_01e5a3b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fee0);
    FUN_028bf214(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f50,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x340) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x340,uVar2);
  }
  FUN_01e59694();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ff18);
    FUN_028bf598(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f58,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x348) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x348,uVar2);
  }
  FUN_01e5a6fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fe58);
    FUN_028bf2c8(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f60,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x350) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x350,uVar2);
  }
  FUN_01e599dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fee8);
    FUN_028bf64c(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f68,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x358) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x358,uVar2);
  }
  FUN_01e5aa44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fed0);
    FUN_028bf430(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f70,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x360) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x360,uVar2);
  }
  FUN_01e5a06c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9fdc0);
    FUN_028bf0ac(uVar2,uVar4,*(undefined8 *)PTR_DAT_03da1f78,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x368) = uVar2;
    thunk_FUN_01b4f09c(lVar1 + 0x368,uVar2);
  }
  FUN_01e59004();
  return;
}


