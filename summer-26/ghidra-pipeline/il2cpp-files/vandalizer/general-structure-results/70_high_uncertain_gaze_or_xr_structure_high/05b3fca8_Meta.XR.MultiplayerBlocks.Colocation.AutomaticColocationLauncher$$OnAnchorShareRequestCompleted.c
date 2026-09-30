/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 05b3fca8
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


long * Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
                 (long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
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
  
  Newtonsoft_Json_Bson_BsonWriter__WriteRegex(param_1 + 0x20,0);
  uVar3 = FUN_05e19a88();
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
    uVar3 = FUN_05e19a88();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
      if (plVar4 == (long *)0x0) {
LAB_05b40158:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar3 = (**(code **)(*plVar4 + 0x298))();
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_05b40158;
        uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
        if ((uVar3 & 1) == 0) {
LAB_05b4003c:
          uVar3 = (**(code **)(*unaff_x20 + 0x588))();
          if ((uVar3 & 1) == 0) {
switchD_05b400b4_default:
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0322bef4();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_0322bef4();
            }
            plVar4 = (long *)thunk_FUN_0322f148();
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0322bef4(lVar5);
            }
            FUN_04c27acc(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
            return plVar4;
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
            goto switchD_05b400b4_default;
          }
          goto LAB_05b3fdb4;
        }
        uVar9 = (**(code **)(*unaff_x20 + 0x438))();
        uVar10 = *(undefined8 *)PTR_DAT_075d87a0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(unaff_x25 + 0xe0));
        }
        uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
        uVar3 = FUN_05e19a88(uVar9,uVar10,0);
        if ((uVar3 & 1) == 0) goto LAB_05b4003c;
        lVar5 = (**(code **)(*unaff_x20 + 0x458))();
        if (lVar5 == 0) goto LAB_05b40158;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05b4015c:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar4 = *(long **)(lVar5 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2730(plVar4);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_075d8780;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar7 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
        plVar6 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
        if (plVar6 == (long *)0x0) goto LAB_05b40158;
        if ((plVar4 != (long *)0x0) &&
           (lVar5 = thunk_FUN_0322f04c(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
          uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_05b4015c;
        plVar6[4] = (long)plVar4;
        thunk_FUN_0329bf60(plVar6 + 4,plVar4);
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x928))
                                       (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x930)),
           plVar7 == (long *)0x0)) goto LAB_05b40158;
        uVar3 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2a0));
        if ((uVar3 & 1) == 0) goto LAB_05b4003c;
        uVar9 = *(undefined8 *)PTR_DAT_075d8798;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
        }
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_075d8778;
LAB_05b3fdb4:
        uVar9 = *puVar8;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
        }
      }
      plVar4 = (long *)FUN_05e42e8c(uVar9);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      plVar7 = *(long **)(lVar5 + 0xc0);
      goto LAB_05b3fe18;
    }
    plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
    FUN_05db4a28(plVar4,0);
  }
  else {
    plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(plVar4,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_05b3fe18:
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar4);
    }
  }
  return plVar4;
}


