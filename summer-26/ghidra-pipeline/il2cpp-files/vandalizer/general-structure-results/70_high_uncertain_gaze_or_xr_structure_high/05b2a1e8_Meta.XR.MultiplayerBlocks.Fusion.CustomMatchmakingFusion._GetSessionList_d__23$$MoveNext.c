/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<GetSessionList>d__23$$MoveNext
ENTRY_POINT: 05b2a1e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<GetSessionList>d__23__MoveNext
                 (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  uVar2 = (**(code **)(param_1 + 0x588))(param_2,*(undefined8 *)(param_1 + 0x590));
  if ((uVar2 & 1) == 0) {
switchD_05b2a258_default:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    plVar5 = (long *)thunk_FUN_0322f148();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    FUN_04c20548(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_05e358c8();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    uVar1 = FUN_05e1c2f8(uVar3,0);
    switch(uVar1) {
    case 5:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_075d87a8;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_075d8770;
      break;
    case 7:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_075d87b0;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_075d8790;
      break;
    default:
      goto switchD_05b2a258_default;
    }
    uVar3 = *puVar6;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar3,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
    }
    plVar5 = (long *)FUN_05e42e8c(uVar3);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(plVar5);
      }
    }
  }
  return plVar5;
}


