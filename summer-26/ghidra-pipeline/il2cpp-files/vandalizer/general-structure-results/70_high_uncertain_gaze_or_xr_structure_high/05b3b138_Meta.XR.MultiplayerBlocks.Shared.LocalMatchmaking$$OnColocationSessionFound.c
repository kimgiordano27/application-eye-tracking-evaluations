/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 05b3b138
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


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound
                 (ulong param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0322bef4();
  }
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(unaff_x25 + 0xe0));
  }
  plVar3 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
  if (plVar3 == (long *)0x0) {
LAB_05b3b534:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar4 = (**(code **)(*plVar3 + 0x298))();
  if ((uVar4 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_05b3b534;
    uVar4 = (**(code **)(*unaff_x20 + 0x3b8))();
    if ((uVar4 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x438))();
      uVar10 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      uVar4 = FUN_05e19a88(uVar9,uVar10,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = (**(code **)(*unaff_x20 + 0x458))();
        if (lVar5 == 0) goto LAB_05b3b534;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05b3b538:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar3 = *(long **)(lVar5 + 0x20);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2730(plVar3);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_075d8780;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar6 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
        plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
        if (plVar7 == (long *)0x0) goto LAB_05b3b534;
        if ((plVar3 != (long *)0x0) &&
           (lVar5 = thunk_FUN_0322f04c(plVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
          uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_05b3b538;
        plVar7[4] = (long)plVar3;
        thunk_FUN_0329bf60(plVar7 + 4,plVar3);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x928))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x930)),
           plVar6 == (long *)0x0)) goto LAB_05b3b534;
        uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar3,*(undefined8 *)(*plVar6 + 0x2a0));
        if ((uVar4 & 1) != 0) {
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
    }
    uVar4 = (**(code **)(*unaff_x20 + 0x588))();
    if ((uVar4 & 1) == 0) {
switchD_05b3b490_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      plVar3 = (long *)thunk_FUN_0322f148();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      System_Predicate<TextureRegistry_TextureInfo>__Invoke
                (plVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar3;
    }
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
      goto switchD_05b3b490_default;
    }
  }
  else {
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_075d8778;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
LAB_05b3b1cc:
  plVar3 = (long *)FUN_05e42e8c(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar3);
    }
  }
  return plVar3;
}


