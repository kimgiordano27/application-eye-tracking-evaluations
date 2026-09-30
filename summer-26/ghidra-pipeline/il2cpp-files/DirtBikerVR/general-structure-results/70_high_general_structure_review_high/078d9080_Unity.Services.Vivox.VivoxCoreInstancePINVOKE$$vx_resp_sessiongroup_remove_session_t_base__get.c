/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_remove_session_t_base__get
ENTRY_POINT: 078d9080
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_remove_session_t_base__get
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_08488b88;
  if ((DAT_08987a77 & 1) == 0) {
    FUN_03a8a718(
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488b88);
    DAT_08987a77 = 1;
  }
  puVar2 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666f620(&local_98,0);
  uStack_70 = uStack_90;
  uStack_78 = local_98;
  local_68 = local_88;
  thunk_FUN_03afed3c((ulong)&local_80 | 8,0);
  local_60 = param_1;
  thunk_FUN_03afed3c(&local_60,param_1);
  uStack_58 = param_2;
  thunk_FUN_03afed3c(&uStack_58,param_2);
  local_50 = param_3;
  thunk_FUN_03afed3c(&local_50,param_3);
  local_80 = CONCAT44(local_80._4_4_,0xffffffff);
  FUN_043fff78((ulong)&local_80 | 8,&local_80,*(undefined8 *)puVar2);
  FUN_0666d3b8((ulong)&local_80 | 8,0);
  return;
}


