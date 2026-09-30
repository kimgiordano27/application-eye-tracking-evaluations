/*
FUNCTION_NAME: FUN_06a0c034
ENTRY_POINT: 06a0c034
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a0c034(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined7 local_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
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
  local_80 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_50 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  local_d0 = '\0';
  uStack_cf = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  uStack_68 = 0;
  uStack_61 = 0;
  local_70 = 0;
  uStack_69 = 0;
  uStack_58 = 0;
  uStack_51 = 0;
  uStack_60 = 0;
  local_59 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
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
    uStack_98 = *(undefined8 *)(lVar5 + 0x40);
    local_a0 = *(undefined8 *)(lVar5 + 0x38);
    uStack_88 = *(undefined8 *)(lVar5 + 0x50);
    uStack_90 = *(undefined8 *)(lVar5 + 0x48);
    local_80 = *(undefined8 *)(lVar5 + 0x58);
    if ((char)local_a0 != '\0') {
      local_80 = *(undefined8 *)(lVar5 + 0x58);
      uStack_98 = *(undefined8 *)(lVar5 + 0x40);
      local_a0 = *(undefined8 *)(lVar5 + 0x38);
      uStack_88 = *(undefined8 *)(lVar5 + 0x50);
      uStack_90 = *(undefined8 *)(lVar5 + 0x48);
      FUN_04642660(&local_1b0,&local_a0,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                  );
      uStack_118 = uStack_1a8;
      local_120 = local_1b0;
      uStack_108 = uStack_198;
      uStack_110 = local_1a0;
      uStack_138 = *(undefined8 *)(param_1 + 0x180);
      local_140 = *(undefined8 *)(param_1 + 0x178);
      uStack_128 = *(undefined8 *)(param_1 + 400);
      uStack_130 = *(undefined8 *)(param_1 + 0x188);
      uVar4 = FUN_06a35298(&local_120,&local_140,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x168);
        if (lVar5 == 0) goto LAB_06a0c45c;
        local_80 = *(undefined8 *)(lVar5 + 0x58);
        uStack_88 = *(undefined8 *)(lVar5 + 0x50);
        uStack_90 = *(undefined8 *)(lVar5 + 0x48);
        uStack_98 = *(undefined8 *)(lVar5 + 0x40);
        local_a0 = *(undefined8 *)(lVar5 + 0x38);
        FUN_04642660(&local_160,&local_a0,*(undefined8 *)puVar3);
        uStack_1a8 = uStack_158;
        local_1b0 = local_160;
        uStack_198 = uStack_148;
        local_1a0 = uStack_150;
        *(undefined8 *)(param_1 + 0x180) = uStack_158;
        *(undefined8 *)(param_1 + 0x178) = local_160;
        *(undefined8 *)(param_1 + 400) = uStack_148;
        *(undefined8 *)(param_1 + 0x188) = uStack_150;
        uStack_178 = uStack_158;
        local_180 = local_160;
        local_170 = uStack_150;
        FUN_06a0cf88(param_1,&local_180);
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
    FUN_06a08820(&local_1b0);
    uStack_c8 = (undefined1)uStack_1a8;
    uStack_c7 = (undefined7)((ulong)uStack_1a8 >> 8);
    local_d0 = (char)local_1b0;
    uStack_cf = (undefined7)((ulong)local_1b0 >> 8);
    uStack_b8 = (undefined1)uStack_198;
    uStack_b7 = (undefined7)((ulong)uStack_198 >> 8);
    uStack_c0 = (undefined1)local_1a0;
    local_bf = (undefined7)((ulong)local_1a0 >> 8);
    uStack_b0 = (undefined1)local_190;
    uStack_af = (undefined7)((ulong)local_190 >> 8);
    if (local_d0 != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x198);
      uStack_68 = uStack_c7;
      uStack_61 = uStack_c0;
      local_70 = uStack_cf;
      uStack_69 = uStack_c8;
      uStack_58 = uStack_b7;
      uStack_51 = uStack_b0;
      uStack_60 = local_bf;
      local_59 = uStack_b8;
      uStack_e8 = *(undefined8 *)(param_1 + 0x1a0);
      local_f0 = *puVar1;
      local_d8 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_e0 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_1c8 = local_1a0;
      local_1d0 = uStack_1a8;
      uStack_1c0 = uStack_198;
      uStack_1e8 = *(undefined8 *)(param_1 + 0x1a0);
      local_1f0 = *puVar1;
      uStack_1d8 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_50 = uStack_af;
      uVar4 = FUN_06a3066c(&local_1d0,&local_1f0,0);
      puVar3 = Method_System_Nullable<uint>_GetValueOrDefault__;
      if ((uVar4 & 1) != 0) {
        plVar7 = *(long **)(param_1 + 0xd8);
        FUN_04652634(&local_1b0,&local_d0,
                     *(undefined8 *)Method_System_Nullable<uint>_GetValueOrDefault__);
        uStack_e8 = uStack_1a8;
        local_f0 = local_1b0;
        local_d8 = uStack_198;
        uStack_e0 = local_1a0;
        FUN_04652634(&local_1b0,&local_d0,*(undefined8 *)puVar3);
        uStack_e8 = uStack_1a8;
        local_f0 = local_1b0;
        local_d8 = uStack_198;
        uStack_e0 = local_1a0;
        local_f8 = local_1b0;
        uVar6 = FUN_049e8de8(&local_f8,0,0,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
          plVar7 = *(long **)(param_1 + 0xe0);
          FUN_04652634(&local_1b0,&local_d0,*(undefined8 *)puVar3);
          uStack_e8 = uStack_1a8;
          local_f0 = local_1b0;
          local_d8 = uStack_198;
          uStack_e0 = local_1a0;
          local_100 = FUN_06a2fe44(&local_f0,0);
          if ((local_100 & 0xff) == 0) {
            uVar6 = *(undefined8 *)
                     Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
            ;
          }
          else {
            FUN_04652634(&local_1b0,&local_d0,*(undefined8 *)puVar3);
            uStack_e8 = uStack_1a8;
            local_f0 = local_1b0;
            local_d8 = uStack_198;
            uStack_e0 = local_1a0;
            local_100 = FUN_06a2fe44(&local_f0,0);
            uVar6 = FUN_046475a0(&local_100,*(undefined8 *)PTR_DAT_072a1b30);
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
            plVar7 = *(long **)(param_1 + 0xe8);
            FUN_04652634(&local_1b0,&local_d0,*(undefined8 *)puVar3);
            uStack_e8 = uStack_1a8;
            local_f0 = local_1b0;
            local_d8 = uStack_198;
            uVar6 = local_d8;
            uStack_e0 = local_1a0;
            local_d8._0_4_ = (undefined4)uStack_198;
            local_208 = *(undefined8 *)
                         Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
            ;
            local_1f8 = (undefined4)local_d8;
            uStack_200 = 0xffffffffffffffff;
            local_d8 = uVar6;
            uVar6 = FUN_059596b4(&local_208,0);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0));
              FUN_04652634(&local_160,&local_d0,*(undefined8 *)puVar3);
              uStack_1a8 = uStack_158;
              local_1b0 = local_160;
              uStack_198 = uStack_148;
              local_1a0 = uStack_150;
              *(undefined8 *)(param_1 + 0x1a0) = uStack_158;
              *puVar1 = local_160;
              *(undefined8 *)(param_1 + 0x1b0) = uStack_148;
              *(undefined8 *)(param_1 + 0x1a8) = uStack_150;
              goto LAB_06a0c434;
            }
          }
        }
        goto LAB_06a0c45c;
      }
    }
  }
LAB_06a0c434:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


