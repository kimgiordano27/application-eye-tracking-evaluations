/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 01d8d98c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  float fVar8;
  
  thunk_FUN_009efa0c();
  thunk_FUN_009efa0c(PTR_DAT_02bdd778);
  thunk_FUN_009efa0c(PTR_DAT_02be86e8);
  thunk_FUN_009efa0c(PTR_DAT_02c08cb8);
  *(undefined1 *)(unaff_x21 + 0x9f7) = 1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
  }
  uVar5 = FUN_01ee8fb4(uVar6,0,0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_0158d748(*(undefined8 *)(unaff_x19 + 0x30),0), (uVar5 & 1) != 0)) {
    FUN_01d8e41c();
  }
  FUN_01d8f15c();
  FUN_01d8f17c();
  lVar7 = unaff_x19 + 0x50;
  fVar8 = (float)FUN_01f49120(lVar7,0);
  if (fVar8 == 0.0) {
    FUN_01f49128(0x3f800000,lVar7,0);
  }
  fVar8 = (float)FUN_01f491f0(lVar7,0);
  if (fVar8 == 0.0) {
    fVar8 = (float)FUN_01f49150(lVar7,0);
    FUN_01f491f8(fVar8 / 2.5,lVar7,0);
  }
  puVar2 = PTR_DAT_02bdd778;
  if (*(int *)(unaff_x19 + 0x110) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_02bdd778 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
    }
    if (lVar7 == 0) {
LAB_01d8db98:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    uVar5 = FUN_01edc76c(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0);
    if ((uVar5 & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      if (lVar7 == 0) goto LAB_01d8db98;
      fVar8 = (float)FUN_01edd854(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0)
      ;
      iVar1 = 0x7fffffff;
      if (fVar8 != INFINITY) {
        iVar1 = (int)fVar8 + -1;
      }
      *(int *)(unaff_x19 + 0x110) = iVar1;
    }
  }
  puVar3 = PTR_DAT_02c08cb8;
  puVar2 = PTR_DAT_02be86e8;
  uVar6 = FUN_01ed0a38();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_009ddef4(*(long *)puVar3);
  }
  uVar4 = FUN_01dcc4d0(uVar6,0);
  *(undefined4 *)(unaff_x19 + 0x1c) = uVar4;
  uVar6 = FUN_01ed0a38();
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_009ddef4(lVar7);
    lVar7 = *(long *)puVar2;
  }
  uVar6 = FUN_0157fa24(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38),0);
  uVar4 = FUN_01dcc4d0(uVar6,0);
  *(undefined4 *)(unaff_x19 + 0x28) = uVar4;
  *(undefined1 *)(unaff_x19 + 0x1ba) = 0;
  return;
}


