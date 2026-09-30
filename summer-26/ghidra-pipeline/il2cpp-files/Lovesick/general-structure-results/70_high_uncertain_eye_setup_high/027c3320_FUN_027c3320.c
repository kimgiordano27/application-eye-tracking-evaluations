/*
FUNCTION_NAME: FUN_027c3320
ENTRY_POINT: 027c3320
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_027c3320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_03788880 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon___crc32cb__);
    thunk_FUN_00d48444(Meta_WitAi_Events_WitSampleEvent_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>_Remove__);
    thunk_FUN_00d48444(System_Func<AndroidAxis,_string>_TypeInfo);
    DAT_03788880 = 1;
  }
  puVar2 = OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo;
  uVar3 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x10),0);
  puVar1 = Method_System_Collections_Generic_List<NavMeshLink>_Remove__;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_027c34a4;
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x58),
                         *(undefined8 *)Method_System_Collections_Generic_List<NavMeshLink>_Remove__
                         ,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_027c34ac(param_1,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x10));
    }
  }
  uVar3 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x28),0);
  puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_027c34a4;
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x58),
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__,
                         *(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_027c34ac(param_1,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar1 = Meta_WitAi_Events_WitSampleEvent_TypeInfo;
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
LAB_027c34a4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x58),
                         *(undefined8 *)Meta_WitAi_Events_WitSampleEvent_TypeInfo,
                         *(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_027c34a4;
      uVar3 = FUN_01322618(*(long *)(param_1 + 0x58),
                           *(undefined8 *)System_Func<AndroidAxis,_string>_TypeInfo,
                           *(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        local_38 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon___crc32cb__;
        uStack_30 = 0xffffffffffffffff;
        local_28 = *(undefined4 *)(param_1 + 0x30);
        uVar4 = FUN_017a7f78(&local_38,0);
        FUN_027c34ac(param_1,*(undefined8 *)puVar1,uVar4);
      }
    }
  }
  return;
}


