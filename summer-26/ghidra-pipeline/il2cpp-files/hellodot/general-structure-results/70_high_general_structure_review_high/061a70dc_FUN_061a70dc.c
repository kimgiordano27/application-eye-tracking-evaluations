/*
FUNCTION_NAME: FUN_061a70dc
ENTRY_POINT: 061a70dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_061a70dc(undefined8 param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  
  puVar3 = PTR_DAT_065dc880;
  if ((DAT_06a83db3 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_OperationsResource_CancelRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de1b0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_OperationsResource_ListRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_OptimizedReflection_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de1f8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    DAT_06a83db3 = 1;
  }
  puVar5 = Google_Apis_Storage_v1_OperationsResource_CancelRequest_TypeInfo;
  puVar4 = Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar7 = FUN_0353ae08(param_2,*(undefined8 *)puVar4);
  lVar8 = FUN_033fb070(uVar7,*(undefined8 *)puVar5);
  puVar5 = System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo;
  puVar4 = Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
  puVar3 = PTR_DAT_065de1b0;
  if ((lVar8 != 0) && (param_2 != (long *)0x0)) {
    iVar1 = *(int *)(lVar8 + 0x18);
    uVar7 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    FUN_0615ddd4(iVar1 < 2,*(undefined8 *)puVar5,uVar7,param_1,0);
    lVar8 = FUN_033f4674(lVar8,*(undefined8 *)puVar4);
    if (lVar8 == 0) {
      uVar12 = 0;
      bVar6 = false;
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar12 = *(undefined4 *)(lVar8 + 0x20);
      bVar6 = *(char *)(lVar8 + 0x10) != '\0';
    }
    lVar8 = *param_2;
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_065de1f8 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_065de1f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(param_2);
      }
      pcVar11 = *(code **)(lVar8 + 0x238);
      uVar10 = *(undefined8 *)(lVar8 + 0x240);
    }
    else {
      pcVar11 = *(code **)(lVar8 + 0x248);
      uVar10 = *(undefined8 *)(lVar8 + 0x250);
    }
    uVar10 = (*pcVar11)(param_2,uVar10);
    puVar3 = Google_Apis_Storage_v1_OperationsResource_ListRequest_TypeInfo;
    uVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    lVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04f7383c(lVar8,0);
    *(bool *)(lVar8 + 0x10) = bVar6;
    *(undefined8 *)(lVar8 + 0x28) = uVar9;
    *(undefined8 *)(lVar8 + 0x30) = uVar10;
    *(undefined8 *)(lVar8 + 0x18) = uVar7;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined4 *)(lVar8 + 0x20) = uVar12;
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


