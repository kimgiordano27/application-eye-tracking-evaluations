/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01b234bc
PROGRAM: sharks-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


uint System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  double in_stack_00000018;
  long in_stack_00000020;
  double in_stack_00000028;
  int iStack0000000000000034;
  double in_stack_00000038;
  float fStack0000000000000044;
  double in_stack_00000048;
  
  FUN_017fc350(PTR_DAT_037f8848);
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_037f8be8);
  puVar8 = *(undefined8 **)(unaff_x20 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0185db00();
    puVar8 = *(undefined8 **)(unaff_x20 + 0x38);
  }
  puVar1 = PTR_DAT_037f2c78;
  in_stack_00000048 = 0.0;
  fStack0000000000000044 = 0.0;
  in_stack_00000038 = 0.0;
  iStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0.0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0.0;
  in_stack_00000008 = 0;
  uVar9 = *puVar8;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar9 = FUN_02bddb5c(uVar9,0);
  uVar3 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8848,0);
  uVar4 = FUN_02be66d0(uVar9,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar9 = FUN_02bddb5c(uVar9,0);
    uVar3 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8820,0);
    uVar4 = FUN_02be66d0(uVar9,uVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar9 = FUN_02bddb5c(uVar9,0);
      uVar3 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8828,0);
      uVar4 = FUN_02be66d0(uVar9,uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar9 = FUN_02bddb5c(uVar9,0);
        uVar3 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8be8,0);
        uVar4 = FUN_02be66d0(uVar9,uVar3,0);
        if ((uVar4 & 1) == 0) {
          uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar9 = FUN_02bddb5c(uVar9,0);
          uVar3 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8808,0);
          uVar4 = FUN_02be66d0(uVar9,uVar3,0);
          if ((uVar4 & 1) == 0) {
            uVar2 = 0;
            goto LAB_01b23910;
          }
          puVar8 = (undefined8 *)FUN_01beb018();
          in_stack_00000008 = *puVar8;
          if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar2 = FUN_033beaa4();
          puVar8 = (undefined8 *)
                   FUN_01beb018(&stack0x00000008,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x60)
                               );
        }
        else {
          puVar8 = (undefined8 *)FUN_01beb028();
          in_stack_00000018 = (double)NEON_ucvtf(*puVar8);
          if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar2 = FUN_033beaa4();
          if (in_stack_00000018 < 0.0) {
            in_stack_00000018 = 0.0;
          }
          in_stack_00000010 = (long)in_stack_00000018;
          puVar8 = (undefined8 *)
                   FUN_01beb05c(&stack0x00000010,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50)
                               );
        }
      }
      else {
        plVar7 = (long *)FUN_01beb020();
        in_stack_00000028 = (double)*plVar7;
        if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar2 = FUN_033beaa4();
        in_stack_00000020 = -0x8000000000000000;
        if (in_stack_00000028 != INFINITY) {
          in_stack_00000020 = (long)in_stack_00000028;
        }
        puVar8 = (undefined8 *)
                 FUN_01beb03c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x40));
      }
    }
    else {
      piVar6 = (int *)FUN_01beb01c();
      in_stack_00000038 = (double)*piVar6;
      if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar2 = FUN_033beaa4();
      iStack0000000000000034 = -0x80000000;
      if (in_stack_00000038 != INFINITY) {
        iStack0000000000000034 = (int)in_stack_00000038;
      }
      puVar8 = (undefined8 *)
               FUN_01beb02c(&stack0x00000034,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x30));
    }
  }
  else {
    pfVar5 = (float *)FUN_01beb024();
    in_stack_00000048 = (double)*pfVar5;
    if (*(int *)(*(long *)PTR_DAT_037f8bd8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = FUN_033beaa4();
    fStack0000000000000044 = (float)in_stack_00000048;
    puVar8 = (undefined8 *)
             FUN_01beb050(&stack0x00000044,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
  }
  *unaff_x19 = *puVar8;
LAB_01b23910:
  return uVar2 & 1;
}


