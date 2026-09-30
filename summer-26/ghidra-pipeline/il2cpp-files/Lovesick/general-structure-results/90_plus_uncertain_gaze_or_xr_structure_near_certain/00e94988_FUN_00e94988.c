/*
FUNCTION_NAME: FUN_00e94988
ENTRY_POINT: 00e94988
PROGRAM: Lovesick-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_00e94988(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_0377501e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_get_Module__);
    thunk_FUN_00d48444(StringLiteral_9110);
    thunk_FUN_00d48444(StringLiteral_9781);
    thunk_FUN_00d48444(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Models_NetSyncSession_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcges_f32__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                      );
    DAT_0377501e = 1;
  }
  puVar7 = StringLiteral_9781;
  puVar6 = StringLiteral_9110;
  puVar5 = Method_System_Reflection_Emit_TypeBuilder_get_Module__;
  puVar4 = Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
  ;
  puVar2 = Oculus_Platform_Models_NetSyncSession_TypeInfo;
  puVar1 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if ((*(char *)(param_1 + 0xf8) != '\0') || (*(char *)(param_1 + 0x60) != '\0')) {
    return;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x78),&local_a0,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcges_f32__);
    uStack_68 = uStack_98;
    local_70 = local_a0;
    local_60 = local_90;
    while (uVar8 = FUN_012b894c(&local_70,*(undefined8 *)puVar1), (uVar8 & 1) != 0) {
      lVar9 = FUN_00ac70b0(&local_70,*(undefined8 *)puVar4);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00e9419c();
    }
    FUN_012b8948(&local_70,*(undefined8 *)puVar5);
    *(undefined1 *)(param_1 + 0xf9) = 0;
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x88),&local_88,*(undefined8 *)puVar3);
      while( true ) {
        uVar8 = FUN_012b894c(&local_88,*(undefined8 *)puVar7);
        if ((uVar8 & 1) == 0) {
          FUN_012b8948(&local_88,*(undefined8 *)puVar6);
          *(undefined1 *)(param_1 + 0x140) = 0;
          return;
        }
        lVar9 = FUN_00ac6fa8(&local_88,*(undefined8 *)puVar2);
        if (lVar9 == 0) break;
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar9 + 0x24);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


