/*
FUNCTION_NAME: FUN_05d46398
ENTRY_POINT: 05d46398
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


void FUN_05d46398(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                 undefined8 *param_5,void *param_6)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_55c [108];
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4cc [108];
  undefined8 local_460;
  undefined8 *puStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  undefined4 uStack_3c0;
  undefined8 uStack_3bc;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  long local_3a0;
  undefined1 auStack_390 [200];
  undefined1 auStack_2c8 [200];
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_130 [200];
  long local_68;
  
                    /* try { // try from 05d4639c to 05e465a7 has its CatchHandler @ 05d4639c
                       catch() { ... } // from try @ 05d4639c with catch @ 05d4639c
                       catch() { ... } // from try @ 05d465d4 with catch @ 05d4639c
                       catch() { ... } // from try @ 05d46754 with catch @ 05d4639c
                       catch() { ... } // from try @ 05d4677c with catch @ 05d4639c
                       catch() { ... } // from try @ 05d467a8 with catch @ 05d4639c */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc388f & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                );
    FUN_02f08768(Method_System_Collections_Hashtable_ContainsKey__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc388f = 1;
  }
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3a0 = 0;
  memset(auStack_130,0,200);
  local_428 = 0;
  local_430 = 0;
  uStack_418 = 0;
  local_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  local_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3bc = 0;
  local_3c4 = 0;
  uStack_3c0 = 0;
  uStack_448 = param_5[1];
  local_450 = *param_5;
  uStack_438 = param_5[3];
  uStack_440 = param_5[2];
  FUN_05d46fb0(param_1,&local_450);
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
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
    local_3a0 = local_1f0;
    puStack_458 = &local_3b0;
    uStack_3a8 = uStack_1f8;
    local_3b0 = local_200;
    local_460 = 0;
    while (uVar5 = FUN_04aff1b0(&local_3b0,*(undefined8 *)puVar3), lVar6 = local_3a0,
          (uVar5 & 1) != 0) {
      if (local_3a0 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d4673c;
      }
      memcpy(auStack_2c8,param_4,200);
      FUN_05d472f0(&local_200,lVar6,auStack_2c8);
      memcpy(auStack_130,&local_200,200);
      memcpy(auStack_4cc,param_6,0x6c);
      FUN_05d47438(&local_200,lVar6,auStack_4cc);
      memcpy(&local_420,&local_200,0x6c);
      uStack_1f8 = param_5[1];
      local_200 = *param_5;
      uStack_1e8 = param_5[3];
      local_1f0 = param_5[2];
      local_430 = 0;
      local_428 = 0;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_390,auStack_130,200);
      uStack_4e8 = uStack_1f8;
      local_4f0 = local_200;
      uStack_4d8 = uStack_1e8;
      lStack_4e0 = local_1f0;
      memcpy(auStack_55c,&local_420,0x6c);
      FUN_05dace88(param_2,param_3,auStack_390,&local_4f0,auStack_55c,&local_430,0);
      lVar6 = *(long *)(param_1 + 0x48);
      if (lVar6 == 0) {
LAB_05d46660:
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d4673c;
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05d46660;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + 0x20) = local_430;
        *(undefined4 *)(lVar7 + 0x28) = local_428;
      }
      else {
        FUN_03aed558();
      }
    }
    FUN_04aff1ac(&local_3b0,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
LAB_05d4673c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


