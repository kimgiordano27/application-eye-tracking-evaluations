/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 023dff2c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  int iVar7;
  long lVar8;
  long *plVar9;
  int unaff_w28;
  int unaff_w29;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s11;
  float fVar21;
  float fStack000000000000000c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  long in_stack_00000048;
  int in_stack_00000058;
  float in_stack_00000070;
  
  fVar10 = (float)FUN_023e923c(param_5,*(undefined8 *)(param_1 + 0x60));
  if (DAT_0452ffe3 == '\0') {
    FUN_01c5d288(PTR_DAT_0422fa60);
    DAT_0452ffe3 = '\x01';
  }
  plVar9 = (long *)PTR_DAT_0422fa60;
  if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  fVar19 = 1.0;
  fVar11 = 1.0 / SQRT(param_4 * param_4 + fVar10 * fVar10 + param_3 * param_3);
  fVar10 = fVar10 * fVar11;
  param_3 = param_3 * fVar11;
  param_4 = param_4 * fVar11;
  fVar18 = param_4 * param_4;
  fVar11 = fVar18 + fVar10 * fVar10 + param_3 * param_3;
  if ((fVar11 == 0.0) || (fVar20 = fVar19, 0x7f800000 < (uint)ABS(fVar11))) {
    fVar10 = (float)FUN_023e923c(in_stack_00000070 + DAT_00b92ffc);
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar20 = in_stack_00000070 * in_stack_00000070;
    fVar18 = fVar10 * fVar10 + fVar20;
    param_4 = 1.0 / SQRT(fVar19 * fVar19 + fVar18);
    fVar10 = fVar10 * param_4;
    param_3 = in_stack_00000070 * param_4;
    param_4 = fVar19 * param_4;
  }
  fVar11 = (float)FUN_023e923c();
  if (DAT_0452ffe3 == '\0') {
    FUN_01c5d288(PTR_DAT_0422fa60);
    DAT_0452ffe3 = '\x01';
  }
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  fStack000000000000003c = 1.0 / SQRT(fVar20 * fVar20 + fVar11 * fVar11 + fVar18 * fVar18);
  fStack0000000000000044 = fVar11 * fStack000000000000003c;
  fVar18 = fVar18 * fStack000000000000003c;
  fStack000000000000003c = fVar20 * fStack000000000000003c;
  fVar19 = fStack000000000000003c * fStack000000000000003c;
  fVar11 = fVar19 + fStack0000000000000044 * fStack0000000000000044 + fVar18 * fVar18;
  if ((fVar11 == 0.0) || (fStack0000000000000040 = fVar18, 0x7f800000 < (uint)ABS(fVar11))) {
    fVar11 = (float)FUN_023e923c(unaff_s11 + DAT_00b933cc);
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fStack000000000000003c = 1.0 / SQRT(fVar18 * fVar18 + fVar11 * fVar11 + fVar19 * fVar19);
    fStack0000000000000044 = fVar11 * fStack000000000000003c;
    fStack0000000000000040 = fVar19 * fStack000000000000003c;
    fStack000000000000003c = fVar18 * fStack000000000000003c;
  }
  if (0 < unaff_w20) {
    fStack000000000000002c = -fVar10;
    fStack0000000000000024 = -param_4;
    lVar8 = 0;
    fStack000000000000000c = (360.0 / (float)(int)in_stack_00000048) * DAT_00b931d0;
    do {
      iVar7 = (int)lVar8;
      puVar1 = (undefined8 *)(unaff_x19 + (long)(in_stack_00000058 + unaff_w28 + iVar7) * 0x20);
      uVar3 = *(undefined4 *)(puVar1 + 1);
      uVar6 = *puVar1;
      puVar2 = (undefined8 *)(unaff_x19 + (long)(in_stack_00000058 + unaff_w29 + iVar7) * 0x20);
      uVar4 = *(undefined4 *)(puVar2 + 1);
      uVar5 = *puVar2;
      fVar10 = fStack0000000000000024;
      fVar11 = -param_3;
      uVar12 = FUN_03a4388c(fStack000000000000002c,0);
      if (DAT_0452ffe4 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe4 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar18 = fStack000000000000000c * (float)iVar7;
      dVar16 = cos((double)fVar18);
      if (DAT_0452ffe5 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe5 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar17 = sin((double)fVar18);
      fVar21 = (float)dVar17 * 0.5 + 0.5;
      fVar19 = fVar21;
      uVar13 = FUN_03a42f88((float)dVar16 * 0.5 + 0.5,0);
      fVar18 = fStack000000000000003c;
      fVar20 = fStack0000000000000040;
      uVar14 = FUN_03a4388c(fStack0000000000000044,0);
      if (DAT_0452ffe4 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe4 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (DAT_0452ffe5 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe5 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar15 = FUN_03a42f88(0.5 - (float)dVar16 * 0.5,0);
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined4 *)((long)puVar1 + 0xc) = uVar12;
      lVar8 = lVar8 + 1;
      *(float *)(puVar1 + 2) = fVar11;
      *(float *)((long)puVar1 + 0x14) = fVar10;
      *(undefined4 *)(puVar1 + 3) = uVar13;
      *(float *)((long)puVar1 + 0x1c) = fVar19;
      *(undefined4 *)(puVar2 + 1) = uVar4;
      *puVar2 = uVar5;
      *(undefined4 *)((long)puVar2 + 0xc) = uVar14;
      *(float *)(puVar2 + 2) = fVar20;
      *(float *)((long)puVar2 + 0x14) = fVar18;
      *(undefined4 *)(puVar2 + 3) = uVar15;
      *(float *)((long)puVar2 + 0x1c) = fVar21;
      plVar9 = (long *)PTR_DAT_0422fa60;
    } while (in_stack_00000048 != lVar8);
  }
  return;
}


