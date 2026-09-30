/*
FUNCTION_NAME: FUN_058d3c48
ENTRY_POINT: 058d3c48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058d3c48(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  puVar3 = Method_System_ReadOnlySpan<ulong>_get_Length__;
  local_98 = param_5;
  local_90 = param_3;
  uStack_88 = param_4;
  if ((DAT_066d3342 & 1) == 0) {
    FUN_02b3c81c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlScheme_DeviceRequirement>_GetEnumerator__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>__ctor__);
    FUN_02b3c81c(Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__);
    FUN_02b3c81c(Method_System_ReadOnlySpan<ulong>_get_Length__);
    DAT_066d3342 = 1;
  }
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlScheme_DeviceRequirement>_GetEnumerator__
  ;
  local_9c = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_78 = *(undefined8 *)(*param_1 + 8);
  local_80 = *(undefined8 *)*param_1;
  uStack_70 = *(undefined8 *)param_1[1];
  uStack_68 = *(undefined8 *)(param_1[1] + 8);
  uStack_a0 = 0;
  local_60 = *(undefined8 *)param_1[2];
  uStack_4c = *(undefined8 *)(param_1[3] + 4);
  uStack_58 = (undefined4)*(undefined8 *)(param_1[2] + 8);
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x18);
  uStack_54 = (undefined4)*(undefined8 *)(param_1[2] + 0xc);
  uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1[2] + 0xc) >> 0x20);
  uStack_f8 = auVar1._8_4_;
  uVar5 = FUN_03abeef0(&local_90,&local_80,&local_9c,*(undefined8 *)puVar3);
  puVar4 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__;
  puVar3 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__;
  if ((uVar5 & 1) == 0) {
    local_d0 = *(undefined8 *)param_1[2];
    auVar6._4_4_ = uStack_f8;
    auVar6._0_4_ = uStack_f8;
    auVar6._8_4_ = uStack_f8;
    auVar6._12_4_ = uStack_f8;
    uStack_bc = (undefined4)*(undefined8 *)(param_1[3] + 4);
    uStack_b8 = (undefined4)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
    local_c0 = (undefined4)((ulong)*(undefined8 *)(param_1[2] + 0xc) >> 0x20);
    uStack_c8 = (undefined4)*(undefined8 *)(param_1[2] + 8);
    uStack_c4 = (undefined4)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
    uStack_b4 = 0;
    uStack_b0 = 0;
    auVar6 = NEON_ext(auVar1,auVar6,0xc,1);
    local_ac = auVar1._0_4_;
    uStack_a4 = auVar1._4_4_;
    uStack_a8 = auVar6._0_4_;
    uStack_a0 = auVar6._4_4_;
    local_f0 = SUB168(*param_1,0);
    uStack_d8 = *(undefined8 *)(param_1[1] + 8);
    local_e0 = *(undefined8 *)param_1[1];
    uStack_e8 = SUB168(*param_1,8);
    if ((*(byte *)(*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>__ctor__
                            + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    local_80 = *(undefined8 *)*param_1;
    uStack_78 = *(undefined8 *)(*param_1 + 8);
    uStack_68 = *(undefined8 *)(param_1[1] + 8);
    uStack_70 = *(undefined8 *)param_1[1];
    local_9c = *(undefined4 *)(param_5 + 8);
    local_60 = *(undefined8 *)param_1[2];
    auVar1 = *(undefined1 (*) [16])(param_1[2] + 0xc);
    uStack_58 = (undefined4)*(undefined8 *)(param_1[2] + 8);
    uStack_4c = auVar1._8_8_;
    uStack_54 = auVar1._0_4_;
    uStack_50 = auVar1._4_4_;
    FUN_03abedf4(&local_90,&local_80,local_9c,*(undefined8 *)puVar4);
    FUN_03aaa1f0(&local_98,&local_f0,*(undefined8 *)puVar3);
  }
  FUN_03aaa0c0(&local_98,local_9c,*(undefined8 *)puVar2);
  return;
}


