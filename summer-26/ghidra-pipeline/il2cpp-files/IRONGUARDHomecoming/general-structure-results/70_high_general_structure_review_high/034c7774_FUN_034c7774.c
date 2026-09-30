/*
FUNCTION_NAME: FUN_034c7774
ENTRY_POINT: 034c7774
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_034c7774(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__;
  if ((DAT_04832cda & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__);
    DAT_04832cda = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_034d96f8(param_1,0);
  if (param_2 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_13__
                              );
    uVar4 = thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_ObjectManager_GetCompletionInfo__
                              );
    FUN_034f3578(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Unit_ValueOutput<Collider2D>__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  if (param_2 == 0) {
    lVar6 = *(long *)Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_01ecafa0(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    uVar2 = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    uVar2 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,param_2)
    ;
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 0x1010101;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


