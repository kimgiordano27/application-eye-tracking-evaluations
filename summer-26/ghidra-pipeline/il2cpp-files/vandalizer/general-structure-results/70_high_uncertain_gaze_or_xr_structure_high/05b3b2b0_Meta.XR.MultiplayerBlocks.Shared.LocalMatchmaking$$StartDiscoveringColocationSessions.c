/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 05b3b2b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = FUN_05e19a88();
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar4 == 0) {
LAB_05b3b534:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05b3b538:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(plVar8);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_075d8780;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    plVar6 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
    if (plVar6 == (long *)0x0) goto LAB_05b3b534;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_0322f04c(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_05b3b538;
    plVar6[4] = (long)plVar8;
    thunk_FUN_0329bf60(plVar6 + 4,plVar8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x928))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930)),
       plVar5 == (long *)0x0)) goto LAB_05b3b534;
    uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2a0));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_075d8798;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
      }
      goto LAB_05b3b1cc;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x588))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar9 = FUN_05e358c8();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_05e1c2f8(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d87a8;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d8770;
      break;
    case 7:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d87b0;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d8790;
      break;
    default:
      goto switchD_05b3b490_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
    }
LAB_05b3b1cc:
    plVar8 = (long *)FUN_05e42e8c(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(plVar8);
      }
    }
    return plVar8;
  }
switchD_05b3b490_default:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  plVar8 = (long *)thunk_FUN_0322f148();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  System_Predicate<TextureRegistry_TextureInfo>__Invoke
            (plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


