/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRLastSelectedEvaluator$$OnSelect
ENTRY_POINT: 06a0c06c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator__OnSelect(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000a0;
  ulong in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000138;
  char in_stack_00000140;
  undefined8 in_stack_00000160;
  char in_stack_00000170;
  undefined8 in_stack_00000190;
  long in_stack_000001c8;
  
  thunk_FUN_032e1da0(
                    Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072a1b30);
  thunk_FUN_032e1da0(PTR_DAT_0727fe58);
  thunk_FUN_032e1da0(Method_GLTFast_Schema_OcclusionTextureInfoBase<TextureInfoExtensions>__ctor__);
  thunk_FUN_032e1da0(Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>__ctor__)
  ;
  thunk_FUN_032e1da0(Method_System_Nullable<uint>_GetValueOrDefault__);
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072794f0);
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                    );
  *(undefined1 *)(unaff_x20 + 0x8cc) = 1;
  in_stack_00000190 = 0;
  in_stack_00000160 = 0;
  *(undefined8 *)((long)unaff_x23 + 0x1f) = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  unaff_x22[0x1d] = 0;
  unaff_x22[0x1c] = 0;
  unaff_x22[0x1f] = 0;
  unaff_x22[0x1e] = 0;
  unaff_x22[0x17] = 0;
  unaff_x22[0x16] = 0;
  unaff_x22[0x19] = 0;
  unaff_x22[0x18] = 0;
  unaff_x23[1] = 0;
  *unaff_x23 = 0;
  unaff_x23[3] = 0;
  unaff_x23[2] = 0;
  unaff_x22[0x13] = 0;
  unaff_x22[0x12] = 0;
  unaff_x22[0x15] = 0;
  unaff_x22[0x14] = 0;
  if (*(char *)(unaff_x19 + 0x170) == '\0') {
    FUN_06a0c464();
    *(undefined1 *)(unaff_x19 + 0x170) = 1;
  }
  if (*(char *)(unaff_x19 + 0x171) == '\0') {
    FUN_06a0c7a0();
  }
  lVar6 = *(long *)(unaff_x19 + 0x168);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x38);
    uVar9 = *(undefined8 *)(lVar6 + 0x50);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    in_stack_00000190 = *(undefined8 *)(lVar6 + 0x58);
    unaff_x22[0x1d] = *(undefined8 *)(lVar6 + 0x40);
    unaff_x22[0x1c] = uVar5;
    unaff_x22[0x1f] = uVar9;
    unaff_x22[0x1e] = uVar8;
    puVar2 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__;
    if (in_stack_00000170 != '\0') {
      in_stack_00000190 = *(undefined8 *)(lVar6 + 0x58);
      uVar8 = *(undefined8 *)(lVar6 + 0x38);
      uVar10 = *(undefined8 *)(lVar6 + 0x50);
      uVar9 = *(undefined8 *)(lVar6 + 0x48);
      uVar5 = *(undefined8 *)
               Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__;
      unaff_x22[0x1d] = *(undefined8 *)(lVar6 + 0x40);
      unaff_x22[0x1c] = uVar8;
      unaff_x22[0x1f] = uVar10;
      unaff_x22[0x1e] = uVar9;
      FUN_04642660(&stack0x00000060,&stack0x00000170,uVar5);
      unaff_x22[0xd] = in_stack_00000068;
      unaff_x22[0xc] = in_stack_00000060;
      unaff_x22[0xf] = in_stack_00000078;
      unaff_x22[0xe] = in_stack_00000070;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x178);
      uVar8 = *(undefined8 *)(unaff_x19 + 400);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x188);
      unaff_x22[9] = *(undefined8 *)(unaff_x19 + 0x180);
      unaff_x22[8] = uVar9;
      unaff_x22[0xb] = uVar8;
      unaff_x22[10] = uVar5;
      uVar4 = FUN_06a35298(&stack0x000000f0,&stack0x000000d0,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x168);
        if (lVar6 == 0) goto LAB_06a0c45c;
        in_stack_00000190 = *(undefined8 *)(lVar6 + 0x58);
        uVar9 = *(undefined8 *)(lVar6 + 0x50);
        uVar8 = *(undefined8 *)(lVar6 + 0x48);
        uVar10 = *(undefined8 *)(lVar6 + 0x38);
        uVar5 = *(undefined8 *)puVar2;
        unaff_x22[0x1d] = *(undefined8 *)(lVar6 + 0x40);
        unaff_x22[0x1c] = uVar10;
        unaff_x22[0x1f] = uVar9;
        unaff_x22[0x1e] = uVar8;
        FUN_04642660(&stack0x000000b0,&stack0x00000170,uVar5);
        in_stack_00000068 = unaff_x22[5];
        in_stack_00000060 = unaff_x22[4];
        in_stack_00000078 = unaff_x22[7];
        in_stack_00000070 = unaff_x22[6];
        *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 400) = in_stack_00000078;
        *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000070;
        unaff_x22[1] = in_stack_00000068;
        *unaff_x22 = in_stack_00000060;
        in_stack_000000a0 = in_stack_00000070;
        FUN_06a0cf88();
      }
    }
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0x108);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_06be9890(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x108) == 0) {
LAB_06a0c45c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a08820(&stack0x00000060);
    unaff_x22[0x17] = in_stack_00000068;
    unaff_x22[0x16] = in_stack_00000060;
    unaff_x22[0x19] = in_stack_00000078;
    unaff_x22[0x18] = in_stack_00000070;
    in_stack_00000160 = in_stack_00000080;
    if (in_stack_00000140 != '\0') {
      uVar8 = *(undefined8 *)((long)unaff_x22 + 0xc9);
      uVar5 = *(undefined8 *)((long)unaff_x22 + 0xc1);
      uVar10 = *(undefined8 *)((long)unaff_x22 + 0xb9);
      uVar9 = *(undefined8 *)((long)unaff_x22 + 0xb1);
      puVar1 = (undefined8 *)(unaff_x19 + 0x198);
      *(undefined8 *)((long)unaff_x23 + 0x1f) = in_stack_00000080;
      unaff_x23[1] = uVar10;
      *unaff_x23 = uVar9;
      unaff_x23[3] = uVar8;
      unaff_x23[2] = uVar5;
      uVar5 = *puVar1;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x1b0);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x1a8);
      in_stack_00000048 = *(undefined8 *)((long)unaff_x23 + 0xf);
      in_stack_00000040 = *(undefined8 *)((long)unaff_x23 + 7);
      in_stack_00000058 = *(undefined8 *)((long)unaff_x23 + 0x1f);
      in_stack_00000050 = *(undefined8 *)((long)unaff_x23 + 0x17);
      unaff_x22[0x13] = *(undefined8 *)(unaff_x19 + 0x1a0);
      unaff_x22[0x12] = uVar5;
      unaff_x22[0x15] = uVar9;
      unaff_x22[0x14] = uVar8;
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1a0);
      in_stack_00000020 = *puVar1;
      in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x1b0);
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1a8);
      uVar4 = FUN_06a3066c(&stack0x00000040,&stack0x00000020,0);
      puVar2 = Method_System_Nullable<uint>_GetValueOrDefault__;
      if ((uVar4 & 1) != 0) {
        plVar7 = *(long **)(unaff_x19 + 0xd8);
        FUN_04652634(&stack0x00000060,&stack0x00000140,
                     *(undefined8 *)Method_System_Nullable<uint>_GetValueOrDefault__);
        uVar5 = *(undefined8 *)puVar2;
        unaff_x22[0x13] = in_stack_00000068;
        unaff_x22[0x12] = in_stack_00000060;
        unaff_x22[0x15] = in_stack_00000078;
        unaff_x22[0x14] = in_stack_00000070;
        FUN_04652634(&stack0x00000060,&stack0x00000140,uVar5);
        unaff_x22[0x13] = in_stack_00000068;
        unaff_x22[0x12] = in_stack_00000060;
        unaff_x22[0x15] = in_stack_00000078;
        unaff_x22[0x14] = in_stack_00000070;
        in_stack_00000118 = in_stack_00000120;
        uVar5 = FUN_049e8de8(&stack0x00000118,0,0,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5f0));
          plVar7 = *(long **)(unaff_x19 + 0xe0);
          FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
          unaff_x22[0x13] = in_stack_00000068;
          unaff_x22[0x12] = in_stack_00000060;
          unaff_x22[0x15] = in_stack_00000078;
          unaff_x22[0x14] = in_stack_00000070;
          in_stack_00000110 = FUN_06a2fe44(&stack0x00000120,0);
          if ((in_stack_00000110 & 0xff) == 0) {
            uVar5 = *(undefined8 *)
                     Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
            ;
          }
          else {
            FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
            unaff_x22[0x13] = in_stack_00000068;
            unaff_x22[0x12] = in_stack_00000060;
            unaff_x22[0x15] = in_stack_00000078;
            unaff_x22[0x14] = in_stack_00000070;
            in_stack_00000110 = FUN_06a2fe44(&stack0x00000120,0);
            uVar5 = FUN_046475a0(&stack0x00000110,*(undefined8 *)PTR_DAT_072a1b30);
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5f0));
            plVar7 = *(long **)(unaff_x19 + 0xe8);
            FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
            puVar3 = 
            Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__;
            unaff_x22[0x13] = in_stack_00000068;
            unaff_x22[0x12] = in_stack_00000060;
            unaff_x22[0x15] = in_stack_00000078;
            unaff_x22[0x14] = in_stack_00000070;
            in_stack_00000008 = *(undefined8 *)puVar3;
            in_stack_00000018 = in_stack_00000138;
            in_stack_00000010 = 0xffffffffffffffff;
            uVar5 = FUN_059596b4(&stack0x00000008,0);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5f0));
              FUN_04652634(&stack0x000000b0,&stack0x00000140,*(undefined8 *)puVar2);
              in_stack_00000068 = unaff_x22[5];
              in_stack_00000060 = unaff_x22[4];
              in_stack_00000078 = unaff_x22[7];
              in_stack_00000070 = unaff_x22[6];
              *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000068;
              *puVar1 = in_stack_00000060;
              *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000078;
              *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000070;
              goto LAB_06a0c434;
            }
          }
        }
        goto LAB_06a0c45c;
      }
    }
  }
LAB_06a0c434:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_000001c8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


