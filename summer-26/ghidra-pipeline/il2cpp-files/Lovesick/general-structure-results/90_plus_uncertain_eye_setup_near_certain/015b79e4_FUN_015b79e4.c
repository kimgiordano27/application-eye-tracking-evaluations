/*
FUNCTION_NAME: FUN_015b79e4
ENTRY_POINT: 015b79e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015b79e4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long local_1a0;
  long lStack_198;
  int local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  long local_170;
  long lStack_168;
  int local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  long local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  undefined1 local_88 [4];
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_03777e12 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
                      );
    thunk_FUN_00d48444(StringLiteral_3971);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_94_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5521);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<float>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2221);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ParseValueAsync>d__8>__
                      );
    thunk_FUN_00d48444(StringLiteral_2303);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TrialOffer>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1714);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass32_0_<AddPointerCanvas>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Net_FtpControlStream_AcceptCallback__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                      );
    thunk_FUN_00d48444(UnityEngine_Experimental_Rendering_Universal_PixelPerfectCamera_TypeInfo);
    thunk_FUN_00d48444(Obi_ObiConstraints<ObiStretchShearConstraintsBatch>_TypeInfo);
    DAT_03777e12 = 1;
  }
  puVar8 = StringLiteral_2221;
  local_90 = 0;
  local_a0 = 0;
  local_100 = 0;
  local_140 = 0;
  lStack_138 = 0;
  local_80 = 0;
  uStack_78 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_70 = 0;
  plVar18 = *(long **)(param_2 + 0x48);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_2221) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
          goto LAB_015b7b94;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar18,*(long *)StringLiteral_2221,4);
LAB_015b7b94:
    lVar15 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    puVar10 = StringLiteral_5521;
    puVar9 = StringLiteral_3971;
    puVar7 = StringLiteral_1714;
    puVar6 = 
    Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass32_0_<AddPointerCanvas>b__0__;
    puVar5 = Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__;
    puVar4 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__;
    puVar3 = OVRPlugin_OVRP_1_94_0_TypeInfo;
    puVar2 = UnityEngine_Events_UnityAction<float>_TypeInfo;
    local_90 = 0;
    if (lVar15 != 0) {
      FUN_01323390(lVar15,&local_170,*(undefined8 *)StringLiteral_2303);
      uStack_a8 = CONCAT44(uStack_154,uStack_158);
      uStack_b0 = CONCAT44(uStack_15c,local_160);
      local_a0 = CONCAT44(uStack_14c,uStack_150);
      lStack_b8 = lStack_168;
      local_c0 = local_170;
      while (uVar16 = FUN_012b894c(&local_c0,*(undefined8 *)puVar3), (uVar16 & 1) != 0) {
        FUN_00bd490c(&local_170,&local_c0,*(undefined8 *)puVar2);
        if (lStack_168 == param_3) {
          local_170 = 0;
          FUN_01347274(&local_170,local_88,*(undefined8 *)puVar4);
          local_90 = local_170;
        }
      }
      FUN_012b8948(&local_c0,*(undefined8 *)puVar5);
      lVar15 = *(long *)(*(long *)puVar7 + 0x20);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      pcVar13 = (char *)thunk_FUN_00d32ed4(&local_90,*(undefined8 *)(lVar15 + 0x80));
      if (*pcVar13 == '\0') {
        local_170 = param_3;
        uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__,&local_170);
        FUN_01600b5c(*(undefined8 *)Obi_ObiConstraints<ObiStretchShearConstraintsBatch>_TypeInfo,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                     ,uVar14,0);
        FUN_015bb0e8();
        lStack_d8 = 0;
        local_e0 = 0;
        lStack_c8 = 0;
        local_d0 = 0;
        lStack_e8 = 0;
        local_f0 = 0;
LAB_015b7eb8:
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
LAB_015b7ec4:
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      plVar18 = *(long **)(param_2 + 0x48);
      if (plVar18 != (long *)0x0) {
        lVar15 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
              puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 8) * 0x10 + 0x138);
              goto LAB_015b7d58;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar8,8);
LAB_015b7d58:
        lVar15 = (*(code *)*puVar12)(plVar18,puVar12[1]);
        if (lVar15 != 0) {
          FUN_01323390(lVar15,&local_130,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ParseValueAsync>d__8>__
                      );
          do {
            uVar16 = FUN_012b894c(&local_130,*(undefined8 *)puVar9);
            if ((uVar16 & 1) == 0) {
              FUN_012b8948(&local_130,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
                          );
              local_170 = local_90;
              uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Net_FtpControlStream_AcceptCallback__,
                                          &local_170);
              FUN_01600b5c(*(undefined8 *)
                            UnityEngine_Experimental_Rendering_Universal_PixelPerfectCamera_TypeInfo
                           ,*(undefined8 *)
                             Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                           ,uVar14,0);
              FUN_015bb0e8();
              goto LAB_015b7eb8;
            }
            FUN_00bd4a0c(&local_170,&local_130,*(undefined8 *)puVar10);
            iVar11 = local_160;
            uStack_78 = CONCAT44(uStack_150,uStack_154);
            local_80 = CONCAT44(uStack_158,uStack_15c);
            lStack_138 = lStack_168;
            local_140 = local_170;
            local_70 = uStack_14c;
            FUN_01347408(&local_90,&local_84,*(undefined8 *)puVar6);
          } while (local_84 != iVar11);
          local_190 = iVar11;
          uStack_158 = 0;
          uStack_154 = 0;
          local_160 = 0;
          uStack_15c = 0;
          lStack_148 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          lStack_168 = 0;
          local_170 = 0;
          lStack_198 = lStack_138;
          local_1a0 = local_140;
          uStack_184 = uStack_78;
          local_18c = local_80;
          local_17c = local_70;
          FUN_01347274(&local_170,&local_1a0,
                       *(undefined8 *)Method_System_Collections_Generic_List<TrialOffer>__ctor__);
          lStack_d8 = CONCAT44(uStack_154,uStack_158);
          local_e0 = CONCAT44(uStack_15c,local_160);
          local_d0 = CONCAT44(uStack_14c,uStack_150);
          lStack_e8 = lStack_168;
          local_f0 = local_170;
          lStack_c8 = lStack_148;
          FUN_012b8948(&local_130,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
                      );
          param_1[3] = lStack_d8;
          param_1[2] = local_e0;
          param_1[5] = lStack_c8;
          param_1[4] = local_d0;
          param_1[1] = lStack_e8;
          *param_1 = local_f0;
          goto LAB_015b7ec4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


