/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 0414ff80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * System_ArraySegment<OVRPlugin_SpaceQueryResult>__op_Equality(void)

{
  byte bVar1;
  bool in_ZR;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  if (!in_ZR) goto LAB_04150430;
  Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar3 = FUN_05e19a88();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar4 + 0x20,0);
    uVar3 = FUN_05e19a88();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
      FUN_05db4a28(unaff_x20,0);
      goto System_ArraySegment<OVRPlugin_SpaceQueryResult>__op_Inequality;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    plVar7 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_04150438:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar3 = (**(code **)(*plVar7 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_04150438;
      uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
      if ((uVar3 & 1) == 0) {
LAB_0415031c:
        uVar3 = (**(code **)(*unaff_x20 + 0x588))();
        if ((uVar3 & 1) == 0) {
switchD_04150394_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar7 = (long *)thunk_FUN_0322f148();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0322bef4(lVar4);
          }
          FUN_04c52600(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar7;
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
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_04150394_default;
        }
        goto LAB_04150094;
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x438))();
      uVar10 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      uVar3 = FUN_05e19a88(uVar9,uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_0415031c;
      lVar4 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar4 == 0) goto LAB_04150438;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0415043c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar7);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
      plVar6 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar6 == (long *)0x0) goto LAB_04150438;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = thunk_FUN_0322f04c(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar9,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_0415043c;
      plVar6[4] = (long)plVar7;
      thunk_FUN_0329bf60(plVar6 + 4,plVar7);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x928))
                                     (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930)),
         plVar5 == (long *)0x0)) goto LAB_04150438;
      uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2a0));
      if ((uVar3 & 1) == 0) goto LAB_0415031c;
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
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_075d8778;
LAB_04150094:
      uVar9 = *puVar8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
      }
    }
    unaff_x20 = (long *)FUN_05e42e8c(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(unaff_x20,0);
System_ArraySegment<OVRPlugin_SpaceQueryResult>__op_Inequality:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  lVar4 = *plVar7;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    {
LAB_04150430:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(unaff_x20);
    }
  }
  return unaff_x20;
}


