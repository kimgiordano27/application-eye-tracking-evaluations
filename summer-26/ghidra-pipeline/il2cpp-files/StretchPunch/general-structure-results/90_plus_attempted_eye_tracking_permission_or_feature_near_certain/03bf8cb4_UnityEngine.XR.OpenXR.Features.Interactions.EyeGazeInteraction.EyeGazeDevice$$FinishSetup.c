/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 03bf8cb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_10;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *in_x9;
  long unaff_x19;
  long lVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar3 = thunk_FUN_01de27b8(*in_x9);
  FUN_02e1f26c();
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  thunk_FUN_01e10808(puVar4,uVar3);
  uVar5 = thunk_FUN_01de27b8(*unaff_x24);
  FUN_030824c8(uVar5,uVar3,0,0,0,0,10000,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar5;
  thunk_FUN_01e10808(unaff_x19 + 0x100,uVar5);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454d0;
  puVar1 = PTR_DAT_04245470;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e0);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455b8,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x108,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c0;
  puVar1 = PTR_DAT_04245478;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453c8);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455c0,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x110,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f8;
  puVar1 = PTR_DAT_042454a0;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245408);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455c8,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x118,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245508;
  puVar1 = PTR_DAT_042454a8;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d8);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455d0,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x120,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454c8;
  puVar1 = PTR_DAT_042454b0;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245418);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455d8,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x128,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454f0;
  puVar1 = PTR_DAT_04245490;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f0);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455e0,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x130,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454b8;
  puVar1 = PTR_DAT_04245488;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453f8);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455e8,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x138,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245510;
  puVar1 = PTR_DAT_04245480;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453d0);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455f0,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x140,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_04245500;
  puVar1 = PTR_DAT_04245498;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042453e8);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455a0,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x148,uVar3);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_042454e0;
  puVar1 = PTR_DAT_04245468;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04245420);
    FUN_02e1f26c(lVar8,uVar3,*(undefined8 *)PTR_DAT_042455a8,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *plVar7 = lVar8;
    thunk_FUN_01e10808(plVar7,lVar8);
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_030824c8(uVar3,lVar8,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
  thunk_FUN_01e10808(unaff_x19 + 0x150,uVar3);
  thunk_FUN_03d711f0();
  return;
}


