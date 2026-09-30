/*
FUNCTION_NAME: BurstCompiler_RequestSetProtocolVersion_m50CE25D4C93D2D9650B4C3287EC061E417F1B5FF
ENTRY_POINT: 03676880
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined4
BurstCompiler_RequestSetProtocolVersion_m50CE25D4C93D2D9650B4C3287EC061E417F1B5FF
          (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 local_74;
  undefined4 local_70;
  byte local_69;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_Init__;
  puVar1 = Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__;
  local_20 = param_2;
  local_14 = param_1;
  if ((BurstCompiler_RequestSetProtocolVersion_m50CE25D4C93D2D9650B4C3287EC061E417F1B5FF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_Init__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12692);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12693);
    BurstCompiler_RequestSetProtocolVersion_m50CE25D4C93D2D9650B4C3287EC061E417F1B5FF::
    s_Il2CppMethodInitialized = 1;
  }
  local_28 = 0;
  local_2c = 0;
  local_30 = local_14;
  local_34 = local_14;
  local_40 = Box(*(Il2CppClass **)puVar1,&local_34);
  local_48 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                       (*(undefined8 *)puVar3,local_40,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_58 = BurstCompiler_SendCommandToCompiler_mC978DF4AAAC90A0FF997E45DAAC5BF94A40DA73D
                       (*(undefined8 *)StringLiteral_12692,local_48,0);
  local_50 = local_58;
  local_28 = local_58;
  local_59 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(local_58,0);
  local_59 = local_59 & 1;
  if (local_59 == 0) {
    local_68 = local_28;
    local_69 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(local_28,&local_2c,0);
    local_69 = local_69 & 1;
    if (local_69 != 0) goto LAB_036769dc;
  }
  local_2c = 0;
LAB_036769dc:
  local_70 = local_2c;
  local_74 = local_2c;
  uVar4 = Box(*(Il2CppClass **)puVar1,&local_74);
  uVar4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(*(undefined8 *)puVar3,uVar4);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  BurstCompiler_SendCommandToCompiler_mC978DF4AAAC90A0FF997E45DAAC5BF94A40DA73D
            (*(undefined8 *)StringLiteral_12693,uVar4,0);
  return local_2c;
}


