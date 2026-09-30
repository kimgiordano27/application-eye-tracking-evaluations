/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 03bf8c9c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_01dc4f30();
  uVar8 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245400);
  FUN_02e1f26c(uVar3,uVar8,*(undefined8 *)PTR_DAT_042455b0,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  thunk_FUN_01e10808(puVar4,uVar3);
  uVar8 = thunk_FUN_01de27b8(*unaff_x24);
  FUN_030824c8(uVar8,uVar3,0,0,0,0,10000,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar8;
  thunk_FUN_01e10808(unaff_x19 + 0x100,uVar8);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454d0;
  puVar1 = PTR_DAT_04245470;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e0);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455b8,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x108,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c0;
  puVar1 = PTR_DAT_04245478;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453c8);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455c0,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x110,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f8;
  puVar1 = PTR_DAT_042454a0;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245408);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455c8,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x118,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245508;
  puVar1 = PTR_DAT_042454a8;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d8);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455d0,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x120,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c8;
  puVar1 = PTR_DAT_042454b0;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245418);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455d8,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x128,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f0;
  puVar1 = PTR_DAT_04245490;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f0);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455e0,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x130,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454b8;
  puVar1 = PTR_DAT_04245488;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f8);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455e8,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x138,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245510;
  puVar1 = PTR_DAT_04245480;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d0);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455f0,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x140,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245500;
  puVar1 = PTR_DAT_04245498;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e8);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455a0,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x148,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454e0;
  puVar1 = PTR_DAT_04245468;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245420);
    FUN_02e1f26c(lVar7,uVar3,*(undefined8 *)PTR_DAT_042455a8,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar7,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x150,uVar3);
  thunk_FUN_03d711f0();
  return;
}


