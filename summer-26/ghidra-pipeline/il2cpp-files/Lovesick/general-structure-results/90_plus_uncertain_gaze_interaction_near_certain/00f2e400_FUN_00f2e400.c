/*
FUNCTION_NAME: FUN_00f2e400
ENTRY_POINT: 00f2e400
PROGRAM: Lovesick-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void FUN_00f2e400(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_037755d3 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_ScriptableObject_CreateInstance<ObiParticleGroup>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
                      );
    thunk_FUN_00d48444(StringLiteral_2103);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_BurstManaged__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_85__);
    thunk_FUN_00d48444(StringLiteral_12595);
    thunk_FUN_00d48444(Method_Obi_ObiList<ObiPathFrame>_SetCount__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_FinishCDATA__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                      );
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                      );
    thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
    DAT_037755d3 = 1;
  }
  local_60 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  if (param_1 == 0) goto LAB_00f2e848;
  uVar8 = FUN_00f29938(param_1);
  switch(uVar8) {
  case 0:
    if (param_2 == (long *)0x0) {
LAB_00f2e848:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x5b,*(undefined8 *)(*param_2 + 0x210));
    lVar12 = FUN_00f2ad3c(param_1);
    puVar4 = StringLiteral_2103;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_BurstManaged__
    ;
    puVar2 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
    if (lVar12 == 0) goto LAB_00f2e848;
    FUN_01323390(lVar12,&local_a8,*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FinishCDATA__)
    ;
    bVar1 = false;
    while (uVar9 = FUN_012b894c(&local_a8,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      uVar10 = FUN_00accee0(&local_a8,*(undefined8 *)puVar3);
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
      }
      bVar1 = true;
      FUN_00f2e400(uVar10,param_2);
    }
    FUN_012b8948(&local_a8,*(undefined8 *)puVar2);
    lVar12 = *param_2;
    uVar10 = 0x5d;
    break;
  case 1:
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    (**(code **)(*param_2 + 0x208))(param_2,0x7b,*(undefined8 *)(*param_2 + 0x210));
    lVar12 = FUN_00f29ea8(param_1);
    puVar7 = StringLiteral_12595;
    puVar6 = 
    Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
    ;
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_85__;
    puVar4 = 
    Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
    ;
    puVar2 = Method_Obi_ObiList<ObiPathFrame>_SetCount__;
    if (lVar12 == 0) goto LAB_00f2e848;
    FUN_0129b5d0(lVar12,&local_d0,
                 *(undefined8 *)
                  Method_UnityEngine_ScriptableObject_CreateInstance<ObiParticleGroup>__);
    bVar1 = false;
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    local_60 = local_b0;
    while( true ) {
      uVar9 = FUN_012bf140(&local_80,*(undefined8 *)puVar3);
      if ((uVar9 & 1) == 0) break;
      auVar15 = FUN_00accbcc(&local_80,*(undefined8 *)puVar5);
      local_90 = auVar15;
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
      }
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      uVar10 = FUN_00acccd4(local_90,*(undefined8 *)puVar7);
      (**(code **)(*param_2 + 0x248))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x250));
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 0x248))
                (param_2,*(undefined8 *)puVar6,*(undefined8 *)(*param_2 + 0x250));
      uVar10 = FUN_00accdd8(local_90,*(undefined8 *)puVar2);
      bVar1 = true;
      FUN_00f2e400(uVar10,param_2);
    }
    FUN_012bf83c(&local_80,*(undefined8 *)puVar4);
    lVar12 = *param_2;
    uVar10 = 0x7d;
    break;
  case 2:
    FUN_00f2abcc(param_1);
    uVar10 = FUN_00f2e934();
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    lVar12 = *param_2;
    goto MedleyBossPushPhase_<PushPhaseCoroutine>d__31__MoveNext;
  case 3:
    uVar10 = FUN_00f2ac28(param_1);
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    pcVar14 = *(code **)(*param_2 + 0x238);
    uVar11 = *(undefined8 *)(*param_2 + 0x240);
    goto LAB_00f2e824;
  case 4:
    uVar9 = FUN_00f2ac84(param_1);
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    if ((uVar9 & 1) == 0) {
      lVar12 = *param_2;
      puVar13 = (undefined8 *)
                DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
      ;
    }
    else {
      lVar12 = *param_2;
      puVar13 = (undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo;
    }
    goto MedleyBossPushPhase_<PushPhaseCoroutine>d__31__System_IDisposable_Dispose;
  case 5:
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
    FUN_00f2ace0(param_1);
    uVar10 = FUN_00f2e0b4();
    (**(code **)(*param_2 + 0x248))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x250));
    lVar12 = *param_2;
    uVar10 = 0x22;
    break;
  case 6:
    if (param_2 == (long *)0x0) goto LAB_00f2e848;
    lVar12 = *param_2;
    puVar13 = (undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
    ;
MedleyBossPushPhase_<PushPhaseCoroutine>d__31__System_IDisposable_Dispose:
    uVar10 = *puVar13;
MedleyBossPushPhase_<PushPhaseCoroutine>d__31__MoveNext:
    pcVar14 = *(code **)(lVar12 + 0x248);
    uVar11 = *(undefined8 *)(lVar12 + 0x250);
LAB_00f2e824:
    (*pcVar14)(param_2,uVar10,uVar11);
  default:
    goto switchD_00f2e520_default;
  }
  (**(code **)(lVar12 + 0x208))(param_2,uVar10,*(undefined8 *)(lVar12 + 0x210));
switchD_00f2e520_default:
  return;
}


