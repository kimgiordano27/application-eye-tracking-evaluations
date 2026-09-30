/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup.<SpawnSpeaker>d__10$$System.IDisposable.Dispose
ENTRY_POINT: 05b2fed8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MultiplayerBlocks_Fusion_VoiceSetup_<SpawnSpeaker>d__10__System_IDisposable_Dispose
                 (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_05e358c8();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(unaff_x25 + 0xe0));
  }
  uVar1 = FUN_05e1c2f8(uVar2,0);
  switch(uVar1) {
  case 5:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_075d87a8;
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_075d8770;
    break;
  case 7:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_075d87b0;
    break;
  case 0xb:
  case 0xc:
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_075d8790;
    break;
  default:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    plVar4 = (long *)thunk_FUN_0322f148();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    FUN_04c223b8(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar4;
  }
  uVar2 = *puVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
  plVar4 = (long *)FUN_05e42e8c(uVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar4);
    }
  }
  return plVar4;
}


