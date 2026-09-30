/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRLastSelectedEvaluator$$set_maxTime
ENTRY_POINT: 06a0c064
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator__set_maxTime
               (ulong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x21;
  undefined8 *unaff_x23;
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
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  ulong in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  char in_stack_00000140;
  undefined7 uStack0000000000000141;
  undefined1 in_stack_00000148;
  undefined7 uStack0000000000000149;
  undefined1 in_stack_00000150;
  undefined7 uStack0000000000000151;
  undefined1 in_stack_00000158;
  undefined7 uStack0000000000000159;
  undefined1 in_stack_00000160;
  undefined7 uStack0000000000000161;
  char cStack0000000000000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_000001c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a1b30);
    thunk_FUN_032e1da0(PTR_DAT_0727fe58);
    thunk_FUN_032e1da0(Method_GLTFast_Schema_OcclusionTextureInfoBase<TextureInfoExtensions>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>__ctor__
                      );
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
  }
  in_stack_00000190 = 0;
  in_stack_00000160 = 0;
  uStack0000000000000161 = 0;
  *(undefined8 *)((long)unaff_x23 + 0x1f) = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000178 = 0;
  _cStack0000000000000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000148 = 0;
  uStack0000000000000149 = 0;
  in_stack_00000140 = '\0';
  uStack0000000000000141 = 0;
  in_stack_00000158 = 0;
  uStack0000000000000159 = 0;
  in_stack_00000150 = 0;
  uStack0000000000000151 = 0;
  unaff_x23[1] = 0;
  *unaff_x23 = 0;
  unaff_x23[3] = 0;
  unaff_x23[2] = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  _uStack0000000000000138 = 0;
  in_stack_00000130 = 0;
  if (*(char *)(unaff_x19 + 0x170) == '\0') {
    FUN_06a0c464();
    *(undefined1 *)(unaff_x19 + 0x170) = 1;
  }
  if (*(char *)(unaff_x19 + 0x171) == '\0') {
    FUN_06a0c7a0();
  }
  puVar2 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__;
  lVar4 = *(long *)(unaff_x19 + 0x168);
  if (lVar4 != 0) {
    in_stack_00000178 = *(undefined8 *)(lVar4 + 0x40);
    _cStack0000000000000170 = *(undefined8 *)(lVar4 + 0x38);
    in_stack_00000188 = *(undefined8 *)(lVar4 + 0x50);
    in_stack_00000180 = *(undefined8 *)(lVar4 + 0x48);
    in_stack_00000190 = *(undefined8 *)(lVar4 + 0x58);
    if (cStack0000000000000170 != '\0') {
      in_stack_00000190 = *(undefined8 *)(lVar4 + 0x58);
      in_stack_00000178 = *(undefined8 *)(lVar4 + 0x40);
      _cStack0000000000000170 = *(undefined8 *)(lVar4 + 0x38);
      in_stack_00000188 = *(undefined8 *)(lVar4 + 0x50);
      in_stack_00000180 = *(undefined8 *)(lVar4 + 0x48);
      FUN_04642660(&stack0x00000060,&stack0x00000170,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                  );
      in_stack_000000f8 = in_stack_00000068;
      in_stack_000000f0 = in_stack_00000060;
      in_stack_00000108 = in_stack_00000078;
      in_stack_00000100 = in_stack_00000070;
      in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x180);
      in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0x178);
      in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 400);
      in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x188);
      uVar3 = FUN_06a35298(&stack0x000000f0,&stack0x000000d0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x168);
        if (lVar4 == 0) goto LAB_06a0c45c;
        in_stack_00000190 = *(undefined8 *)(lVar4 + 0x58);
        in_stack_00000188 = *(undefined8 *)(lVar4 + 0x50);
        in_stack_00000180 = *(undefined8 *)(lVar4 + 0x48);
        in_stack_00000178 = *(undefined8 *)(lVar4 + 0x40);
        _cStack0000000000000170 = *(undefined8 *)(lVar4 + 0x38);
        FUN_04642660(&stack0x000000b0,&stack0x00000170,*(undefined8 *)puVar2);
        in_stack_00000068 = in_stack_000000b8;
        in_stack_00000060 = in_stack_000000b0;
        in_stack_00000078 = in_stack_000000c8;
        in_stack_00000070 = in_stack_000000c0;
        *(undefined8 *)(unaff_x19 + 0x180) = in_stack_000000b8;
        *(undefined8 *)(unaff_x19 + 0x178) = in_stack_000000b0;
        *(undefined8 *)(unaff_x19 + 400) = in_stack_000000c8;
        *(undefined8 *)(unaff_x19 + 0x188) = in_stack_000000c0;
        in_stack_00000098 = in_stack_000000b8;
        in_stack_00000090 = in_stack_000000b0;
        in_stack_000000a0 = in_stack_000000c0;
        FUN_06a0cf88();
      }
    }
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0x108);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_06be9890(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x108) == 0) {
LAB_06a0c45c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a08820(&stack0x00000060);
    in_stack_00000148 = (undefined1)in_stack_00000068;
    uStack0000000000000149 = (undefined7)((ulong)in_stack_00000068 >> 8);
    in_stack_00000140 = (char)in_stack_00000060;
    uStack0000000000000141 = (undefined7)((ulong)in_stack_00000060 >> 8);
    in_stack_00000158 = (undefined1)in_stack_00000078;
    uStack0000000000000159 = (undefined7)((ulong)in_stack_00000078 >> 8);
    in_stack_00000150 = (undefined1)in_stack_00000070;
    uStack0000000000000151 = (undefined7)((ulong)in_stack_00000070 >> 8);
    in_stack_00000160 = (undefined1)in_stack_00000080;
    uStack0000000000000161 = (undefined7)((ulong)in_stack_00000080 >> 8);
    if (in_stack_00000140 != '\0') {
      puVar1 = (undefined8 *)(unaff_x19 + 0x198);
      *(undefined8 *)((long)unaff_x23 + 0x1f) = in_stack_00000080;
      unaff_x23[1] = CONCAT17(in_stack_00000150,uStack0000000000000149);
      *unaff_x23 = CONCAT17(in_stack_00000148,uStack0000000000000141);
      unaff_x23[3] = CONCAT17(in_stack_00000160,uStack0000000000000159);
      unaff_x23[2] = CONCAT17(in_stack_00000158,uStack0000000000000151);
      in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x1a0);
      in_stack_00000120 = *puVar1;
      _uStack0000000000000138 = *(undefined8 *)(unaff_x19 + 0x1b0);
      in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x1a8);
      in_stack_00000048 = *(undefined8 *)((long)unaff_x23 + 0xf);
      in_stack_00000040 = *(undefined8 *)((long)unaff_x23 + 7);
      in_stack_00000058 = *(undefined8 *)((long)unaff_x23 + 0x1f);
      in_stack_00000050 = *(undefined8 *)((long)unaff_x23 + 0x17);
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1a0);
      in_stack_00000020 = *puVar1;
      in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x1b0);
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1a8);
      uVar3 = FUN_06a3066c(&stack0x00000040,&stack0x00000020,0);
      puVar2 = Method_System_Nullable<uint>_GetValueOrDefault__;
      if ((uVar3 & 1) != 0) {
        plVar6 = *(long **)(unaff_x19 + 0xd8);
        FUN_04652634(&stack0x00000060,&stack0x00000140,
                     *(undefined8 *)Method_System_Nullable<uint>_GetValueOrDefault__);
        in_stack_00000128 = in_stack_00000068;
        in_stack_00000120 = in_stack_00000060;
        _uStack0000000000000138 = in_stack_00000078;
        in_stack_00000130 = in_stack_00000070;
        FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
        in_stack_00000128 = in_stack_00000068;
        in_stack_00000120 = in_stack_00000060;
        _uStack0000000000000138 = in_stack_00000078;
        in_stack_00000130 = in_stack_00000070;
        in_stack_00000118 = in_stack_00000060;
        uVar5 = FUN_049e8de8(&stack0x00000118,0,0,0);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x5f0));
          plVar6 = *(long **)(unaff_x19 + 0xe0);
          FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
          in_stack_00000128 = in_stack_00000068;
          in_stack_00000120 = in_stack_00000060;
          _uStack0000000000000138 = in_stack_00000078;
          in_stack_00000130 = in_stack_00000070;
          in_stack_00000110 = FUN_06a2fe44(&stack0x00000120,0);
          if ((in_stack_00000110 & 0xff) == 0) {
            uVar5 = *(undefined8 *)
                     Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
            ;
          }
          else {
            FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
            in_stack_00000128 = in_stack_00000068;
            in_stack_00000120 = in_stack_00000060;
            _uStack0000000000000138 = in_stack_00000078;
            in_stack_00000130 = in_stack_00000070;
            in_stack_00000110 = FUN_06a2fe44(&stack0x00000120,0);
            uVar5 = FUN_046475a0(&stack0x00000110,*(undefined8 *)PTR_DAT_072a1b30);
          }
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x5f0));
            plVar6 = *(long **)(unaff_x19 + 0xe8);
            FUN_04652634(&stack0x00000060,&stack0x00000140,*(undefined8 *)puVar2);
            in_stack_00000128 = in_stack_00000068;
            in_stack_00000120 = in_stack_00000060;
            _uStack0000000000000138 = in_stack_00000078;
            uVar5 = _uStack0000000000000138;
            in_stack_00000130 = in_stack_00000070;
            uStack0000000000000138 = (undefined4)in_stack_00000078;
            in_stack_00000008 =
                 *(undefined8 *)
                  Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__;
            in_stack_00000018 = uStack0000000000000138;
            in_stack_00000010 = 0xffffffffffffffff;
            _uStack0000000000000138 = uVar5;
            uVar5 = FUN_059596b4(&stack0x00000008,0);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x5f0));
              FUN_04652634(&stack0x000000b0,&stack0x00000140,*(undefined8 *)puVar2);
              in_stack_00000068 = in_stack_000000b8;
              in_stack_00000060 = in_stack_000000b0;
              in_stack_00000078 = in_stack_000000c8;
              in_stack_00000070 = in_stack_000000c0;
              *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_000000b8;
              *puVar1 = in_stack_000000b0;
              *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_000000c8;
              *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_000000c0;
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


