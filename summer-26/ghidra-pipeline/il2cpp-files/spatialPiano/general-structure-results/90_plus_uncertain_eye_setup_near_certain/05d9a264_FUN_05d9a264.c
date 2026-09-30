/*
FUNCTION_NAME: FUN_05d9a264
ENTRY_POINT: 05d9a264
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d9a264(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_06bc3aa3 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(Method_System_Diagnostics_Process_StartWithCreateProcess__);
    DAT_06bc3aa3 = 1;
  }
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x40), lVar2 == 0)) ||
     (*(long *)(param_1 + 0x10) == 0)) goto LAB_05d9a604;
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x10) != '\0') {
    if (*(long *)(lVar2 + 0x1a0) == 0) goto LAB_05d9a604;
    lVar3 = *(long *)(lVar2 + 0xd8);
    fVar8 = *(float *)(lVar2 + 0x134);
    fVar9 = *(float *)(lVar2 + 0x138);
    uVar1 = FUN_05c35d3c(*(long *)(lVar2 + 0x1a0),0);
    if ((uVar1 & 1) == 0) {
      if ((*(long *)(param_1 + 0x10) == 0) || (lVar3 == 0)) goto LAB_05d9a604;
      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24);
      uVar5 = FUN_060a37f0(lVar3,0);
      uVar6 = FUN_060a3978(lVar3,0);
      FUN_060dc4cc(&local_110,uVar10,fVar8 / fVar9,uVar5,uVar6,0);
      uStack_188 = uStack_108;
      local_190 = local_110;
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = uStack_e8;
      local_170 = local_f0;
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_88 = uStack_108;
      local_90 = local_110;
      uStack_78 = uStack_f8;
      uStack_80 = uStack_100;
      uStack_68 = uStack_e8;
      local_70 = local_f0;
      uStack_58 = uStack_d8;
      uStack_60 = uStack_e0;
      uVar4 = uStack_e0;
      FUN_060b5ea4(&local_150,&local_190,param_4 & 1,0);
      fVar8 = (float)uVar4;
      uStack_88 = uStack_148;
      local_90 = local_150;
      uStack_78 = uStack_138;
      uStack_80 = uStack_140;
      uStack_68 = uStack_128;
      local_70 = local_130;
      uStack_58 = uStack_118;
      uStack_60 = uStack_120;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_05d9a604;
      FUN_05d6cd54(&local_1d0,*(long *)(param_1 + 0x40),0,0);
      uStack_c8 = uStack_1c8;
      local_d0 = local_1d0;
      uStack_b8 = uStack_1b8;
      uStack_c0 = uStack_1c0;
      uStack_a8 = uStack_1a8;
      local_b0 = local_1b0;
      uStack_98 = uStack_198;
      uStack_a0 = uStack_1a0;
      uVar4 = uStack_1c0;
      uVar7 = uStack_1a0;
      fVar9 = (float)FUN_060dcc3c(&local_d0,3,0);
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) goto LAB_05d9a604;
      FUN_060dd138(fVar9 + *(float *)(lVar2 + 0x14),(float)uVar4 + *(float *)(lVar2 + 0x18),
                   (float)uVar7 + *(float *)(lVar2 + 0x1c),fVar8 + *(float *)(lVar2 + 0x20),
                   &local_d0,3,0);
      uStack_208 = uStack_c8;
      local_210 = local_d0;
      uStack_1f8 = uStack_b8;
      uStack_200 = uStack_c0;
      uStack_1e8 = uStack_a8;
      local_1f0 = local_b0;
      uStack_1d8 = uStack_98;
      uStack_1e0 = uStack_a0;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack_248 = uStack_208;
      local_250 = local_210;
      uStack_238 = uStack_1f8;
      uStack_240 = uStack_200;
      uStack_228 = uStack_1e8;
      local_230 = local_1f0;
      uStack_218 = uStack_1d8;
      uStack_220 = uStack_1e0;
      uStack_288 = uStack_88;
      local_290 = local_90;
      uStack_278 = uStack_78;
      uStack_280 = uStack_80;
      uStack_268 = uStack_68;
      local_270 = local_70;
      uStack_258 = uStack_58;
      uStack_260 = uStack_60;
      FUN_05dab6f8(param_2,&local_250,&local_290,0,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a6338(*(undefined8 *)Method_System_Diagnostics_Process_StartWithCreateProcess__,0);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar2 = FUN_05d5a440(uVar4,0);
  if (lVar2 == 0) {
    if (param_2 == 0) goto LAB_05d9a604;
    uStack_2a8 = param_3[1];
    local_2b0 = *param_3;
    local_2a0 = param_3[2];
    FUN_05c41758(param_2,&local_2b0,0);
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_05d9a604;
    FUN_05d4792c(*(long *)(param_1 + 0x38),param_2,0);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x10) == '\0') || (*(char *)(lVar2 + 0x11) == '\0')) {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x1a0), lVar2 != 0)) {
      uVar1 = FUN_05c35d3c(lVar2,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_05d6cd54(&local_110,*(long *)(param_1 + 0x40),0,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_05d6cc58(&local_150,*(long *)(param_1 + 0x40),0,0);
          uStack_2e8 = uStack_148;
          local_2f0 = local_150;
          uStack_2d8 = uStack_138;
          uStack_2e0 = uStack_140;
          uStack_2c8 = uStack_128;
          local_2d0 = local_130;
          uStack_2b8 = uStack_118;
          uStack_2c0 = uStack_120;
          FUN_060b5ea4(&local_1d0,&local_2f0,param_4 & 1,0);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uStack_328 = uStack_108;
          local_330 = local_110;
          uStack_318 = uStack_f8;
          uStack_320 = uStack_100;
          uStack_308 = uStack_e8;
          local_310 = local_f0;
          uStack_2f8 = uStack_d8;
          uStack_300 = uStack_e0;
          uStack_368 = uStack_1c8;
          local_370 = local_1d0;
          uStack_358 = uStack_1b8;
          uStack_360 = uStack_1c0;
          uStack_348 = uStack_1a8;
          local_350 = local_1b0;
          uStack_338 = uStack_198;
          uStack_340 = uStack_1a0;
          FUN_05dab6f8(param_2,&local_330,&local_370,0,0);
          return;
        }
      }
    }
  }
LAB_05d9a604:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


