/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Raycast
ENTRY_POINT: 07c28228
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_5
*/


void UnityEngine_PhysicsScene__Raycast(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  if ((*(byte *)(unaff_x20 + 0x881) & 1) == 0) {
    FUN_03a8a718(System_Net_Cache_RequestCacheManager_TypeInfo);
    FUN_03a8a718(Unity_Services_Lobbies_Lobby_RequestTokensRequest_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x881) = 1;
  }
  puVar1 = Unity_Services_Lobbies_Lobby_RequestTokensRequest_TypeInfo;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_07ca9430(param_1,0);
    }
    if (DAT_089939e0 == (code *)0x0) {
      DAT_089939e0 = (code *)FUN_03a8a6dc(
                                         "UnityEngine.Animator::GetBoneTransformInternal_Injected(System.IntPtr,System.Int32)"
                                         );
    }
    uVar2 = (*DAT_089939e0)(lVar3,param_2);
    FUN_07c32058(uVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


