/*
FUNCTION_NAME: FUN_05d45f18
ENTRY_POINT: 05d45f18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d45f18(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                 undefined8 *param_5,void *param_6)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_58c [108];
  undefined8 local_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4fc [108];
  undefined8 local_490;
  undefined8 *puStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined8 uStack_3dc;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  long local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined1 auStack_390 [200];
  undefined1 auStack_2c8 [200];
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc388e & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                );
    FUN_02f08768(
                Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc388e = 1;
  }
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3c0 = 0;
  memset(auStack_130,0,200);
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_438 = 0;
  local_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  local_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3dc = 0;
  local_3e4 = 0;
  uStack_3e0 = 0;
  uStack_478 = param_5[1];
  local_480 = *param_5;
  uStack_468 = param_5[3];
  uStack_470 = param_5[2];
  FUN_05d46fb0(param_1,&local_480);
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
  ;
  puVar3 = 
  Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob>__
  ;
  if (*(long *)(param_1 + 0x38) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    FUN_03ac039c(&local_200,*(long *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    local_3c0 = local_1f0;
    puStack_488 = &local_3d0;
    uStack_3c8 = uStack_1f8;
    local_3d0 = local_200;
    local_490 = 0;
    while (uVar6 = FUN_04aff1b0(&local_3d0,*(undefined8 *)puVar4), lVar7 = local_3c0,
          (uVar6 & 1) != 0) {
      if (local_3c0 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d462d4;
      }
      memcpy(auStack_2c8,param_4,200);
      FUN_05d472f0(&local_200,lVar7,auStack_2c8);
      memcpy(auStack_130,&local_200,200);
      memcpy(auStack_4fc,param_6,0x6c);
      FUN_05d47438(&local_200,lVar7,auStack_4fc);
      memcpy(&local_440,&local_200,0x6c);
      uStack_1f8 = param_5[1];
      local_200 = *param_5;
      uStack_1e8 = param_5[3];
      local_1f0 = param_5[2];
      uStack_450 = 0;
      local_448 = 0;
      local_458 = 0;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_390,auStack_130,200);
      uStack_518 = uStack_1f8;
      local_520 = local_200;
      uStack_508 = uStack_1e8;
      lStack_510 = local_1f0;
      memcpy(auStack_58c,&local_440,0x6c);
      FUN_05dacbf0(param_2,param_3,auStack_390,&local_520,auStack_58c,&local_458,0);
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) {
LAB_05d461f8:
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d462d4;
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05d461f8;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x30) = local_448;
        *(undefined8 *)(lVar8 + 0x28) = uStack_450;
        *(undefined8 *)(lVar8 + 0x20) = local_458;
      }
      else {
        uStack_3a8 = uStack_450;
        local_3b0 = local_458;
        local_3a0 = local_448;
        FUN_03aeaa38(lVar7,&local_3b0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04aff1ac(&local_3d0,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
LAB_05d462d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


