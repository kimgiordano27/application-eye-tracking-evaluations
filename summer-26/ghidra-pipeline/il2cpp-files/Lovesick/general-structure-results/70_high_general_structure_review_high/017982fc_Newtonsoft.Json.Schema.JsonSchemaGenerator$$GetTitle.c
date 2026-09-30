/*
FUNCTION_NAME: Newtonsoft.Json.Schema.JsonSchemaGenerator$$GetTitle
ENTRY_POINT: 017982fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Schema_JsonSchemaGenerator__GetTitle(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  long in_x9;
  int iVar7;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar8;
  undefined *puVar5;
  
  if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1) {
    param_2 = (long *)0x0;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(RCG_Lovesick_Powers_Tempo_TempoPower_<>c_TypeInfo);
    uVar4 = thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__
                              );
    FUN_016ec624(uVar6,uVar8,uVar4,0);
  }
  else {
    uVar8 = *(undefined8 *)Method_System_DateTime_AddYears__;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01780344(uVar8);
    uVar3 = (**(code **)(*param_2 + 0x948))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x950));
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*param_2 + 0x298))(param_2,*(undefined8 *)(*param_2 + 0x2a0));
      if ((uVar3 & 1) == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x18);
        if (iVar1 < 1) {
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar6 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar5 = 
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Tuple<int,_string>>_TypeInfo;
        }
        else {
          if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
            iVar7 = 0;
            do {
              if (iVar1 == iVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              iVar2 = *(int *)(unaff_x20 + (long)iVar7 * 4 + 0x20);
              if (iVar2 < 0) {
                thunk_FUN_00d48444(StringLiteral_8570);
                uVar6 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                uVar8 = thunk_FUN_00d48444(RhythmGameStarter_SongItem_<>c_TypeInfo);
                puVar5 = StringLiteral_6387;
LAB_01798460:
                uVar4 = thunk_FUN_00d48444(puVar5);
                FUN_016efd4c(uVar6,uVar8,uVar4,0);
                goto LAB_01798478;
              }
              if (0x7fffffff < (long)*(int *)(unaff_x19 + (long)iVar7 * 4 + 0x20) + (long)iVar2) {
                thunk_FUN_00d48444(StringLiteral_8570);
                uVar6 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                uVar8 = thunk_FUN_00d48444(RhythmGameStarter_SongItem_<>c_TypeInfo);
                puVar5 = PTR_DAT_033edd98;
                goto LAB_01798460;
              }
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
            if (iVar1 < 0x100) {
              FUN_00d92c98(param_2);
              return;
            }
            thunk_FUN_00d48444(StringLiteral_3979);
            uVar6 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            FUN_017b5084(uVar6,0);
            goto LAB_01798478;
          }
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar6 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar5 = Method_TMPro_TweenRunner<FloatTween>_StartTween__;
        }
        uVar8 = thunk_FUN_00d48444(puVar5);
        FUN_016f2f28(uVar6,uVar8,0);
        goto LAB_01798478;
      }
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar5 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_BurstDirectCall_TypeInfo
      ;
    }
    else {
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar5 = Method_Newtonsoft_Json_Linq_JObject_<>c_<PropertyValues>b__31_0__;
    }
    uVar8 = thunk_FUN_00d48444(puVar5);
    FUN_0176c578(uVar6,uVar8,0);
  }
LAB_01798478:
  uVar8 = thunk_FUN_00d48444(
                            Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<bool>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar8);
}


