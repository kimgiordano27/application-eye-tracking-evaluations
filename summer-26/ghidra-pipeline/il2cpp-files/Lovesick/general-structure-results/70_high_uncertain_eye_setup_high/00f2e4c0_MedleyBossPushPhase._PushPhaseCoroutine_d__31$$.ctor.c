/*
FUNCTION_NAME: MedleyBossPushPhase.<PushPhaseCoroutine>d__31$$.ctor
ENTRY_POINT: 00f2e4c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MedleyBossPushPhase_<PushPhaseCoroutine>d__31___ctor(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x308));
  thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x5d3) = 1;
  in_stack_00000070 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000028 = 0;
  if (unaff_x20 == 0) goto LAB_00f2e848;
  uVar7 = FUN_00f29938();
  switch(uVar7) {
  case 0:
    if (unaff_x19 == (long *)0x0) {
LAB_00f2e848:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*unaff_x19 + 0x208))();
    lVar10 = FUN_00f2ad3c();
    puVar4 = StringLiteral_2103;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_BurstManaged__
    ;
    puVar2 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
    if (lVar10 == 0) goto LAB_00f2e848;
    FUN_01323390(lVar10,&stack0x00000028,
                 *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FinishCDATA__);
    bVar1 = false;
    while (uVar9 = FUN_012b894c(&stack0x00000028,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      uVar8 = FUN_00accee0(&stack0x00000028,*(undefined8 *)puVar3);
      if (bVar1) {
        (**(code **)(*unaff_x19 + 0x208))();
      }
      bVar1 = true;
      FUN_00f2e400(uVar8);
    }
    FUN_012b8948(&stack0x00000028,*(undefined8 *)puVar2);
    lVar10 = *unaff_x19;
    break;
  case 1:
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    (**(code **)(*unaff_x19 + 0x208))();
    lVar10 = FUN_00f29ea8();
    puVar6 = StringLiteral_12595;
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_85__;
    puVar4 = 
    Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
    ;
    puVar2 = Method_Obi_ObiList<ObiPathFrame>_SetCount__;
    if (lVar10 == 0) goto LAB_00f2e848;
    FUN_0129b5d0();
    bVar1 = false;
    in_stack_00000058 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000000;
    in_stack_00000068 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000010;
    in_stack_00000070 = in_stack_00000020;
    while( true ) {
      uVar9 = FUN_012bf140(&stack0x00000050,*(undefined8 *)puVar3);
      if ((uVar9 & 1) == 0) break;
      auVar12 = FUN_00accbcc(&stack0x00000050,*(undefined8 *)puVar5);
      _in_stack_00000040 = auVar12;
      if (bVar1) {
        (**(code **)(*unaff_x19 + 0x208))();
      }
      (**(code **)(*unaff_x19 + 0x208))();
      FUN_00acccd4(&stack0x00000040,*(undefined8 *)puVar6);
      (**(code **)(*unaff_x19 + 0x248))();
      (**(code **)(*unaff_x19 + 0x208))();
      (**(code **)(*unaff_x19 + 0x248))();
      FUN_00accdd8(&stack0x00000040,*(undefined8 *)puVar2);
      bVar1 = true;
      FUN_00f2e400();
    }
    FUN_012bf83c(&stack0x00000050,*(undefined8 *)puVar4);
    lVar10 = *unaff_x19;
    break;
  case 2:
    FUN_00f2abcc();
    FUN_00f2e934();
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    lVar10 = *unaff_x19;
    goto MedleyBossPushPhase_<PushPhaseCoroutine>d__31__MoveNext;
  case 3:
    FUN_00f2ac28();
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    pcVar11 = *(code **)(*unaff_x19 + 0x238);
    goto LAB_00f2e824;
  case 4:
    uVar9 = FUN_00f2ac84();
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    if ((uVar9 & 1) == 0) {
      lVar10 = *unaff_x19;
    }
    else {
      lVar10 = *unaff_x19;
    }
    goto MedleyBossPushPhase_<PushPhaseCoroutine>d__31__MoveNext;
  case 5:
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    (**(code **)(*unaff_x19 + 0x208))();
    FUN_00f2ace0();
    FUN_00f2e0b4();
    (**(code **)(*unaff_x19 + 0x248))();
    lVar10 = *unaff_x19;
    break;
  case 6:
    if (unaff_x19 == (long *)0x0) goto LAB_00f2e848;
    lVar10 = *unaff_x19;
MedleyBossPushPhase_<PushPhaseCoroutine>d__31__MoveNext:
    pcVar11 = *(code **)(lVar10 + 0x248);
LAB_00f2e824:
    (*pcVar11)();
  default:
    goto switchD_00f2e520_default;
  }
  (**(code **)(lVar10 + 0x208))();
switchD_00f2e520_default:
  return;
}


