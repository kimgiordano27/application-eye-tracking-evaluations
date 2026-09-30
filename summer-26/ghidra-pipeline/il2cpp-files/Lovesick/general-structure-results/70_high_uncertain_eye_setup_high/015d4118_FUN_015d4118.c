/*
FUNCTION_NAME: FUN_015d4118
ENTRY_POINT: 015d4118
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015d4118(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_38 [2];
  undefined4 local_34;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_117__;
  puVar2 = Newtonsoft_Json_Converters_XDeclarationWrapper_TypeInfo;
  puVar1 = System_Collections_Generic_IReadOnlyList<Vector2>_TypeInfo;
  if ((DAT_03777efa & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_117__);
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyList<Vector2>_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Converters_XDeclarationWrapper_TypeInfo);
    DAT_03777efa = 1;
  }
  local_34 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_34);
  local_38[0] = *(undefined2 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,local_38);
  FUN_01600b5c(*(undefined8 *)puVar2,uVar4,uVar5,0);
  return;
}


