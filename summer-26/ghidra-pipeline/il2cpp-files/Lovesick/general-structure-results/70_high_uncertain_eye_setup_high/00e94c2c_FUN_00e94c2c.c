/*
FUNCTION_NAME: FUN_00e94c2c
ENTRY_POINT: 00e94c2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00e94c2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0377501f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_get_Module__);
    thunk_FUN_00d48444(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcges_f32__);
    thunk_FUN_00d48444(Method_OVRRoomLayout_FetchLayoutAnchorsAsync__);
    DAT_0377501f = 1;
  }
  puVar4 = Method_System_Reflection_Emit_TypeBuilder_get_Module__;
  puVar3 = Method_OVRRoomLayout_FetchLayoutAnchorsAsync__;
  puVar2 = Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__;
  puVar1 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x78),&local_48,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcges_f32__);
    while (uVar5 = FUN_012b894c(&local_48,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      lVar6 = FUN_00ac70b0(&local_48,*(undefined8 *)puVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00e94dd8();
    }
    FUN_012b8948(&local_48,*(undefined8 *)puVar4);
    FUN_00fdf628(*(undefined8 *)puVar3,0);
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_00e7cb88(*(long *)(param_1 + 0x108),0);
      uVar7 = FUN_00e94e9c(0x40000000,param_1);
      FUN_0268ee74(param_1,uVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


