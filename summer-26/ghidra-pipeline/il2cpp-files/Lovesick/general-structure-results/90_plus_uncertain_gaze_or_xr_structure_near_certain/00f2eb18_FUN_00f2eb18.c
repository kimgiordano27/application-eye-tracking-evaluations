/*
FUNCTION_NAME: FUN_00f2eb18
ENTRY_POINT: 00f2eb18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_00f2eb18(long param_1,long *param_2,int param_3)

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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_037755d4 & 1) == 0) {
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
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TextInputBaseField_UxmlTraits<string>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f5f30);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                      );
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                      );
    thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
    DAT_037755d4 = 1;
  }
  local_70 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  if (param_1 == 0) goto LAB_00f2f060;
  uVar8 = FUN_00f29938(param_1);
  switch(uVar8) {
  case 0:
    lVar12 = FUN_00f2ad3c(param_1);
    if ((lVar12 == 0) || (param_2 == (long *)0x0)) goto LAB_00f2f060;
    if (*(int *)(lVar12 + 0x18) == 0) {
      lVar12 = *param_2;
      puVar13 = (undefined8 *)Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
      goto LAB_00f2f02c;
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x5b,*(undefined8 *)(*param_2 + 0x210));
    (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    lVar12 = FUN_00f2ad3c(param_1);
    puVar4 = StringLiteral_2103;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_BurstManaged__
    ;
    puVar2 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
    if (lVar12 == 0) goto LAB_00f2f060;
    FUN_01323390(lVar12,&local_b8,*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FinishCDATA__)
    ;
    bVar1 = false;
    while (uVar9 = FUN_012b894c(&local_b8,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      uVar10 = FUN_00accee0(&local_b8,*(undefined8 *)puVar3);
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
        (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
      }
      FUN_00f2e040(param_2,param_3 + 1);
      bVar1 = true;
      FUN_00f2eb18(uVar10,param_2,param_3 + 1);
    }
    FUN_012b8948(&local_b8,*(undefined8 *)puVar2);
    (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    FUN_00f2e040(param_2,param_3);
    lVar12 = *param_2;
    uVar10 = 0x5d;
    break;
  case 1:
    if (param_2 == (long *)0x0) {
LAB_00f2f060:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x7b,*(undefined8 *)(*param_2 + 0x210));
    (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    lVar12 = FUN_00f29ea8(param_1);
    puVar7 = StringLiteral_12595;
    puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_85__;
    puVar5 = 
    Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
    ;
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
    ;
    puVar3 = Method_Obi_ObiList<ObiPathFrame>_SetCount__;
    puVar2 = PTR_DAT_033f5f30;
    if (lVar12 == 0) goto LAB_00f2f060;
    FUN_0129b5d0(lVar12,&local_e0,
                 *(undefined8 *)
                  Method_UnityEngine_ScriptableObject_CreateInstance<ObiParticleGroup>__);
    bVar1 = false;
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    local_70 = local_c0;
    while( true ) {
      uVar9 = FUN_012bf140(&local_90,*(undefined8 *)puVar4);
      if ((uVar9 & 1) == 0) break;
      auVar15 = FUN_00accbcc(&local_90,*(undefined8 *)puVar6);
      local_a0 = auVar15;
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
        (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
      }
      FUN_00f2e040(param_2,param_3 + 1);
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      uVar10 = FUN_00acccd4(local_a0,*(undefined8 *)puVar7);
      (**(code **)(*param_2 + 0x248))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x250));
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 0x248))
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(*param_2 + 0x250));
      uVar10 = FUN_00accdd8(local_a0,*(undefined8 *)puVar3);
      bVar1 = true;
      FUN_00f2eb18(uVar10,param_2,param_3 + 1);
    }
    FUN_012bf83c(&local_90,*(undefined8 *)puVar5);
    (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    FUN_00f2e040(param_2,param_3);
    lVar12 = *param_2;
    uVar10 = 0x7d;
    break;
  case 2:
    FUN_00f2abcc(param_1);
    uVar10 = FUN_00f2e934();
    if (param_2 == (long *)0x0) goto LAB_00f2f060;
    lVar12 = *param_2;
    goto LAB_00f2f030;
  case 3:
    uVar10 = FUN_00f2ac28(param_1);
    if (param_2 == (long *)0x0) goto LAB_00f2f060;
    pcVar14 = *(code **)(*param_2 + 0x238);
    uVar11 = *(undefined8 *)(*param_2 + 0x240);
    goto LAB_00f2f038;
  case 4:
    uVar9 = FUN_00f2ac84(param_1);
    if (param_2 == (long *)0x0) goto LAB_00f2f060;
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
    goto LAB_00f2f02c;
  case 5:
    if (param_2 == (long *)0x0) goto LAB_00f2f060;
    (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
    FUN_00f2ace0(param_1);
    uVar10 = FUN_00f2e0b4();
    (**(code **)(*param_2 + 0x248))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x250));
    lVar12 = *param_2;
    uVar10 = 0x22;
    break;
  case 6:
    if (param_2 == (long *)0x0) goto LAB_00f2f060;
    lVar12 = *param_2;
    puVar13 = (undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
    ;
LAB_00f2f02c:
    uVar10 = *puVar13;
LAB_00f2f030:
    pcVar14 = *(code **)(lVar12 + 0x248);
    uVar11 = *(undefined8 *)(lVar12 + 0x250);
LAB_00f2f038:
    (*pcVar14)(param_2,uVar10,uVar11);
  default:
    goto switchD_00f2ec58_default;
  }
  (**(code **)(lVar12 + 0x208))(param_2,uVar10,*(undefined8 *)(lVar12 + 0x210));
switchD_00f2ec58_default:
  return;
}


