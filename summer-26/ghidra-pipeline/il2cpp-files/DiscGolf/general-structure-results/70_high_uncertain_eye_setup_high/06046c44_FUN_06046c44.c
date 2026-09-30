/*
FUNCTION_NAME: FUN_06046c44
ENTRY_POINT: 06046c44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06046c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  if ((DAT_06dc4c35 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_Component_TryGetComponent<MeshCollider>__);
    FUN_02d965b8(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_06dc4c35 = 1;
  }
  puVar4 = Method_UnityEngine_Component_TryGetComponent<MeshCollider>__;
  puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b192c(&local_98,*(undefined8 *)puVar2);
  uStack_70 = uStack_90;
  uStack_78 = local_98;
  local_68 = local_88;
  LeanTween__value((ulong)&local_80 | 8,0);
  local_60 = param_1;
  LeanTween__value(&local_60,param_1);
  local_80 = CONCAT44(local_80._4_4_,0xffffffff);
  uStack_58 = param_2;
  uStack_50 = param_3;
  FUN_0320a114((ulong)&local_80 | 8,&local_80,*(undefined8 *)puVar4);
  FUN_040b1940((ulong)&local_80 | 8,*(undefined8 *)puVar3);
  return;
}


