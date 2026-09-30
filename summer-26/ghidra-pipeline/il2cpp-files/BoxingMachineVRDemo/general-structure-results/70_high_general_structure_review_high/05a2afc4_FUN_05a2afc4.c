/*
FUNCTION_NAME: FUN_05a2afc4
ENTRY_POINT: 05a2afc4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_05a2afc4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 auStack_230 [144];
  long local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  long local_160;
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
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [128];
  
  if ((DAT_06b81190 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRLoadAnchorResult>>_get_IsCompleted__
                );
    FUN_02d6084c(Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRSaveAnchorResult>>_GetResult__);
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRSaveAnchorResult>>_get_IsCompleted__
                );
    FUN_02d6084c(Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRShareAnchorResult>>_GetResult__)
    ;
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRShareAnchorResult>>_get_IsCompleted__
                );
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_Awaiter<NativeArray<XREraseAnchorResult>>_get_IsCompleted__
                );
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    FUN_02d6084c(PTR_DAT_06768440);
    FUN_02d6084c(PTR_DAT_06788b68);
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__);
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetException__
                );
    FUN_02d6084c(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRLoadAnchorResult>>_GetResult__);
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_get_IsCompleted__);
    DAT_06b81190 = 1;
  }
  puVar1 = PTR_DAT_06768440;
  memset(auStack_d0,0,0x90);
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  plVar7 = (long *)(param_1 + 0x10);
  if (*plVar7 != 0) {
    FUN_03cb1020(plVar7,*(undefined8 *)puVar1);
    *plVar7 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar4 = FUN_048f4eb4(*(long *)(param_1 + 0x40),
                             *(undefined8 *)
                              Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRSaveAnchorResult>>_GetResult__
                            ),
       puVar3 = Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRShareAnchorResult>>_GetResult__,
       puVar2 = 
       Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRSaveAnchorResult>>_get_IsCompleted__,
       lVar4 == 0)) goto LAB_05a2b350;
    FUN_04490eec(auStack_230,lVar4,
                 *(undefined8 *)
                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_get_IsCompleted__);
    memcpy(auStack_d0,auStack_230,0x90);
    while (uVar5 = FUN_04b462ac(auStack_d0,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      pvVar6 = memcpy(&local_150,auStack_c0,0x80);
      FUN_05a2ae74(pvVar6,&local_150);
    }
    FUN_04b462a8(auStack_d0,*(undefined8 *)puVar2);
  }
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_05a2b350:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_048f5404(*(long *)(param_1 + 0x40),
                 *(undefined8 *)
                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<XRLoadAnchorResult>>_get_IsCompleted__
                );
  }
  local_160 = *(long *)(param_1 + 0x48);
  uStack_158 = *(undefined8 *)(param_1 + 0x50);
  if (local_160 != 0) {
    FUN_03d72658(&local_160,
                 *(undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                );
    local_160 = 0;
    uStack_158 = 0;
    *(long *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  local_170 = *(long *)(param_1 + 0x20);
  uStack_168 = *(undefined8 *)(param_1 + 0x28);
  if (local_170 != 0) {
    FUN_03d2b7a0(&local_170,
                 *(undefined8 *)
                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<XREraseAnchorResult>>_get_IsCompleted__
                );
    local_170 = 0;
    uStack_168 = 0;
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  local_180 = *(long *)(param_1 + 0x30);
  uStack_178 = *(undefined8 *)(param_1 + 0x38);
  if (local_180 != 0) {
    FUN_03cb1020(&local_180,*(undefined8 *)puVar1);
    local_180 = 0;
    uStack_178 = 0;
    *(long *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar2 = PTR_DAT_06788b68;
  local_190 = *(long *)(param_1 + 0x58);
  uStack_188 = *(undefined8 *)(param_1 + 0x60);
  if (local_190 != 0) {
    FUN_03d31a6c(&local_190,*(undefined8 *)PTR_DAT_06788b68);
    local_190 = 0;
    uStack_188 = 0;
    *(long *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar3 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__;
  local_1a0 = *(long *)(param_1 + 0x68);
  uStack_198 = *(undefined8 *)(param_1 + 0x70);
  if (local_1a0 != 0) {
    FUN_03d2301c(&local_1a0,
                 *(undefined8 *)
                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__);
    *(long *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  local_1a0 = *(long *)(param_1 + 0x88);
  uStack_198 = *(undefined8 *)(param_1 + 0x90);
  if (local_1a0 != 0) {
    FUN_03d2301c(&local_1a0,*(undefined8 *)puVar3);
    local_1a0 = 0;
    uStack_198 = 0;
    *(long *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  local_180 = *(long *)(param_1 + 0x98);
  uStack_178 = *(undefined8 *)(param_1 + 0xa0);
  if (local_180 != 0) {
    FUN_03cb1020(&local_180,*(undefined8 *)puVar1);
    local_180 = 0;
    uStack_178 = 0;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  local_190 = *(long *)(param_1 + 0x78);
  uStack_188 = *(undefined8 *)(param_1 + 0x80);
  if (local_190 != 0) {
    FUN_03d31a6c(&local_190,*(undefined8 *)puVar2);
    *(long *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}


