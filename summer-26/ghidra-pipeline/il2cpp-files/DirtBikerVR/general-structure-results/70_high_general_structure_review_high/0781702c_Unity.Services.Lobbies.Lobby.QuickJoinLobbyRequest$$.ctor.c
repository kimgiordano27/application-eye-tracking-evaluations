/*
FUNCTION_NAME: Unity.Services.Lobbies.Lobby.QuickJoinLobbyRequest$$.ctor
ENTRY_POINT: 0781702c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Lobbies_Lobby_QuickJoinLobbyRequest___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(
              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<LoadAudit>_TypeInfo
              );
  FUN_03a8a718(TMPro_FastAction<bool>_TypeInfo);
  FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_EventMetric<NamedMessageEvent>_TypeInfo);
  FUN_03a8a718(TMPro_FastAction<Object>_TypeInfo);
  FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
  FUN_03a8a718(System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x3c8) = 1;
  puVar2 = Unity_Multiplayer_Tools_NetStats_EventMetric<NamedMessageEvent>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(unaff_x19 + 8);
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(unaff_x19 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
    lVar6 = FUN_07814a20(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                         unaff_x19[0x12],0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fdef58(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar4 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
  puVar3 = TMPro_FastAction<bool>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


