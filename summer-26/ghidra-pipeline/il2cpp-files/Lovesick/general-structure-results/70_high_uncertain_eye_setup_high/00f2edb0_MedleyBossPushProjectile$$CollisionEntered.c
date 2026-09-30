/*
FUNCTION_NAME: MedleyBossPushProjectile$$CollisionEntered
ENTRY_POINT: 00f2edb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MedleyBossPushProjectile__CollisionEntered(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x208))();
    (**(code **)(*unaff_x19 + 600))();
    lVar7 = FUN_00f29ea8();
    puVar6 = StringLiteral_12595;
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_85__;
    puVar4 = 
    Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
    ;
    puVar2 = Method_Obi_ObiList<ObiPathFrame>_SetCount__;
    if (lVar7 != 0) {
      FUN_0129b5d0();
      bVar1 = false;
      in_stack_00000058 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000000;
      in_stack_00000068 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000070 = in_stack_00000020;
      while (uVar8 = FUN_012bf140(&stack0x00000050,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        auVar9 = FUN_00accbcc(&stack0x00000050,*(undefined8 *)puVar5);
        _in_stack_00000040 = auVar9;
        if (bVar1) {
          (**(code **)(*unaff_x19 + 0x208))();
          (**(code **)(*unaff_x19 + 600))();
        }
        FUN_00f2e040();
        (**(code **)(*unaff_x19 + 0x208))();
        FUN_00acccd4(&stack0x00000040,*(undefined8 *)puVar6);
        (**(code **)(*unaff_x19 + 0x248))();
        (**(code **)(*unaff_x19 + 0x208))();
        (**(code **)(*unaff_x19 + 0x248))();
        FUN_00accdd8(&stack0x00000040,*(undefined8 *)puVar2);
        bVar1 = true;
        FUN_00f2eb18();
      }
      FUN_012bf83c(&stack0x00000050,*(undefined8 *)puVar4);
      (**(code **)(*unaff_x19 + 600))();
      FUN_00f2e040();
      (**(code **)(*unaff_x19 + 0x208))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


