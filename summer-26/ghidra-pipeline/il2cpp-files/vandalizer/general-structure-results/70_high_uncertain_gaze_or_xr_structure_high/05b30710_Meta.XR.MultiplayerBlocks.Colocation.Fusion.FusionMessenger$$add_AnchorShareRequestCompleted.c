/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestCompleted
ENTRY_POINT: 05b30710
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestCompleted
                 (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x3c0));
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x438))();
    uVar10 = *(undefined8 *)PTR_DAT_075d87a0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
    uVar3 = FUN_05e19a88(uVar4,uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar5 == 0) {
LAB_05b309e4:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__AddPlayerIdHostRPC:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar9 = *(long **)(lVar5 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar9);
        }
      }
      uVar4 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar6 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
      plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar7 == (long *)0x0) goto LAB_05b309e4;
      if ((plVar9 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0322f04c(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar4,0);
      }
      if ((int)plVar7[3] == 0)
      goto Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__AddPlayerIdHostRPC;
      plVar7[4] = (long)plVar9;
      thunk_FUN_0329bf60(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x928))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x930)),
         plVar6 == (long *)0x0)) goto LAB_05b309e4;
      uVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2a0));
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_075d8798;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
        }
        goto LAB_05b3067c;
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x588))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_05e358c8();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_05e1c2f8(uVar4,0);
    switch(uVar2) {
    case 5:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_075d87a8;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_075d8770;
      break;
    case 7:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_075d87b0;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_075d8790;
      break;
    default:
      goto switchD_05b30940_default;
    }
    uVar4 = *puVar8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
    }
LAB_05b3067c:
    plVar9 = (long *)FUN_05e42e8c(uVar4);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(plVar9);
      }
    }
    return plVar9;
  }
switchD_05b30940_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  plVar9 = (long *)thunk_FUN_0322f148();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  FUN_04c22708(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}


