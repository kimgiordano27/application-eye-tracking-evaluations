/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$get_Length
ENTRY_POINT: 02ee46d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_045317d8 & 1) == 0) {
    FUN_01c5d288(MQTTnet_Formatter_ReadFixedHeaderResult_TypeInfo);
    DAT_045317d8 = 1;
  }
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  if (*param_1 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (0x3f < iVar1) {
      thunk_FUN_01c273e8(PTR_DAT_04237cd0);
      uVar2 = thunk_FUN_01c496e0();
      uVar3 = thunk_FUN_01c273e8(
                                System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo
                                );
      FUN_032d1aa4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,param_4);
    }
    if (iVar1 < 2) {
      *param_1 = 0;
    }
    else {
      param_2 = FUN_02368864(*param_1,iVar1,param_2,param_3,
                             *(undefined8 *)MQTTnet_Formatter_ReadFixedHeaderResult_TypeInfo);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
  }
  return param_2;
}


