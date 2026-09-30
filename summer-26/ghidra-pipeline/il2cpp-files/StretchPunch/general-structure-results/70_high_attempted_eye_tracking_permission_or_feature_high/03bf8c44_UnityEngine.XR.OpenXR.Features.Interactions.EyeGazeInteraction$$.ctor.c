/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 03bf8c44
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  FUN_030824c8();
  *(undefined8 *)(unaff_x19 + 0xf8) = param_1;
  thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0xf8),param_1);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454d8;
  puVar1 = PTR_DAT_04245460;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245400);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455b0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x100,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454d0;
  puVar1 = PTR_DAT_04245470;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e0);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455b8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x108,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c0;
  puVar1 = PTR_DAT_04245478;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453c8);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455c0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x110,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f8;
  puVar1 = PTR_DAT_042454a0;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245408);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455c8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x118,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245508;
  puVar1 = PTR_DAT_042454a8;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d8);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455d0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x120,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c8;
  puVar1 = PTR_DAT_042454b0;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245418);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455d8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x128,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f0;
  puVar1 = PTR_DAT_04245490;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f0);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455e0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x130,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454b8;
  puVar1 = PTR_DAT_04245488;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f8);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455e8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x138,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245510;
  puVar1 = PTR_DAT_04245480;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d0);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455f0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x140,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245500;
  puVar1 = PTR_DAT_04245498;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e8);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455a0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x148,uVar6);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454e0;
  puVar1 = PTR_DAT_04245468;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245420);
    FUN_02e1f26c(lVar5,uVar6,*(undefined8 *)PTR_DAT_042455a8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *plVar4 = lVar5;
    thunk_FUN_01e10808(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar6;
  thunk_FUN_01e10808(unaff_x19 + 0x150,uVar6);
  thunk_FUN_03d711f0();
  return;
}


