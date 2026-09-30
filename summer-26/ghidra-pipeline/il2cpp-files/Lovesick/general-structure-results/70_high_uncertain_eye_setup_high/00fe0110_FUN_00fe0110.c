/*
FUNCTION_NAME: FUN_00fe0110
ENTRY_POINT: 00fe0110
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_00fe0110(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_38;
  
  puVar1 = System_Collections_Generic_IList<Vertex>_TypeInfo;
  if ((DAT_03775c07 & 1) == 0) {
    thunk_FUN_00d48444(SubtitleMixer_<>c__DisplayClass3_0_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IList<Vertex>_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03775c07 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_00fe0254:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = FUN_0129aa60(**(long **)(lVar2 + 0xb8),param_1,
                       *(undefined8 *)SubtitleMixer_<>c__DisplayClass3_0_TypeInfo);
  puVar6 = Method_System_Collections_Generic_List_Enumerator<CwInputManager_Finger>_Dispose__;
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_00fe0254;
    FUN_01299bc0(**(long **)(lVar2 + 0xb8),param_1,&local_38,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo);
    puVar6 = Method_Oculus_Interaction_PhysicsGrabbable_HandlePointerEventRaised__;
    if (local_38 != 0) {
      uVar4 = thunk_FUN_00d93c64(local_38,0);
      puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      if (param_2 == 0) goto LAB_00fe0254;
      uVar5 = thunk_FUN_00d93c64(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar3 = FUN_0178a8c4(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      FUN_00ac2be8(local_38);
      plVar7 = (long *)thunk_FUN_00d93c64(local_38,0);
      FUN_00ac2be8();
      uVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      FUN_00ac2be8(param_2);
      plVar7 = (long *)thunk_FUN_00d93c64(param_2,0);
      FUN_00ac2be8();
      uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      uVar8 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_46_0_TypeInfo);
      uVar4 = FUN_01600ba0(uVar8,param_1,uVar4,uVar5,0);
      goto LAB_00fe0300;
    }
  }
  uVar4 = thunk_FUN_00d48444(puVar6);
  uVar4 = FUN_015f6780(uVar4,param_1,0);
LAB_00fe0300:
  thunk_FUN_00d48444(Meta_Voice_Logging_ICoreLogger_var);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_00fe0418(uVar5,uVar4);
  uVar4 = thunk_FUN_00d48444(StringLiteral_8751);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar4);
}


