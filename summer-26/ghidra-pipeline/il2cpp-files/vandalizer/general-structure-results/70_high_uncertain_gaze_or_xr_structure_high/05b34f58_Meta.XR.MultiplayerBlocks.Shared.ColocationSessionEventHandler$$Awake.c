/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 05b34f58
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake
                 (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *unaff_x24;
  long unaff_x25;
  
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  {
                    /* WARNING: Subroutine does not return */
    FUN_031f2730();
  }
  uVar7 = *(undefined8 *)PTR_DAT_075d8780;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  plVar2 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
  lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_0322f04c(), lVar4 == 0)) {
      uVar7 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_0329bf60();
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x928))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x930)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x298))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x588))();
        if ((uVar5 & 1) == 0) {
switchD_05b350f4_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar2 = (long *)thunk_FUN_0322f148();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4(lVar3);
          }
          FUN_04c23f60(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar7 = FUN_05e358c8();
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(unaff_x25 + 0xe0));
        }
        uVar1 = FUN_05e1c2f8(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_05b350f4_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_075d8798;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_05e42e8c(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


