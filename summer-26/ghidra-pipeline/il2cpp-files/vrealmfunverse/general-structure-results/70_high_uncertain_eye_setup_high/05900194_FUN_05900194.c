/*
FUNCTION_NAME: FUN_05900194
ENTRY_POINT: 05900194
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05900194(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  if ((DAT_066d3536 & 1) == 0) {
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<ValueTuple<PxrResult,_List<ulong>>>_GetAwaiter__
                );
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<ValueTuple<PxrResult,_ulong,_Guid>>_GetAwaiter__
                );
    FUN_02b3c81c(
                Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                );
    FUN_02b3c81c(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    FUN_02b3c81c(
                Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
                );
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    DAT_066d3536 = 1;
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
  FUN_05901244(param_1,&local_480);
  puVar5 = Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
  puVar4 = Method_System_Threading_Tasks_Task<ValueTuple<PxrResult,_ulong,_Guid>>_GetAwaiter__;
  puVar3 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
  if (*(long *)(param_1 + 0x38) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    FUN_037a6fdc(&local_200,*(long *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
                );
    local_3c0 = local_1f0;
    puStack_488 = &local_3d0;
    uStack_3c8 = uStack_1f8;
    local_3d0 = local_200;
    local_490 = 0;
    while (uVar6 = FUN_0472eaf4(&local_3d0,*(undefined8 *)puVar4), lVar7 = local_3c0,
          (uVar6 & 1) != 0) {
      if (local_3c0 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05900550;
      }
      memcpy(auStack_2c8,param_4,200);
      FUN_059015a4(&local_200,lVar7,auStack_2c8);
      memcpy(auStack_130,&local_200,200);
      memcpy(auStack_4fc,param_6,0x6c);
      FUN_059016ec(&local_200,lVar7,auStack_4fc);
      memcpy(&local_440,&local_200,0x6c);
      uStack_1f8 = param_5[1];
      local_200 = *param_5;
      uStack_1e8 = param_5[3];
      local_1f0 = param_5[2];
      uStack_450 = 0;
      local_448 = 0;
      local_458 = 0;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      memcpy(auStack_390,auStack_130,200);
      uStack_518 = uStack_1f8;
      local_520 = local_200;
      uStack_508 = uStack_1e8;
      lStack_510 = local_1f0;
      memcpy(auStack_58c,&local_440,0x6c);
      FUN_05969c54(param_2,param_3,auStack_390,&local_520,auStack_58c,&local_458,0);
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) {
LAB_05900474:
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05900550;
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05900474;
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
        FUN_03810e84(lVar7,&local_3b0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0472eaf0(&local_3d0,
                 *(undefined8 *)
                  Method_System_Threading_Tasks_Task<ValueTuple<PxrResult,_List<ulong>>>_GetAwaiter__
                );
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
LAB_05900550:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


