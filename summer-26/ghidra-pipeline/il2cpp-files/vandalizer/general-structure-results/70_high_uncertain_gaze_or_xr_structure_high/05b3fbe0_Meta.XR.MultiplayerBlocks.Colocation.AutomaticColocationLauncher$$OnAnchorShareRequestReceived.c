/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 05b3fbe0
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


long * Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_075d87a0);
  FUN_031f20f4(PTR_DAT_075d6660);
  FUN_031f20f4(PTR_DAT_075d87a8);
  FUN_031f20f4(PTR_DAT_075d87b0);
  FUN_031f20f4(PTR_DAT_0759b3b8);
  *(undefined1 *)(unaff_x20 + 4000) = 1;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  puVar2 = PTR_DAT_0759b388;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
              (*(long *)(PTR_DAT_0759b388 + 0xe0));
  }
  puVar3 = PTR_DAT_075d6660;
  plVar6 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05b40150;
  }
  uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(puVar2 + 0x18) + 0x20,0);
  uVar7 = FUN_05e19a88(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(puVar2 + 0x90);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar5 + 0x20,0);
    uVar7 = FUN_05e19a88(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
      FUN_05db4a28(plVar6,0);
      goto LAB_05b3fd3c;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(puVar2 + 0xe0));
    }
    plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_05b40158:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05b40158;
      uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      if ((uVar7 & 1) == 0) {
LAB_05b4003c:
        uVar7 = (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
        if ((uVar7 & 1) == 0) {
switchD_05b400b4_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar6 = (long *)thunk_FUN_0322f148();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4(lVar5);
          }
          FUN_04c27acc(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar12 = FUN_05e358c8(plVar6,0);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(puVar2 + 0xe0));
        }
        uVar4 = FUN_05e1c2f8(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_05b400b4_default;
        }
        goto LAB_05b3fdb4;
      }
      uVar12 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
      uVar13 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(puVar2 + 0xe0))
        ;
      }
      uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
      uVar7 = FUN_05e19a88(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_05b4003c;
      lVar5 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      if (lVar5 == 0) goto LAB_05b40158;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05b4015c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar8 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      plVar9 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar9 == (long *)0x0) goto LAB_05b40158;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0322f04c(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_05b4015c;
      plVar9[4] = (long)plVar10;
      thunk_FUN_0329bf60(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x928))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x930)),
         plVar8 == (long *)0x0)) goto LAB_05b40158;
      uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar7 & 1) == 0) goto LAB_05b4003c;
      uVar12 = *(undefined8 *)PTR_DAT_075d8798;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)(puVar2 + 0xe0);
      puVar11 = (undefined8 *)PTR_DAT_075d8778;
LAB_05b3fdb4:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_05e42e8c(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(plVar6,0);
LAB_05b3fd3c:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_05b40150:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar6);
    }
  }
  return plVar6;
}


