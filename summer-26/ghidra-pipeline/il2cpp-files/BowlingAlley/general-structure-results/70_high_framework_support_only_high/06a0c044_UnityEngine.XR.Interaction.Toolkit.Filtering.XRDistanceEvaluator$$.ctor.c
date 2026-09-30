/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRDistanceEvaluator$$.ctor
ENTRY_POINT: 06a0c044
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


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRDistanceEvaluator___ctor(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  undefined7 uStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_076e28cc & 1) == 0) {
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
    DAT_076e28cc = 1;
  }
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_10 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  cStack_90 = '\0';
  uStack_8f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_28 = 0;
  uStack_21 = 0;
  uStack_30 = 0;
  uStack_29 = 0;
  uStack_18 = 0;
  uStack_11 = 0;
  uStack_20 = 0;
  uStack_19 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_06a0c464(param_1);
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_06a0c7a0(param_1);
  }
  puVar3 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__;
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 != 0) {
    uStack_58 = *(undefined8 *)(lVar5 + 0x40);
    uStack_60 = *(undefined8 *)(lVar5 + 0x38);
    uStack_48 = *(undefined8 *)(lVar5 + 0x50);
    uStack_50 = *(undefined8 *)(lVar5 + 0x48);
    uStack_40 = *(undefined8 *)(lVar5 + 0x58);
    if ((char)uStack_60 != '\0') {
      uStack_40 = *(undefined8 *)(lVar5 + 0x58);
      uStack_58 = *(undefined8 *)(lVar5 + 0x40);
      uStack_60 = *(undefined8 *)(lVar5 + 0x38);
      uStack_48 = *(undefined8 *)(lVar5 + 0x50);
      uStack_50 = *(undefined8 *)(lVar5 + 0x48);
      FUN_04642660(&uStack_170,&uStack_60,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                  );
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_f8 = *(undefined8 *)(param_1 + 0x180);
      uStack_100 = *(undefined8 *)(param_1 + 0x178);
      uStack_e8 = *(undefined8 *)(param_1 + 400);
      uStack_f0 = *(undefined8 *)(param_1 + 0x188);
      uVar4 = FUN_06a35298(&uStack_e0,&uStack_100,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x168);
        if (lVar5 == 0) goto LAB_06a0c45c;
        uStack_40 = *(undefined8 *)(lVar5 + 0x58);
        uStack_48 = *(undefined8 *)(lVar5 + 0x50);
        uStack_50 = *(undefined8 *)(lVar5 + 0x48);
        uStack_58 = *(undefined8 *)(lVar5 + 0x40);
        uStack_60 = *(undefined8 *)(lVar5 + 0x38);
        FUN_04642660(&uStack_120,&uStack_60,*(undefined8 *)puVar3);
        uStack_168 = uStack_118;
        uStack_170 = uStack_120;
        uStack_158 = uStack_108;
        uStack_160 = uStack_110;
        *(undefined8 *)(param_1 + 0x180) = uStack_118;
        *(undefined8 *)(param_1 + 0x178) = uStack_120;
        *(undefined8 *)(param_1 + 400) = uStack_108;
        *(undefined8 *)(param_1 + 0x188) = uStack_110;
        uStack_138 = uStack_118;
        uStack_140 = uStack_120;
        uStack_130 = uStack_110;
        FUN_06a0cf88(param_1,&uStack_140);
      }
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_06be9890(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x108) == 0) {
LAB_06a0c45c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a08820(&uStack_170);
    uStack_88 = (undefined1)uStack_168;
    uStack_87 = (undefined7)((ulong)uStack_168 >> 8);
    cStack_90 = (char)uStack_170;
    uStack_8f = (undefined7)((ulong)uStack_170 >> 8);
    uStack_78 = (undefined1)uStack_158;
    uStack_77 = (undefined7)((ulong)uStack_158 >> 8);
    uStack_80 = (undefined1)uStack_160;
    uStack_7f = (undefined7)((ulong)uStack_160 >> 8);
    uStack_70 = (undefined1)uStack_150;
    uStack_6f = (undefined7)((ulong)uStack_150 >> 8);
    if (cStack_90 != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x198);
      uStack_28 = uStack_87;
      uStack_21 = uStack_80;
      uStack_30 = uStack_8f;
      uStack_29 = uStack_88;
      uStack_18 = uStack_77;
      uStack_11 = uStack_70;
      uStack_20 = uStack_7f;
      uStack_19 = uStack_78;
      uStack_a8 = *(undefined8 *)(param_1 + 0x1a0);
      uStack_b0 = *puVar1;
      uStack_98 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_a0 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_188 = uStack_160;
      uStack_190 = uStack_168;
      uStack_180 = uStack_158;
      uStack_1a8 = *(undefined8 *)(param_1 + 0x1a0);
      uStack_1b0 = *puVar1;
      uStack_198 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_1a0 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_10 = uStack_6f;
      uVar4 = FUN_06a3066c(&uStack_190,&uStack_1b0,0);
      puVar3 = Method_System_Nullable<uint>_GetValueOrDefault__;
      if ((uVar4 & 1) != 0) {
        plVar7 = *(long **)(param_1 + 0xd8);
        FUN_04652634(&uStack_170,&cStack_90,
                     *(undefined8 *)Method_System_Nullable<uint>_GetValueOrDefault__);
        uStack_a8 = uStack_168;
        uStack_b0 = uStack_170;
        uStack_98 = uStack_158;
        uStack_a0 = uStack_160;
        FUN_04652634(&uStack_170,&cStack_90,*(undefined8 *)puVar3);
        uStack_a8 = uStack_168;
        uStack_b0 = uStack_170;
        uStack_98 = uStack_158;
        uStack_a0 = uStack_160;
        uStack_b8 = uStack_170;
        uVar6 = FUN_049e8de8(&uStack_b8,0,0,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
          plVar7 = *(long **)(param_1 + 0xe0);
          FUN_04652634(&uStack_170,&cStack_90,*(undefined8 *)puVar3);
          uStack_a8 = uStack_168;
          uStack_b0 = uStack_170;
          uStack_98 = uStack_158;
          uStack_a0 = uStack_160;
          uStack_c0 = FUN_06a2fe44(&uStack_b0,0);
          if ((uStack_c0 & 0xff) == 0) {
            uVar6 = *(undefined8 *)
                     Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
            ;
          }
          else {
            FUN_04652634(&uStack_170,&cStack_90,*(undefined8 *)puVar3);
            uStack_a8 = uStack_168;
            uStack_b0 = uStack_170;
            uStack_98 = uStack_158;
            uStack_a0 = uStack_160;
            uStack_c0 = FUN_06a2fe44(&uStack_b0,0);
            uVar6 = FUN_046475a0(&uStack_c0,*(undefined8 *)PTR_DAT_072a1b30);
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
            plVar7 = *(long **)(param_1 + 0xe8);
            FUN_04652634(&uStack_170,&cStack_90,*(undefined8 *)puVar3);
            uStack_a8 = uStack_168;
            uStack_b0 = uStack_170;
            uStack_98 = uStack_158;
            uVar6 = uStack_98;
            uStack_a0 = uStack_160;
            uStack_98._0_4_ = (undefined4)uStack_158;
            uStack_1c8 = *(undefined8 *)
                          Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
            ;
            uStack_1b8 = (undefined4)uStack_98;
            uStack_1c0 = 0xffffffffffffffff;
            uStack_98 = uVar6;
            uVar6 = FUN_059596b4(&uStack_1c8,0);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
              FUN_04652634(&uStack_120,&cStack_90,*(undefined8 *)puVar3);
              uStack_168 = uStack_118;
              uStack_170 = uStack_120;
              uStack_158 = uStack_108;
              uStack_160 = uStack_110;
              *(undefined8 *)(param_1 + 0x1a0) = uStack_118;
              *puVar1 = uStack_120;
              *(undefined8 *)(param_1 + 0x1b0) = uStack_108;
              *(undefined8 *)(param_1 + 0x1a8) = uStack_110;
              goto LAB_06a0c434;
            }
          }
        }
        goto LAB_06a0c45c;
      }
    }
  }
LAB_06a0c434:
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


