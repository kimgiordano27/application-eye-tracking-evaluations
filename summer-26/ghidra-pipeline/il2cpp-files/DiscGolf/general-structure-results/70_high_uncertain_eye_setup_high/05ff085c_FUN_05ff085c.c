/*
FUNCTION_NAME: FUN_05ff085c
ENTRY_POINT: 05ff085c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05ff085c(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  
  puVar1 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  if ((DAT_06dc494d & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<VivoxServiceInternal_<LogoutAsync>d__177>__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_06dc494d = 1;
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<VivoxServiceInternal_<LogoutAsync>d__177>__
  ;
  puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b192c(&local_88,*(undefined8 *)puVar2);
  uStack_60 = uStack_80;
  uStack_68 = local_88;
  local_58 = local_78;
  LeanTween__value((ulong)&local_70 | 8,0);
  local_50 = param_1;
  LeanTween__value(&local_50,param_1);
  uStack_48 = CONCAT71(uStack_48._1_7_,param_2) & 0xffffffffffffff01;
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  FUN_032019bc((ulong)&local_70 | 8,&local_70,*(undefined8 *)puVar4);
  FUN_040b1940((ulong)&local_70 | 8,*(undefined8 *)puVar3);
  return;
}


