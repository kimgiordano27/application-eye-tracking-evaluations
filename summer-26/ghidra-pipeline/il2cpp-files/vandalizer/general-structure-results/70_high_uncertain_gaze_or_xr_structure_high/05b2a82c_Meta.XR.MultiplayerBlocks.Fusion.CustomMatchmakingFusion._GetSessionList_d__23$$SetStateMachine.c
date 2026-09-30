/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<GetSessionList>d__23$$SetStateMachine
ENTRY_POINT: 05b2a82c
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


long * Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<GetSessionList>d__23__SetStateMachine
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x25;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  puVar2 = PTR_DAT_075d6660;
  plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_05b2ad24;
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_05e19a88(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
    uVar6 = FUN_05e19a88(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
      FUN_05db4a28(plVar4,0);
      goto LAB_05b2a910;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    if (plVar10 == (long *)0x0) {
LAB_05b2ad2c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_05b2ad2c;
      uVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar6 & 1) == 0) {
LAB_05b2ac10:
        uVar6 = (**(code **)(*plVar4 + 0x588))(plVar4,*(undefined8 *)(*plVar4 + 0x590));
        if ((uVar6 & 1) == 0) {
switchD_05b2ac88_default:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar4 = (long *)thunk_FUN_0322f148();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0322bef4(lVar7);
          }
          FUN_04c208cc(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar5 = FUN_05e358c8(plVar4,0);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(unaff_x25 + 0xe0));
        }
        uVar3 = FUN_05e1c2f8(uVar5,0);
        switch(uVar3) {
        case 5:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_05b2ac88_default;
        }
        goto LAB_05b2a988;
      }
      uVar5 = (**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar12 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      uVar6 = FUN_05e19a88(uVar5,uVar12,0);
      if ((uVar6 & 1) == 0) goto LAB_05b2ac10;
      lVar7 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      if (lVar7 == 0) goto LAB_05b2ad2c;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05b2ad30:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar10);
        }
      }
      uVar5 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar8 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      plVar9 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar9 == (long *)0x0) goto LAB_05b2ad2c;
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = thunk_FUN_0322f04c(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar5,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_05b2ad30;
      plVar9[4] = (long)plVar10;
      thunk_FUN_0329bf60(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x928))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x930)),
         plVar8 == (long *)0x0)) goto LAB_05b2ad2c;
      uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar6 & 1) == 0) goto LAB_05b2ac10;
      uVar5 = *(undefined8 *)PTR_DAT_075d8798;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      plVar4 = plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
      }
    }
    else {
      lVar7 = *(long *)(unaff_x25 + 0xe0);
      puVar11 = (undefined8 *)PTR_DAT_075d8778;
LAB_05b2a988:
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_05e42e8c(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(plVar4,0);
LAB_05b2a910:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_05b2ad24:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar4);
    }
  }
  return plVar4;
}


